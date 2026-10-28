cd /mnt/d/Unity/Foodie/UnityProject/Assets/Plugins
for d in CakeOrder.dll CakeOrder.DataSO.dll CakeOrder.DataModel.dll CakeOrder.System.Base.dll CookOrder.Cooking.Implement.dll CookOrder.Cooking.Config.dll CookingGraph.Runtime.dll EssentialSystemR1.dll DataSaveLoadR1.dll; do
  [ -f "$d" ] || { echo "missing $d"; continue; }
  out="/root/managed_${d%.dll}.txt"
  rea inspect-managed-members "$d" > "$out" 2>&1
  echo "$d: $(wc -l < "$out") lines, types: $(grep -c '^    - token:' "$out")"
done
for t in IceCreamDish CustomerSpawnData MessyController CakeLevelInitData CustomerSingleOrderSpawnData LevelBaseCakeOrderAbstract Pooler IceCreamCup; do
  echo "== $t: $(grep -l "name: $t\$" /root/managed_*.txt 2>/dev/null | sed 's|/root/managed_||; s|\.txt||' | tr '\n' ' ')"
done
