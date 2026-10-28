export GHIDRA_INSTALL_DIR=/opt/ghidra/ghidra_12.1.4_PUBLIC
sed -i 's/^MAXMEM=.*/MAXMEM=10G/' $GHIDRA_INSTALL_DIR/support/launch.properties
grep MAXMEM $GHIDRA_INSTALL_DIR/support/launch.properties
export REA_GHIDRA_SEED_FILE=/root/work/seeds.json
export REA_GHIDRA_STARTUP_TIMEOUT_MS=10800000
export REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS=120
cd /root/work
EXTRA=""
[ -d /root/out ] && EXTRA="--resume"
time rea decompile-all libil2cpp.so --provider ghidra --output /root/out $EXTRA --address-start 0x3f7897c --address-end 0x4484300 --token-limit 1500