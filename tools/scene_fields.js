const fs=require('fs'),path=require('path');
const scene=process.argv[2]; const root='D:/Unity/Foodie/UnityProject/';
const BS=String.fromCharCode(92);
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).split(BS).join('/'));});
const txt=fs.readFileSync(scene,'utf8');
const blocks=txt.split(/^--- /m).slice(1);
const SKIP=new Set(['m_ObjectHideFlags','m_CorrespondingSourceObject','m_PrefabInstance','m_PrefabAsset','m_GameObject','m_Enabled','m_EditorHideFlags','m_Script','m_Name','m_EditorClassIdentifier','serializedVersion']);
const res=new Map(); // script file -> Map(field -> {n, hasValue})
for(const b of blocks){
  const h=b.match(/^!u!(\d+) &(\d+)/); if(!h||h[1]!=='114')continue;
  const sm=b.match(/m_Script:\s*\{fileID:\s*(-?\d+),\s*guid:\s*([0-9a-f]{32})/); if(!sm)continue;
  const f=guids.get(sm[2]); if(!f||!f.endsWith('.cs'))continue;
  if(!res.has(f))res.set(f,new Map());
  const lines=b.split('\n').slice(1);
  for(const ln of lines){const m=ln.match(/^  ([A-Za-z_][A-Za-z0-9_]*):\s*(.*)$/); if(!m||SKIP.has(m[1]))continue;
    const e=res.get(f).get(m[1])||{n:0,nonnull:0}; e.n++; if(!/^(\{fileID: 0\}|0|""|\[\]|0\.?0*)?$/.test(m[2].trim())) e.nonnull++; res.get(f).set(m[1],e);}
}
let total=0; const out=[];
for(const [f,fields] of res){
  if(f.includes('Library/PackageCache')||f.includes('/Spine/'))continue;
  // gather source of the script plus its base classes in the project (rough: all .cs text of the file and ancestors found by name)
  let src=fs.readFileSync(f,'utf8');
  const seen=new Set([f]); let cur=src;
  for(let d=0;d<6;d++){const m=cur.match(/class\s+\w+(?:<[^>]*>)?\s*:\s*([A-Za-z0-9_]+)/); if(!m)break; const base=m[1]; const bf=[...guids.values()].find(x=>x.endsWith('/'+base+'.cs')); if(!bf||seen.has(bf))break; seen.add(bf); cur=fs.readFileSync(bf,'utf8'); src+='\n'+cur;}
  const missing=[];
  for(const [name,e] of fields){ const re=new RegExp(BS+'b'+name+BS+'b'); if(!re.test(src)) missing.push(name+(e.nonnull?'':' (empty)')); }
  const real=missing.filter(x=>!x.endsWith('(empty)'));
  if(real.length||missing.length){ out.push([f.replace(root+'Assets/',''),real,missing.length-real.length]); total+=real.length; }
}
console.log('scripts with scene-serialized fields missing from the class (value would be lost):',out.filter(o=>o[1].length).length,'| fields:',total);
for(const [f,r,e] of out) if(r.length) console.log('  ',f,'->',r.join(', '));
