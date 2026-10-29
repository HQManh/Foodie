const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SpawnService.cs';
patch(p,[
 ['private void ThrowToStation(DragItem item, CookingStation station)',[
  '// Rebuilt from the decompiled code and its two closures: reserve the station slot, fly the item to it, and on arrival hand it to the',
  '// landed callback and release the reservation (also released if the tween is killed before it arrives).',
  'if (_info == null || station == null || item == null)',
  '{',
  '\treturn;',
  '}',
  'string id = item.GetId();',
  '_info.MarkInbound(station, id);',
  'PieceLedger.Step(item, "to station " + station.name);',
  'InteractVector vector = station.GetInteractVector(id);',
  'bool arrived = false;',
  'station.CreateIngredientFlight(item, vector).OnComplete(delegate',
  '{',
  '\tarrived = true;',
  '\tif (_onItemLanded != null)',
  '\t{',
  '\t\t_onItemLanded(item, station);',
  '\t}',
  '\t_info.ClearInbound(station, id);',
  '}).OnKill(delegate',
  '{',
  '\tif (!arrived)',
  '\t{',
  '\t\t_info.ClearInbound(station, id);',
  '\t}',
  '});']],
],{methodTabs:2});
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
if(!s.includes('using DG.Tweening;')) s='using DG.Tweening;'+nl+s;
fs.writeFileSync(p,s); console.log('ok');
