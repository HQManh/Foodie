const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Utilities.cs';
let lines=fs.readFileSync(p,'utf8').split('\n');
function replacePair(todoStart, retExpect, textLines){
  const i=lines.findIndex(l=>l.includes(todoStart));
  if(i<0) throw new Error('not found: '+todoStart);
  if(!lines[i+1].includes(retExpect)) throw new Error('next line mismatch for '+todoStart+': '+lines[i+1]);
  lines.splice(i,2,...textLines.map(t=>'\t\t\t'+t+'\r'));
}
const note='// Rebuilt from the decompiled code: activate the sprite, DOFade, then the lambda invokes onDone.';
replacePair('DOTween is now in the project (DOTweenModuleSprite.DOFade exists)','return null;',[
 note,
 'targetSprRdr.gameObject.SetActive(true);',
 'return targetSprRdr.DOFade(targetAlpha, time).OnComplete(delegate',
 '{',
 '\tonDone?.Invoke();',
 '});']);
replacePair('DOTweenModuleSprite.DOFade with a TweenCallback and FUN_04d956bc','return null;',[
 note,
 'targetSprRdr.gameObject.SetActive(true);',
 'return targetSprRdr.DOFade(targetAlpha, time).OnComplete(delegate',
 '{',
 '\tonDone?.Invoke();',
 '});']);
replacePair('DOTweenModuleSprite.DOFade with SetEase (FUN_04d95e8c)','return null;',[
 note,
 'targetSprRdr.gameObject.SetActive(true);',
 'return targetSprRdr.DOFade(targetAlpha, time).SetEase(ease).OnComplete(delegate',
 '{',
 '\tonDone?.Invoke();',
 '});']);
fs.writeFileSync(p,lines.join('\n'));
console.log('ok');
