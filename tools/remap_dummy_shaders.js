// Re-points materials from placeholder shaders (Assets/Shader/*, "DummyShaderTextExporter") to a real shader of the same name found elsewhere
// in the project (e.g. the Spine runtime). Usage: node remap_dummy_shaders.js [apply] [namePrefix]   (default prefix: Spine/)
const fs = require('fs'), path = require('path');
const APPLY = process.argv.includes('apply');
const prefix = process.argv.find((a, i) => i > 1 && a !== 'apply') || 'Spine/';
const root = 'D:/Unity/Foodie/UnityProject/';
const assets = root + 'Assets';
const backup = 'D:/Unity/Foodie/backup_dummy_shaders/';
const BS = String.fromCharCode(92);
function walk(d, cb) {
  let es; try { es = fs.readdirSync(d, { withFileTypes: true }); } catch (e) { return; }
  for (const e of es) { const p = path.join(d, e.name); if (e.isDirectory()) walk(p, cb); else cb(p); }
}
function nameOf(t) { const m = t.match(/^\s*Shader\s+"([^"]+)"/m); return m ? m[1] : null; }
function guidOf(p) { const m = fs.existsSync(p + '.meta') && fs.readFileSync(p + '.meta', 'utf8').match(/^guid:\s*([0-9a-f]{32})/m); return m ? m[1] : null; }
const dummy = new Map(); // guid -> name
const real = new Map();  // name -> {guid, path}
for (const base of [assets, root + 'Packages', root + 'Library/PackageCache']) {
  walk(base, p => {
    if (!p.endsWith('.shader')) return;
    const t = fs.readFileSync(p, 'utf8');
    const n = nameOf(t); const g = guidOf(p);
    if (!n || !g) return;
    if (t.includes('DummyShaderTextExporter')) dummy.set(g, n);
    else if (!real.has(n)) real.set(n, { guid: g, path: p.split(BS).join('/').replace(root, '') });
  });
}
const map = new Map();
for (const [g, n] of dummy) if (n.startsWith(prefix) && real.has(n)) map.set(g, real.get(n).guid);
console.log('placeholder shaders with prefix', prefix, ':', [...dummy.values()].filter(n => n.startsWith(prefix)).length, ' with a real counterpart:', map.size);
for (const [g, to] of map) console.log(' ', dummy.get(g), '->', [...real.values()].find(r => r.guid === to).path);
let files = 0, refs = 0;
walk(assets, p => {
  if (!/\.(mat|asset|prefab|unity)$/.test(p)) return;
  const t = fs.readFileSync(p, 'utf8');
  if (!t.startsWith('%YAML')) return;
  let changed = false;
  const out = t.replace(/m_Shader: \{fileID: (\d+), guid: ([0-9a-f]{32}), type: 3\}/g, (all, f, g) => {
    if (!map.has(g)) return all;
    changed = true; refs++;
    return 'm_Shader: {fileID: 4800000, guid: ' + map.get(g) + ', type: 3}';
  });
  if (changed) {
    files++;
    if (APPLY) {
      const rel = p.split(BS).join('/').replace(root, '');
      const dst = backup + rel;
      fs.mkdirSync(path.dirname(dst), { recursive: true });
      if (!fs.existsSync(dst)) fs.copyFileSync(p, dst);
      fs.writeFileSync(p, out);
    }
  }
});
console.log(APPLY ? 'APPLIED' : 'dry-run', 'files:', files, 'refs:', refs);
