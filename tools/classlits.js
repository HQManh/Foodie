// node ..\tools\classlits.js <Namespace.Class> ...  -> every string literal referenced by the decompiled functions of the class
const fs=require('fs'),path=require('path');
const src=fs.readFileSync('D:/Unity/Foodie/tools/audit_literals.js','utf8').split('// index decompiled files')[0];
eval(src.replace(/const fs = require\('fs'\), path = require\('path'\), cp = require\('child_process'\);/,''));
const root='D:/Unity/Foodie/ExtractedCode/';const files=[];
for(const d of fs.readdirSync(root)){const p=root+d;if(!fs.statSync(p).isDirectory())continue;for(const f of fs.readdirSync(p))if(f.endsWith('.c'))files.push(p+'/'+f);}
for(const cls of process.argv.slice(2)){const set=new Set();for(const f of files){if(!path.basename(f).startsWith(cls+'.'))continue;const t=fs.readFileSync(f,'utf8');for(const m of t.matchAll(/DAT_([0-9a-f]{8})/g)){const s=litOf(m[1]);if(s!==null)set.add(s);}}
 console.log('==',cls,JSON.stringify([...set]).slice(0,600));}
