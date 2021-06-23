#!/usr/bin/ruby

require 'find'
require 'xcodeproj'

puts "Xcodeproj #{Xcodeproj::VERSION}"

def merge_array(a, b, force = false)
  if a == nil
    return b
  end
  if b == nil
    return a
  end
  if !a.is_a? Array
    a = [a]
  end
  if !b.is_a? Array
    b = [b]
  end
  r = a | b
  if r.size == 0
    return nil
  elif !force && r.size == 1
    return r[0]
  else
    return r
  end
end
    

def find_subpath(group, path, should_create = false)
  return self unless path
  path = path.split('/') unless path.is_a?(Array)
  child_name = path.shift
  child = group.children.find { |c| c.display_name == child_name }
  if child.nil?
    if should_create
      child = group.new_group(child_name, child_name)
    else
      return nil
    end
  end
  if path.empty?
    child
  else
    find_subpath(child, path, should_create)
  end
end


def remove_from_group(object)
  group = Xcodeproj::Project::Object::GroupableHelper.parent(object)
  if !group.is_a?(Xcodeproj::Project::Object::PBXGroup)
    return
  end
  group.children.delete(object)
  if group.children.empty?
    remove_from_group(group)
  end
end



def apply_target(proj, target)

  puts "Config target: #{target}"


  # read config

  java_dirs = target.build_configuration_list.get_setting("JAVA_SOURCES", true)["Debug"]
  if java_dirs == nil
    java_dirs = []
    if File.exists? "src/main/java"
      java_dirs << "src/main/java"
    end
    if File.exists? "#{target.name}/java"
      java_dirs << "#{target.name}/java"
    end
  else
    java_dirs = java_dirs.split(" ").select{ |d| File.exists?(d) }
  end

  j2objc_deps = target.build_configuration_list.get_setting("J2OBJC_DEPENDS", true)["Debug"]
  if j2objc_deps == nil
    if java_dirs.empty?
      return false
    end
    j2objc_deps = []
  else
    j2objc_deps = j2objc_deps.split(" ")
  end


  # Config headers seach paths

  pwd="#{Dir.pwd}/"
  frameworks = target.build_configuration_list.get_setting("FRAMEWORK_SEARCH_PATHS", true)["Debug"]
  frameworks = merge_array(["../Libraries"], frameworks, true)
  frameworks = frameworks.map { |f| f.tr("\"", "") }
  headers = ["$(inherited)"]
  merge_array(["JRE", "JSR305"], j2objc_deps).each { |d| 
    if d == "ThirdParty"
      next
    end
    f = frameworks.find { |f| File.exists?("#{f}/#{d}.framework") }
    if f != nil
      f = f.sub(pwd, "")
      f = Pathname.new(f).cleanpath
      headers << "#{f}/#{d}.framework/Headers"
    else
      puts "Not found frmawork \"#{d}\", use build product as default!!"
      headers << "${BUILT_PRODUCTS_DIR}/#{d}.framework/Headers"
    end
  }
  if !java_dirs.empty?
    headers << "${BUILT_PRODUCTS_DIR}/${PUBLIC_HEADERS_FOLDER_PATH}"
  end

  target.build_configurations.each { |c| 
    c.build_settings["HEADER_SEARCH_PATHS"] = merge_array(headers, c.build_settings["HEADER_SEARCH_PATHS"])
  }


  # if not java sources, we can stop here

  if java_dirs.empty?
    return false
  end

  # Java build rule

  if target.build_rules.find { |rule| rule.file_type == "sourcecode.java" } == nil
    puts "Add Java build rule"
    rule = proj.new(Xcodeproj::Project::Object::PBXBuildRule)
    rule.file_type = "sourcecode.java"
    rule.compiler_spec = "com.apple.compilers.proxy.script"
    rule.is_editable = "0"
    rule.run_once_per_architecture = "0"
    rule.add_input_file("$(INPUT_FILE_PATH)")
    rule.add_output_file("$(DERIVED_FILE_DIR)/J2objc/${INPUT_FILE_BASE}.m")
    rule.script = "PACKET_FILE=${INPUT_FILE_PATH##*/java/}\nOBJC_FILE=${PACKET_FILE/.java/.m}\nif [ -f  ${DERIVED_FILE_DIR}/objc/${OBJC_FILE} ]; then\n  mkdir -p ${DERIVED_FILE_DIR}/J2objc\n  mv -f ${DERIVED_FILE_DIR}/objc/${OBJC_FILE} ${DERIVED_FILE_DIR}/J2objc\nfi\n"
    target.build_rules << rule
  end


  # J2objc prev phase
  
  if target.build_phases.find { |phase| phase.is_a?(Xcodeproj::Project::Object::PBXShellScriptBuildPhase) && phase.name == "[J2objc Prev]" } == nil
    puts "Add J2objc prev phase"
    phase = proj.new(Xcodeproj::Project::Object::PBXShellScriptBuildPhase)
    phase.name = "[J2objc Prev]"
    phase.shell_path = "/bin/sh"
    phase.show_env_vars_in_log = "0"
    phase.always_out_of_date = "1"
    phase.shell_script = "set -e\n\nexport J2OBJC_FLAGS=-reflect\n${J2OBJC_HOME}/tools/j2objc_prev.sh\n"
    target.build_phases.insert(target.build_phases.find_index(target.headers_build_phase), phase)
  end


  # J2objc post phase

  if target.build_phases.find { |phase| phase.is_a?(Xcodeproj::Project::Object::PBXShellScriptBuildPhase) && phase.name == "[J2objc Post]" } == nil
    puts "Add J2objc post phase"
    phase = proj.new(Xcodeproj::Project::Object::PBXShellScriptBuildPhase)
    phase.name = "[J2objc Post]"
    phase.shell_path = "/bin/sh"
    phase.show_env_vars_in_log = "0"
    phase.always_out_of_date = "1"
    phase.shell_script = "set -e\n${J2OBJC_HOME}/tools/j2objc_post.sh\n"
    target.build_phases << phase
  end


  # Remove "[CP] Copy Pods Resources"

  if target.symbol_type == :framework
    target.build_phases.delete_if { |phase| phase.is_a?(Xcodeproj::Project::Object::PBXShellScriptBuildPhase) && phase.name == "[CP] Copy Pods Resources" }
  end

  # Java sources

  # add
  files = []
  java_dirs.each { |dir| 
    if dir.end_with?("/")
      dir = dir[0..-2]
    end
    group = find_subpath(proj.main_group, dir.split("/"), true)
    # group.clear()
    dirlen = dir.size + 1
    Find.find(dir) { |f|
      if f.end_with?(".java")
        f = f[dirlen..-1]
        d = File.dirname(f)
        f = File.basename(f)
        subGroup = d == "." ? group : find_subpath(group, d.split("/"), true)
        file = subGroup.find_file_by_path(f)
        if file == nil
          puts "File +++ #{dir}/#{f}"
          file = subGroup.new_reference(f)
          file.include_in_index = "0"
          file.last_known_file_type = "sourcecode.java"
          file.fileEncoding = "4"
        end
        files << file
      end
    }
  }
  # remove
  files2 = []
  target.source_build_phase.files.each { |f| 
    if !f.file_ref.path.end_with?(".java")
      true
    else
      index = files.find_index(f.file_ref)
      if index == nil
        files2 << f
        false
      else
        files.delete_at(index)
        true
      end
    end
  }
  target.add_file_references(files)
  files2.each { |f| 
    puts "File --- #{f.file_ref.full_path}"
    target.source_build_phase.files.delete(f)
    remove_from_group(f.file_ref)
    f.file_ref.remove_from_project
  }

  return true

end


# Main works

projs = Dir.entries('.').select do |path|
  path.end_with?(".xcodeproj")
end

if projs.size == 0
  puts "Found not xcodeproj in current directory!"
  exit 1
elif projs.size > 1
  puts "Found more than one 'xcodeproj's in current directory!"
end 

proj = projs[0]
puts "Applying j2objc configs to #{proj} ..."

proj = Xcodeproj::Project.open(proj)

has_j2objc = false

proj.targets.each do |target|
  has_j2objc = has_j2objc | apply_target(proj, target)
end

proj.build_configurations.each { |c|
  bs = c.build_settings
  frameworks = []
  if File.exists?("../Libraries")
    frameworks << "../Libraries"
  end
  if has_j2objc
    #bs["JAVA_HOME"] = ENV["JAVA_HOME"]
    #bs["J2OBJC_HOME"] = ENV["J2OBJC_HOME"]
    bs["JAVA_HOME"] = "${PROJECT_DIR}/../jdk"
    bs["J2OBJC_HOME"] = "${PROJECT_DIR}/../j2objc-2.7"
    bs["FRAMEWORK_SEARCH_PATHS"] = merge_array(frameworks, bs["FRAMEWORK_SEARCH_PATHS"])
  end
}

if has_j2objc
  proj.save
end
