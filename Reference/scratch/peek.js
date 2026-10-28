const fs = require('fs');
const b = fs.readFileSync('D:/Unity/Foodie/apk_extract/global-metadata.dat');
const off = b.readUInt32LE(48), size = b.readInt32LE(52);
console.log('methodsOffset', off, 'methodsSize', size, 'bytes', size*36);
for (let i = 0; i < 4; i++) {
  const r = off + i*36;
  const f = []; for (let k=0;k<9;k++) f.push(b.readInt32LE(r+k*4));
  console.log(i, f.join(' '), 'slot', b.readUInt16LE(r+32), 'pc', b.readUInt16LE(r+34));
}
