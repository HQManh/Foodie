// node ..\tools\slotq.js TypeName 0x2c8 0x2d8 ...   (from apk_extract) -> method at each vtable offset of the type
const {n,vtable,tname}=require('./vtable.js');
const [tn,...offs]=process.argv.slice(2);
const t=n.types.findIndex(x=>x.name===tn);if(t<0){console.log('type not found',tn);process.exit(0);}
const v=vtable(t);console.log('==',tname(t),'vtable',v.length);
for(const o of offs){const off=parseInt(o,16);const s=(off-0x138)/16;console.log(' ',o,'-> slot',s,'=>',s<v.length?v[s]:'(out of range)');}
