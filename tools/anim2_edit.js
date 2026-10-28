const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Cook_Order/ActionAnim.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('the two animation-name literals compared against animName.name'));
if(i<0) throw new Error('nf'); if(!lines[i+1].includes('return ActionMove.State.MoveIn;')) throw new Error('next '+lines[i+1]);
const t=['// The literals are "IdleItemAppear" and "IdleItemHide" (DAT_09204640 / DAT_09204648, decoded from the metadata).',
 'string clipName = animName.name;',
 'if (clipName == "IdleItemAppear")',
 '{',
 '\treturn ActionMove.State.MoveIn;',
 '}',
 'return (clipName == "IdleItemHide") ? ActionMove.State.MoveOut : ActionMove.State.MoveIn;'];
lines.splice(i,2,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
