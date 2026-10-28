for p in $(pgrep -f "[r]ea decompile-all") $(pgrep -f "[G]hidraClassLoader"); do kill $p; done
sleep 4
pgrep -fa "[G]hidraClassLoader|[r]ea decompile" | cut -c1-80
echo "killed"
rm -rf /root/out
