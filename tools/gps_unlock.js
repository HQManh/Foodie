const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.CakeOrderSubsystem/GameProgressScenario.cs';
let s=fs.readFileSync(p,'utf8');
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b); }
// unlock levels: the remote override is ignored, so the defaults apply
rep('public static int RankUnlockLevel => 0;','public static int RankUnlockLevel => DefaultRankUnlockLevel;');
rep('public static int TeamUnlockLevel => 0;','public static int TeamUnlockLevel => DefaultTeamUnlockLevel;');
rep('public static int WeeklyContestUnlockLevel => 0;','public static int WeeklyContestUnlockLevel => DefaultWeeklyContestUnlockLevel;');
fs.writeFileSync(p,s);
patch(p,[
 ['private static int GetRemoteUnlockLevel(string key, int defaultValue)',[
  '// The original reads the level from remote config; remote config is deliberately ignored, so the default applies.',
  'return defaultValue;']],
 ['private static UnlockConditionType GetUnlockConditionType(CookOrderMechanicType mechanicType)',[
  '// Table read from the game binary (indexed by CookOrderMechanicType): Base, Combo, BoosterShow, CosmeticShop, LevelPath, PvP,',
  '// Achievement, IAPShop, Leaderboard, Team.',
  'switch (mechanicType)',
  '{',
  'case CookOrderMechanicType.Base:',
  '\treturn UnlockConditionType.Always_Unlocked;',
  'case CookOrderMechanicType.Combo:',
  '\treturn UnlockConditionType.Unknown;',
  'case CookOrderMechanicType.CosmeticShop:',
  'case CookOrderMechanicType.PvP:',
  'case CookOrderMechanicType.Achievement:',
  '\treturn UnlockConditionType.Coming_Soon;',
  'case CookOrderMechanicType.BoosterShow:',
  'case CookOrderMechanicType.LevelPath:',
  'case CookOrderMechanicType.IAPShop:',
  'case CookOrderMechanicType.Leaderboard:',
  'case CookOrderMechanicType.Team:',
  '\treturn UnlockConditionType.Passed_Map_Level;',
  'default:',
  '\tthrow new ArgumentException(string.Format("Unknown mechanic type: {0}", mechanicType), "mechanicType");',
  '}']],
 ['private int GetMapLevelPassRequiredToUnlock(CookOrderMechanicType mechanicType)',[
  '// Field offsets in ProgressScenarioConfig: 0x1c lvUnlockShop, 0x20 lvUnlockLvPath, 0x24 lvShowBooster.',
  'switch (mechanicType)',
  '{',
  'case CookOrderMechanicType.BoosterShow:',
  '\treturn _progressScenarioConfig.lvShowBooster;',
  'case CookOrderMechanicType.LevelPath:',
  '\treturn _progressScenarioConfig.lvUnlockLvPath;',
  'case CookOrderMechanicType.IAPShop:',
  '\treturn _progressScenarioConfig.lvUnlockShop;',
  'case CookOrderMechanicType.Leaderboard:',
  '\treturn RankUnlockLevel;',
  'case CookOrderMechanicType.Team:',
  '\treturn TeamUnlockLevel;',
  'default:',
  '\tthrow new ArgumentException(string.Format("No level requirement for mechanic type: {0}", mechanicType), "mechanicType");',
  '}']],
 ['public bool IsMechanicAvailable(CookOrderMechanicType mechanicType)',[
  'UnlockConditionType condition = GetUnlockConditionType(mechanicType);',
  'if (condition == UnlockConditionType.Always_Unlocked)',
  '{',
  '\treturn true;',
  '}',
  'if (condition != UnlockConditionType.Passed_Map_Level)',
  '{',
  '\treturn false;',
  '}',
  '(int map, int level) highest = _progressDataAccess.GetHighestMapAndLevelIndexPlayable();',
  'int required = GetMapLevelPassRequiredToUnlock(mechanicType);',
  '// Past the first map everything counts as passed.',
  'return highest.map >= 1 || required <= highest.level + 1;']],
 ['private bool IsReachedLevelInFirstMap(int levelRequired)',[
  'if (levelRequired <= 1)',
  '{',
  '\treturn true;',
  '}',
  '(int map, int level) highest = _progressDataAccess.GetHighestMapAndLevelIndexPlayable();',
  'return highest.map >= 1 || levelRequired <= highest.level + 1;']],
],{methodTabs:1});
console.log('ok');
