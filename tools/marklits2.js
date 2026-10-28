const fs=require('fs'),cp=require('child_process');
process.chdir('D:/Unity/Foodie/apk_extract');
const lit=(a)=>{try{return cp.execSync('node D:/Unity/Foodie/tools/lit.js '+a,{encoding:'utf8'}).trim();}catch(e){return '';}};
const lines=cp.execSync('grep -rn "TODO(unrecovered)" --include=*.cs D:/Unity/Foodie/UnityProject/Assets',{encoding:'utf8',maxBuffer:1e8}).split('\n').filter(Boolean);
const cache={};
const out=[];
for(const l of lines){const m=[...l.matchAll(/DAT_([0-9a-f]{8})/gi)].map(x=>x[1]);if(!m.length)continue;
  const lits=[];for(const a of [...new Set(m)]){if(!(a in cache)){const r=lit(a);cache[a]=/StringLiteral/.test(r)?r.replace(/^.*StringLiteral \d+ /,''):null;}if(cache[a])lits.push(a+'='+cache[a].slice(0,70));}
  if(lits.length){const f=l.split(':')[0].replace(/^.*Assembly-CSharp\//,'').replace(/^.*Assets\//,'');out.push(f+':'+l.split(':')[1]+'  '+lits.join(' | '));}}
console.log(out.length+' markers with decodable strings');
console.log(out.join('\n'));
