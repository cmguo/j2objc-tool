#
# Be sure to run `pod lib lint JRE.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'JRE'
  s.version          = '2.7'
  s.summary          = 'JRE Moudle.'
  s.homepage         = 'https://developers.google.com/j2objc/'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'google' => 'opensource@google.com' }
  s.source           = { :git => 'https://github.com/google/j2objc', :tag => s.version.to_s }
  s.static_framework = true
  s.ios.deployment_target = '10.0'
  s.frameworks = 'Foundation'
  s.ios.libraries = 'iconv', 'z'
  s.ios.vendored_libraries = "lib/libjson.a"
  s.ios.vendored_frameworks = "frameworks/JRE.framework", "frameworks/JSR305.framework"
  
end
