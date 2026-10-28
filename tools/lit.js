// Usage (run from D:\Unity\Foodie\apk_extract):  node ..\tools\lit.js 91fe860 92267b0 ...
// Resolves a Ghidra "DAT_xxxxxxxx" metadata-usage global to its string literal (kind 5) from global-metadata.dat.
// Ghidra address = RVA + 0x100000. The slot's initial value is (usage kind << 29) | (index << 1) | 1 in the ELF image.
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];
for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;
 segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^\uFEFF/,''));
const sec=nm=>j.data.normalized_result.sections.find(s=>s.name===nm);
const sl=sec('stringLiterals'), sld=sec('stringLiteralData');
const lit=i=>{const a=buf.readUInt32LE(sl.offset+i*4),b=buf.readUInt32LE(sl.offset+i*4+4);return buf.toString('utf8',sld.offset+a,sld.offset+b);};
const kinds={1:'TypeInfo',2:'Il2CppType',3:'MethodDef',4:'FieldInfo',5:'StringLiteral',6:'MethodRef'};
for(const a of process.argv.slice(2)){
  const g=parseInt(a.replace(/^(DAT_|0x)/,''),16), v=readU64(g-0x100000);
  if(v===null){console.log(a,'-> not in file');continue;}
  const x=Number(v&0xFFFFFFFFn), kind=x>>>29, idx=(x&0x1FFFFFFF)>>>1;
  console.log(a,'->',kinds[kind]||('kind'+kind),idx, kind===5?JSON.stringify(lit(idx)):'');
}
