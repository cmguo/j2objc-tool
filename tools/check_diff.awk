#!/usr/local/bin/gawk -F [\t] -f

BEGIN {
  diff = 0
  file = 0
}

FILEBEIN {
  file = file + 1
}

{
  if (file == 1) {
    times[$1] = $2
    md5s[$1] = $3
    diff = diff + 1
  } else {
    cmd = "stat -f '%m' " $0
    cmd | getline time
    close(cmd)
    newtimes[$1] = time
    if ($1 in times) {
      if (time == times[$1]) {
        diff = diff - 1
      } else {
        cmd = "md5 -q " $1
        cmd | getline md5
        close(cmd)
        if (md5 == md5s[$1]) {
          diff = diff - 1
        } else {
          print $1 " -> " md5 > "/dev/stderr"
          md5s[$1] = md5
        }
      }
    } else {
      print $1 " -> " time > "/dev/stderr"
      diff = diff + 1
    }
  }
}

END {
  for (f in newtimes) {
    if (f in md5s) {
      print f "\t" newtimes[f] "\t" md5s[f]
    } else {
      cmd = "md5 -q " f
      cmd | getline md5
      close(cmd)
      print f "\t" newtimes[f] "\t" md5
    }
  }
  exit diff
}
