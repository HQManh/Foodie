const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/CakeOrder/InGame/Seafood/SeafoodPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const cr=raw.includes('\r\n')?'\r':''; let lines=raw.split('\n');
function setBody(sigStart, body){
  const i=lines.findIndex(l=>l.includes(sigStart)); if(i<0) throw new Error('nf '+sigStart);
  if(lines[i+1].trim()!=='{') throw new Error('no brace after '+sigStart);
  let j=i+2; while(j<lines.length && lines[j].replace(/\r$/,'')!=='\t\t}') j++;
  if(j>=lines.length) throw new Error('no close '+sigStart);
  lines.splice(i+2,j-(i+2),...body.map(t=>'\t\t\t'+t+cr));
}
setBody('public static string PreparedId(int piece)',[
 '// Rebuilt from the decompiled code: PreparedIds[piece] for pieces 0..25, otherwise null.',
 'return (piece >= 0 && piece < PieceCount) ? PreparedIds[piece] : null;']);
setBody('public static bool TryGetPiece(string id, out int piece)',[
 'piece = Array.IndexOf(PreparedIds, id);',
 'return piece >= 0;']);
setBody('public static string BaseId(SeafoodDish dish)',[
 'int index = (int)dish - 1;',
 'return (index >= 0 && index < 6) ? Bases[index] : null;']);
setBody('public static bool TryGetDish(string id, out SeafoodDish dish)',[
 'int index = Array.IndexOf(Bases, id);',
 'dish = (index >= 0) ? (SeafoodDish)(index + 1) : SeafoodDish.None;',
 'return index >= 0;']);
setBody('private static bool Mask(PieceSet pieces, out uint mask)',[
 '// Each piece must appear exactly once and have kind 0..25; the mask has one bit per piece kind.',
 'mask = 0u;',
 'foreach ((int kind, int count) in pieces)',
 '{',
 '\tif (count != 1 || kind < 0 || kind > 25)',
 '\t{',
 '\t\treturn false;',
 '\t}',
 '\tmask |= 1u << kind;',
 '}',
 'return mask != 0;']);
setBody('public static bool IsValid(SeafoodDish dish, PieceSet pieces, bool complete)',[
 '// The opener piece of the dish must be present exactly once; then the piece mask must equal a complete state (complete),',
 '// or be a subset of one (not complete).',
 'int index = (int)dish - 1;',
 'if (index < 0 || index >= 6)',
 '{',
 '\treturn false;',
 '}',
 'if (!Mask(pieces, out var mask))',
 '{',
 '\treturn false;',
 '}',
 'if (pieces[Openers[index]] != 1)',
 '{',
 '\treturn false;',
 '}',
 'foreach (uint state in CompleteStates[index])',
 '{',
 '\tif (complete ? (mask == state) : ((mask & ~state) == 0))',
 '\t{',
 '\t\treturn true;',
 '\t}',
 '}',
 'return false;']);
setBody('public static bool IsComplete(SeafoodDish dish, PieceSet pieces)',['return IsValid(dish, pieces, complete: true);']);
setBody('public static bool Allows(SeafoodDish dish, int piece)',[
 '// True if any complete state of the dish contains the piece.',
 'int index = (int)dish - 1;',
 'if (piece < 0 || piece > 25 || index < 0 || index >= 6)',
 '{',
 '\treturn false;',
 '}',
 'foreach (uint state in CompleteStates[index])',
 '{',
 '\tif ((state & (1u << piece)) != 0)',
 '\t{',
 '\t\treturn true;',
 '\t}',
 '}',
 'return false;']);
setBody('public static bool CanOpenPlate(SeafoodDish dish, string id, PieceSet pieces)',[
 'if (!IsValid(dish, pieces, complete: false))',
 '{',
 '\treturn false;',
 '}',
 'if (id == BaseId(dish))',
 '{',
 '\treturn true;',
 '}',
 'return TryGetPiece(id, out var piece) && piece == Openers[(int)dish - 1];']);
setBody('public static bool TryDecode(SeafoodDish dish, string id, out PieceSet pieces)',[
 'string baseId = BaseId(dish);',
 'pieces = FlexiblePieceId.PiecesOf(baseId, id);',
 'if (baseId == null)',
 '{',
 '\treturn false;',
 '}',
 'return FlexiblePieceId.Build(baseId, pieces) == id && IsValid(dish, pieces, complete: false);']);
setBody('public static bool TryInput(SeafoodDish dish, string id, out PieceSet pieces)',[
 'pieces = PieceSet.Empty;',
 'if (TryGetDish(FlexibleId.BaseOf(id), out var idDish))',
 '{',
 '\t// The id is a flexible dish id: it must be for this dish.',
 '\treturn idDish == dish && TryDecode(dish, id, out pieces);',
 '}',
 'if (TryGetPiece(id, out var piece) && Allows(dish, piece))',
 '{',
 '\tpieces = PieceSet.One(piece);',
 '\treturn true;',
 '}',
 'return false;']);
setBody('public static PieceSet PredictOpen(SeafoodDish dish, string id)',[
 'if (TryInput(dish, id, out var pieces) && CanOpenPlate(dish, FlexibleId.BaseOf(id), pieces))',
 '{',
 '\treturn pieces;',
 '}',
 'return PieceSet.Empty;']);
setBody('public static PieceSet PredictCombine(SeafoodDish dish, string a, string b)',[
 'if (TryInput(dish, a, out var first) && TryInput(dish, b, out var second))',
 '{',
 '\tPieceSet combined = first.Add(second);',
 '\tif (IsValid(dish, combined, complete: false))',
 '\t{',
 '\t\treturn combined;',
 '\t}',
 '}',
 'return PieceSet.Empty;']);
setBody('public static bool CanAdd(SeafoodDish dish, PieceSet has, string id)',[
 'if (!IsValid(dish, has, complete: false))',
 '{',
 '\treturn false;',
 '}',
 'return TryInput(dish, id, out var add) && IsValid(dish, has.Add(add), complete: false);']);
setBody('public static List<string> IngredientIds(PieceSet pieces)',[
 'List<string> ids = new List<string>();',
 'foreach ((int kind, int count) in pieces)',
 '{',
 '\tfor (int i = 0; i < count; i++)',
 '\t{',
 '\t\tstring id = PreparedId(kind);',
 '\t\tif (id != null)',
 '\t\t{',
 '\t\t\tids.Add(id);',
 '\t\t}',
 '\t}',
 '}',
 'return ids;']);
setBody('public static PieceSet Roll(SeafoodDish dish, int maxCount = 0)',[
 '// Pick a random complete state of the dish; maxCount (when positive) limits the number of pieces.',
 'int index = (int)dish - 1;',
 'if (index >= 0 && index < 6)',
 '{',
 '\tList<PieceSet> candidates = new List<PieceSet>();',
 '\tforeach (uint state in CompleteStates[index])',
 '\t{',
 '\t\tPieceSet set = PieceSet.Empty;',
 '\t\tfor (int bit = 0; bit < 26; bit++)',
 '\t\t{',
 '\t\t\tif (((state >> bit) & 1) != 0)',
 '\t\t\t{',
 '\t\t\t\tset = set.Add(bit);',
 '\t\t\t}',
 '\t\t}',
 '\t\tif (maxCount < 1 || set.TotalCount <= maxCount)',
 '\t\t{',
 '\t\t\tcandidates.Add(set);',
 '\t\t}',
 '\t}',
 '\tif (candidates.Count != 0)',
 '\t{',
 '\t\treturn candidates[UnityEngine.Random.Range(0, candidates.Count)];',
 '\t}',
 '}',
 'return PieceSet.Empty;']);
fs.writeFileSync(p,lines.join('\n')); console.log('ok');
