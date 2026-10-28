const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/';
patch(B+'LevelBaseCakeOrderAbstract.cs',[
 ['public void StartPlay()',[
  '// Rebuilt from the decompiled code. The original also touches one unidentified member (+0xc0) between the state change and OnStartPlay.',
  'if ((int)PlayState < 4)',
  '{',
  '\tSetPlayState(LevelPlayState.Playing);',
  '\tOnStartPlay();',
  '}']],
 ['public void EndGame()',[
  'if ((int)PlayState < 5)',
  '{',
  '\tSetPlayState(LevelPlayState.Ended);',
  '\tOnEndGame();',
  '}']],
],{methodTabs:1});
patch(B+'LevelPlayLoadAndSetupControl.cs',[
 ['private void ProcessStartPlay()',[
  '// The original also reports the level start to CakeOrderDataTracking; analytics are not wired here.',
  'if (LevelBase != null)',
  '{',
  '\tLevelBase.StartPlay();',
  '}']],
],{methodTabs:1});
// direct set-up entry for running a level scene on its own
const fs=require('fs'); const p=B+'LevelPlayLoadAndSetupControl.cs'; let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
const add=['\t// Not in the original: sets a level up from ready-made data and starts it, for running a level scene without the home/map flow.','\tpublic async UniTask SetUpAndStartDirect(LevelBaseCakeOrderAbstract level, CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)','\t{','\t\tLevelBase = level;','\t\tLevelInitData = initData;','\t\tCurrentLevelRuntimeData = runtimeData;','\t\tBuildCustomerScheduleAndIngredientQueue();','\t\tif (initData.customerSpawnData != null)','\t\t{','\t\t\truntimeData.customerData.SetMaxNumCustomers(initData.customerSpawnData.Length);','\t\t}','\t\tawait level.SetUpLevel(initData, runtimeData);','\t\tProcessStartPlay();','\t}','',''].join(nl);
const k='\tpublic UniTask PlayLevel(MainLevelPlayConfig config)';
if(!s.includes(k)) throw new Error('nf PlayLevel');
s=s.replace(k,add+k); fs.writeFileSync(p,s);
console.log('ok');
