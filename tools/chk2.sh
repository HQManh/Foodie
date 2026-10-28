for f in outA outU outB; do echo == $f; ls /root/$f; find /root/$f -type f | wc -l; grep -E "attempted|written|failed|decompiled|functions" /root/$f.log | head -8; done
