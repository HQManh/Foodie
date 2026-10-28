tail -n 3 /root/run.log | cut -c1-200
echo ---
# the stdout text is one long line with \n escapes; split and show the non-noise tail
grep -o 'text: ".*' /root/run.log | head -1 | sed 's/\\n/\n/g' | grep -vE "GccException|LSDACallSite|DEBUG" | tail -n 30 | cut -c1-300
echo --- stderr/exceptions
grep -oE "(Exception|ERROR|Error)[^\\\\]{0,200}" /root/run.log | sort | uniq -c | sort -rn | head -15
