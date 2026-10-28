export GHIDRA_INSTALL_DIR=/opt/ghidra/ghidra_12.1.4_PUBLIC
export GHIDRA_HEADLESS_MAXMEM=2G
cd /root/work
for list in "Non-Returning Functions - Discovered" "Non-Returning Functions - Known"; do
  rm -rf /root/nt
  export REA_GHIDRA_DISABLED_ANALYZERS="$list"
  out=$(rea decompile-all small.elf --provider ghidra --output /root/nt --limit 1 --token-limit 20000 2>&1)
  if echo "$out" | grep -q "which is not an analyzer"; then echo "BAD : $list"; else echo "OK  : $list"; fi
done
