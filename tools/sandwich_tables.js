const fs=require('fs');
function edit(p,reps){
  const raw=fs.readFileSync(p,'utf8'); const nl=raw.includes('\r\n')?'\r\n':'\n'; let s=raw;
  for(const [from,to] of reps){ if(!s.includes(from)) throw new Error('nf '+from); s=s.replace(from,to.replace(/\n/g,nl)); }
  fs.writeFileSync(p,s);
}
const base='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/';
const arr=(type,name,vals)=>`private static readonly ${type}[] ${name} = new ${type}[${vals.length}]\n\t\t{\n${vals.map(v=>'\t\t\t'+v).join(',\n')}\n\t\t};`;
edit(base+'SandwichPieceTable.cs',[
 ['private static readonly SandwichPiece[] Fillings;', '// The tables below come from the static constructor; values were read from the metadata (<PrivateImplementationDetails> field data).\n\t\t'+arr('SandwichPiece','Fillings',['SandwichPiece.Lettuce','SandwichPiece.Ham','SandwichPiece.Tomato','SandwichPiece.Chicken','SandwichPiece.Cucumber','SandwichPiece.Bacon','SandwichPiece.Cheese','SandwichPiece.Egg'])],
 ['private static readonly SandwichPiece[] Fruits;', arr('SandwichPiece','Fruits',['SandwichPiece.Strawberry','SandwichPiece.Kiwi','SandwichPiece.Mango','SandwichPiece.Grape'])],
 ['private static readonly SandwichPiece[] SaladToppings;', arr('SandwichPiece','SaladToppings',['SandwichPiece.Tomato','SandwichPiece.Cucumber','SandwichPiece.SweetCorn','SandwichPiece.Egg','SandwichPiece.Mayonnaise'])],
 ['private static readonly SandwichPiece[] Juices;', '// In the static constructor Juices is assigned the same array as Fruits.\n\t\tprivate static readonly SandwichPiece[] Juices = Fruits;'],
 ['private static readonly SandwichPiece[] Soups;', arr('SandwichPiece','Soups',['SandwichPiece.Tomato','SandwichPiece.Pumpkin','SandwichPiece.Mushroom'])],
 ['private static readonly SandwichPiece[] SoupToppings;', arr('SandwichPiece','SoupToppings',['SandwichPiece.Bread','SandwichPiece.Parsley','SandwichPiece.SweetCorn','SandwichPiece.WhippedCream'])],
]);
edit(base+'SandwichOrderStrategy.cs',[
 ['private static readonly SandwichDish[] RollableDishes;', '// Values read from the static constructor data (metadata).\n\t\t'+arr('SandwichDish','RollableDishes',['SandwichDish.SavorySandwich','SandwichDish.FruitSandwich','SandwichDish.Salad','SandwichDish.Juice','SandwichDish.Soup'])],
]);
edit(base+'SushiOrderStrategy.cs',[
 ['private static readonly SushiDish[] RollableDishes;', '// Values read from the static constructor data (metadata).\n\t\t'+arr('SushiDish','RollableDishes',['SushiDish.Nigiri','SushiDish.Maki','SushiDish.Gunkan','SushiDish.Sashimi','SushiDish.Tea'])],
]);
console.log('ok');
