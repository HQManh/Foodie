cd /root
for f in managed_*.txt; do
  g=$(grep -h "full_name:" "$f" | sed 's/.*full_name: //' | grep '`' | grep -v "Display\|<>\|d__\|c__\|Lambda" | sort -u | tr '\n' ' ')
  [ -n "$g" ] && echo "== ${f#managed_}: $g"
done
