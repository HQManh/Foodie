cd /root/out
echo "files:"; find functions -type f | wc -l
du -sh /root/out
echo "--- run.log summary"
grep -E "^(summary|  (attempted|written|decompiled|failed|skipped|external|total|functions)|    [a-z_]+: [0-9]+)" /root/run.log | head -30
echo "--- sample names"
ls functions | head -5
f=$(find functions -type f -size +2k | head -1); echo "== $f"; head -40 "$f"
