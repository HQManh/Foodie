// Usage (from D:\Unity\Foodie\apk_extract):  node ..\tools\cctor_arrays.js "<path to decompiled .cctor .c file>" [elemCount-override]
// Lists each "new T[N] + RuntimeHelpers.InitializeArray(handle)" in a static constructor, the static-field offset it is stored in,
// and the blob decoded as int32 and float lists.
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^\uFEFF/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'), fdv=sec('fieldDefaultValues'), blob=sec('fieldAndParameterDefaultValueData');
const TD=15704460,TSZ=82;
const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
const dvByField=new Map();for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;dvByField.set(buf.readInt32LE(o),buf.readInt32LE(o+8));}
function resolve(addrHex){
  const v=readU64(parseInt(addrHex,16)-0x100000);const x=Number(v&0xFFFFFFFFn);const kind=x>>>29,idx=(x&0x1FFFFFFF)>>>1;
  if(kind!==4)return null;
  const typeIndex=buf.readInt32LE(fr.offset+idx*8), rel=buf.readInt32LE(fr.offset+idx*8+4);
  const td=byval.get(typeIndex); if(td===undefined)return null;
  const gi=buf.readUInt32LE(TD+td*TSZ+26)+rel;
  const data=dvByField.get(gi); if(data===undefined)return null;
  return {gi,data,name:(n.fields[gi]||{}).name};
}
const file=process.argv[2];
const text=fs.readFileSync(file,'utf8');
const lines=text.split('\n');
const arrays=[];let cur=null;
for(const l of lines){
  let m=l.match(/=\s*FUN_03f5c394\(DAT_[0-9a-f]+,(\d+)\)/); if(m){cur={count:parseInt(m[1])};continue;}
  m=l.match(/InitializeArray\(\w+,DAT_([0-9a-f]{8})/); if(m&&cur){cur.handle=m[1];continue;}
  m=l.match(/\+ 0xb8\)\s*\+\s*(0x[0-9a-f]+|\d+)\)/); 
  if(cur&&cur.handle){let off=null;
    if(m)off=parseInt(m[1]); else if(/\*\*\(undefined8 \*\*\)\(DAT_[0-9a-f]+ \+ 0xb8\)\s*=/.test(l))off=0;
    if(off!==null&&/=/.test(l)){cur.off=off;arrays.push(cur);cur=null;}}
}
for(const a of arrays){
  const r=a.handle?resolve(a.handle):null;
  if(!r){console.log('static +0x'+(a.off||0).toString(16),'count',a.count,'handle',a.handle,'(cannot resolve)');continue;}
  const ints=[],floats=[];for(let i=0;i<a.count;i++){ints.push(buf.readInt32LE(blob.offset+r.data+i*4));floats.push(+buf.readFloatLE(blob.offset+r.data+i*4).toFixed(4));}
  console.log('static +0x'+(a.off||0).toString(16),'count',a.count,'ints',JSON.stringify(ints),'floats',JSON.stringify(floats));
}
