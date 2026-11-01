const fs=require('fs');const b=fs.readFileSync('catalog.bin');
const u=o=>b.readUInt32LE(o);
function strAt(o){ if(o<0||o+4>b.length) return null; const l=u(o); if(l<1||l>400||o+4+l>b.length) return null; const s=b.slice(o+4,o+4+l); for(const c of s) if(c<32||c>126) return null; return s.toString('latin1'); }
const map={};let n=0;
for(let p=0;p+20<b.length;p++){
  // [ptr][0][0x21c54][self=p][len][name]
  if(u(p+8)!==0x21c54||u(p+12)!==p) continue; // self pointer check
  const ptr=u(p); const g=strAt(ptr-4)||strAt(ptr); const name=strAt(p+16);
  if(g&&/^[0-9a-f]{32}$/.test(g)&&name){ map[g]=name; n++; }
}
console.log('pairs',n);
fs.writeFileSync('guid_to_address.json',JSON.stringify(map,null,1));
console.log(map['0e98057f5f813cb47bb03c0d4ad71bc7'],map['e32c254f904a5fb46b9dd178020828a9']);
