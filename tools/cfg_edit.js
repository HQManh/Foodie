const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKien/UI/NewFearther/UINewFeartherConfig.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
function rep(prefix,text){const i=lines.findIndex(l=>l.includes(prefix));if(i<0)throw new Error('nf '+prefix);if(!lines[i+1].includes('return null;'))throw new Error('next '+lines[i+1]);lines.splice(i,2,...text.map(t=>'\t\t\t'+t+cr));}
rep('the key prefix literal (DAT_0920bed0)',['// The prefix literal is "Restaurant-" (DAT_0920bed0, decoded from the metadata).','return "Restaurant-" + mapId;']);
rep('formats the enum value with a format literal (DAT_092039c8)',['// The format literal is "Grid-{0}" (DAT_092039c8, decoded from the metadata).','return string.Format("Grid-{0}", type);']);
rep('formats the enum value with a format literal (DAT_0920d3e8)',['// The format literal is "Slot-{0}" (DAT_0920d3e8, decoded from the metadata).','return string.Format("Slot-{0}", status);']);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
