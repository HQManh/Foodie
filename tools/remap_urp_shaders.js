const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject/';const backup='D:/Unity/Foodie/backup_urp_shaders/';const BS=String.fromCharCode(92);
function walk(d,cb){let es;try{es=fs.readdirSync(d,{withFileTypes:true});}catch(e){return;}for(const e of es){const p=path.join(d,e.name);if(e.isDirectory())walk(p,cb);else cb(p);}}
function shaderName(p){const t=fs.readFileSync(p,'utf8');const m=t.match(/^\s*Shader\s+"([^"]+)"/m);return m?m[1]:null;}
function guidOf(p){const mp=p+'.meta';if(!fs.existsSync(mp))return null;const m=fs.readFileSync(mp,'utf8').match(/^guid:\s*([0-9a-f]{32})/m);return m?m[1]:null;}
// package shaders (real)
const pkg=new Map();
walk(root+'Library/PackageCache',p=>{if(p.endsWith('.shader')&&/universal|render-pipelines/i.test(p)){const n=shaderName(p),g=guidOf(p);if(n&&g)pkg.set(n,g);}});
// extracted copies under Assets (anything with a URP name)
const map={};let cnt=0;
walk(root+'Assets',p=>{if(!p.endsWith('.shader'))return;const n=shaderName(p),g=guidOf(p);if(n&&g&&pkg.has(n)&&pkg.get(n)!==g){map[g]=pkg.get(n);cnt++;console.log('map',n,path.relative(root,p).split(BS).join('/'));}});
console.log('shader copies to remap:',cnt);
let files=0,refs=0;
walk(root+'Assets',p=>{if(!/\.(mat|asset|prefab|unity)$/.test(p))return;const t=fs.readFileSync(p,'utf8');if(!t.startsWith('%YAML'))return;let c=false;
  const o=t.replace(/m_Shader: \{fileID: (\d+), guid: ([0-9a-f]{32}), type: 3\}/g,(all,f,g)=>{if(map[g]){c=true;refs++;return 'm_Shader: {fileID: '+f+', guid: '+map[g]+', type: 3}';}return all;});
  if(c){const rel=p.split(BS).join('/').replace(root,'');const dst=backup+rel;fs.mkdirSync(path.dirname(dst),{recursive:true});if(!fs.existsSync(dst))fs.copyFileSync(p,dst);fs.writeFileSync(p,o);files++;}});
console.log('files',files,'refs',refs);
