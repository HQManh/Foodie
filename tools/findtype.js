const {n,tname}=require('./vtable.js');
const nm=process.argv[2];
n.types.forEach((t,i)=>{if(t.name===nm){const imgs=n.images.filter(im=>i>=im.type_start&&i<im.type_start+im.type_count).map(im=>im.name);console.log(i,tname(i),'image',imgs.join(','),'methods',t.method_count);}});
