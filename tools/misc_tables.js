const fs=require('fs');
const base='D:/Unity/Foodie/UnityProject/Assets/';
function edit(p,reps){const raw=fs.readFileSync(p,'utf8');const nl=raw.includes('\r\n')?'\r\n':'\n';let s=raw;
 for(const [from,to] of reps){if(!s.includes(from))throw new Error('nf '+from+' in '+p);s=s.replace(from,to.replace(/\r?\n/g,nl));}fs.writeFileSync(p,s);}
// LevelCoinHistory
const body=fs.readFileSync('D:/Unity/Foodie/tools/coin_body.txt','utf8');
{const p=base+'Plugins/CakeOrder/CakeOrder.Home/LevelCoinHistory.cs';const raw=fs.readFileSync(p,'utf8');const nl=raw.includes('\r\n')?'\r\n':'\n';
 const a='\tpublic static readonly Dictionary<string, int[]> Current;';const b='\tpublic static readonly int[] PastaLegacy;';
 if(!raw.includes(a)||!raw.includes(b))throw new Error('nf coin');
 let s=raw.replace(a+nl+nl+b,'\t// Values come from the static constructor; they were read from the metadata (<PrivateImplementationDetails> field data and string literals).'+nl+body.replace(/\r?\n/g,nl));
 if(s===raw)throw new Error('coin replace failed (spacing)');fs.writeFileSync(p,s);}
edit(base+'Plugins/CakeOrder/CakeOrder/GameFrameRate.cs',[['public static readonly int[] Options;','// Values read from the static constructor data (metadata).\n\tpublic static readonly int[] Options = new int[3] { 30, 60, 120 };']]);
edit(base+'Scripts/Assembly-CSharp/SimpleCheat.cs',[['private static readonly HapticTypes[] Presets = new HapticTypes[9];','// Values read from the static constructor data (metadata), as HapticTypes indexes 0, 4, 7, 5, 6, 8, 1, 2, 3.\n\tprivate static readonly HapticTypes[] Presets = new HapticTypes[9]\n\t{\n\t\tHapticTypes.Selection,\n\t\tHapticTypes.LightImpact,\n\t\tHapticTypes.RigidImpact,\n\t\tHapticTypes.MediumImpact,\n\t\tHapticTypes.HeavyImpact,\n\t\tHapticTypes.SoftImpact,\n\t\tHapticTypes.Success,\n\t\tHapticTypes.Warning,\n\t\tHapticTypes.Failure\n\t};']]);
edit(base+'Plugins/CakeOrder/CakeOrder/MapToolConfig.cs',[
 ['public static readonly float[] DefaultSpeedMultipliers;','// Values read from the static constructor data (metadata).\n\t\tpublic static readonly float[] DefaultSpeedMultipliers = new float[5] { 1f, 1.2f, 1.5f, 1.75f, 2f };'],
 ['public static readonly float[] DefaultSpeedOffsets;','public static readonly float[] DefaultSpeedOffsets = new float[5];']]);
console.log('ok');
