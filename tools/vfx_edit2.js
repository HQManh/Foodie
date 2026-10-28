const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKienPack/Particle/VFXComboControl.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('the localized text is produced by CakeOrder.Localization.CakeLocalization.Get'));
if(i<0) throw new Error('nf'); if(!lines[i+1].includes('return null;')) throw new Error('next '+lines[i+1]);
const t=['// Rebuilt from the decompiled code: the fallback is the level config\'s desc; the table literal is "UI_Common" (decoded from the metadata).',
 'string fallback = levelConfigs[level].desc;',
 'if (level >= LocLevelTexts.Length)',
 '{',
 '\treturn fallback;',
 '}',
 'return CakeOrder.Localization.CakeLocalization.Get("UI_Common", LocLevelTexts[level], fallback);'];
lines.splice(i,2,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
