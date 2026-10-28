cd /opt/ghidra/ghidra_12.1.4_PUBLIC
for j in $(find Ghidra -name "*.jar"); do
  unzip -p "$j" 2>/dev/null | strings | grep -E "Constant Reference Analyzer|Decompiler Parameter ID|GCC Exception Handlers|^Reference$|^Stack$|Decompiler Switch Analysis|Non-Returning Functions|Function Start Search" | sed "s|^|$(basename "$j"): |"
done | sort -u | head -30
grep -n "MAXMEM" support/launch.properties
