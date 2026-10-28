const {buf,MOFF,MSZ}=require('./mslot.js');
const {n,tname}=require('./vtable.js');
const typeName=process.argv[2];
const wanted=(process.argv[3]||'').split(',').filter(Boolean).map(Number);
const t=n.types.findIndex(x=>x.name===typeName);
const chain=[];let cur=t;
const OFF=15704460,SZ=82;
while(cur>=0&&chain.length<8){chain.push(cur);const p=buf.readInt32LE(OFF+cur*SZ+16);if(p<0||p>=n.types.length)break; // parentIndex is a type-table index, not a typedef index
 break;}
// walk by methods: list virtual methods (slot != 0xFFFF) of this type and of types whose names appear in its vtable
const rows=[];
const ty=n.types[t];
for(let m=ty.method_start;m<ty.method_start+ty.method_count;m++){const slot=buf.readUInt16LE(MOFF+m*MSZ+28);if(slot!==0xFFFF)rows.push([slot,n.methods[m].name,m]);}
rows.sort((a,b)=>a[0]-b[0]);
console.log('==',tname(t),'virtual methods declared here (slot, name):');
rows.forEach(r=>console.log(' ',r[0],r[1]));
