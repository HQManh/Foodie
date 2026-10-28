// node ..\tools\cview.js <ClassFullName> [maxLines]   (from apk_extract) -- prints the cleaned .cctor with string literals inlined
const fs=require('fs');
const elf=fs.readFileSync('libil2cpp.so');
const phoff=Number(elf.readBigUInt64LE(0x20)), phentsize=elf.readUInt16LE(0x36), phnum=elf.readUInt16LE(0x38);
const segs=[];for(let i=0;i<phnum;i++){const o=phoff+i*phentsize;if(elf.readUInt32LE(o)!==1)continue;segs.push({vaddr:Number(elf.readBigUInt64LE(o+16)),off:Number(elf.readBigUInt64LE(o+8)),filesz:Number(elf.readBigUInt64LE(o+32))});}
const readU64=rva=>{for(const s of segs){if(rva>=s.vaddr&&rva<s.vaddr+s.filesz)return elf.readBigUInt64LE(s.off+(rva-s.vaddr));}return null;};
const buf=fs.readFileSync('global-metadata.dat');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^\uFEFF/,''));
const sec=nm=>j.data.normalized_result.sections.find(s=>s.name===nm);
const sl=sec('stringLiterals'),sld=sec('stringLiteralData');
const lit=i=>{const a=buf.readUInt32LE(sl.offset+i*4),b=buf.readUInt32LE(sl.offset+i*4+4);return buf.toString('utf8',sld.offset+a,sld.offset+b);};
const cls=process.argv[2],max=parseInt(process.argv[3]||'80');
const root='D:/Unity/Foodie/ExtractedCode/';
let file=null;for(const d of fs.readdirSync(root)){const p=root+d;if(!fs.statSync(p).isDirectory())continue;const f=fs.readdirSync(p).find(x=>x.startsWith(cls+'..cctor_'));if(f){file=p+'/'+f;break;}}
if(!file){console.log('no cctor for',cls);process.exit(0);}
let t=fs.readFileSync(file,'utf8').split('\n').filter(l=>!l.startsWith('//'));
t=t.map(l=>l.replace(/DAT_([0-9a-f]{8})/g,(m,a)=>{const v=readU64(parseInt(a,16)-0x100000);if(v===null)return m;const x=Number(v&0xFFFFFFFFn);if((x>>>29)===5){return JSON.stringify(lit((x&0x1FFFFFFF)>>>1));}return m;}));
t=t.filter(l=>l.trim()&&!/FUN_03f5c2a4|thunk_FUN_03f5d7b8|WARNING|^\s*(long|undefined\d*|ulong|int|uint|float|byte|bool|char)\b[^=]*;$/.test(l)&&!/^\s*}\s*$/.test(l)).map(l=>l.trim());
console.log('== '+cls+' ('+t.length+' lines)');console.log(t.slice(0,max).join('\n'));
