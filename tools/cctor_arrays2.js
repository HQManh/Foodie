// Usage (from D:\Unity\Foodie\apk_extract):  node ..\tools\cctor_arrays2.js "<decompiled .cctor .c file>"
// For each array built in a static constructor, prints: static offset, count, and either the blob decoded as int32/float
// (InitializeArray) or the element-by-element string literals / constants.
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^\uFEFF/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'), fdv=sec('fieldDefaultValues'), blob=sec('fieldAndParameterDefaultValueData'), sl=sec('stringLiterals'), sld=sec('stringLiteralData');
const TD=15704460,TSZ=82;
const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
const dvByField=new Map();for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;dvByField.set(buf.readInt32LE(o),buf.readInt32LE(o+8));}
const usage=addrHex=>{const v=readU64(parseInt(addrHex,16)-0x100000);if(v===null)return null;const x=Number(v&0xFFFFFFFFn);return {kind:x>>>29,idx:(x&0x1FFFFFFF)>>>1};};
const lit=i=>{const a=buf.readUInt32LE(sl.offset+i*4),b=buf.readUInt32LE(sl.offset+i*4+4);return buf.toString('utf8',sld.offset+a,sld.offset+b);};
function blobOf(addrHex){const u=usage(addrHex);if(!u||u.kind!==4)return null;
  const typeIndex=buf.readInt32LE(fr.offset+u.idx*8), rel=buf.readInt32LE(fr.offset+u.idx*8+4);
  const td=byval.get(typeIndex);if(td===undefined)return null;const gi=buf.readUInt32LE(TD+td*TSZ+26)+rel;const d=dvByField.get(gi);return d===undefined?null:d;}
const text=fs.readFileSync(process.argv[2],'utf8').split('\n');
const arrays=[];let cur=null,curVar=null;
const num=s=>s.startsWith('0x')?parseInt(s,16):parseInt(s,10);
for(let i=0;i<text.length;i++){const l=text[i];
  let m=l.match(/(\w+)\s*=\s*FUN_03f5c394\(DAT_[0-9a-f]+,(0x[0-9a-f]+|\d+)\)/); if(m){cur={count:num(m[2]),items:{}};curVar=m[1];continue;}
  if(!cur)continue;
  m=l.match(/InitializeArray\((\w+),DAT_([0-9a-f]{8})/); if(m){cur.handle=m[2];continue;}
  m=l.match(new RegExp("[*][(]undefined8 [*][)][(]"+curVar+" [+] (0x[0-9a-f]+|[0-9]+)[)] *= *DAT_([0-9a-f]{8})")); if(m){cur.items[(num(m[1])-0x20)/8]="DAT_"+m[2];continue;}
  m=l.match(new RegExp("[*][(]u?int [*][)][(]"+curVar+" [+] (0x[0-9a-f]+|[0-9]+)[)] *= *(-?0x[0-9a-f]+|-?[0-9]+)")); if(m){cur.items[(num(m[1])-0x20)/4]=num(m[2]);continue;}
  m=l.match(/\+ 0xb8\)\s*\+\s*(0x[0-9a-f]+|\d+)\)/); const m0=/\*\*\(undefined8 \*\*\)\(DAT_[0-9a-f]+ \+ 0xb8\)\s*=/.test(l);
  if((m||m0)&&/=/.test(l)&&/\(undefined8 \*\)|\*\*\(undefined8/.test(l)){cur.off=m0?0:num(m[1]);arrays.push(cur);cur=null;}
}
for(const a of arrays){
  const head='static +0x'+(a.off||0).toString(16)+' count '+a.count;
  if(a.handle){const d=blobOf(a.handle);if(d===null){console.log(head,'blob unresolved');continue;}
    const ints=[],fl=[];for(let i=0;i<a.count;i++){ints.push(buf.readInt32LE(blob.offset+d+i*4));fl.push(+buf.readFloatLE(blob.offset+d+i*4).toFixed(4));}
    console.log(head,'ints',JSON.stringify(ints),'floats',JSON.stringify(fl));}
  else{const keys=Object.keys(a.items);const out=[];
    for(const k of keys){const v=a.items[k];if(typeof v==='string'){const u=usage(v.slice(4));out.push(k+': '+(u&&u.kind===5?JSON.stringify(lit(u.idx)):v));}else out.push(k+': '+v);}
    console.log(head,'(element stores)',out.join(' | '));}
}
