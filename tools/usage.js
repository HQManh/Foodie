const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
// parse ELF64 program headers
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];
for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;const type=elf.readUInt32LE(o);if(type!==1)continue;
 segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32)),memsz:Number(elf.readBigUInt64LE(o+40))});}
function readU64(rva){for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;}
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const buf=fs.readFileSync('global-metadata.dat');
const sec=name=>n.sections.find(s=>s.name===name);
const sl=sec('stringLiterals'), sld=sec('stringLiteralData');
function strLit(i){const o=sl.offset+i*8;const len=buf.readUInt32LE(o), idx=buf.readUInt32LE(o+4);return buf.toString('utf8',sld.offset+idx,sld.offset+idx+len);}
module.exports={readU64,strLit,segs,n};
if(require.main===module){
 for(const a of process.argv.slice(2)){const g=parseInt(a,16);const rva=g-0x100000;const v=readU64(rva);
  if(v===null){console.log(a,'-> not in file');continue;}
  const x=Number(v&0xFFFFFFFFn);const kind=x>>>29;const idx=(x&0x1FFFFFFF)>>>1;
  let desc='';
  if(kind===5){try{desc=JSON.stringify(strLit(idx).slice(0,120));}catch(e){desc='(string literal read failed)';}}
  console.log(a,'-> raw 0x'+v.toString(16),'kind',kind,'index',idx,desc);}
}
