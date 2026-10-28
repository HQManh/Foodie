cd /root
grep -l "name: OrderRecipeCodec$" managed_*.txt | sed 's/managed_//; s/.txt//'
