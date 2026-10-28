const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/CakeOrder/InGame/Pasta/PastaPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('the four base-id literals (DAT_09220b38'));
if(i<0) throw new Error('nf');
const expect=['switch ((int)dish)','{','case 1:','case 2:','case 3:','case 4:','default:','return null;','}'];
for(let k=0;k<expect.length;k++) if(lines[i+1+k].trim()!==expect[k]) throw new Error('mismatch at '+k+': '+lines[i+1+k]);
const t=['// The four base ids are literals decoded from the metadata: DAT_09220b38 "pasta", DAT_09221e60 "salad", DAT_0921f418 "meat-food-with-topping", DAT_09222f48 "soda".',
 'switch ((int)dish)','{','case 1:','\treturn "pasta";','case 2:','\treturn "salad";','case 3:','\treturn "meat-food-with-topping";','case 4:','\treturn "soda";','default:','\treturn null;','}'];
// indentation: first line at 3 tabs; switch contents relative
const out=t.map((x,idx)=>{ let ind='\t\t\t'; if(idx>=2 && idx<t.length-1) ind+= (x==='{'||x==='}')?'':'\t'; return ind+x+cr;});
// fix: opening and closing braces of switch at 3 tabs, cases at 4 tabs, returns at 5
const fixed=[];
for(const x of t){ fixed.push(x); }
const L=[];
L.push('\t\t\t'+t[0]+cr); L.push('\t\t\t'+t[1]+cr); L.push('\t\t\t{'+cr);
const body=t.slice(3,t.length-1);
for(const b of body){ L.push((b.startsWith('\t')?'\t\t\t\t\t':'\t\t\t\t')+b.replace(/^\t/,'')+cr); }
L.push('\t\t\t}'+cr);
lines.splice(i,10,...L);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
