echo "== procs"; ps -eo pid,etime,pcpu,rss,args | grep -E "[r]ea |[g]hidra|[j]ava" | cut -c1-150
echo "== out"; ls /root/out 2>/dev/null | head
echo "== ghidra log tail"; tail -n 4 /tmp/rea-ghidra-*/ghidra.log 2>/dev/null | cut -c1-220
echo "== script log tail"; tail -n 4 /tmp/rea-ghidra-*/script.log 2>/dev/null | cut -c1-220
free -m | sed -n 2p