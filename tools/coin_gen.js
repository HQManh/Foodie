const fs=require('fs');process.chdir('D:/Unity/Foodie/apk_extract');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^\uFEFF/,''));
const n=j.data.normalized_result;const sec=nm=>n.sections.find(s=>s.name===nm);
const fr=sec('fieldRefs'),fdv=sec('fieldDefaultValues'),blob=sec('fieldAndParameterDefaultValueData'),sl=sec('stringLiterals'),sld=sec('stringLiteralData');
const TD=15704460,TSZ=82;const byval=new Map();for(let t=0;t<24208;t++)byval.set(buf.readInt32LE(TD+t*TSZ+8),t);
const dv=new Map();for(let k=0;k<fdv.count;k++){const o=fdv.offset+k*12;dv.set(buf.readInt32LE(o),buf.readInt32LE(o+8));}
const usage=h=>{const v=readU64(parseInt(h,16)-0x100000);const x=Number(v&0xFFFFFFFFn);return {kind:x>>>29,idx:(x&0x1FFFFFFF)>>>1};};
const lit=h=>{const i=usage(h).idx;const a=buf.readUInt32LE(sl.offset+i*4),b=buf.readUInt32LE(sl.offset+i*4+4);return buf.toString('utf8',sld.offset+a,sld.offset+b);};
const ints=(h,c)=>{const u=usage(h);const ti=buf.readInt32LE(fr.offset+u.idx*8),rel=buf.readInt32LE(fr.offset+u.idx*8+4);const td=byval.get(ti);const gi=buf.readUInt32LE(TD+td*TSZ+26)+rel;const d=dv.get(gi);const o=[];for(let i=0;i<c;i++)o.push(buf.readInt32LE(blob.offset+d+i*4));return o;};
const fmt=a=>{const rows=[];for(let i=0;i<a.length;i+=10)rows.push('\t\t\t'+a.slice(i,i+10).join(', '));return rows.join(',\n');};
const entries=[['9218650','91f3848'],['9218ea8','91f3880'],['9223888','91f3950'],['9220b38','91f3840']];
let out='\tpublic static readonly Dictionary<string, int[]> Current = new Dictionary<string, int[]>\n\t{\n';
out+=entries.map(([k,h])=>'\t\t{\n\t\t\t'+JSON.stringify(lit(k))+',\n\t\t\tnew int[100]\n\t\t\t{\n'+fmt(ints(h,100)).replace(/^\t\t\t/gm,'\t\t\t\t')+'\n\t\t\t}\n\t\t}').join(',\n');
out+='\n\t};\n\n\tpublic static readonly int[] PastaLegacy = new int[100]\n\t{\n'+fmt(ints('91f3938',100)).replace(/^\t\t\t/gm,'\t\t')+'\n\t};';
fs.writeFileSync('D:/Unity/Foodie/tools/coin_body.txt',out);
console.log('keys:',entries.map(e=>lit(e[0])).join(', '));
