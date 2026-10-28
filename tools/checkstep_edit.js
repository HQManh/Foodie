const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Cook_Order/LevelControlCookOrder.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('CancelInvoke/Invoke target method name is a string literal'));
if(i<0) throw new Error('not found');
const t=['// The method name is the string literal "CheckStep" (decoded from the metadata): the method re-invokes itself after the delay.',
 'CancelInvoke(nameof(CheckStep));','Invoke(nameof(CheckStep), time);'];
lines.splice(i,1,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
