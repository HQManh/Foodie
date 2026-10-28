const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/';
function edit(file, reps, usingNeeded){
  const p=B+file; let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
  for(const [from,to] of reps){ if(!s.includes(from)) throw new Error('nf '+from+' in '+file); s=s.replace(from,to.replace(/\n/g,nl)); }
  if(usingNeeded && !s.includes('using '+usingNeeded+';')) s='using '+usingNeeded+';'+nl+s;
  fs.writeFileSync(p,s);
}
const getter=(ind)=>`${ind}{\n${ind}\tLevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;\n${ind}\treturn level != null ? level.InitData : null;\n${ind}}`;
edit('LevelInfo.cs',[
 ['// TODO(unrecovered): resolved through an unidentified singleton chain (DAT_091b4c28/DAT_091b4c30); CakeLevelInitData is not in the stubs.\n\t\tprivate static CakeLevelInitData InitData => null;',
  '// The original reads InitData (+0x38) of the level singleton, reached through a generic static (a method reference in the metadata).\n\t\tprivate static CakeLevelInitData InitData\n\t\t{\n\t\t\tget\n'+getter('\t\t\t').replace(/^/,'')+'\n\t\t}']],'CakeOrder.InGame');
edit('StackModeService.cs',[
 ['private CakeLevelInitData InitData => null; // TODO(unrecovered): read through a singleton chain (DAT_091c4c28 / DAT_091b4c28) with unrecovered types.',
  '// The original reads InitData (+0x38) of the level singleton, reached through a generic static (a method reference in the metadata).\n\t\tprivate CakeLevelInitData InitData\n\t\t{\n\t\t\tget\n'+getter('\t\t\t')+'\n\t\t}']],'CakeOrder.InGame');
console.log('ok');
