const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Utilities.cs';
let lines=fs.readFileSync(p,'utf8').split('\n');
function replaceLine(startsWith, textLines, indent){
  const i=lines.findIndex(l=>l.includes(startsWith));
  if(i<0) throw new Error('not found: '+startsWith);
  lines.splice(i,1,...textLines.map(t=>indent+t+'\r'));
}
// dictionary fields
for (const name of ['fadeTweenDict','delayedCallDict']) {
  const i=lines.findIndex(l=>l.includes('private static Dictionary<List<SpriteRenderer>, Tween> '+name+';'));
  if(i<0) throw new Error('field '+name);
  lines[i]=lines[i].replace(name+';', name+' = new Dictionary<List<SpriteRenderer>, Tween>();');
}
replaceLine('DOTween fade sequence over the list (DOFade, Join/Append, DelayedCallScaled)',[
 '// Rebuilt from the decompiled code and its completion lambda. includeDeactiveOnHyrachy = false skips sprites that are inactive in the hierarchy.',
 'KillFadeListSprite(lstTargetSprRdr);',
 'Sequence sequence = DOTween.Sequence();',
 'foreach (SpriteRenderer sprite in lstTargetSprRdr)',
 '{',
 '\tif (includeDeactiveOnHyrachy || sprite.gameObject.activeInHierarchy)',
 '\t{',
 '\t\tsequence.Join(DoFadeSpriteReturnTween(sprite, targetAlpha, time));',
 '\t}',
 '}',
 'fadeTweenDict[lstTargetSprRdr] = sequence;',
 'delayedCallDict[lstTargetSprRdr] = DelayedCallScaled(time, delegate',
 '{',
 '\tonDone?.Invoke();',
 '\tdelayedCallDict.Remove(lstTargetSprRdr);',
 '\tfadeTweenDict.Remove(lstTargetSprRdr);',
 '});'],'\t\t\t');
replaceLine('kills fade/delayed tweens stored in fadeTweenDict and delayedCallDict',[
 '// Rebuilt from the decompiled code: kill and forget the fade and delayed-call tweens stored for this list.',
 'if (fadeTweenDict.TryGetValue(lstTargetSprRdr, out var fadeTween))',
 '{',
 '\tfadeTween.Kill();',
 '\tfadeTweenDict.Remove(lstTargetSprRdr);',
 '}',
 'if (delayedCallDict.TryGetValue(lstTargetSprRdr, out var delayedTween))',
 '{',
 '\tdelayedTween.Kill();',
 '\tdelayedCallDict.Remove(lstTargetSprRdr);',
 '}'],'\t\t\t');
replaceLine('DOTween fade of each list item and DelayedCallScaled completion',[
 '// Rebuilt from the decompiled code: fade every sprite, then call onDone after time.',
 'foreach (SpriteRenderer sprite in lstTargetSprRdr)',
 '{',
 '\tDoFadeSprite(sprite, targetAlpha, time);',
 '}',
 'DelayedCallScaled(time, delegate',
 '{',
 '\tonDone?.Invoke();',
 '});'],'\t\t\t');
fs.writeFileSync(p,lines.join('\n'));
console.log('ok');
