const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder/CakeLevelInitData.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
const block=['\t// Inferred from game code that reads emotion.percents and passes it to SetEmotionThresholds(int[]). Not verified.','\tpublic EmotionThresholds emotion;','','\t[System.Serializable]','\tpublic class EmotionThresholds','\t{','\t\tpublic int[] percents;','\t}','',''].join(nl);
if(!s.includes(block)) throw new Error('nf block');
s=s.replace(block,'');
// move to the end of the field list (after customData) so the earlier fields keep the offsets the decompile reads
const anchor='\tpublic Dictionary<string, object> customData;'+nl;
if(!s.includes(anchor)) throw new Error('nf anchor');
s=s.replace(anchor,anchor+nl+'\t// Kept after the original fields so their offsets match the decompile.'+nl+block.replace(/\r?\n\r?\n$/,nl));
s=s.replace('public bool IsFullData => false;','public bool IsFullData => mapSO != null;');
fs.writeFileSync(p,s);
patch(p,[
 ['public ToolUpgradeStat GetToolUpgrade(string toolId)',['if (!string.IsNullOrEmpty(toolId) && toolUpgrades != null && toolUpgrades.TryGetValue(toolId, out var stat))','{','\treturn stat;','}','return default(ToolUpgradeStat);']],
 ['public int GetToolLevel(string toolId)',['return GetToolUpgrade(toolId).level;']],
 ['public int GetOrderPrice(string encodedRecipe)',['return orderPricer != null ? orderPricer.GetOrderPrice(encodedRecipe) : 0;']],
],{methodTabs:1});
console.log('ok');
