// Decodes the level designs of each map (from InitManagers.unity) and reports customer type usage (first field of each customer).
const fs = require('fs'), zlib = require('zlib');
const text = fs.readFileSync('D:/Unity/Foodie/UnityProject/Assets/_Production/Map-common_assets/Scenes/InitManagers.unity', 'utf8').split('\r\n').join('\n').split('\n');
function decode(s) {
  if (!s.startsWith('z1_')) return s;
  let b = s.slice(3).replace(/-/g, '+').replace(/_/g, '/');
  b = b.padEnd(Math.ceil(b.length / 4) * 4, '=');
  return zlib.inflateRawSync(Buffer.from(b, 'base64')).toString('utf8');
}
const maps = {};
let mapId = null, inDesigns = false;
for (const line of text) {
  let m = line.match(/^\s*- mapId: (\S+)/);
  if (m) { mapId = maps[m[1]] ? m[1] + '#dup' : m[1]; maps[mapId] = []; inDesigns = false; continue; }
  if (/^\s*levelDesigns:/.test(line)) { inDesigns = true; continue; }
  if (inDesigns) {
    m = line.match(/^\s*- (z1_\S+)/);
    if (m) maps[mapId].push(m[1]);
    else if (!/^\s*- /.test(line)) inDesigns = false;
  }
}
const want = process.argv[2] || 'burger';
const designs = maps[want] || [];
console.log(want, 'levels:', designs.length);
const typeCount = {};
const levelsWith = {};
designs.forEach((d, i) => {
  const customers = decode(d.split('~~')[0]).split('|');
  customers.forEach((c, ci) => {
    const f = c.split(';');
    const type = f[0];
    typeCount[type] = (typeCount[type] || 0) + 1;
    if (type !== '0') (levelsWith[type] = levelsWith[type] || []).push((i + 1) + (f.length > 4 ? '(staff/extra:' + f.slice(4).join(';') + ')' : ''));
  });
});
console.log('customer type counts:', JSON.stringify(typeCount));
for (const [t, lv] of Object.entries(levelsWith)) console.log('type', t, 'in levels:', lv.slice(0, 40).join(', '), lv.length > 40 ? '... (' + lv.length + ' total)' : '');

// lv_metadata per level (fields f0;f1;f2;f3;f4;label) next to the decoded customer count and extra customer fields.
const metaLine = text.find(l => /^\s*lv_metadata: /.test(l));
const meta = metaLine ? metaLine.replace(/^\s*lv_metadata: /, '').split('|') : [];
const rows = [];
designs.slice(0, 60).forEach((d, i) => {
  const customers = decode(d.split('~~')[0]).split('|');
  const extra = customers.map((c, ci) => ({ ci, f: c.split(';') })).filter(x => x.f.length > 4).map(x => '#' + x.ci + ':' + x.f.slice(4).join(';'));
  rows.push('L' + (i + 1) + ' meta=' + (meta[i] || '?') + ' customers=' + customers.length + (extra.length ? ' extra=' + extra.join(',') : ''));
});
console.log(rows.join('\n'));
