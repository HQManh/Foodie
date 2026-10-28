cd /root
for d in EssentialSystemR1 DataSaveLoadR1 CakeOrder.System.Base; do
  echo "=== $d"; grep -h "full_name:" managed_$d.txt | sed 's/.*full_name: //' | grep -v "^<" | grep -vi "Display\|<>\|d__\|c__" | sort -u | tr '\n' ' ' | fold -w 200
  echo
done
