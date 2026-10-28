const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Cook_Order/';
function rep(f,a,b){const p=B+f;let s=fs.readFileSync(p,'utf8');const nl=s.includes('\r\n')?'\r\n':'\n';if(!s.includes(a))throw new Error('nf '+f+': '+a.slice(0,40));s=s.replace(a,b.replace(/\n/g,nl));fs.writeFileSync(p,s);}
rep('LevelControlCookOrder.cs','private void DespawnHighlight()','public void DespawnHighlight()');
rep('ItemMovingBase.cs','// TODO(unrecovered): the rest of Despawn calls LevelControlCookOrder.DespawnHighlight (private in the stubs) and RemoveItemMovingToCheckCanTake (not in the stubs).',
 'LevelControlCookOrder.Ins.DespawnHighlight();\n\t\t\tLevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);');
rep('Level_SimpleBBQ/PlateSkew.cs','// TODO(unrecovered): RemoveItemMovingToCheckCanTake is not defined on LevelControlCookOrder in the installed sources.','LevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);');
rep('Level_SimpleBBQ/SkewItem.cs','// TODO(unrecovered): base despawn plus list and timer cleanup through unnamed IL2CPP helpers.','base.Despawn();\n\t\t\tReset();\n\t\t\tLevelControlCookOrder.Ins.RemoveItemMovingToCheckCanTake(this);');
console.log('ok');
