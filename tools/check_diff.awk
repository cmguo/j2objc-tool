#!/usr/local/bin/gawk -F [\t] -f

BEGIN {
  diff = 0
}

{
  if (FNR == NR) {
    cmd = "stat -f '%m' " $0
    cmd | getline time
    close(cmd)
    times[$1] = time
    diff = diff + 1
  } else {
    # print "time " $1
    if ($1 in times) {
      if ($2 == times[$1]) {
        diff = diff - 1
        md5s[$1] = $3
      } else {
        cmd = "md5 -q " $1
        cmd | getline md5
        close(cmd)
        md5s[$1] = md5
        if ($3 == md5) {
          diff = diff - 1
        } else {
          print $1 " -> " md5 > "/dev/stderr"
        }
      }
    } else {
      old[$1] = 0
    }
  }
}

END {
  for (f in times) {
    if (f in md5s) {
      print f "\t" times[f] "\t" md5s[f]
    } else {
      cmd = "md5 -q " f
      cmd | getline md5
      close(cmd)
      print f "\t" times[f] "\t" md5
    }
  }
  exit diff
}
