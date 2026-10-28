const fs=require('fs'),path=require('path');
const scene=process.argv[2]; const root='D:/Unity/Foodie/UnityProject/';
const BS=String.fromCharCode(92);
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).split(BS).join('/'));});
const cache=new Map();
function idsOf(f){ if(cache.has(f))return cache.get(f); let s=null; if(/\.(prefab|asset|unity|mat|controller|anim|playable|overrideController|mixer)$/.test(f)){try{const t=fs.readFileSync(f,'utf8'); if(t.startsWith('%YAML')){s=new Set();for(const m of t.matchAll(/^--- !u!\d+ &(-?\d+)/gm))s.add(m[1]);}}catch(e){}} cache.set(f,s); return s; }
const txt=fs.readFileSync(scene,'utf8');
const blocks=txt.split(/^--- /m).slice(1);
const names=new Map();
for(const b of blocks){const h=b.match(/^!u!1 &(\d+)/);if(h){const n=b.match(/m_Name:\s*(.*)/);names.set(h[1],n?n[1]:'');}}
const bad=new Map(); let checked=0;
for(const b of blocks){
  const h=b.match(/^!u!(\d+) &(\d+)/); if(!h)continue;
  const go=(b.match(/m_GameObject:\s*\{fileID:\s*(\d+)/)||[])[1]; const who=names.get(go)||('obj '+h[2]);
  const lines=b.split('\n');
  for(const ln of lines){
    for(const m of ln.matchAll(/\{fileID:\s*(-?\d+),\s*guid:\s*([0-9a-f]{32})/g)){
      const fid=m[1], g=m[2]; if(fid==='0')continue; const f=guids.get(g); if(!f)continue;
      const ids=idsOf(f); if(!ids)continue; checked++;
      if(!ids.has(fid)){ const key=path.basename(f)+' fileID '+fid; if(!bad.has(key))bad.set(key,{who:new Set(),field:ln.trim().split(':')[0]}); bad.get(key).who.add(who); }
    }
  }
}
console.log('refs into YAML assets checked:',checked,'| unresolved:',bad.size);
for(const [k,v] of bad) console.log('  ',k,'  field',v.field,'  used by',[...v.who].slice(0,4).join(', '));
