const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject';
const guid=process.argv[2], srcRoots=process.argv.slice(3);
const SKIP=new Set(['m_ObjectHideFlags','m_CorrespondingSourceObject','m_PrefabInstance','m_PrefabAsset','m_GameObject','m_Enabled','m_EditorHideFlags','m_Script','m_Name','m_EditorClassIdentifier']);
function walk(d,ext,out=[]){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p,ext,out);else if(ext.test(e.name))out.push(p);}return out;}
const scriptRe=new RegExp("m_Script: [{]fileID: (-?[0-9]+), guid: "+guid);
const usage=new Map();
for(const f of walk(path.join(root,'Assets'),/[.](unity|prefab|asset)$/)){
 for(const b of fs.readFileSync(f,'utf8').split(/^--- /m)){
  const m=b.match(scriptRe); if(!m)continue;
  const keys=new Set();
  for(const line of b.split('\n')){const k=line.match(/^  ([A-Za-z_][A-Za-z0-9_]*):/);if(k&&!SKIP.has(k[1]))keys.add(k[1]);}
  if(!usage.has(m[1]))usage.set(m[1],{count:0,keys:new Map()});
  const u=usage.get(m[1]);u.count++;for(const k of keys)u.keys.set(k,(u.keys.get(k)||0)+1);
 }
}
// class table with own fields and base name
const table=new Map(); // name -> {guid,file,own:Set,base}
for(const r of srcRoots){for(const f of walk(path.resolve(r),/[.]cs$/)){
 const src=fs.readFileSync(f,'utf8');
 const meta=fs.existsSync(f+'.meta')?fs.readFileSync(f+'.meta','utf8').match(/^guid: ([0-9a-f]+)/m):null;
 if(!meta)continue;
 const lines=src.split('\n');
 let cur=null;
 for(const line of lines){
  const cm=line.match(/^\s*(?:public |internal |\[[^\]]*\]\s*)*(?:abstract |sealed |static |partial )*class ([A-Za-z_][A-Za-z0-9_]*)\s*(?::\s*([A-Za-z_][A-Za-z0-9_.<>]*))?/);
  if(cm){cur={name:cm[1],base:cm[2]?cm[2].split('.').pop().replace(/<.*/,''):null,own:new Set(),guid:meta[1],file:f};if(!table.has(cur.name))table.set(cur.name,cur);continue;}
  if(cur){const fm=line.match(/^\s+(?:(?:public|protected|private|internal)\s+)?(?:\[SerializeField\]\s*)?(?:(?:public|protected|private|internal)\s+)?(?:static\s+|readonly\s+)*[A-Za-z_][A-Za-z0-9_<>,.\[\]]*\s+([A-Za-z_][A-Za-z0-9_]*)\s*[;=]/);if(fm)cur.own.add(fm[1]);}
 }
}}
function fieldsOf(name,seen=new Set()){ if(!table.has(name)||seen.has(name))return new Set(); seen.add(name); const c=table.get(name); const s=new Set(c.own); for(const f of fieldsOf(c.base,seen))s.add(f); return s; }
const results={};
for(const [id,u] of [...usage.entries()].sort((a,b)=>b[1].count-a[1].count)){
 const keys=new Set([...u.keys.entries()].filter(([k,n])=>n>=u.count*0.8).map(x=>x[0]));
 const scored=[...table.keys()].filter(n=>!/Editor$|EditorWindow$/.test(n)).map(n=>{const F=fieldsOf(n);let inter=0;for(const k of keys)if(F.has(k))inter++;const uni=new Set([...keys,...F]).size;return {n,score:uni?inter/uni:0,hit:inter,F:F.size,file:table.get(n).file,guid:table.get(n).guid}}).filter(x=>x.F>0).sort((a,b)=>b.score-a.score).slice(0,3);
 console.log(`fileID ${id} uses=${u.count} keys=${keys.size}`);
 for(const s of scored)console.log(`   ${(s.score*100).toFixed(0)}% ${s.n} (fields=${s.F}) guid=${s.guid} ${path.relative(root,s.file)}`);
}
