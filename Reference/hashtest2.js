const crypto=require('crypto');
const n="Coffee.UIParticle.UIParticle", want=324551289;
function murmur3(str,seed){const d=Buffer.from(str,'utf8');let h=seed>>>0;const c1=0xcc9e2d51,c2=0x1b873593;let i=0;for(;i+4<=d.length;i+=4){let k=d.readUInt32LE(i);k=Math.imul(k,c1);k=(k<<15)|(k>>>17);k=Math.imul(k,c2);h^=k;h=(h<<13)|(h>>>19);h=(Math.imul(h,5)+0xe6546b64)>>>0;}let k=0;const r=d.length&3;if(r>=3)k^=d[i+2]<<16;if(r>=2)k^=d[i+1]<<8;if(r>=1){k^=d[i];k=Math.imul(k,c1);k=(k<<15)|(k>>>17);k=Math.imul(k,c2);h^=k;}h^=d.length;h^=h>>>16;h=Math.imul(h,0x85ebca6b);h^=h>>>13;h=Math.imul(h,0xc2b2ae35);h^=h>>>16;return h|0;}
function crc32(buf){let c,crc=0xFFFFFFFF;for(const b of buf){c=(crc^b)&0xFF;for(let k=0;k<8;k++)c=c&1?0xEDB88320^(c>>>1):c>>>1;crc=(crc>>>8)^c;}return (crc^0xFFFFFFFF)|0;}
const cands={};
for(const alg of ['md5','sha1','sha256']){const h=crypto.createHash(alg).update(n,'utf8').digest();cands[alg+'_le']=h.readInt32LE(0);cands[alg+'_be']=h.readInt32BE(0);}
cands.crc32=crc32(Buffer.from(n));
for(const s of [0,1,42,0x9e3779b9]) cands['murmur_'+s]=murmur3(n,s);
for(const [k,v] of Object.entries(cands)) if(v===want) console.log('MATCH',k,v);
console.log('done; tested',Object.keys(cands).length);
