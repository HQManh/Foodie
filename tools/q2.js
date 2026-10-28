const {n,vtable,tname}=require('./vtable.js');
const slot=off=>(off-0x138)/16;
const q=(typeName,offs)=>{const t=n.types.findIndex(x=>x.name===typeName);if(t<0){console.log(typeName,'not found');return;}const v=vtable(t);console.log('==',tname(t),'vtable',v.length);for(const o of offs){const s=slot(o);console.log('  0x'+o.toString(16),'-> slot',s,'=>',s<v.length?v[s]:'(out of range)');}};
q('ItemMovingBase',[0x458,0x308,0x268,0x2e8]);
q('ItemIdleBase',[0x458,0x2e8,0x308,0x268]);
