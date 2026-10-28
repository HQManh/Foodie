date
ls -l --time-style=full-iso /tmp/rea-ghidra-*/ghidra.log | cut -c1-120
wc -l /tmp/rea-ghidra-*/ghidra.log
grep -v GccExceptionAnalyzer /tmp/rea-ghidra-*/ghidra.log | tail -n 6 | cut -c1-200
jstack 6867 2>/dev/null | grep -E "^\s+at (ghidra|java)" | head -15
