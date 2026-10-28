// node ..\tools\audit_literals.js   (run from D:\Unity\Foodie\apk_extract)
// For every "literal recovered by guess" in the project, checks that the guessed string appears among the string literals of the
// decompiled code for the same (outermost) class. Prints the guesses that are NOT found.
const fs = require('fs'), path = require('path'), cp = require('child_process');
const elf = fs.readFileSync('libil2cpp.so');
const phoff = Number(elf.readBigUInt64LE(0x20)), phentsize = elf.readUInt16LE(0x36), phnum = elf.readUInt16LE(0x38);
const segs = [];
for (let i = 0; i < phnum; i++) { const o = phoff + i * phentsize; if (elf.readUInt32LE(o) !== 1) continue; segs.push({ vaddr: Number(elf.readBigUInt64LE(o + 16)), off: Number(elf.readBigUInt64LE(o + 8)), filesz: Number(elf.readBigUInt64LE(o + 32)) }); }
const readU64 = rva => { for (const s of segs) { if (rva >= s.vaddr && rva < s.vaddr + s.filesz) return elf.readBigUInt64LE(s.off + (rva - s.vaddr)); } return null; };
const buf = fs.readFileSync('global-metadata.dat');
const j = JSON.parse(fs.readFileSync('il2cpp_full.json', 'utf8').replace(/^\uFEFF/, ''));
const sec = nm => j.data.normalized_result.sections.find(s => s.name === nm);
const sl = sec('stringLiterals'), sld = sec('stringLiteralData');
const lit = i => { const a = buf.readUInt32LE(sl.offset + i * 4), b = buf.readUInt32LE(sl.offset + i * 4 + 4); return buf.toString('utf8', sld.offset + a, sld.offset + b); };
const litCache = {};
function litOf(h) { if (h in litCache) return litCache[h]; const v = readU64(parseInt(h, 16) - 0x100000); let r = null; if (v !== null) { const x = Number(v & 0xFFFFFFFFn); if ((x >>> 29) === 5) r = lit((x & 0x1FFFFFFF) >>> 1); } return litCache[h] = r; }

// index decompiled files by name prefix
const root = 'D:/Unity/Foodie/ExtractedCode/';
const files = [];
for (const d of fs.readdirSync(root)) { const p = root + d; if (!fs.statSync(p).isDirectory()) continue; for (const f of fs.readdirSync(p)) if (f.endsWith('.c')) files.push(p + '/' + f); }
const classLits = {};
function litsForPrefix(prefix) {
  if (classLits[prefix]) return classLits[prefix];
  const set = new Set();
  for (const f of files) { if (!path.basename(f).startsWith(prefix)) continue; const t = fs.readFileSync(f, 'utf8'); for (const m of t.matchAll(/DAT_([0-9a-f]{8})/g)) { const s = litOf(m[1]); if (s !== null) set.add(s); } }
  return classLits[prefix] = set;
}
const hits = cp.execSync('grep -rn "literal recovered by guess" --include=*.cs D:/Unity/Foodie/UnityProject/Assets', { encoding: 'utf8', maxBuffer: 1e8 }).split('\n').filter(Boolean);
const results = { found: 0, notfound: [], skipped: 0 };
const nsCache = {};
function classInfo(file) {
  if (nsCache[file]) return nsCache[file];
  const t = fs.readFileSync(file, 'utf8');
  const ns = (t.match(/^\s*namespace\s+([\w.]+)/m) || [])[1] || '';
  const cls = (t.match(/^\s*(?:public |internal |private |protected |static |sealed |abstract |partial |readonly )*(?:class|struct|enum|interface)\s+(\w+)/m) || [])[1];
  return nsCache[file] = { ns, cls };
}
for (const h of hits) {
  const m = h.match(/^(.*?\.cs):(\d+):(.*)$/s); if (!m) continue;
  const file = m[1], line = m[2], text = m[3];
  const { ns, cls } = classInfo(file); if (!cls) { results.skipped++; continue; }
  const prefix = (ns ? ns + '.' : '') + cls + '.';
  const set = litsForPrefix(prefix);
  const before = text.split('/* literal recovered by guess */')[0];
  const strs = [...before.matchAll(/"((?:[^"\\]|\\.)*)"/g)].map(x => x[1].replace(/\\"/g, '"').replace(/\\\\/g, '\\').replace(/\\n/g, '\n').replace(/\\t/g, '\t'));
  if (!strs.length) { results.skipped++; continue; }
  // the guess comment is attached to the last string(s) before it; test the last quoted string
  const g = strs[strs.length - 1];
  if (set.has(g)) results.found++;
  else results.notfound.push({ where: path.relative('D:/Unity/Foodie/UnityProject/Assets', file).replace(/\\/g, '/') + ':' + line, guess: g, classLits: set.size });
}
console.log('guesses checked:', results.found + results.notfound.length, ' confirmed:', results.found, ' NOT FOUND:', results.notfound.length, ' skipped:', results.skipped);
for (const r of results.notfound) console.log(r.where, JSON.stringify(r.guess).slice(0, 90), '(class has ' + r.classLits + ' literals)');

// identifier-like guesses that were not found: show the class's literals
const seen = new Set();
console.log('\n--- identifier-like guesses not found (with the class literals) ---');
for (const r of results.notfound) {
  if (!/^[A-Za-z_][\w\-\. ]{0,24}$/.test(r.guess) || /\s{2}|^\w+ \w+ \w+/.test(r.guess)) continue;
  const f = path.join('D:/Unity/Foodie/UnityProject/Assets', r.where.split(':')[0]);
  const { ns, cls } = classInfo(f); const set = litsForPrefix((ns ? ns + '.' : '') + cls + '.');
  const key = r.where.split(':')[0]; if (seen.has(key + r.guess)) continue; seen.add(key + r.guess);
  console.log(r.where, JSON.stringify(r.guess), '=> class literals:', JSON.stringify([...set].filter(s => s.length < 60).slice(0, 14)));
}
