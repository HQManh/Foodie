const fs=require('fs'),path=require('path');
const dirs=['Assembly-CSharp','CakeOrder','CakeOrder.DataSO','CakeOrder.DataModel','CakeOrder.System.Base'].map(d=>'D:/Unity/Foodie/ExtractedCode/'+d);
const stubRoots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
// index stubs by file basename
const stubs={};
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs'))(stubs[e.name]=stubs[e.name]||[]).push(p);}}
stubRoots.forEach(walk);
const rows=[];
for(const d of dirs){ if(!fs.existsSync(d))continue;
  for(const f of fs.readdirSync(d)){ if(!/\.\.cctor_[0-9a-f]+\.c$/.test(f))continue;
    const cls=f.replace(/\.\.cctor_.*$/,''); const simple=cls.split('.').pop();
    const files=stubs[simple+'.cs']; if(!files)continue;
    const txt=files.map(x=>fs.readFileSync(x,'utf8')).join('\n');
    // uninitialized static fields: "static ... Name;" without '=' or '(' or '=>' and not const
    const re=/^\s*(?:public|private|internal|protected)?\s*(?:static\s+readonly|readonly\s+static|static)\s+[^=(;{}]+\s\w+\s*;/gm;
    const un=[...txt.matchAll(re)].map(m=>m[0].trim()).filter(l=>!/\bconst\b/.test(l)&&!/\bevent\b/.test(l));
    const size=fs.readFileSync(path.join(d,f),'utf8').split('\n').length;
    if(un.length)rows.push({cls,un:un.length,size,sample:un.slice(0,3).map(s=>s.replace(/\s+/g,' ').slice(0,70))});
  }}
rows.sort((a,b)=>b.size-a.size);
console.log(rows.length,'classes with a decompiled static constructor and uninitialized static fields');
for(const r of rows.slice(0,60))console.log(String(r.size).padStart(4),'lines',String(r.un).padStart(2),'uninit',r.cls,'|',r.sample[0]);
