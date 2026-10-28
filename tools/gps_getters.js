const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.CakeOrderSubsystem/GameProgressScenario.cs';
let s=fs.readFileSync(p,'utf8');
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b); }
rep('public ProgressScenarioConfig ProgressScenarioConfig => null;','public ProgressScenarioConfig ProgressScenarioConfig => _progressScenarioConfig;');
rep('public RewardConfig RewardConfig => null;','public RewardConfig RewardConfig => _rewardConfig;');
rep('public SpeedUpConfig SpeedUpConfig => null;','public SpeedUpConfig SpeedUpConfig => _speedUpConfig;');
rep('public LiveOpsButtonUnlockConfig LiveOpsButtonUnlockConfig => null;','public LiveOpsButtonUnlockConfig LiveOpsButtonUnlockConfig => _liveOpsButtonUnlockConfig;');
rep('public ExtraLevelConfig ExtraLevelConfig => null;','public ExtraLevelConfig ExtraLevelConfig => _extraLevelConfig;');
rep('public ComboMechanicParams ComboMechanicParams => null;','public ComboMechanicParams ComboMechanicParams => _comboMechanicParams;');
const nl=s.includes('\r\n')?'\r\n':'\n';
rep('private CakeOrderDatabaseSO Database => null;',[
 '// The original falls back to a generic static holder that is not decoded; any loaded database asset is used instead.',
 'private CakeOrderDatabaseSO Database',
 '{',
 '\tget',
 '\t{',
 '\t\tif (_database != null)',
 '\t\t{',
 '\t\t\treturn _database;',
 '\t\t}',
 '\t\tCakeOrderDatabaseSO[] loaded = Resources.FindObjectsOfTypeAll<CakeOrderDatabaseSO>();',
 '\t\treturn loaded.Length > 0 ? loaded[0] : null;',
 '\t}',
 '}'].join(nl));
fs.writeFileSync(p,s); console.log('ok');
