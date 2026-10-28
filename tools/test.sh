export GHIDRA_INSTALL_DIR=/opt/ghidra/ghidra_12.1.4_PUBLIC
export REA_GHIDRA_SEED_FILE=/root/work/seeds.json
cd /root/work
rmdir /root/out 2>/dev/null
time rea decompile-all libil2cpp.so --provider ghidra --output /root/out --address-start 0x3f7897c --address-end 0x4484300 --limit 5 --token-limit 1200