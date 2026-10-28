pid=$(pgrep -f GhidraClassLoader | head -1)
echo "pid $pid"
jstack $pid 2>/dev/null | grep -E "^\s+at ghidra" | grep -vE "AutoAnalysisManager|AnalysisTask|HeadlessAnalyzer|GhidraLauncher|Ghidra.main|AnalyzeHeadless" | awk '!s[$0]++' | head -14
echo "-- threads busy:"
top -H -b -n1 -p $pid | sed -n 7,14p | cut -c1-80
