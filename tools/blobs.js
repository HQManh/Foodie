// node ..\tools\blobs.js <handleHex:count> ...    decode field-RVA blobs as int32 lists
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'), fdv=sec('fieldDefaultValues'), blob=sec('fieldAndParameterDefaultValueData');
const TD=15704460,TSZ=82;const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
const dv=new Map();for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;dv.set(buf.readInt32LE(o),buf.readInt32LE(o+8));}
for(const arg of process.argv.slice(2)){const [h,c]=arg.split(':');const v=readU64(parseInt(h,16)-0x100000);const x=Number(v&0xFFFFFFFFn);const idx=(x&0x1FFFFFFF)>>>1;
 const ti=buf.readInt32LE(fr.offset+idx*8),rel=buf.readInt32LE(fr.offset+idx*8+4);const td=byval.get(ti);const gi=buf.readUInt32LE(TD+td*TSZ+26)+rel;const d=dv.get(gi);
 const out=[];for(let i=0;i<parseInt(c);i++)out.push(buf.readInt32LE(blob.offset+d+i*4));console.log(h,JSON.stringify(out));}
