const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject/';
const BS=String.fromCharCode(92);
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).split(BS).join('/'));});
const missing=new Map(); // key guid|fileID -> {count, sample, names:Set}
let files=0;
walk(root+'Assets',p=>{ if(!/\.(asset|prefab|unity)$/.test(p)) return; files++;
  const t=fs.readFileSync(p,'utf8'); if(!t.startsWith('%YAML')) return;
  const blocks=t.split(/^--- /m).slice(1);
  for(const b of blocks){ const m=b.match(/m_Script:\s*\{fileID:\s*(-?\d+),\s*guid:\s*([0-9a-f]{32})/); if(!m) continue; if(guids.has(m[2])) continue;
    const key=m[2]+'|'+m[1]; let e=missing.get(key); if(!e){e={count:0,files:new Set(),names:new Set()};missing.set(key,e);} e.count++; e.files.add(path.basename(p)); const n=b.match(/m_Name:\s*(.*)/); if(n&&n[1])e.names.add(n[1]); const ec=b.match(/m_EditorClassIdentifier:\s*(.*)/); if(ec&&ec[1])e.names.add('['+ec[1]+']'); }
});
console.log('scanned',files,'yaml files; distinct missing (guid|fileID):',missing.size);
for(const [k,e] of [...missing].sort((a,b)=>b[1].count-a[1].count)) console.log(k,'x'+e.count,'files',e.files.size,'e.g.',[...e.names].slice(0,3).join(', '));
