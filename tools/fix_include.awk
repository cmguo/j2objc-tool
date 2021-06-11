#!/usr/local/bin/gawk -F "' '" -f

BEGINFILE {
  print FILENAME
  h = substr(FILENAME, length(FILENAME) - 1) == ".h"
  h = h || substr(FILENAME, length(FILENAME) - 1) == ".m"
  f = FILENAME
  sub(/.+\//, "", f)
  sub(/\.[^\.]+/, "", f)
  lines[0] = 0
  delete lines[0]
}

{
  if (h) {
    if (($1 == "#include" || $1 == "#import") && $2 ~ /^".+"$/) {
      i = $2
      gsub("\"", "", i)
      if (i in map) {
        print "   " i " -> " map[i]
        $2 = "<" map[i] "/" i ">"
      }
    }
    lines[length(lines)] = $0
  } else {
    map[$0] = f
  }
}

ENDFILE {
  if (h) {
    system("rm '" FILENAME "'")
    for (l in lines) {
      print lines[l] >> FILENAME
    }
  }
  delete lines
}
