// Usage: node scene_go_components.js <scene.unity> <GameObjectName> ; prints components of every GameObject with that name (and its parent chain names).
const fs = require('fs');
const [file, name] = process.argv.slice(2);
const text = fs.readFileSync(file, 'utf8').split('\r\n').join('\n');
const docs = text.split(/^--- /m).slice(1);
const byId = new Map();
for (const d of docs) {
  const m = d.match(/^!u!(\d+) &(-?\d+)/);
  if (m) byId.set(m[2], { type: m[1], body: d });
}
const classNames = { 1: 'GameObject', 4: 'Transform', 20: 'Camera', 23: 'MeshRenderer', 33: 'MeshFilter', 114: 'MonoBehaviour', 212: 'SpriteRenderer', 223: 'Canvas', 224: 'RectTransform', 225: 'CanvasGroup', 222: 'CanvasRenderer', 114.1: 'x' };
function goName(id) { const g = byId.get(id); const m = g && g.body.match(/m_Name: (.*)/); return m ? m[1] : '?'; }
let shown = 0;
for (const [id, d] of byId) {
  if (d.type !== '1') continue;
  const nm = d.body.match(/m_Name: (.*)/);
  if (!nm || nm[1] !== name) continue;
  const comps = [...d.body.matchAll(/- component: \{fileID: (-?\d+)\}/g)].map(x => x[1]);
  const names = comps.map(c => {
    const o = byId.get(c);
    if (!o) return c + '?';
    if (o.type === '114') {
      const s = o.body.match(/m_Script: \{fileID: (-?\d+), guid: ([0-9a-f]+)/);
      return 'Mono(' + (s ? s[2].slice(0, 6) : '?') + ')';
    }
    return classNames[o.type] || ('type' + o.type);
  });
  // parent chain via transform
  let chain = [];
  const tId = comps.find(c => byId.get(c) && (byId.get(c).type === '4' || byId.get(c).type === '224'));
  let t = tId ? byId.get(tId) : null;
  let guard = 0;
  while (t && guard++ < 8) {
    const f = t.body.match(/m_Father: \{fileID: (-?\d+)\}/);
    if (!f || f[1] === '0') break;
    const pt = byId.get(f[1]);
    if (!pt) break;
    const pg = pt.body.match(/m_GameObject: \{fileID: (-?\d+)\}/);
    chain.push(pg ? goName(pg[1]) : '?');
    t = pt;
  }
  console.log('#' + id + ' ' + name + ' [' + names.join(', ') + '] parents: ' + chain.join(' < '));
  if (++shown >= 40) break;
}
