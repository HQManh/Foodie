// Usage: node ..\tools\fieldref.js 91f37a0 91f3830 ...   (run from apk_extract)
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'), fdv=sec('fieldDefaultValues'), blob=sec('fieldAndParameterDefaultValueData'), fld=sec('fields');
for(const a of process.argv.slice(2)){
  const g=parseInt(a.replace(/^(DAT_|0x)/,''),16), v=readU64(g-0x100000);
  const x=Number(v&0xFFFFFFFFn), kind=x>>>29, idx=(x&0x1FFFFFFF)>>>1;
  if(kind!==4){console.log(a,'kind',kind,'idx',idx);continue;}
  const typeIndex=buf.readInt32LE(fr.offset+idx*8), fieldIndex=buf.readInt32LE(fr.offset+idx*8+4);
  const fname=(n.fields[fieldIndex]||{}).name; 
  // default value entry: find by fieldIndex
  let dv=null;for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;if(buf.readInt32LE(o)===fieldIndex){dv={type:buf.readInt32LE(o+4),data:buf.readInt32LE(o+8)};break;}}
  console.log(a,'-> fieldRef',idx,'typeIndex',typeIndex,'fieldIndex',fieldIndex,'name',fname,'default',JSON.stringify(dv));
}
