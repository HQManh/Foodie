const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/';
// 1) correct the guessed Pasta strings with the decoded ones
{ const p=B+'PastaOrderStrategy.cs'; let s=fs.readFileSync(p,'utf8');
  const reps=[
   ['"Invalid pasta recipe: " + encodedOrder /* literal recovered by guess */','"Invalid Pasta recipe: " + encodedOrder /* decoded from the metadata */'],
   ['"Invalid pasta piece" /* literal recovered by guess */','"Pasta piece index out of range." /* decoded from the metadata */'],
   ['"Incomplete pasta recipe: " + encodedOrder /* literal recovered by guess */','"Invalid Pasta dish state: " + encodedOrder /* decoded from the metadata */']];
  for(const [a,b] of reps){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b); }
  fs.writeFileSync(p,s); }
// 2) Seafood ConvertOrderData and TryGetOrderPieces
patch(B+'SeafoodOrderStrategy.cs',[
 ['public override OrderSpec[] ConvertOrderData(string encodedOrder)',[
  '// Rebuilt from the decompiled code (same shape as the Pasta strategy). Error texts are decoded from the metadata.',
  'if (!OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))',
  '{',
  '\tthrow new InvalidOperationException("Invalid Seafood recipe: " + encodedOrder);',
  '}',
  'PieceSet pieces = PieceSet.Empty;',
  'foreach (int piece in decoded.Pieces)',
  '{',
  '\tif (piece > 25)',
  '\t{',
  '\t\tthrow new InvalidOperationException("Seafood piece index out of range.");',
  '\t}',
  '\tpieces = pieces.Add(piece, 1);',
  '}',
  'SeafoodDish dish = (SeafoodDish)decoded.Dish;',
  'if (!SeafoodPieceTable.IsComplete(dish, pieces))',
  '{',
  '\tthrow new InvalidOperationException("Invalid Seafood dish state: " + encodedOrder);',
  '}',
  'string baseId = SeafoodPieceTable.BaseId(dish);',
  'string displayId = FlexiblePieceId.Build(baseId, pieces);',
  'return new OrderSpec[1] { new OrderSpec(displayId, baseId, pieces, hasPieces: true) };']],
 ['public override bool TryGetOrderPieces(string encodedOrder, out PieceSet pieces)',[
  'pieces = PieceSet.Empty;',
  'if (!OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))',
  '{',
  '\treturn false;',
  '}',
  'foreach (int piece in decoded.Pieces)',
  '{',
  '\tif (piece > 25)',
  '\t{',
  '\t\tpieces = PieceSet.Empty;',
  '\t\treturn false;',
  '\t}',
  '\tpieces = pieces.Add(piece, 1);',
  '}',
  'if (!SeafoodPieceTable.IsComplete((SeafoodDish)decoded.Dish, pieces))',
  '{',
  '\tpieces = PieceSet.Empty;',
  '\treturn false;',
  '}',
  'return true;']],
]);
console.log('ok');
