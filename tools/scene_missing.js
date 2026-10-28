const fs=require('fs'),path=require('path');
const scene=process.argv[2];
const root='D:/Unity/Foodie/UnityProject/';
const guids=new Map();
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
for(const base of ['Assets','Packages','Library/PackageCache']) walk(root+base,p=>{if(!p.endsWith('.meta'))return;const t=fs.readFileSync(p,'utf8');const m=t.match(/^guid:\s*([0-9a-f]{32})/m);if(m)guids.set(m[1],p.slice(0,-5).replace(/\\/g,'/'));});
// built-in guids (Unity default resources / extra)
const builtin=new Set(['0000000000000000e000000000000000','0000000000000000f000000000000000','0000000000000000d000000000000000']);
const txt=fs.readFileSync(scene,'utf8');
const blocks=txt.split(/^--- /m).slice(1);
const missingScripts=new Map(), missingRefs=new Map(), nullScripts=[];
let objs=0;
const names=new Map(); // gameobject fileID -> name
for(const b of blocks){const id=(b.match(/^!u!\d+ &(\d+)/)||[])[1];if(/^!u!1 /.test(b)){const n=b.match(/m_Name:\s*(.*)/);names.set(id,n?n[1]:'');}}
for(const b of blocks){
  const head=b.match(/^!u!(\d+) &(\d+)/); if(!head)continue; const cls=head[1], id=head[2];
  if(cls==='114'){ objs++;
    const sm=b.match(/m_Script:\s*\{fileID:\s*(-?\d+)(?:,\s*guid:\s*([0-9a-f]{32}))?/);
    const go=(b.match(/m_GameObject:\s*\{fileID:\s*(\d+)/)||[])[1];
    const gname=names.get(go)||('go '+go);
    if(!sm||sm[1]==='0'){nullScripts.push(gname+' (component '+id+')');continue;}
    const g=sm[2];
    if(g&&!guids.has(g)&&!builtin.has(g)){const k=g;if(!missingScripts.has(k))missingScripts.set(k,[]);missingScripts.get(k).push(gname);}
  }
  for(const m of b.matchAll(/guid:\s*([0-9a-f]{32})/g)){
    const g=m[1]; if(guids.has(g)||builtin.has(g))continue;
    if(!missingRefs.has(g))missingRefs.set(g,0); missingRefs.set(g,missingRefs.get(g)+1);
  }
}
console.log('scene:',scene,'| MonoBehaviours:',objs,'| guids indexed:',guids.size);
console.log('\nMonoBehaviours with NO script (m_Script null):',nullScripts.length);
nullScripts.slice(0,40).forEach(x=>console.log('  ',x));
console.log('\nMissing script GUIDs:',missingScripts.size);
for(const [g,l] of missingScripts) console.log('  ',g,'x'+l.length,'->',[...new Set(l)].slice(0,6).join(', '));
const other=[...missingRefs].filter(([g])=>!missingScripts.has(g));
console.log('\nOther missing asset GUIDs referenced:',other.length);
other.slice(0,40).forEach(([g,c])=>console.log('  ',g,'x'+c));
