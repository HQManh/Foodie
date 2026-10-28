cd /root
grep -l "name: InAppShopId$" managed_*.txt | sed 's/managed_//; s/.txt//'
