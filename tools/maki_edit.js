const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/SushiPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
const i=lines.findIndex(l=>l.includes('(DAT_0921f0a8) has no recoverable text'));
if(i<0) throw new Error('nf'); if(!lines[i+1].includes('return default;')) throw new Error('next '+lines[i+1]);
const t=[
 '// Rebuilt from the decompiled code. The dish literal is "maki" (DAT_0921f0a8) and the warning text is DAT_092143c8, both decoded from the metadata.',
 '// The filling table is Mains: it is the static at +8, the same slot RollNigiri uses for Mains. Piece 1 is Seaweed and piece 0 is Rice.',
 'if (HasSeaweedAndRiceIngredients("maki"))',
 '{',
 '\tSushiPiece? filling = PickUsable(Mains, canShow);',
 '\tif (filling.HasValue)',
 '\t{',
 '\t\tPieceSet pieces = PieceSet.One((int)SushiPiece.Seaweed).Add((int)SushiPiece.Rice, 1).Add((int)filling.Value, 1);',
 '\t\treturn RollDecors(pieces, maxDecors, canShow);',
 '\t}',
 '\tUnityEngine.Debug.LogWarning("[Sushi] không nhân maki nào vừa có nguyên liệu role=Prepared vừa có visual trên prefab — không sinh được maki nào.");',
 '}',
 'return PieceSet.Empty;'];
lines.splice(i,2,...t.map(x=>'\t\t\t'+x+cr));
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
