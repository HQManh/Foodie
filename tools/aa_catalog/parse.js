const b=require('fs').readFileSync('catalog.bin');
function str(off){ off-=4; if(off<0||off+4>b.length) return null; const l=b.readUInt32LE(off); if(l<1||l>600||off+4+l>b.length) return null; const s=b.slice(off+4,off+4+l); for(const c of s) if(c<32||c>126) return null; return s.toString('latin1'); }
const recs=[];
for(let i=0;i+8<=b.length;i+=4){ const a=b.readUInt32LE(i), c=b.readUInt32LE(i+4); const sa=str(a), sc=str(c); if(sa&&sc&&a<b.length&&c<b.length&&(sa.includes('.')||sa.length==32)&&(sc.startsWith('Assets/')||sc.includes('/')||sc.includes('.bundle'))) recs.push([i,sa,sc]); }
console.log(recs.length);
console.log(recs.slice(0,12).map(r=>r.join(' | ')).join('\n'));
const alert=recs.filter(r=>/UIPopup-Alert/.test(r[1]+r[2]));console.log('alert',alert);
