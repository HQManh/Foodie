// Finds every placeholder shader ("DummyShaderTextExporter") anywhere under Assets and the materials that still use it.
const fs = require('fs'), path = require('path');
const root = 'D:/Unity/Foodie/UnityProject/Assets';
const BS = String.fromCharCode(92);
const dummies = new Map();
function walk(d, cb) { for (const e of fs.readdirSync(d, { withFileTypes: true })) { const p = path.join(d, e.name); if (e.isDirectory()) walk(p, cb); else cb(p); } }
walk(root, p => {
  if (!p.endsWith('.shader')) return;
  const t = fs.readFileSync(p, 'utf8');
  if (!t.includes('DummyShaderTextExporter')) return;
  const m = fs.existsSync(p + '.meta') && fs.readFileSync(p + '.meta', 'utf8').match(/guid: ([0-9a-f]{32})/);
  if (m) dummies.set(m[1], { path: p.split(BS).join('/').replace(root + '/', ''), name: (t.match(/Shader "([^"]+)"/) || [])[1], mats: [] });
});
walk(root, p => {
  if (!p.endsWith('.mat')) return;
  const m = fs.readFileSync(p, 'utf8').match(/m_Shader: \{fileID: \d+, guid: ([0-9a-f]{32})/);
  if (m && dummies.has(m[1])) dummies.get(m[1]).mats.push(path.basename(p));
});
const used = [...dummies.values()].filter(d => d.mats.length).sort((a, b) => b.mats.length - a.mats.length);
console.log('placeholder shaders:', dummies.size, 'used by materials:', used.length);
for (const d of used) console.log(String(d.mats.length).padStart(3), d.name, '|', d.path, '| e.g.', d.mats.slice(0, 2).join(', '));
