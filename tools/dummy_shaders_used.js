// Lists extracted placeholder shaders ("DummyShaderTextExporter") in Assets/Shader that are still referenced by materials.
const fs = require('fs'), path = require('path');
const root = 'D:/Unity/Foodie/UnityProject/Assets';
const dir = root + '/Shader'; // (also scans every other folder below)
const dummies = [];
for (const f of fs.readdirSync(dir)) {
  if (!f.endsWith('.shader')) continue;
  const t = fs.readFileSync(path.join(dir, f), 'utf8');
  if (!t.includes('DummyShaderTextExporter')) continue;
  const meta = fs.readFileSync(path.join(dir, f + '.meta'), 'utf8').match(/guid: ([0-9a-f]{32})/);
  const name = (t.match(/Shader "([^"]+)"/) || [])[1];
  dummies.push({ f, guid: meta[1], name, mats: [] });
}
const byGuid = new Map(dummies.map(d => [d.guid, d]));
function walk(d) {
  for (const e of fs.readdirSync(d, { withFileTypes: true })) {
    const p = path.join(d, e.name);
    if (e.isDirectory()) walk(p);
    else if (p.endsWith('.mat')) {
      const m = fs.readFileSync(p, 'utf8').match(/m_Shader: \{fileID: \d+, guid: ([0-9a-f]{32})/);
      if (m && byGuid.has(m[1])) byGuid.get(m[1]).mats.push(e.name);
    }
  }
}
walk(root);
const used = dummies.filter(d => d.mats.length).sort((a, b) => b.mats.length - a.mats.length);
console.log('placeholder shaders:', dummies.length, ' still used by materials:', used.length);
for (const d of used) console.log(String(d.mats.length).padStart(4), d.name, '(' + d.f + ') e.g.', d.mats.slice(0, 2).join(', '));
