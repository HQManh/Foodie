d=$(ls -dt /tmp/rea-ghidra-* | head -1)
grep "disabled analyzers" $d/script.log | cut -c1-900
