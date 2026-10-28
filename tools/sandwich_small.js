const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SandwichPieceTable.cs',[
 ['public static bool CanOpen(SandwichDish dish, string ingId)',[
  '// Rebuilt from the decompiled code.',
  'return TryGetDishPiece(dish, ingId, out var piece) && IsOpener(dish, piece);']],
 ['public static PieceSet PredictOpen(SandwichDish dish, string ingId)',[
  '// Only dishes 4 and 5 (Juice and Soup) open with a single ingredient.',
  'if (((int)dish & -2) == 4 && CanOpen(dish, ingId) && TryGetPiece(ingId, out var piece))',
  '{',
  '\treturn PieceSet.One((int)piece);',
  '}',
  'return PieceSet.Empty;']],
 ['public static PieceSet PredictStart(SandwichDish dish, string firstIngId, string secondIngId)',[
  'PieceSet started = TryStart(dish, firstIngId, secondIngId);',
  'if (started.IsEmpty)',
  '{',
  '\tstarted = TryStart(dish, secondIngId, firstIngId);',
  '}',
  'return started;']],
 ['private static PieceSet TryStart(SandwichDish dish, string openerId, string nextId)',[
  'if (CanOpen(dish, openerId) && TryGetPiece(openerId, out var openerPiece))',
  '{',
  '\tPieceSet opener = PieceSet.One((int)openerPiece);',
  '\tif (CanDishAdd(dish, opener, nextId) && TryGetPiece(nextId, out var nextPiece))',
  '\t{',
  '\t\treturn opener.Add((int)nextPiece, 1);',
  '\t}',
  '}',
  'return PieceSet.Empty;']],
 ['private static int Cap(int graphMax, int maxExtras)',[
  '// maxExtras limits the graph maximum when it is positive.',
  'return (maxExtras < 1) ? graphMax : Math.Min(graphMax, maxExtras);']],
 ['private static PieceSet MaybeAdd(SandwichDish dish, PieceSet pieces, SandwichPiece piece, Func<SandwichPiece, bool> canShow)',[
  '// A usable piece is added with probability 0.5.',
  'if (IsUsable(dish, piece, canShow) && UnityEngine.Random.value < 0.5f)',
  '{',
  '\treturn pieces.Add((int)piece, 1);',
  '}',
  'return pieces;']],
 ['private static bool IsUsable(SandwichDish dish, SandwichPiece piece, Func<SandwichPiece, bool> canShow)',[
  'if (!TryGetFormOf(dish, piece, out var form))',
  '{',
  '\treturn false;',
  '}',
  'return canShow == null || canShow(piece);']],
]);
console.log('ok');
