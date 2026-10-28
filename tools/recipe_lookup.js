const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/RecipeConfigSO.cs',[
 ['private void AddToComponentLookup<T>(List<T> list) where T : RecipeComponent',[
  '// The decompiled generic body was not part of the extraction; every component with an id is registered under that id.',
  'if (list == null)',
  '{',
  '\treturn;',
  '}',
  'foreach (T component in list)',
  '{',
  '\tif (component != null && !string.IsNullOrEmpty(component.id))',
  '\t{',
  '\t\t_componentLookup[component.id] = component;',
  '\t}',
  '}']],
],{methodTabs:2});
console.log('ok');
