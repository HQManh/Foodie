d=$(ls -d /tmp/rea-ghidra-* | tail -1)
echo "dir $d"
echo "== script.log (last 15)"; tail -n 15 $d/script.log | cut -c1-300
echo "== ghidra.log non-noise (last 25)"; grep -vE "GccExceptionAnalyzer|LSDACallSiteTable|DEBUG" $d/ghidra.log | tail -n 25 | cut -c1-300
