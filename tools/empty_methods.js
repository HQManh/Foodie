// Lists classes whose methods are empty shells (compiled-DLL stubs) under the CakeOrder plugin folders.
const fs = require('fs'), path = require('path');
const root = 'D:/Unity/Foodie/UnityProject/Assets/';
const dirs = ['Plugins/CakeOrder/CakeOrder.InGame', 'Plugins/CakeOrder/CakeOrder', 'Plugins/CakeOrder/CakeOrder.CakeOrderSubsystem'];
const out = [];
function walk(d) {
  if (!fs.existsSync(d)) return;
  for (const e of fs.readdirSync(d, { withFileTypes: true })) {
    const p = path.join(d, e.name);
    if (e.isDirectory()) walk(p);
    else if (p.endsWith('.cs')) {
      const t = fs.readFileSync(p, 'utf8').split('\r\n').join('\n');
      const sig = /^\t(?:public|private|protected|internal)[^\n=;{}]*\)\n\t\{\n((?:\t\t[^\n]*\n)*?)\t\}/gm;
      let m, empty = 0, total = 0;
      const names = [];
      while ((m = sig.exec(t))) {
        total++;
        const body = m[1].split('\n').filter(l => l.trim() && !l.trim().startsWith('//')).join('');
        if (!body || /^return (default(\([^)]*\))?|null|false|true|0|0f);?$/.test(body.trim())) {
          empty++;
          names.push(m[0].split('\n')[0].trim().replace(/\s+/g, ' ').slice(0, 80));
        }
      }
      if (empty >= 3) out.push({ file: p.split(path.sep).join('/').replace(root, ''), empty, total, names });
    }
  }
}
dirs.forEach(d => walk(root + d));
out.sort((a, b) => b.empty - a.empty);
for (const o of out.slice(0, 40)) console.log(o.empty + '/' + o.total, o.file.split('/').pop());
console.log('classes with >=3 empty methods:', out.length, ' total empty methods:', out.reduce((s, o) => s + o.empty, 0));
fs.writeFileSync('D:/Unity/Foodie/tools/empty_methods.json', JSON.stringify(out, null, 1));
