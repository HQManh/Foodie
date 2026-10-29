function md4(bytes){
  const rol=(x,n)=>((x<<n)|(x>>>(32-n)))>>>0;
  const len=bytes.length; const padLen=((len+8)>>6<<6)+64; const buf=Buffer.alloc(padLen); Buffer.from(bytes).copy(buf); buf[len]=0x80;
  buf.writeUInt32LE((len*8)>>>0,padLen-8); buf.writeUInt32LE(Math.floor(len*8/4294967296),padLen-4);
  let a=0x67452301,b=0xefcdab89,c=0x98badcfe,d=0x10325476;
  const F=(x,y,z)=>((x&y)|(~x&z))>>>0, G=(x,y,z)=>((x&y)|(x&z)|(y&z))>>>0, H=(x,y,z)=>(x^y^z)>>>0;
  for(let o=0;o<padLen;o+=64){
    const X=[];for(let i=0;i<16;i++)X.push(buf.readUInt32LE(o+i*4));
    let aa=a,bb=b,cc=c,dd=d;
    const r1=[3,7,11,19];for(let i=0;i<16;i++){const k=i;const s=r1[i%4];const t=(a+F(b,c,d)+X[k])>>>0;[a,b,c,d]=[d,rol(t,s),b,c];}
    const r2=[3,5,9,13];const o2=[0,4,8,12,1,5,9,13,2,6,10,14,3,7,11,15];for(let i=0;i<16;i++){const t=(a+G(b,c,d)+X[o2[i]]+0x5a827999)>>>0;[a,b,c,d]=[d,rol(t,r2[i%4]),b,c];}
    const r3=[3,9,11,15];const o3=[0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15];for(let i=0;i<16;i++){const t=(a+H(b,c,d)+X[o3[i]]+0x6ed9eba1)>>>0;[a,b,c,d]=[d,rol(t,r3[i%4]),b,c];}
    a=(a+aa)>>>0;b=(b+bb)>>>0;c=(c+cc)>>>0;d=(d+dd)>>>0;
  }
  const out=Buffer.alloc(16);out.writeUInt32LE(a,0);out.writeUInt32LE(b,4);out.writeUInt32LE(c,8);out.writeUInt32LE(d,12);return out;
}
function fileId(ns,name){const b=Buffer.concat([Buffer.from([0x73,0,0,0]),Buffer.from(ns+name,'utf8')]);return md4(b).readInt32LE(0);}
module.exports={md4,fileId};
if(require.main===module){
 console.log(md4(Buffer.from('abc')).toString('hex'),'(expect a448017aaf21d8525fc10ae87aa6729d)');
 console.log(fileId('Spine.Unity','SkeletonDataAsset'),'(expect 106799970)');
 console.log(fileId('Spine.Unity','SpineAtlasAsset'),'(expect 1497261852)');
}
