const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/';
function imp(f,sig,T){
  const p=B+f; let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
  const i=s.indexOf(sig); if(i<0) throw new Error('nf '+f+' '+sig);
  const open=s.indexOf('{',i), close=s.indexOf('}',open);
  const inner=s.slice(open+1,close);
  if(inner.replace(/\s+/g,'')!=='returnnull;') throw new Error('not a null stub: '+sig+' -> '+inner);
  const body=['{','\t\ttry','\t\t{','\t\t\treturn Newtonsoft.Json.JsonConvert.DeserializeObject<'+T+'>(data);','\t\t}','\t\tcatch (System.Exception)','\t\t{','\t\t\treturn null;','\t\t}','\t}'].join(nl);
  s=s.slice(0,open)+body+s.slice(close+1); fs.writeFileSync(p,s);
}
function edit(f,a,b){const p=B+f;let s=fs.readFileSync(p,'utf8');if(!s.includes(a))throw new Error('nf '+f+' '+a);fs.writeFileSync(p,s.replace(a,b));}
imp('CakeOrder.InGame/ServeSlotConfig.cs','private SlotConfig ImportData(string data)','SlotConfig');
imp('CakeOrder.InGame/StackGameplayConfig.cs','private StackConfig ImportData(string data)','StackConfig');
imp('CakeOrder.InGame/InGameHeartRemoteConfig.cs','private HeartConfig ImportData(string data)','HeartConfig');
const g='CakeOrder.CakeOrderSubsystem/GameProgressScenario.cs';
imp(g,'private MechanicFeaturesConfig ImportDataMechanicFeatures(string data)','MechanicFeaturesConfig');
imp(g,'private ProgressScenarioConfig ImportDataProgressScenario(string data)','ProgressScenarioConfig');
imp(g,'private RewardConfig ImportDataRewardConfig(string data)','RewardConfig');
imp(g,'private SpeedUpConfig ImportDataSpeedUpConfig(string data)','SpeedUpConfig');
imp(g,'private ExtraLevelConfig ImportDataExtraLevelConfig(string data)','ExtraLevelConfig');
edit('CakeOrder.InGame/StackGameplayConfig.cs','public StackConfig Config => null;','public StackConfig Config => _config;');
edit('CakeOrder.InGame/InGameHeartRemoteConfig.cs','public HeartConfig Config => null;','public HeartConfig Config => _heartConfig;');
console.log('ok');
