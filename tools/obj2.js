const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const OFF=15704460,SZ=82,VT=14570956;
const t=n.types.findIndex(x=>x.name==='Object'&&x.namespace==='System');
const s=buf.readUInt32LE(OFF+t*SZ+50);
for(let i=0;i<4;i++){const x=buf.readUInt32LE(VT+(s+i)*4);console.log(i,'0x'+x.toString(16),'idx',x&0x1FFFFFFF,'idx2',x&0xFFFFFFF,'=>',(n.methods[x&0x1FFFFFFF]||{}).name);}
