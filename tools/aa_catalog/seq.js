const b=require('fs').readFileSync('catalog.bin');
const u=o=>b.readUInt32LE(o);
let o=177761-4-8-40; // start a bit earlier
// scan forward printing any [8 bytes][len][ascii] objects
function tryAt(p){ const l=u(p+8); if(l>0&&l<200&&p+12+l<=b.length){ const s=b.slice(p+12,p+12+l); for(const c of s) if(c<32||c>126) return null; return {a:u(p).toString(16),b:u(p+4).toString(16),s:s.toString('latin1'),end:p+12+l}; } return null; }
for(let p=177500;p<178400;p++){ const r=tryAt(p); if(r&&r.a==='21c54'){ console.log(p,r.a,r.b,r.s); p=r.end-1; } }
