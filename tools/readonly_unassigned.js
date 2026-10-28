const fs=require('fs'),path=require('path');
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
const BS=String.fromCharCode(92);
const re=new RegExp('^[ '+BS+'t]*(?:private|public|protected|internal)(?: static)? readonly ([A-Za-z_][A-Za-z0-9_<>,'+BS+'[' + BS+']. ?]*?) ([A-Za-z_][A-Za-z0-9_]*);','gm');
const files=[]; (function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs'))files.push(p);}})(roots[0]);
roots.slice(1).forEach(r=>(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs'))files.push(p);}})(r));
// index class -> has parameterless ctor (source classes only)
const classes=new Map();
for(const f of files){const t=fs.readFileSync(f,'utf8');for(const m of t.matchAll(/(?:class|struct) ([A-Za-z_][A-Za-z0-9_]*)/g)){ if(!classes.has(m[1])) classes.set(m[1],f);}}
const out=[];
for(const f of files){
  const t=fs.readFileSync(f,'utf8'); const s=t.replace(/\r/g,'');
  for(const m of s.matchAll(re)){
    const type=m[1].trim(), name=m[2];
    if(name.startsWith('_003C')) continue;
    const rest=s.replace(m[0],'');
    if(new RegExp(BS+'b'+name+BS+'s*=(?!=)').test(rest)) continue;
    if(/^(int|float|bool|string|double|long|byte|char|uint|short|Vector\d|Color|Quaternion|LayerMask)$/.test(type)) continue;
    out.push({file:path.basename(f),type,name});
  }
}
const byType=new Map(); for(const o of out){const k=o.type; if(!byType.has(k))byType.set(k,[]); byType.get(k).push(o.file+'::'+o.name);}
console.log('readonly fields never assigned in their file:',out.length);
for(const [t,l] of [...byType].sort((a,b)=>b[1].length-a[1].length)) console.log(t,'x'+l.length,'->',l.slice(0,4).join(', '));
