const fs=require('fs'),path=require('path');
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
const files=[]; roots.forEach(r=>(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs'))files.push(p);}})(r));
const text=new Map(files.map(f=>[f,fs.readFileSync(f,'utf8')]));
// class -> base
const base=new Map();
for(const [f,t] of text){ for(const m of t.matchAll(/(?:class)\s+([A-Za-z_][A-Za-z0-9_]*)(?:<[^>]*>)?\s*:\s*([A-Za-z_][A-Za-z0-9_.<>]*)/g)) if(!base.has(m[1])) base.set(m[1],m[2].replace(/<.*$/,'')); }
const UNITY=new Set(['MonoBehaviour','ScriptableObject','Component','Behaviour','MonoSingleton']);
function isUnityObject(c,depth=0){ if(depth>12) return false; const b=base.get(c); if(!b) return UNITY.has(c); if(UNITY.has(b)) return true; return isUnityObject(b,depth+1); }
const hits=new Map();
for(const [f,t] of text){ for(const m of t.matchAll(/\bnew\s+([A-Z][A-Za-z0-9_]*)\s*\(/g)){ const c=m[1]; if(base.has(c) && isUnityObject(c)){ const k=c+' <- '+path.basename(f); hits.set(k,(hits.get(k)||0)+1); } } }
console.log('MonoBehaviour/ScriptableObject-derived classes created with new:',hits.size);
for(const [k,v] of hits) console.log(' ',k,'x'+v);
