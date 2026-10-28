// node ..\tools\typeinfo.js 9535468 ...   -> for TypeInfo/Il2CppType usage globals, the matching type definition name
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));const n=j.data.normalized_result;
const TD=15704460,TSZ=82;const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
for(const a of process.argv.slice(2)){const v=readU64(parseInt(a,16)-0x100000);if(v===null){console.log(a,"not file-backed (zero-initialized section): cannot be decoded statically");continue;}const x=Number(v&0xFFFFFFFFn);const kind=x>>>29,idx=(x&0x1FFFFFFF)>>>1;
 const td=byval.get(idx);const ty=td!==undefined?n.types[td]:null;
 console.log(a,'kind',kind,'idx',idx,'->',ty?((ty.namespace?ty.namespace+'.':'')+ty.name):'(no matching typedef: generic instantiation or non-type)');}
