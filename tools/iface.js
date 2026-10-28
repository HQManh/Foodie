const {buf,MOFF,MSZ}=require('./mslot.js');
const {n,tname}=require('./vtable.js');
for(const nm of (process.argv.slice(2))){
  n.types.forEach((ty,ti)=>{ if(ty.name!==nm||ty.method_start<0)return;
    const rows=[];for(let m=ty.method_start;m<ty.method_start+ty.method_count;m++){const sl=buf.readUInt16LE(MOFF+m*MSZ+28);rows.push([sl,n.methods[m].name]);}
    console.log('==',tname(ti),'(type',ti+')');rows.forEach(r=>console.log('  ',r[0]===0xFFFF?'-':r[0],r[1]));});
}
