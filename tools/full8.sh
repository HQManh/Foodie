export GHIDRA_INSTALL_DIR=/opt/ghidra/ghidra_12.1.4_PUBLIC
export GHIDRA_HEADLESS_MAXMEM=10G
export REA_GHIDRA_SEED_FILE=/root/work/seeds.json
export REA_GHIDRA_STARTUP_TIMEOUT_MS=14400000
export REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS=120
export REA_GHIDRA_DISABLED_ANALYZERS="Basic Constant Reference Analyzer,GCC Exception Handlers,Decompiler Switch Analysis,Decompiler Parameter ID,Non-Returning Functions - Discovered,Non-Returning Functions - Known"
cd /root/work
run(){ rm -rf /root/$1; rea decompile-all libil2cpp.so --provider ghidra --output /root/$1 --address-start $2 --address-end $3 --token-limit 1500 > /root/$1.log 2>&1; }
run outA 0x4484300 0x45843fc
run outU 0x7d88324 0x7dd0000
run outB 0x72f5b64 0x781eb00
echo ALLDONE > /root/alldone.txt
