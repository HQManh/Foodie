cd /root
grep -n "WorkWait\|ResolveWork" managed_CookingGraph.Runtime.txt | head -12
echo "--- CakeToolSO id-like members:"
grep -n "name: [iI]d$\|name: _id\|name: m_id\|name: <id>" managed_CakeOrder.DataSO.txt | head -8
echo "--- IScriptableObjectWithId:"
n=$(grep -n "full_name: .*IScriptableObjectWithId$" managed_CakeOrder.DataSO.txt | head -1 | cut -d: -f1); sed -n "${n},$((n+40))p" managed_CakeOrder.DataSO.txt | grep "name:" | head -8
