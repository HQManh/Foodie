const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/LevelBaseCakeOrderAbstract.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
const rep=(from,to)=>{ if(!s.includes(from)) throw new Error('nf '+from); s=s.replace(from,to.replace(/\n/g,nl)); };
// constructor-created members (the constructor allocates these; the stubs left them null)
rep('public OrderPricingCalculator OrderPricingCalculator { get; private set; }','public OrderPricingCalculator OrderPricingCalculator { get; private set; } = new OrderPricingCalculator();');
rep('private Queue<BoosterRuntimeData> _pendingBoosters;','private Queue<BoosterRuntimeData> _pendingBoosters = new Queue<BoosterRuntimeData>();');
rep('private readonly Dictionary<BoosterType, bool> _boosterUsable;','private readonly Dictionary<BoosterType, bool> _boosterUsable = new Dictionary<BoosterType, bool>();');
rep('public bool IsLevelSetupComplete => false;','public bool IsLevelSetupComplete => (int)PlayState > 0;');
rep('public InGameBackgroundsControl BackgroundControl => null;','public InGameBackgroundsControl BackgroundControl => _backgroundControl;');
// SetUpLevel: drop the manual AsyncStateMachine attribute and make it a real async method
rep('\t[AsyncStateMachine(typeof(_003CSetUpLevel_003Ed__75))]\n\tpublic UniTask SetUpLevel(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)','\tpublic async UniTask SetUpLevel(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)');
fs.writeFileSync(p,s);
// bodies
patch(p,[
 ['private void SetPlayState(LevelPlayState next)',[
  '// Rebuilt from the decompiled code: the state cannot go backwards once playing (value 4) has been reached.',
  'LevelPlayState previous = PlayState;',
  'if (previous != next && ((int)previous < 4 || previous <= next))',
  '{',
  '\tPlayState = next;',
  '\tthis.onPlayStateChanged?.Invoke(previous, next);',
  '}']],
],{methodTabs:1});
// SetUpLevel body (the body after "async UniTask SetUpLevel" has the stub's IL comments and "return default(UniTask);")
{ let t=fs.readFileSync(p,'utf8'); const nl2=t.includes('\r\n')?'\r\n':'\n';
  const sig='\tpublic async UniTask SetUpLevel(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)'+nl2+'\t{';
  const i=t.indexOf(sig); if(i<0) throw new Error('nf setup sig');
  const end=t.indexOf(nl2+'\t}'+nl2,i); const body=[
   '\t\t// Rebuilt from the decompiled state machine. The original awaits only the background control\'s SetUp.',
   '\t\tif (IsLevelSetupComplete)','\t\t{','\t\t\treturn;','\t\t}',
   '\t\tPreSetUp();',
   '\t\tInitData = initData;','\t\tRuntimeData = runtimeData;',
   '\t\t// The object at +0x48 is the OrderPricingCalculator; its first field (+0x10) is set from initData.restaurantParams (+0xc0).',
   '\t\tOrderPricingCalculator.SetUp(initData.restaurantParams);',
   '\t\tif (_backgroundControl != null)','\t\t{','\t\t\tawait _backgroundControl.SetUp(initData.levelMetadata.weatherEffect);','\t\t}',
   '\t\tUnityEngine.Debug.Log("Level setup complete");',
   '\t\tSetPlayState(LevelPlayState.Setup);'].join(nl2);
  t=t.slice(0,i)+sig+nl2+body+t.slice(end);
  fs.writeFileSync(p,t); }
console.log('ok');
