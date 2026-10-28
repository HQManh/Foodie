// Reusable: replace the body of methods in a C# file, matched by the signature text.
// const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
// patch(file, [[ 'public static bool Foo(int a)', ['line 1', 'line 2'] ]], {indent: 3, close: '\t\t}'});
// A method body is the block that starts on the line after the signature ("{") and ends at the first line equal to the
// signature's own indentation + "}". The default indentation assumes methods in a nested class (2 tabs); pass opts.methodTabs otherwise.
const fs = require('fs');
function patch(file, edits, opts = {}) {
  const raw = fs.readFileSync(file, 'utf8');
  const cr = raw.includes('\r\n') ? '\r' : '';
  const lines = raw.split('\n');
  const methodTabs = opts.methodTabs !== undefined ? opts.methodTabs : 2;
  const close = '\t'.repeat(methodTabs) + '}';
  const bodyIndent = '\t'.repeat(methodTabs + 1);
  for (const [sig, body] of edits) {
    const i = lines.findIndex(l => l.includes(sig));
    if (i < 0) throw new Error('signature not found: ' + sig);
    if (lines[i + 1].trim() !== '{') throw new Error('no opening brace after: ' + sig);
    let j = i + 2;
    while (j < lines.length && lines[j].replace(/\r$/, '') !== close) j++;
    if (j >= lines.length) throw new Error('no closing brace for: ' + sig);
    lines.splice(i + 2, j - (i + 2), ...body.map(t => bodyIndent + t + cr));
  }
  fs.writeFileSync(file, lines.join('\n'));
}
module.exports = { patch };
