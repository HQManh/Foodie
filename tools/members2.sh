cd /root
n=$(grep -n "full_name: .*CakeToolSO$" managed_CakeOrder.DataSO.txt | head -1 | cut -d: -f1)
echo "CakeToolSO at line $n"
sed -n "${n},$((n+80))p" managed_CakeOrder.DataSO.txt | grep -E "^ {6}name:|^ {8}name:|field_type|token:" | head -40
m=$(grep -n "full_name: .*CookingEstimatorBot$" managed_CookingGraph.Runtime.txt | head -1 | cut -d: -f1)
echo "CookingEstimatorBot at line $m"
sed -n "${m},$((m+200))p" managed_CookingGraph.Runtime.txt | grep -E "^ {6}name:|^ {8}name:" | head -60
