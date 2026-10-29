const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/StationGroupView.cs',[
 ['public virtual void OnProcessStart(ExecutionContext ctx)',[
  '// Rebuilt from the decompiled code: play the view for the process duration when asked to; otherwise just show it.',
  '// (The decompile calls the virtual at vtable +0x178, taken to be Play(float), with the context\'s duration.)',
  'if (ctx.playAnimation)',
  '{',
  '\tPlay(ctx.duration);',
  '}',
  'else',
  '{',
  '\tgameObject.SetActive(true);',
  '}']],
 ['public virtual void OnProcessComplete()',[
  '// The decompile calls the virtual at vtable +0x188, the slot after Play, taken to be Stop().',
  'Stop();']],
],{methodTabs:2});
console.log('ok');
