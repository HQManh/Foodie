const fs = require('fs');
const buf = fs.readFileSync('D:/Unity/Foodie/apk_extract/global-metadata.dat');
const start = 34988, count = 48, stride = 36;
const hits = [];
for (let p = 0; p < 0x400; p += 4) {
  const off = buf.readUInt32LE(p);
  if (off <= 0x400 || off + (start + count) * stride > buf.length) continue;
  const base = off + start * stride;
  const decl = new Set();
  for (let k = 0; k < count; k++) decl.add(buf.readInt32LE(base + k * stride + 4));
  if (decl.size === 1) hits.push({hdr: p, off, decl: [...decl][0]});
}
console.log(JSON.stringify(hits));
