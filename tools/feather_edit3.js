const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKien/UI/NewFearther/UIPopupNewFeather.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':''; let lines=raw.split('\n');
function rep(prefix,text){const i=lines.findIndex(l=>l.includes(prefix));if(i<0)throw new Error('nf '+prefix);lines.splice(i,1,...text.map(t=>'\t\t\t'+t+cr));}
rep('the first value yielded by the original iterator is read from a static field (DAT_09535468)',['// The first value the original iterator yields is read from a static string global (DAT_09535468); it is taken to be string.Empty (a blank first entry).','yield return string.Empty;']);
rep('txtFeatherTitle and txtFeatureDesc are set to a static string (DAT_09535468)',['// Both texts are set to the static string global DAT_09535468, taken to be string.Empty.','if (txtFeatherTitle != null)','{','\ttxtFeatherTitle.text = string.Empty;','}','if (txtFeatureDesc != null)','{','\ttxtFeatureDesc.text = string.Empty;','}']);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
