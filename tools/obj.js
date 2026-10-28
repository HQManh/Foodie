const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const OFF=15704460,SZ=82,VT=14570956;
const t=n.types.findIndex(x=>x.name==='Object'&&x.namespace==='System');
console.log('Object type',t,'method_start',n.types[t].method_start);
for(const o of [46,50,54]){const s=buf.readUInt32LE(OFF+t*SZ+o);console.log('offset',o,'=',s);}
for(const c of [66,68,70,72])console.log('u16@'+c,buf.readUInt16LE(OFF+t*SZ+c));
for(const o of [46,50,54]){const s=buf.readUInt32LE(OFF+t*SZ+o);const e=[];for(let i=0;i<4;i++){const x=buf.readUInt32LE(VT+(s+i)*4);e.push((x&0x1FFFFFFF)+':'+(n.methods[x&0x1FFFFFFF]||{}).name);}console.log('if vtableStart@'+o,e.join(' '));}
