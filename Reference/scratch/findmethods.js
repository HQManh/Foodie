const fs = require('fs');
const buf = fs.readFileSync('D:/Unity/Foodie/apk_extract/global-metadata.dat');
const start = 34988, count = 48, stride = 48;
for (let p = 8; p < 8 + 40 * 8; p += 8) {
  const off = buf.readInt32LE(p), cnt = buf.readInt32LE(p + 4);
  if (off <= 0 || off + (start + count) * stride > buf.length) continue;
  const base = off + start * stride;
  const decl = new Set();
  for (let k = 0; k < count; k++) decl.add(buf.readInt32LE(base + k * stride + 4));
  if (decl.size === 1) console.log('pair at', p, 'offset', off, 'count', cnt, 'declaringType', [...decl][0]);
}
