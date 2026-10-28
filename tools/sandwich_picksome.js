const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SandwichPieceTable.cs',[
 ['private static PieceSet PickSome(SandwichDish dish, PieceSet basePieces, SandwichPiece[] table, int min, int max, Func<SandwichPiece, bool> canShow)',[
  '// Rebuilt from the decompiled code: draw between min and max distinct usable pieces from the table.',
  'List<SandwichPiece> pool = new List<SandwichPiece>();',
  'foreach (SandwichPiece piece in table)',
  '{',
  '\tif (basePieces[(int)piece] == 0 && IsUsable(dish, piece, canShow))',
  '\t{',
  '\t\tpool.Add(piece);',
  '\t}',
  '}',
  'if (pool.Count < min)',
  '{',
  '\treturn PieceSet.Empty;',
  '}',
  'int upper = Math.Min(max, pool.Count);',
  'int count = UnityEngine.Random.Range(min, upper + 1);',
  'PieceSet result = basePieces;',
  'for (int i = 0; i < count; i++)',
  '{',
  '\tint index = UnityEngine.Random.Range(0, pool.Count);',
  '\tresult = result.Add((int)pool[index], 1);',
  '\tpool.RemoveAt(index);',
  '}',
  'return result;']],
]);
console.log('ok');
