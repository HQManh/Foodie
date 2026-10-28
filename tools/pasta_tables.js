const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/CakeOrder/InGame/Pasta/PastaPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const nl=raw.includes('\r\n')?'\r\n':'\n'; let s=raw;
const rep=(from,to)=>{ if(!s.includes(from)) throw new Error('nf '+from); s=s.replace(from,to.replace(/\n/g,nl)); };
const ids=['spaghetti-boiled','manicotti-boiled','farfalle-boiled','tomato-milk-sauce','spinach-milk-sauce','cheese-milk-sauce',null,'lettuce-cut',null,'lemon-sliced','bread-grilled','octopus-grilled','shrimp-grilled','clam-grilled','beef-steak-grilled','chicken-grilled','soda-cup','mayonaise','ice','ground-meat-cooked',null,'tomato-large-chopped','apple-cut'];
const intArr=(name,vals)=>`private static readonly int[] ${name} = new int[${vals.length}]\n\t\t{\n${vals.map(v=>'\t\t\t(int)PastaPiece.'+v).join(',\n')}\n\t\t};`;
rep('private static readonly string[] PreparedIds;',
 '// The tables below come from the static constructor; values were read from the metadata (string literals and <PrivateImplementationDetails> field data).\n\t\t// Indexes 6, 8 and 20 are null in the original (those pieces have no prepared id).\n\t\tprivate static readonly string[] PreparedIds = new string[23]\n\t\t{\n'+ids.map(v=>'\t\t\t'+(v===null?'null':JSON.stringify(v))).join(',\n')+'\n\t\t};');
rep('private static readonly int[] Shapes;',intArr('Shapes',['Spaghetti','Manicotti','Farfalle']));
rep('private static readonly int[] Sauces;',intArr('Sauces',['TomatoSauce','SpinachSauce','CheeseSauce']));
rep('private static readonly int[] Mix;',intArr('Mix',['Octopus','Shrimp','Clam','GroundMeat']));
rep('private static readonly int[] CommonToppings;',intArr('CommonToppings',['Lettuce','Lemon','Bread','ChoppedTomato','Apple']));
rep('private static readonly int[] SaladToppings;',intArr('SaladToppings',['Lemon','Bread','Beef','Chicken']));
rep('private static readonly int[] SaladAdditions;',intArr('SaladAdditions',['ChoppedTomato','Apple']));
rep('private static readonly int[] MeatBases;',intArr('MeatBases',['Octopus','Shrimp','Clam','Beef','Chicken','GroundMeat']));
rep('private static readonly int[] MeatToppings;',intArr('MeatToppings',['Lettuce','Lemon','Bread','Mayonaise','ChoppedTomato','Apple']));
fs.writeFileSync(p,s); console.log('ok');
