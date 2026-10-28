const fs=require('fs');
const buf=fs.readFileSync('global-metadata.dat');
const {n,vtable,tname}=require('./vtable.js');
const OFF=15704460,SZ=82,VT=14570956;
const find=nm=>n.types.findIndex(x=>x.name===nm);
for(const nm of ['FlexibleDragItem','DragItem','DragItemBase']){
  const t=find(nm); if(t<0){console.log(nm,'not found');continue;}
  const s=buf.readUInt32LE(OFF+t*SZ+50), c=buf.readUInt16LE(OFF+t*SZ+68);
  const par=buf.readInt32LE(OFF+t*SZ+16);
  console.log('==',tname(t),'type',t,'vtableStart',s,'count',c,'parentIdx',par);
  const v=vtable(t);
  for(let i=10;i<=16&&i<c;i++){const raw=buf.readUInt32LE(VT+(s+i)*4);console.log(' slot',i,'raw 0x'+raw.toString(16),'=>',v[i]);}
}
