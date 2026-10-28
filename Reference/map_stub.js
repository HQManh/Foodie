const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject';
const guid=process.argv[2], srcRoots=process.argv.slice(3);
const SKIP=new Set(['m_ObjectHideFlags','m_CorrespondingSourceObject','m_PrefabInstance','m_PrefabAsset','m_GameObject','m_Enabled','m_EditorHideFlags','m_Script','m_Name','m_EditorClassIdentifier']);
function walk(d,ext,out=[]){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p,ext,out);else if(ext.test(e.name))out.push(p);}return out;}
const scriptRe=new RegExp("m_Script: [{]fileID: (-?[0-9]+), guid: "+guid);
const usage=new Map();
for(const f of walk(path.join(root,'Assets'),/[.](unity|prefab|asset)$/)){
 const blocks=fs.readFileSync(f,'utf8').split(/^--- /m);
 for(const b of blocks){
  const m=b.match(scriptRe);
  if(!m)continue;
  const keys=new Set();
  for(const line of b.split('\n')){const k=line.match(/^  ([A-Za-z_][A-Za-z0-9_]*):/);if(k&&!SKIP.has(k[1]))keys.add(k[1]);}
  if(!usage.has(m[1]))usage.set(m[1],{count:0,keys:new Map()});
  const u=usage.get(m[1]);u.count++;for(const k of keys)u.keys.set(k,(u.keys.get(k)||0)+1);
 }
}
const cands=[];
for(const r of srcRoots){for(const f of walk(path.resolve(r),/[.]cs$/)){
 const src=fs.readFileSync(f,'utf8');
 const meta=fs.existsSync(f+'.meta')?fs.readFileSync(f+'.meta','utf8').match(/^guid: ([0-9a-f]+)/m):null;
 const cls=[...src.matchAll(/^\s*(?:public |internal )?(?:abstract |sealed |static |partial )*class ([A-Za-z_][A-Za-z0-9_]*)/gm)].map(x=>x[1]);
 if(!meta||!cls.length)continue;
 const fields=new Set();
 for(const line of src.split('\n')){const fm=line.match(/^\s+(?:(?:public|protected|private|internal)\s+)?(?:\[SerializeField\]\s*)?(?:(?:public|protected|private|internal)\s+)?(?:static\s+|readonly\s+)*[A-Za-z_][A-Za-z0-9_<>,.\[\]]*\s+([A-Za-z_][A-Za-z0-9_]*)\s*[;=]/);if(fm)fields.add(fm[1]);}
 for(const c of cls)cands.push({cls:c,file:f,guid:meta[1],fields});
}}
for(const [id,u] of [...usage.entries()].sort((a,b)=>b[1].count-a[1].count)){
 const keys=[...u.keys.entries()].filter(([k,n])=>n>=u.count*0.8).map(x=>x[0]);
 const scored=cands.map(c=>{const hit=keys.filter(k=>c.fields.has(k)).length;return {c,score:keys.length?hit/keys.length:0}}).sort((a,b)=>b.score-a.score).slice(0,3);
 console.log(`fileID ${id} uses=${u.count} keys=${keys.length} [${keys.slice(0,10).join(',')}]`);
 for(const s of scored)console.log(`   ${(s.score*100).toFixed(0)}% ${s.c.cls} guid=${s.c.guid} ${path.relative(root,s.c.file)}`);
}
