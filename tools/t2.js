const {n,vtable,tname}=require('./vtable.js');
const t=n.types.findIndex(x=>x.name==='FlexibleDragItem');
const v=vtable(t);[13,14,15,16].forEach(i=>console.log(i,v[i]));
