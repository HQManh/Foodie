cd /root
rm -rf jp && mkdir jp && cd jp
unzip -q -o /opt/ghidra/ghidra_12.1.4_PUBLIC/Ghidra/Features/Base/lib/Base.jar "ghidra/app/plugin/core/analysis/FindNoReturnFunctionsAnalyzer*.class"
javap -c -p -constants -cp . ghidra.app.plugin.core.analysis.FindNoReturnFunctionsAnalyzer | grep -E "String |ldc" | head -30
