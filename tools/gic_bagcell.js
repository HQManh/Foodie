const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/GridIngController.cs',[
 ['private bool EndsEmptyAfterSweep(Vector2Int coord, List<DragItem> swept)',[
  '// Rebuilt from the decompiled code: true when the cell is missing or every item in it is part of the sweep.',
  'IngCell cell = TryGetExistingCell(coord);',
  'if (cell == null)',
  '{',
  '\treturn true;',
  '}',
  'foreach (DragItem item in cell.Items)',
  '{',
  '\tif (!swept.Contains(item))',
  '\t{',
  '\t\treturn false;',
  '\t}',
  '}',
  'return true;']],
 ['private Vector2Int PickSaveMeBagCell(List<DragItem> swept)',[
  '// Rebuilt from the decompiled code: the first enabled cell from the right that the sweep leaves empty; if none, the first',
  '// enabled cell from the right; if there are none at all, the layout\'s (0, Rows - 1) corner (the +0x24 field is Rows).',
  'foreach (Vector2Int coord in Layout.EnabledCellsFromRight())',
  '{',
  '\tif (EndsEmptyAfterSweep(coord, swept))',
  '\t{',
  '\t\treturn coord;',
  '\t}',
  '}',
  'foreach (Vector2Int coord in Layout.EnabledCellsFromRight())',
  '{',
  '\treturn coord;',
  '}',
  'return new Vector2Int(0, Layout.Rows - 1);']],
],{methodTabs:2});
console.log('ok');
