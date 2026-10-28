const fs=require("fs"),path=require("path");
const A="D:/Unity/Foodie/UnityProject/Assets";
const SRC={ "2feb723f7ef82f70ee1119413112bf1a":"D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities",
            "9b79db7996b03fc716c579f61e0ccf78":"D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder" };
const SKIP=new Set(["m_ObjectHideFlags","m_CorrespondingSourceObject","m_PrefabInstance","m_PrefabAsset","m_GameObject","m_Enabled","m_EditorHideFlags","m_Script","m_Name","m_EditorClassIdentifier"]);
function walk(d,ext,out=[]){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p,ext,out);else if(ext.test(e.name))out.push(p);}return out;}
function usage(guid){const m=new Map();
 for(const f of walk(A,/\.(unity|prefab|asset)$/)){
  for(const b of fs.readFileSync(f,"utf8").split(/^--- /m)){
   const r=b.match(new RegExp("m_Script: [{]fileID: ([-0-9]+), guid: "+guid));if(!r)continue;
   const keys=new Set();for(const line of b.split("\n")){const k=line.match(/^  ([A-Za-z_][A-Za-z0-9_]*):/);if(k&&!SKIP.has(k[1]))keys.add(k[1]);}
   if(!m.has(r[1]))m.set(r[1],{count:0,keys:new Map()});const u=m.get(r[1]);u.count++;for(const k of keys)u.keys.set(k,(u.keys.get(k)||0)+1);}}
 return m;}
function classes(dir){const table=new Map();
 for(const f of walk(dir,/\.cs$/)){const meta=fs.existsSync(f+".meta")?fs.readFileSync(f+".meta","utf8").match(/^guid: ([0-9a-f]+)/m):null;if(!meta)continue;
  const lines=fs.readFileSync(f,"utf8").split("\n");let cur=null;
  for(const line of lines){const cm=line.match(/^\s*(?:public |internal )?(?:abstract |sealed |static |partial )*class ([A-Za-z_]\w*)\s*(?::\s*([A-Za-z_][\w.<>]*))?/);
   if(cm){cur={name:cm[1],base:cm[2]?cm[2].split(".").pop().replace(/<.*/,""):null,own:new Set(),guid:meta[1],file:f};if(!table.has(cur.name))table.set(cur.name,cur);continue;}
   if(cur){const fm=line.match(/^\s+(?:(?:public|protected|private|internal)\s+)?(?:\[SerializeField\]\s*)?(?:(?:public|protected|private|internal)\s+)?(?:static\s+|readonly\s+)*[A-Za-z_][\w<>,.\[\]]*\s+([A-Za-z_]\w*)\s*[;=]/);if(fm)cur.own.add(fm[1]);}}}
 return table;}
function fieldsOf(t,name,seen=new Set()){if(!t.has(name)||seen.has(name))return new Set();seen.add(name);const c=t.get(name);const s=new Set(c.own);for(const f of fieldsOf(t,c.base,seen))s.add(f);return s;}
const report=[];
for(const [guid,dir] of Object.entries(SRC)){
 const u=usage(guid), t=classes(dir);
 for(const [id,v] of [...u.entries()].sort((a,b)=>b[1].count-a[1].count)){
  const keys=new Set([...v.keys.entries()].filter(([k,n])=>n>=v.count*0.8).map(x=>x[0]));
  const sc=[...t.keys()].map(n=>{const F=fieldsOf(t,n);let i=0;for(const k of keys)if(F.has(k))i++;const un=new Set([...keys,...F]).size;return {n,score:un?i/un:0,file:t.get(n).file,guid:t.get(n).guid};}).sort((a,b)=>b.score-a.score);
  const best=sc[0],second=sc[1]||{score:0};
  report.push({guid:guid.slice(0,6),id,count:v.count,keys:keys.size,best:best.n,score:best.score.toFixed(2),second:second.n,s2:second.score.toFixed(2),bestGuid:best.guid,bestFile:path.relative(A,best.file)});
 }}
for(const r of report) console.log(JSON.stringify(r));
