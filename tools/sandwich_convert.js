const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SandwichOrderStrategy.cs',[
 ['public override OrderSpec[] ConvertOrderData(string encodedOrder)',[
  '// Rebuilt from the decompiled code. The virtual call on this (slot 0x238) is TryGetOrderPieces; the log text is decoded from the metadata.',
  'if (TryGetOrderPieces(encodedOrder, out var pieces) && OrderRecipeCodec.TryDecode(encodedOrder, out var decoded))',
  '{',
  '\tRecipeConfigSO config = Config;',
  '\tif (config != null)',
  '\t{',
  '\t\tif (config.TryGetDishBaseId(decoded.Dish, out var baseId))',
  '\t\t{',
  '\t\t\tstring displayId = FlexiblePieceId.Build(baseId, pieces);',
  '\t\t\treturn new OrderSpec[1] { new OrderSpec(displayId, baseId, pieces, hasPieces: true) };',
  '\t\t}',
  '\t\tUnityEngine.Debug.LogError(string.Format("[Recipe] món {0} chưa khai baseId trong RecipeConfigSO ", (SandwichDish)decoded.Dish) + "(tab Dish icons): \\"" + encodedOrder + "\\" — khách này không bao giờ được phục vụ.");',
  '\t}',
  '}',
  'return new OrderSpec[1] { BuildSpec(encodedOrder) };']],
]);
console.log('ok');
