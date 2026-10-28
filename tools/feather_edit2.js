const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKien/UI/NewFearther/UIPopupNewFeather.cs';
const raw=fs.readFileSync(p,'utf8');
const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('reads CakeMapSO int fields at 0x4c/0x50'));
if(i<0) throw new Error('not found');
if(!lines[i+1].includes('return 0;')) throw new Error('next line: '+lines[i+1]);
const t=[
 '// Rebuilt from the decompiled code. The two ints at +0x4c / +0x50 are CakeMapSO.numMainLevels and CakeMapSO.numRequiredLevels (field order from the DLL metadata).',
 'if (mapSO.numRequiredLevels < 1)',
 '{',
 '\treturn mapSO.numMainLevels;',
 '}',
 'return Math.Min(mapSO.numMainLevels, mapSO.numRequiredLevels);'];
lines.splice(i,2,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n'));
console.log('ok');
