const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKienPack/Particle/VFXComboControl.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
let i=lines.findIndex(l=>l.includes('the original constructor also sets this to a static string (DAT_091f6cf8)'));
if(i<0) throw new Error('nf1');
lines[i]='\t\t// The constructor sets this to the literal "!" (DAT_091f6cf8, decoded from the metadata).'+cr;
// next lines: [SerializeField] then field
const j=lines.findIndex((l,k)=>k>i&&l.includes('private string additionalText;'));
if(j<0) throw new Error('nf2');
lines[j]=lines[j].replace('private string additionalText;','private string additionalText = "!";');
i=lines.findIndex(l=>l.includes('ten localization keys (DAT_092195a0..DAT_092195e8) are not recoverable'));
if(i<0) throw new Error('nf3');
if(!lines[i+1].includes('LocLevelTexts = new string[10];')) throw new Error('nf4 '+lines[i+1]);
lines.splice(i,2,
 '\t\t// The ten localization keys are literals set in the static constructor (decoded from the metadata, in index order).'+cr,
 '\t\tprivate static readonly string[] LocLevelTexts = new string[10]'+cr,
 '\t\t{'+cr,
 '\t\t\t"combo_nice",'+cr,
 '\t\t\t"combo_good",'+cr,
 '\t\t\t"combo_great",'+cr,
 '\t\t\t"combo_wow",'+cr,
 '\t\t\t"combo_amazing",'+cr,
 '\t\t\t"combo_perfect",'+cr,
 '\t\t\t"combo_beautiful",'+cr,
 '\t\t\t"combo_bravo",'+cr,
 '\t\t\t"combo_excellent",'+cr,
 '\t\t\t"combo_unbelievable"'+cr,
 '\t\t};'+cr);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
