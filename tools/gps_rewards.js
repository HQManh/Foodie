const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.CakeOrderSubsystem/GameProgressScenario.cs',[
 ['public int GetLevelToUnlockLiveOpsButton(LiveOpsButtonType buttonType)',[
  'if (_liveOpsButtonUnlockConfig == null)',
  '{',
  '\treturn 0;',
  '}',
  'switch (buttonType)',
  '{',
  'case LiveOpsButtonType.Login7Days:',
  '\treturn _liveOpsButtonUnlockConfig.login7Days;',
  'case LiveOpsButtonType.DailyReward:',
  '\treturn _liveOpsButtonUnlockConfig.dailyReward;',
  'case LiveOpsButtonType.RemoveAds:',
  '\treturn _liveOpsButtonUnlockConfig.removeAds;',
  'case LiveOpsButtonType.StarterPack:',
  '\treturn _liveOpsButtonUnlockConfig.starterPack;',
  'default:',
  '\treturn 0;',
  '}']],
 ['public bool IsLiveOpsButtonUnlocked(LiveOpsButtonType buttonType)',[
  'return IsReachedLevelInFirstMap(GetLevelToUnlockLiveOpsButton(buttonType));']],
 ['public bool IsExtraLevel(string mapId, int levelIndex)',[
  'CakeMapSO mapSO = Database != null ? Database.GetMapSO(mapId) : null;',
  'return mapSO != null && mapSO.numRequiredLevels > 0 && mapSO.numRequiredLevels <= levelIndex;']],
 ['public (float, float) GetWinRewardMultipliers(string mapId, int levelIndex)',[
  '// Not an extra level (or no config): both multipliers are 1. Otherwise the config\'s two multipliers, floored at 0.',
  'if (_extraLevelConfig == null || !IsExtraLevel(mapId, levelIndex))',
  '{',
  '\treturn (1f, 1f);',
  '}',
  'return (Mathf.Max(0f, _extraLevelConfig.gemMul), Mathf.Max(0f, _extraLevelConfig.goldMul));']],
],{methodTabs:1});
console.log('ok');
