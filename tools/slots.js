const {n,vtable,tname}=require('./vtable.js');
const slot=off=>(off-0x138)/16;
const q=(typeName,offs)=>{const t=n.types.findIndex(x=>x.name===typeName);if(t<0){console.log(typeName,'not found');return;}const v=vtable(t);console.log('==',tname(t),'vtable',v.length);for(const o of offs){const s=slot(o);console.log('  0x'+o.toString(16),'-> slot',s,'=>',s<v.length?v[s]:'(out of range)');}};
q('LevelControlCookOrder',[0x308,0x388,0x488,0x138,0x188,0x218]);
q('LoopRotateCircle',[0x188]);
q('IngredientItem',[0x488,0x188]);
