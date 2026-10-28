const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SushiPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('(DAT_0921c8c0) has no recoverable text'));
if(i<0) throw new Error('nf'); if(!lines[i+1].includes('return default;')) throw new Error('next '+lines[i+1]);
const t=[
 '// Rebuilt from the decompiled code. The dish literal is "gunkan" (DAT_0921c8c0) and the warning text is DAT_092143d8, both decoded from the metadata.',
 '// The tables are the statics at +0x18 (Roes), +0x10 (CubeFoods) and +0x28 (GunkanRollExcluded), in field order.',
 'if (HasSeaweedAndRiceIngredients("gunkan"))',
 '{',
 '\tList<SushiPiece> toppings = new List<SushiPiece>();',
 '\tforeach (SushiPiece roe in Roes)',
 '\t{',
 '\t\tif (PieceLookup.Exists((int)roe) && (canShow == null || canShow(roe)))',
 '\t\t{',
 '\t\t\ttoppings.Add(roe);',
 '\t\t}',
 '\t}',
 '\tforeach (SushiPiece cube in CubeFoods)',
 '\t{',
 '\t\tif (!GunkanRollExcluded.Contains(cube) && HasCubeOf(cube) && (canShow == null || canShow(cube)))',
 '\t\t{',
 '\t\t\ttoppings.Add(cube);',
 '\t\t}',
 '\t}',
 '\tif (toppings.Count != 0)',
 '\t{',
 '\t\tPieceSet pieces = PieceSet.One((int)SushiPiece.Seaweed).Add((int)SushiPiece.Rice, 1).Add((int)toppings[UnityEngine.Random.Range(0, toppings.Count)], 1);',
 '\t\treturn RollDecors(pieces, maxDecors, canShow);',
 '\t}',
 '\tUnityEngine.Debug.LogWarning("[Sushi] không top gunkan nào (trứng cá / đồ cắt cube) vừa có nguyên liệu vừa có visual trên prefab — không sinh được gunkan nào.");',
 '}',
 'return PieceSet.Empty;'];
lines.splice(i,2,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
