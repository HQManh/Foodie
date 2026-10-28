const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Utilities.cs';
let lines=fs.readFileSync(p,'utf8').split('\n');
const rep=(n,expectStart,text)=>{ if(!lines[n-1].includes(expectStart)) throw new Error('line '+n+' mismatch: '+lines[n-1].slice(0,80)); lines[n-1]=text; };
rep(317,'then calls ShakingTutorial',
"\t\t\t\t\t// Rebuilt from the decompiled code: the original replays the tutorial shake after onTut.\r\n\t\t\t\t\tShakingTutorial(tfToShake, posStrength, rotStrength, duration, vibrato);");
rep(324,'DOTween is now in the project (Sequence, DOShakeRotation',
"\t\t\t// Rebuilt from the decompiled code; the decompiler drops the float arguments, so strengths (pos, pos, 0) / (0, 0, rot), duration and vibrato are mapped by position.\r\n\t\t\t// 90f randomness and Ease 6 (OutQuad) are from the constants in the call.\r\n\t\t\tSequence sequence = DOTween.Sequence();\r\n\t\t\tsequence.Append(tfToShake.DOShakeRotation(duration, new Vector3(0f, 0f, rotStrength), vibrato, 90f).SetEase(Ease.OutQuad));\r\n\t\t\tsequence.Join(tfToShake.DOShakePosition(duration, new Vector3(posStrength, posStrength, 0f), vibrato, 90f).SetEase(Ease.OutQuad));");
rep(329,'DOTween.Kill(tfToShake) now maps',
"\t\t\t// Rebuilt from the decompiled code: the original resets local position and rotation to static Vector3 / Quaternion values; zero and identity are assumed.\r\n\t\t\tDOTween.Kill(tfToShake);\r\n\t\t\ttfToShake.localPosition = Vector3.zero;\r\n\t\t\ttfToShake.localRotation = Quaternion.identity;");
fs.writeFileSync(p,lines.join('\n'));
console.log('ok');
