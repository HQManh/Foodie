cd /root
for t in CakeToolSO CookingEstimatorBot DragItem IceCreamDish IceCreamCup RemoveItemMovingToCheckCanTake ResolveWorkWaitStrategy; do
  files=$(grep -l "$t" managed_*.txt 2>/dev/null | sed 's/managed_//; s/\.txt//' | tr '\n' ' ')
  echo "== $t: $files"
done
