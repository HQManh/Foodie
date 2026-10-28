cd /opt/ghidra/ghidra_12.1.4_PUBLIC
for j in $(find Ghidra -name "*.jar"); do
  for c in $(unzip -l "$j" 2>/dev/null | awk '{print $4}' | grep -E "(Constant|Propagation|ConstantReference)[A-Za-z]*Analyzer.*\.class$|GccExceptionAnalyzer|SwitchAnalysis|AArch64.*Analyzer|AARCH64.*Analyzer" ); do
    echo "$(basename $j): $c"
  done
done | sort -u | head -30
echo ---- strings with Analyzer in AARCH64 jar
j=$(find Ghidra/Processors/AARCH64 -name "AARCH64.jar" | head -1); echo $j
unzip -p "$j" 2>/dev/null | strings | grep -iE "analyzer|Constant" | sort -u | head -20
echo ---- Base.jar strings ending Constant Reference Analyzer
unzip -p Ghidra/Features/Base/lib/Base.jar 2>/dev/null | strings | grep -E "Reference Analyzer|Reference$|^Reference" | sort -u | head
