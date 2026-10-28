const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/GridIngController.cs';
patch(p,[
 ['private void SetupSaveMeBagAnchor()',[
  '// Rebuilt from the decompiled code: registers the bag\'s cell occupier and stores the bag\'s offset from the world position of its',
  '// first occupied cell, so the bag can later be placed on any cell.',
  'if (saveMeBag == null)',
  '{',
  '\treturn;',
  '}',
  'GridCellOccupier occupier = saveMeBag.GetComponentInChildren<GridCellOccupier>(true);',
  'if (occupier == null)',
  '{',
  '\treturn;',
  '}',
  'if (cellOccupiers != null)',
  '{',
  '\tcellOccupiers.Add(occupier);',
  '}',
  'int[] occupied = occupier.occupiedCellIndices;',
  'if (occupied == null || occupied.Length == 0)',
  '{',
  '\treturn;',
  '}',
  'IngGridLayout layout = Layout;',
  'int index = occupied[0];',
  'int row = layout.Cols != 0 ? index / layout.Cols : 0;',
  'int col = index - row * layout.Cols;',
  'Vector3 bagPos = saveMeBag.transform.position;',
  'Vector2 origin = layout.Origin;',
  'Vector2 size = layout.CellSize;',
  '_saveMeBagOffset = new Vector3(bagPos.x - (origin.x + (col + 0.5f) * size.x), bagPos.y - (origin.y + (layout.Rows - 1 - row + 0.5f) * size.y), bagPos.z);']],
 ['private void ReleaseSaveMeBag()',[
  'if (saveMeBag != null)',
  '{',
  '\tsaveMeBag.gameObject.SetActive(false);',
  '}',
  'Layout.SetReservedCell(-1);',
  'RefreshOccupiedCells();',
  '_cellFreedPending = true;']],
],{methodTabs:2});
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b.replace(/\n/g,nl)); }
rep('// TODO(unrecovered): PieceLedger.Step(item, <literal>) call; literal not recovered','PieceLedger.Step(item, "save-me sweep into bag");');
rep('// TODO(unrecovered): a PieceLedger.Step(item, <literal>) call sits here; the literal is not recovered.','PieceLedger.Step(item, "save-me sweep into bag");');
rep('// TODO(unrecovered): the original logs an error naming the item here; its message text is not recovered.','UnityEngine.Debug.LogError("[SaveMe] item \'" + item.name + "\' kh\\u00f4ng c\\u00f3 id \\u2192 b\\u1ecf qua, kh\\u00f4ng gom v\\u00e0o t\\u00fai.", item);');
fs.writeFileSync(p,s);
console.log('ok');
