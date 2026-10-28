const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Cook_Order/';
let p=B+'LevelControlCookOrder.cs', s=fs.readFileSync(p,'utf8'); let nl=s.includes('\r\n')?'\r\n':'\n';
const add=`		// Rebuilt from the decompiled code: Contains then Remove on a list field (+0x148). Taken to be lstItemMovingOnScreen (inferred; the offset is not verified).
		public void RemoveItemMovingToCheckCanTake(ItemMovingBase itemMoving)
		{
			if (lstItemMovingOnScreen.Contains(itemMoving))
			{
				lstItemMovingOnScreen.Remove(itemMoving);
			}
		}

`.replace(/\n/g,nl);
const k='		public void CheckCanTakeItemMoving(';
if(!s.includes(k)) throw new Error('nf');
s=s.replace(k,add+k); fs.writeFileSync(p,s);
p=B+'Level_SimpleBBQ/Skew.cs'; s=fs.readFileSync(p,'utf8');
const t='// TODO(unrecovered): RemoveItemMovingToCheckCanTake is not defined on LevelControlCookOrder in the installed sources.';
if(!s.includes(t)) throw new Error('nf2');
s=s.replace(t,'LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);'); fs.writeFileSync(p,s);
console.log('ok');
