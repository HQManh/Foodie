const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const OFF=15704460, SZ=82, N=24208;
const u32=(t,o)=>buf.readUInt32LE(OFF+t*SZ+o);
const u16=(t,o)=>buf.readUInt16LE(OFF+t*SZ+o);
// find offset of method_start (u32) and method_count (u16)
function match(get,len,key,cond){const out=[];for(let o=0;o+len<=SZ;o++){let ok=0,tot=0;for(let t=0;t<N;t+=7){const ty=n.types[t];if(!cond(ty))continue;tot++;if(get(t,o)===key(ty))ok++;}if(tot>50&&ok/tot>0.97)out.push([o,ok,tot]);}return out;}
console.log('method_start u32 @',match(u32,4,t=>t.method_start>>>0,t=>t.method_start>=0));
console.log('method_count u16 @',match(u16,2,t=>t.method_count,t=>true));
console.log('nested_type_count u16 @',match(u16,2,t=>t.nested_type_count,t=>true));
console.log('nested_type_start u32 @',match(u32,4,t=>t.nested_type_start>>>0,t=>t.nested_type_start>=0));
