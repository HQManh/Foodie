const b=require('fs').readFileSync('catalog.bin');
const u=o=>b.readUInt32LE(o);
// try decode object at offset: find first plausible [len][ascii] within 16 bytes
function dec(o){ for(let d=0;d<=12;d+=4){ const l=u(o+d); if(l>0&&l<400&&o+d+4+l<=b.length){ const s=b.slice(o+d+4,o+d+4+l); let ok=true; for(const c of s) if(c<32||c>126){ok=false;break;} if(ok) return {pre:[...Array(d/4).keys()].map(i=>u(o+i*4).toString(16)),s:s.toString('latin1')}; } } return null; }
const N=Math.floor((0x4c58-0x24)/8);
console.log('entries',N);
for(let i=0;i<14;i++){ const k=u(0x24+i*8), v=u(0x24+i*8+4); console.log(i,'K',k.toString(16),JSON.stringify(dec(k)),'| V',v.toString(16),JSON.stringify(dec(v))); }
