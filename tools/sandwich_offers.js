const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SandwichOrderStrategy.cs';
patch(p,[
 ['public override PieceOffer GetIdPieceOffer(string id)',[
  '// Rebuilt from the decompiled code: a dish whose base id\'s pieces appear in the id offers them; otherwise use the cached id offers.',
  'RecipeConfigSO config = Config;',
  'if (config != null)',
  '{',
  '\tforeach (RcDishInfo dish in config.GetAllDishInfos())',
  '\t{',
  '\t\tif (dish == null || string.IsNullOrEmpty(dish.baseId))',
  '\t\t{',
  '\t\t\tcontinue;',
  '\t\t}',
  '\t\tPieceSet pieces = FlexiblePieceId.PiecesOf(dish.baseId, id);',
  '\t\tif (!pieces.IsEmpty)',
  '\t\t{',
  '\t\t\treturn new PieceOffer',
  '\t\t\t{',
  '\t\t\t\tpieces = pieces,',
  '\t\t\t\tsubsetOnly = true,',
  '\t\t\t\tpriority = 0',
  '\t\t\t};',
  '\t\t}',
  '\t}',
  '}',
  'return IdOffers.TryGetValue(id ?? string.Empty, out var offer) ? offer : null;']],
 ['private static Dictionary<string, PieceOffer> BuildIdOffers()',[
  '// Rebuilt from the decompiled code: one subset offer (priority 1) per offering ingredient.',
  'Dictionary<string, PieceOffer> offers = new Dictionary<string, PieceOffer>();',
  'RecipeConfigSO config = Config;',
  'if (config == null)',
  '{',
  '\treturn offers;',
  '}',
  'foreach (var (ingredientId, pieces) in config.OfferingIngredients())',
  '{',
  '\toffers[ingredientId] = new PieceOffer',
  '\t{',
  '\t\tpieces = pieces,',
  '\t\tsubsetOnly = true,',
  '\t\tpriority = 1',
  '\t};',
  '}',
  'return offers;']],
]);
// lazy getter: the property accessor uses 'get' with a nested block (4 tabs), so handle it by text replace
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
const a=['\t\t\t\t// TODO(unrecovered): lazy-build body (calls BuildIdOffers) recovered only partially.','\t\t\t\treturn _idOffers;'].join(nl);
if(!s.includes(a)) throw new Error('nf getter');
s=s.replace(a,['\t\t\t\t// Lazily built on first use, as in the decompiled getter.','\t\t\t\tif (_idOffers == null)','\t\t\t\t{','\t\t\t\t\t_idOffers = BuildIdOffers();','\t\t\t\t}','\t\t\t\treturn _idOffers;'].join(nl));
fs.writeFileSync(p,s);
console.log('ok');
