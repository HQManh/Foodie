const {n,vtable,tname}=require('D:/Unity/Foodie/tools/vtable.js');
const slot=off=>(off-0x138)/16;
const q=(typeName,offs)=>{const t=n.types.findIndex(x=>x.name===typeName);if(t<0){console.log(typeName,'not found');return;}const v=vtable(t);console.log('==',tname(t),'vtable',v.length);for(const o of offs){const s=slot(o);console.log('  0x'+o.toString(16),'-> slot',s,'=>',s<v.length?v[s]:'(out of range)');}};
q('DragItem',[0x1b8,0x1c0]);
q('FlexibleDragItem',[0x218,0x220]);
