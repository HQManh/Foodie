const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SandwichOrderStrategy.cs',[
 ['private static Func<SandwichPiece, bool> CanShowOf(RecipeConfigSO config, SandwichDish dish)',[
  '// Rebuilt from the decompiled code: the dish prefab\'s ISandwichPieceView.CanShow (interface slot 0, resolved from the metadata).',
  'if (config.TryGetDishBaseId((int)dish, out var baseId) && config.GetIngredientPrefab(baseId) is ISandwichPieceView view)',
  '{',
  '\treturn view.CanShow;',
  '}',
  'return null;']],
 ['public override PieceOffer GetItemPieceOffer(DragItem item)',[
  '// Rebuilt from the decompiled code: flexible items offer their own pieces (IFlexiblePieceItem.Pieces, interface slot 0).',
  'if (item is IFlexiblePieceItem flexible)',
  '{',
  '\treturn new PieceOffer',
  '\t{',
  '\t\tpieces = flexible.Pieces,',
  '\t\tsubsetOnly = true,',
  '\t\tpriority = 0',
  '\t};',
  '}',
  'return base.GetItemPieceOffer(item);']],
]);
console.log('ok');
