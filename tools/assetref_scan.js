const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject/';
const BS=String.fromCharCode(92);
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
walk(root+'Assets',p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).split(BS).join('/').replace(root,''));});
const refs=new Map(); // guid -> count
walk(root+'Assets',p=>{ if(!/\.(asset|prefab|unity)$/.test(p)) return; const t=fs.readFileSync(p,'utf8'); if(!t.startsWith('%YAML')) return;
  for(const m of t.matchAll(/m_AssetGUID:\s*([0-9a-f]{32})/g)){ refs.set(m[1],(refs.get(m[1])||0)+1); } });
let found=0, missing=0; const byExt=new Map(); const out=[];
for(const [g,c] of refs){ const p=guids.get(g); if(p){found++; const ext=path.extname(p); byExt.set(ext,(byExt.get(ext)||0)+1); out.push(p);} else missing++; }
console.log('distinct AssetReference guids:',refs.size,'| resolve to project assets:',found,'| not in project:',missing);
console.log([...byExt].map(([e,c])=>e+':'+c).join('  '));
fs.writeFileSync('D:/Unity/Foodie/tools/assetref_paths.txt',out.join('\n'));
console.log(out.slice(0,15).join('\n'));
