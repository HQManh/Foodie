const fs=require('fs'),cp=require('child_process');
const lines=cp.execSync('grep -rn "TODO(unrecovered)" --include=*.cs D:/Unity/Foodie/UnityProject/Assets',{encoding:'utf8',maxBuffer:1e8}).split('\n').filter(Boolean);
const re=/DAT_([0-9a-f]{8})/gi;
const rows=[];
for(const l of lines){const m=[...l.matchAll(re)];if(!m.length)continue;rows.push({l,addrs:[...new Set(m.map(x=>x[1]))]});}
fs.writeFileSync('D:/Unity/Foodie/tools/marker_dats.json',JSON.stringify(rows));
console.log('markers citing DAT_ addresses:',rows.length);
const all=[...new Set(rows.flatMap(r=>r.addrs))];
console.log('distinct addresses:',all.length);
fs.writeFileSync('D:/Unity/Foodie/tools/marker_dat_addrs.txt',all.join('\n'));
