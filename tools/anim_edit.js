const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Utilities.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
function rep(prefix,text){const i=lines.findIndex(l=>l.includes(prefix));if(i<0)throw new Error('not found: '+prefix);lines.splice(i,1,...text.map(t=>'\t\t\t'+t+cr));}
rep('when runner is null the pseudocode records the call through unnamed helpers',[
 '// The message literal is "MonoBehaviour runner is required to start coroutine." (decoded from the metadata).',
 '// The original builds an exception-like object with this message; logging it as an exception is inferred.',
 'UnityEngine.Debug.LogException(new ArgumentException("MonoBehaviour runner is required to start coroutine."));']);
rep('DelayedCallScaled completion (DOTween), Animation play path and the error message string (DAT_091fbb58)',[
 '// Rebuilt from the decompiled code and its two lambdas. Messages decoded from the metadata.',
 'if (animation == null || animationClip == null)',
 '{',
 '\tUnityEngine.Debug.LogError("Animation or clip is null.");',
 '\treturn;',
 '}',
 'animation.gameObject.SetActive(true);',
 'DelayedCallScaled(delay, delegate',
 '{',
 '\tanimation.gameObject.SetActive(true);',
 '\tif (animation.GetClip(animationClip.name) == null)',
 '\t{',
 '\t\tanimation.AddClip(animationClip, animationClip.name);',
 '\t}',
 '\tAnimationState state = animation[animationClip.name];',
 '\tif (state != null)',
 '\t{',
 '\t\tstate.wrapMode = (loop ? WrapMode.Loop : WrapMode.Default);',
 '\t\tstate.speed = speed;',
 '\t\tanimation.Play(animationClip.name);',
 '\t\tDelayedCallScaled(animationClip.length / speed, delegate',
 '\t\t{',
 '\t\t\tonDone?.Invoke();',
 '\t\t});',
 '\t}',
 '});']);
rep('DelayedCallScaled completion and Animation.GetState (named) with the error message string (DAT_091fbb50)',[
 '// Rebuilt from the decompiled code and its two lambdas. Messages decoded from the metadata.',
 'if (animation == null || string.IsNullOrEmpty(animName) || animation[animName] == null)',
 '{',
 '\tUnityEngine.Debug.LogError("Animation or animName is invalid.");',
 '\treturn;',
 '}',
 'animation.gameObject.SetActive(true);',
 'DelayedCallScaled(delay, delegate',
 '{',
 '\tanimation.gameObject.SetActive(true);',
 '\tAnimationState state = animation[animName];',
 '\tif (state != null)',
 '\t{',
 '\t\tstate.wrapMode = (loop ? WrapMode.Loop : WrapMode.Default);',
 '\t\tstate.speed = speed;',
 '\t\tanimation.Play(animName);',
 '\t\tDelayedCallScaled(length / speed, delegate',
 '\t\t{',
 '\t\t\tonDone?.Invoke();',
 '\t\t});',
 '\t}',
 '});']);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
