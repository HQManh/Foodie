cd /root
sed -n 52705,52735p managed_CookingGraph.Runtime.txt | grep -E "name:|declaring_type|visibility|access|flags|return|token" | head -15
echo "--- _id context:"
sed -n 3640,3660p managed_CakeOrder.DataSO.txt | grep -E "name:|declaring_type|flags|access" | head -8
