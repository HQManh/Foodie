cd /root
which python3 >/dev/null && echo py-ok
echo "=== CakeOrderDatabaseSO"; python3 /mnt/d/Unity/Foodie/tools/members.py managed_CakeOrder.DataSO.txt CakeOrder.DataSO.CakeOrderDatabaseSO
echo "=== CakeMapSO"; python3 /mnt/d/Unity/Foodie/tools/members.py managed_CakeOrder.DataSO.txt CakeOrder.DataSO.CakeMapSO
