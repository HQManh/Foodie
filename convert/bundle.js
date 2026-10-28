const fs=require('fs'),path=require('path');
const R='D:/Unity/Foodie/UnityProject/Reference/DecompiledCode/';
const L=fs.readFileSync(R+'_index.tsv','utf8').split('\n').slice(1).filter(Boolean).map(l=>l.split('\t'));
const types=new Map();
for(const r of L){if(r[1]!=='Assembly-CSharp')continue;const top=r[2].split('.').slice(0,-1).length&&r[2];
 const t=r[2];(types.get(t)||types.set(t,[]).get(t)).push(r);}
let out=[],tot=0;
for(const [t,rows] of types){
 let s='';
 for(const r of rows){let x=fs.readFileSync(R+r[4],'utf8');x=x.replace(/^\/\/.*\n/gm,'').replace(/^\s*\n/gm,'').replace(/\/\* WARNING: Subroutine does not return \*\//g,'');
  s+=`//==== ${t}.${r[3]} @${r[0]}\n${x}\n`;}
 out.push({t,size:s.length,s});tot+=s.length;}
console.log(types.size,'types',tot,'chars stripped');
// batches ~350KB
out.sort((a,b)=>a.t<b.t?-1:1);
let b=[],cur=[],sz=0,i=0;
const flush=()=>{if(!cur.length)return;fs.writeFileSync(`D:/Unity/Foodie/convert/bundles/batch${String(i).padStart(3,'0')}.txt`,cur.map(c=>`\n########## TYPE ${c.t}\n`+c.s).join(''));fs.writeFileSync(`D:/Unity/Foodie/convert/bundles/batch${String(i).padStart(3,'0')}.types`,cur.map(c=>c.t).join('\n'));i++;cur=[];sz=0};
for(const c of out){if(sz+c.size>350000&&cur.length)flush();cur.push(c);sz+=c.size;}
flush();console.log(i,'batches; biggest types:',out.sort((a,b)=>b.size-a.size).slice(0,5).map(c=>c.t+':'+c.size));
