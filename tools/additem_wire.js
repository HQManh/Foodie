const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Datpt/Cook_Order/';
function rep(f,a,b){const p=B+f;let s=fs.readFileSync(p,'utf8');const nl=s.includes('\r\n')?'\r\n':'\n';if(!s.includes(a))throw new Error('nf '+f+': '+a.slice(0,40));s=s.replace(a,b.replace(/\n/g,nl));fs.writeFileSync(p,s);}
rep('LevelControlCookOrder.cs','\t\t// Rebuilt from the decompiled code: Contains then Remove',
`\t\t// Rebuilt from the decompiled code: adds to the same list field (+0x148) unless it is already there.
\t\tpublic void AddItemMoving(ItemMovingBase itemMoving)
\t\t{
\t\t\tif (!lstItemMovingOnScreen.Contains(itemMoving))
\t\t\t{
\t\t\t\tlstItemMovingOnScreen.Add(itemMoving);
\t\t\t}
\t\t}

\t\t// Rebuilt from the decompiled code: Contains then Remove`);
rep('ItemMovingBase.cs','// TODO(unrecovered): the rest of OnSpawn calls LevelControlCookOrder.AddItemMoving, which is not in the stubs.','LevelControlCookOrder.Ins.AddItemMoving(this);');
rep('ItemMovingBase.cs','// TODO(unrecovered): the pseudocode then calls LevelControlCookOrder.DespawnHighlight, which is private in the stubs.','LevelControlCookOrder.Ins.DespawnHighlight();');
console.log('ok');
