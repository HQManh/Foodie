cd /root
for t in CakeOrderDatabaseSO CakeMapSO CakeToolSO NewToolLevelPreview; do
  echo "== $t: $(grep -l "name: $t\$" managed_*.txt 2>/dev/null | sed 's/managed_//; s/\.txt//' | tr '\n' ' ')"
done
