// A TextMeshProUGUI script reference on a GameObject that has a MeshRenderer is really the 3D TextMeshPro component.
// Rewrites those references to TextMeshPro (3D). Usage: node fix_tmp_3d.js [apply]
const fs = require('fs'), path = require('path');
const APPLY = process.argv[2] === 'apply';
const root = 'D:/Unity/Foodie/UnityProject/Assets';
const backup = 'D:/Unity/Foodie/backup_tmp3d/';
const UGUI = 'f4688fdb7df04437aeb418b961361dc5';
const TMP3D = '9541d86e2fd84c1d9990edf0852d74ab';
let filesChanged = 0, fixed = 0;
function walk(d) {
  for (const e of fs.readdirSync(d, { withFileTypes: true })) {
    const p = path.join(d, e.name);
    if (e.isDirectory()) walk(p);
    else if (/\.(unity|prefab)$/.test(p)) handle(p);
  }
}
function handle(p) {
  let text = fs.readFileSync(p, 'utf8');
  if (!text.startsWith('%YAML') || !text.includes(UGUI)) return;
  const crlf = text.includes('\r\n');
  const t = text.split('\r\n').join('\n');
  const parts = t.split(/^(?=--- )/m);
  const types = new Map(); // fileID -> type
  const goComps = new Map(); // go fileID -> comp ids
  for (const part of parts) {
    const m = part.match(/^--- !u!(\d+) &(-?\d+)/);
    if (!m) continue;
    types.set(m[2], m[1]);
    if (m[1] === '1') goComps.set(m[2], [...part.matchAll(/- component: \{fileID: (-?\d+)\}/g)].map(x => x[1]));
  }
  const targets = new Set();
  for (const comps of goComps.values()) {
    if (comps.some(c => types.get(c) === '23')) { // has MeshRenderer
      for (const c of comps) if (types.get(c) === '114') targets.add(c);
    }
  }
  let changed = 0;
  const out = parts.map(part => {
    const m = part.match(/^--- !u!114 &(-?\d+)/);
    if (!m || !targets.has(m[1])) return part;
    if (!part.includes('guid: ' + UGUI)) return part;
    changed++;
    return part.replace('guid: ' + UGUI, 'guid: ' + TMP3D);
  });
  if (changed) {
    fixed += changed; filesChanged++;
    console.log(path.relative(root, p).split(path.sep).join('/'), changed);
    if (APPLY) {
      const rel = path.relative(root, p);
      const dst = backup + rel;
      fs.mkdirSync(path.dirname(dst), { recursive: true });
      if (!fs.existsSync(dst)) fs.copyFileSync(p, dst);
      let res = out.join('');
      fs.writeFileSync(p, crlf ? res.split('\n').join('\r\n') : res);
    }
  }
}
walk(root);
console.log((APPLY ? 'APPLIED' : 'dry-run'), 'files:', filesChanged, 'components:', fixed);
