const fs = require('fs');
const buf = fs.readFileSync('D:/Unity/Foodie/apk_extract/global-metadata.dat');
const start = 34988, count = 48, stride = 48;
const hits = [];
for (let p = 0; p < 0x400; p += 4) {
  const off = buf.readInt32LE(p);
  if (off <= 0x400 || off + (start + count) * stride > buf.length) continue;
  const base = off + start * stride;
  const decl = new Set();
  let ok = true;
  for (let k = 0; k < count; k++) {
    const d = buf.readInt32LE(base + k * stride + 4);
    decl.add(d);
  }
  if (decl.size === 1) hits.push([p, off, [...decl][0]]);
}
console.log(JSON.stringify(hits));
