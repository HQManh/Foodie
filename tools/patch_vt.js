const fs=require('fs');
let s=fs.readFileSync('vtable.js','utf8');
if(!s.includes('MOFF')){
s=s.replace("function vtable(t){","const MOFF=4440220,MSZ=32;\nfunction ownSlots(t){const ty=n.types[t];const m2={};if(ty.method_start<0)return m2;for(let m=ty.method_start;m<ty.method_start+ty.method_count;m++){const sl=buf.readUInt16LE(MOFF+m*MSZ+28);if(sl!==0xFFFF)m2[sl]=n.methods[m].name;}return m2;}\nfunction vtable(t){const own=ownSlots(t);");
s=s.replace("out.push(m?tname(declOf[idx])+'::'+m.name:`usage${usage}:${idx}`);","out.push(m?tname(declOf[idx])+'::'+m.name:(own[i]?tname(t)+'::'+own[i]+' (from method slot field)':`usage${usage}:${idx}`));");
fs.writeFileSync('vtable.js',s);}
