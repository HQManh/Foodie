const fs=require('fs'),path=require('path');const {fileId}=require('./md4.js');
const APPLY=process.argv[2]==='apply';
const root='D:/Unity/Foodie/UnityProject/';const BS=String.fromCharCode(92);
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
const guids=new Set();
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.add(m[1]);});
// class index: fileID -> [{guid,name}]
const idx=new Map();
function indexCs(p){ if(/[\/](Editor|Tests?)[\/]/.test(p))return; const mp=p+'.meta'; if(!fs.existsSync(mp))return; const g=(fs.readFileSync(mp,'utf8').match(/^guid:\s*([0-9a-f]{32})/m)||[])[1]; if(!g)return;
  const t=fs.readFileSync(p,'utf8'); const base=path.basename(p,'.cs');
  const nss=[...t.matchAll(/^\s*namespace\s+([\w.]+)/gm)].map(m=>m[1]);
  const nsList=nss.length?nss:[''];
  for(const m of t.matchAll(/^\s*(?:public\s+|internal\s+|abstract\s+|sealed\s+|static\s+|partial\s+)*class\s+(\w+)/gm)){
    const name=m[1]; for(const ns of nsList){const id=fileId(ns,name);const k=String(id);if(!idx.has(k))idx.set(k,[]);idx.get(k).push({guid:g,name:ns+'.'+name,file:path.basename(p)});}
  }}
for(const base of ['Assets','Library/PackageCache']) walk(root+base,p=>{if(p.endsWith('.cs'))indexCs(p);});
console.log('indexed class ids:',idx.size);
const backup='D:/Unity/Foodie/backup_missing_scripts/';
let changedFiles=0,remapped=0,unresolved=new Map(),ambiguous=0;
walk(root+'Assets',p=>{ if(!/\.(asset|prefab|unity)$/.test(p)) return; let t=fs.readFileSync(p,'utf8'); if(!t.startsWith('%YAML')) return; let changed=false;
  t=t.replace(/m_Script: \{fileID: (-?\d+), guid: ([0-9a-f]{32}), type: 3\}/g,(all,fid,g)=>{ if(guids.has(g)) return all; const c=idx.get(fid);
    if(!c){const k=g+'|'+fid;unresolved.set(k,(unresolved.get(k)||0)+1);return all;}
    if(c.length>1)ambiguous++; remapped++; changed=true; return 'm_Script: {fileID: 11500000, guid: '+c[0].guid+', type: 3}'; });
  if(changed){changedFiles++; if(APPLY){const rel=p.split(BS).join('/').replace(root,'');const dst=backup+rel;fs.mkdirSync(path.dirname(dst),{recursive:true});if(!fs.existsSync(dst))fs.copyFileSync(p,dst);fs.writeFileSync(p,t);}}
});
console.log(APPLY?'APPLIED':'dry-run','files changed:',changedFiles,'refs remapped:',remapped,'ambiguous:',ambiguous,'unresolved distinct:',unresolved.size);
const top=[...unresolved].sort((a,b)=>b[1]-a[1]).slice(0,15);console.log(top.map(x=>x.join(' x')).join('\n'));
