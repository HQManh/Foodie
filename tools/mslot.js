const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const {n,tname}=require('./vtable.js');
const MOFF=4440220,MSZ=32;
// find the offset of the slot u16 by matching known methods
const idx=n.methods.findIndex((m,i)=>m.name==='RandomeNewIngredient'&&n.types[m.declaring_type]&&n.types[m.declaring_type].name==='LevelControlCookOrder');
console.log('RandomeNewIngredient method index',idx);
for(const o of [24,26,28,30]) console.log('u16@'+o,'=',buf.readUInt16LE(MOFF+idx*MSZ+o));
module.exports={buf,MOFF,MSZ};
