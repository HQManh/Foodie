// Usage (from apk_extract): node ..\tools\cctor3.js "<decompiled .cctor .c>"   -- statement-based parser for static array initializers.
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'), fdv=sec('fieldDefaultValues'), blob=sec('fieldAndParameterDefaultValueData'), sl=sec('stringLiterals'), sld=sec('stringLiteralData');
const TD=15704460,TSZ=82;
const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
const dvByField=new Map();for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;dvByField.set(buf.readInt32LE(o),buf.readInt32LE(o+8));}
const usage=h=>{const v=readU64(parseInt(h,16)-0x100000);if(v===null)return null;const x=Number(v&0xFFFFFFFFn);return {kind:x>>>29,idx:(x&0x1FFFFFFF)>>>1};};
const lit=i=>{const a=buf.readUInt32LE(sl.offset+i*4),b=buf.readUInt32LE(sl.offset+i*4+4);return buf.toString('utf8',sld.offset+a,sld.offset+b);};
function blobOf(h){const u=usage(h);if(!u||u.kind!==4)return null;const ti=buf.readInt32LE(fr.offset+u.idx*8),rel=buf.readInt32LE(fr.offset+u.idx*8+4);const td=byval.get(ti);if(td===undefined)return null;const gi=buf.readUInt32LE(TD+td*TSZ+26)+rel;const d=dvByField.get(gi);return d===undefined?null:d;}
const num=s=>/^-?0x/i.test(s)?parseInt(s,16):parseInt(s,10);
// merge into statements
const body=fs.readFileSync(process.argv[2],'utf8').split('\n').filter(l=>!l.startsWith('//')).join(' ').replace(/\s+/g,' ');
const stmts=body.split(/;|\{|\}/).map(s=>s.trim()).filter(Boolean);
const arrays=[];const byVar={};let pend={};
for(const st of stmts){
  let m=st.match(/^(\w+) = FUN_03f5c394\(DAT_[0-9a-f]+,\s*(0x[0-9a-f]+|\d+)\)$/); if(m){byVar[m[1]]={count:num(m[2]),items:{},var:m[1]};continue;}
  m=st.match(/InitializeArray\((\w+),\s*DAT_([0-9a-f]{8})/); if(m&&byVar[m[1]]){byVar[m[1]].handle=m[2];continue;}
  m=st.match(/^\*\(undefined8 \*\)\((\w+) \+ (0x[0-9a-f]+|\d+)\) = DAT_([0-9a-f]{8})$/); if(m&&byVar[m[1]]){byVar[m[1]].items[(num(m[2])-0x20)/8]='DAT_'+m[3];continue;}
  m=st.match(/^\*\(u?int \*\)\((\w+) \+ (0x[0-9a-f]+|\d+)\) = (-?0x[0-9a-f]+|-?\d+)$/); if(m&&byVar[m[1]]){byVar[m[1]].items[(num(m[2])-0x20)/4]=num(m[3]);continue;}
  // pointer into statics
  m=st.match(/^(\w+) = \(undefined8 \*\)\(\*\(long \*\)\(DAT_[0-9a-f]+ \+ 0xb8\) \+ (0x[0-9a-f]+|\d+)\)$/); if(m){pend[m[1]]=num(m[2]);continue;}
  m=st.match(/^(\w+) = \(undefined8 \*\)\(\*\(long \*\)\(DAT_[0-9a-f]+ \+ 0xb8\)\)$/); if(m){pend[m[1]]=0;continue;}
  m=st.match(/^\*(\w+) = (\w+)$/); if(m&&pend[m[1]]!==undefined&&byVar[m[2]]){const a=byVar[m[2]];a.off=pend[m[1]];arrays.push(a);continue;}
  m=st.match(/^\*\*\(long \*\*\)\(DAT_[0-9a-f]+ \+ 0xb8\) = (\w+)$/); if(m&&byVar[m[1]]){const a=byVar[m[1]];a.off=0;arrays.push(a);continue;}
  m=st.match(/^\*\(undefined8 \*\)\(\*\(long \*\)\(DAT_[0-9a-f]+ \+ 0xb8\) \+ (0x[0-9a-f]+|\d+)\) = (\w+)$/); if(m&&byVar[m[2]]){const a=byVar[m[2]];a.off=num(m[1]);arrays.push(a);continue;}
}
arrays.sort((a,b)=>a.off-b.off);
for(const a of arrays){
  const head='static +0x'+a.off.toString(16)+' count '+a.count;
  if(a.handle){const d=blobOf(a.handle);if(d===null){console.log(head,'blob unresolved');continue;}
    const ints=[],fl=[];for(let i=0;i<a.count;i++){ints.push(buf.readInt32LE(blob.offset+d+i*4));fl.push(+buf.readFloatLE(blob.offset+d+i*4).toFixed(4));}
    console.log(head,'ints',JSON.stringify(ints),'floats',JSON.stringify(fl));}
  else{const out=[];for(let i=0;i<a.count;i++){const v=a.items[i];if(v===undefined){out.push(i+': (not stored / default)');continue;}
      if(typeof v==='string'){const u=usage(v.slice(4));out.push(i+': '+(u&&u.kind===5?JSON.stringify(lit(u.idx)):v));}else out.push(i+': '+v);}
    console.log(head,'(element stores) '+out.join(' | '));}
}
