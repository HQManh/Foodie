const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const OFF=15704460, SZ=82, VT=14570956;
const u32=(t,o)=>buf.readUInt32LE(OFF+t*SZ+o), u16=(t,o)=>buf.readUInt16LE(OFF+t*SZ+o);
// method index -> declaring type
const declOf=new Array(n.methods.length);
n.types.forEach((ty,ti)=>{if(ty.method_start>=0)for(let m=ty.method_start;m<ty.method_start+ty.method_count;m++)declOf[m]=ti;});
const tname=t=>{const ty=n.types[t];return (ty.namespace?ty.namespace+'.':'')+ty.name;};
const MOFF=4440220,MSZ=32;
function ownSlots(t){const ty=n.types[t];const m2={};if(ty.method_start<0)return m2;for(let m=ty.method_start;m<ty.method_start+ty.method_count;m++){const sl=buf.readUInt16LE(MOFF+m*MSZ+28);if(sl!==0xFFFF)m2[sl]=n.methods[m].name;}return m2;}
function vtable(t){const own=ownSlots(t);const s=u32(t,50),c=u16(t,68);const out=[];for(let i=0;i<c;i++){const e=buf.readUInt32LE(VT+(s+i)*4);const usage=e>>>29,idx=(e&0x1FFFFFFF)>>>1;if(e===0){out.push(null);continue;}const m=usage===3?n.methods[idx]:null;out.push(m?tname(declOf[idx])+'::'+m.name:(own[i]?tname(t)+'::'+own[i]+' (from method slot field)':`usage${usage}:${idx}`));}return out;}
module.exports={n,vtable,tname};
if(require.main===module){
const name=process.argv[2];
const t=n.types.findIndex(x=>x.name===name);
console.log('type',t,tname(t),'vtable count',u16(t,68));
const v=vtable(t);
const slots=(process.argv[3]||'').split(',').filter(Boolean).map(Number);
v.slice(0,6).forEach((x,i)=>console.log(i,x));
slots.forEach(s=>console.log('slot',s,'=>',v[s]));
}
