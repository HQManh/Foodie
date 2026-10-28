const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/';
function edit(file, reps){
  const p=B+file; let s=fs.readFileSync(p,'utf8');
  for(const [from,to,all] of reps){
    if(!s.includes(from)) throw new Error('nf '+from+' in '+file);
    s = all ? s.split(from).join(to) : s.replace(from,to);
  }
  fs.writeFileSync(p,s);
}
const note='// The separator literal is "-flex-" (decoded from the metadata; it was previously guessed as "@").';
edit('FlexibleId.cs',[['private const string Separator = "@"; /* literal recovered by guess */', note+'\n\t\tprivate const string Separator = "-flex-";']]);
edit('FlexiblePieceId.cs',[['stringBuilder.Append("@" /* literal recovered by guess */);','stringBuilder.Append("-flex-");']]);
edit('FlexibleKFC.cs',[['"@" /* literal recovered by guess */,','"-flex-",']]);
edit('BurgerOrderStrategy.cs',[['BurgerPieceTable.BurgerBaseId + "@" /* literal recovered by guess */','BurgerPieceTable.BurgerBaseId + "-flex-"',true]]);
edit('BurgerPieceTable.cs',[['ChickenBaseId + "@" /* literal recovered by guess */','ChickenBaseId + "-flex-"',true]]);
edit('IceCreamScoopOrder.cs',[['// "@" matches the separator used by FlexibleId.','// "-flex-" matches the separator used by FlexibleId.'],['stringBuilder.Append("@");','stringBuilder.Append("-flex-");']]);
edit('FlexibleBurger.cs',[['string text = id + "_" /* literal recovered by guess */;','string text = id + "-flex-";']]);
console.log('ok');
