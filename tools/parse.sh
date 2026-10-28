cd /opt/node-v24.22.1-linux-x64/lib/node_modules/rea-agents
f=$(grep -rl "Parse \`REA_GHIDRA_DISABLED_ANALYZERS" --include=*.js . | head -1)
echo "$f"
grep -n -A28 "Parse \`REA_GHIDRA_DISABLED_ANALYZERS" "$f" | cut -c1-220
