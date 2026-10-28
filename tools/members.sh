cd /root
echo "== CakeToolSO"
awk '/full_name: .*CakeToolSO$/{f=1; print; next} f && /full_name:/{f=0} f' managed_CakeOrder.DataSO.txt | grep -E "^ +name:|field_type|token:" | head -40
echo "== CookingEstimatorBot"
awk '/full_name: .*CookingEstimatorBot$/{f=1; print; next} f && /full_name:/{f=0} f' managed_CookingGraph.Runtime.txt | grep -E "^ +name:" | head -60
