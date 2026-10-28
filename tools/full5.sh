export GHIDRA_INSTALL_DIR=/opt/ghidra/ghidra_12.1.4_PUBLIC
export GHIDRA_HEADLESS_MAXMEM=10G
export REA_GHIDRA_SEED_FILE=/root/work/seeds.json
export REA_GHIDRA_STARTUP_TIMEOUT_MS=14400000
export REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS=120
export REA_GHIDRA_DISABLED_ANALYZERS="Basic Constant Reference Analyzer,GCC Exception Handlers,Decompiler Switch Analysis,Decompiler Parameter ID"
cd /root/work
EXTRA=""
[ -d /root/out ] && EXTRA="--resume"
time rea decompile-all libil2cpp.so --provider ghidra --output /root/out $EXTRA --address-start 0x3f7897c --address-end 0x4484300 --token-limit 1500 > /root/run.log 2>&1
echo EXIT $? >> /root/run.log
