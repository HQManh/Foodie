const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
patch('D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SpawnService.cs',[
 ['public DragItem SpawnSingle(DragItem prefab, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)',[
  '// Rebuilt from the decompiled code: take an instance from the pool at the prefab\'s rotation, activate and initialise it for dragging,',
  '// tag where it came from, and optionally register it into a grid cell. The init call is the virtual at vtable +0x1a8 (taken to be',
  '// InitForDrag).',
  'if (prefab == null)',
  '{',
  '\treturn null;',
  '}',
  'DragItem item = Utilities.ObjectPoolDictArray.Instance.GetGameObject(prefab, position, prefab.transform.rotation);',
  'if (item == null)',
  '{',
  '\treturn null;',
  '}',
  'item.gameObject.SetActive(true);',
  'item.InitForDrag();',
  'item.DragOrigin = origin;',
  'if (registerCell && _area.TryGetCell(item, out var cell))',
  '{',
  '\titem.RegisterCell(cell, isJump);',
  '}',
  'return item;']],
],{methodTabs:2});
console.log('ok');
