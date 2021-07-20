#!/usr/local/bin/gawk -f

BEGINFILE {
  FS=" "

  f=FILENAME
  sub(/Podfile/, "", f)
  sub(/^\.\//, "", f)
  sub(/\w+/, "\\.\\.", f)
}

{
  if ($4 == "=>") {
    gsub(/["']/, "", $5)
    sub(f, "", $5)
    print $5
  }
}
