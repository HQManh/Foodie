cd /root
n=$(grep -n "declaring_type: CakeOrder.DataSO.CakeOrderDatabaseSO$" managed_CakeOrder.DataSO.txt | head -1 | cut -d: -f1)
echo "first member line $n"
sed -n "$((n-3)),$((n+28))p" managed_CakeOrder.DataSO.txt
echo; echo "members: $(grep -c 'declaring_type: CakeOrder.DataSO.CakeOrderDatabaseSO$' managed_CakeOrder.DataSO.txt)"
