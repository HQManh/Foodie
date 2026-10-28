const fs=require('fs'),path=require('path');
const scene=process.argv[2]; const root='D:/Unity/Foodie/UnityProject/';
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).split(String.fromCharCode(92)).join('/'));});
const txt=fs.readFileSync(scene,'utf8');
const blocks=txt.split(/^--- /m).slice(1);
const ids=new Set(); const names=new Map();
for(const b of blocks){const h=b.match(/^!u!(\d+) &(\d+)/);if(h){ids.add(h[2]);if(h[1]==='1'){const n=b.match(/m_Name:\s*(.*)/);names.set(h[2],n?n[1]:'');}}}
const bad=[], dll=new Map(), noClass=new Map(), badFile=new Map(); let danglingTotal=0; const dangling=new Map();
for(const b of blocks){
  const h=b.match(/^!u!(\d+) &(\d+)/); if(!h)continue;
  const go=(b.match(/m_GameObject:\s*\{fileID:\s*(\d+)/)||[])[1]; const gname=names.get(go)||('go '+go);
  if(h[1]==='114'){
    const sm=b.match(/m_Script:\s*\{fileID:\s*(-?\d+),\s*guid:\s*([0-9a-f]{32})/); if(!sm)continue;
    const f=guids.get(sm[2]); if(!f)continue;
    if(f.endsWith('.dll')){dll.set(sm[2],(dll.get(sm[2])||0)+1);continue;}
    if(!f.endsWith('.cs')){badFile.set(f,gname);continue;}
    const src=fs.readFileSync(f,'utf8'); const cn=path.basename(f,'.cs');
    const re=new RegExp('\\b(class|struct)\\s+'+cn+'\\b'); 
    if(!re.test(src)){ if(!noClass.has(f))noClass.set(f,[]); noClass.get(f).push(gname);}
    else { // must derive from MonoBehaviour-ish: crude check for abstract/generic
      const m=src.match(new RegExp('(abstract\\s+)?class\\s+'+cn+'(<[^>]*>)?'));
      if(m&&(m[1]||m[2])){ if(!noClass.has(f+' [abstract/generic]'))noClass.set(f+' [abstract/generic]',[]); noClass.get(f+' [abstract/generic]').push(gname);}
    }
  }
  // intra-scene references: {fileID: N} without guid
  for(const m of b.matchAll(/\{fileID:\s*(\d+)\}/g)){ const id=m[1]; if(id==='0')continue; if(!ids.has(id)){ danglingTotal++; const k=gname+' <- '+h[1]+'/'+id; dangling.set(id,(dangling.get(id)||0)+1);} }
}
console.log('Scripts in precompiled DLLs used:',[...dll].map(([g,c])=>path.basename(guids.get(g))+'x'+c).join(', '));
console.log('\nScripts whose .cs has no matching class (Unity: "script class cannot be found"):',noClass.size);
for(const [f,l] of noClass) console.log('  ',f.replace(root,''),'->',[...new Set(l)].slice(0,4).join(', '));
console.log('\nNon-.cs script assets:',badFile.size);
console.log('\nIntra-scene fileID refs to objects not in the scene:',dangling.size,'distinct,',danglingTotal,'total');
[...dangling].slice(0,15).forEach(([i,c])=>console.log('  fileID',i,'x'+c));
