const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/CakeOrder/InGame/Seafood/SeafoodPieceTable.cs';
const raw=fs.readFileSync(p,'utf8'); const nl=raw.includes('\r\n')?'\r\n':'\n'; let s=raw;
const rep=(from,to)=>{ if(!s.includes(from)) throw new Error('nf '+from); s=s.replace(from,to.replace(/\n/g,nl)); };
const ids=['cedar-plank','hoisin-mustard-glaze','maple-dijon-glaze','dill-sprig','capers','lettuce-shredded','chives-chopped','seafood-seasoning','oyster-crackers','lobster-grilled','lobster-salad','king-crab-steamed','salmon-grilled','scallops-broiled','split-top-roll-toasted','clam-chowder-cooked','garlic-butter-melted','chili-butter-melted','lemon-herb-butter-melted','lemon-wedge','parsley-chopped','celery-diced','corn-grilled','potatoes-roasted','garlic-bread-broiled','gratin-topping-browned'];
const bases=['grilled-lobster','steamed-king-crab','cedar-plank-salmon','scallop-gratin','lobster-roll','clam-chowder'];
const states=[[131584,66048,262656,131648,655872,1180160,66112,262720,590336,1114624,786944,1311232],
 [4327424,657408,8521728,4261888,4458496,591872,8456192,788480,8652800,5376000,4327552,1705984,657536,9570304,8521856,5310464,4262016,5507072,4458624,1640448,592000,9504768,8456320,1837056,788608,9701376,8652928],
 [4097,4113,4105,4099,528385,4101],[0x2002000],[17408,2114560,17472,17440],[32768,16809984,33024,1081344]];
rep('private static readonly string[] PreparedIds;','// The tables below come from the static constructor; values were read from the metadata (string literals and <PrivateImplementationDetails> field data).\n\t\tprivate static readonly string[] PreparedIds = new string[26]\n\t\t{\n'+ids.map(v=>'\t\t\t'+JSON.stringify(v)).join(',\n')+'\n\t\t};');
rep('private static readonly string[] Bases;','private static readonly string[] Bases = new string[6]\n\t\t{\n'+bases.map(v=>'\t\t\t'+JSON.stringify(v)).join(',\n')+'\n\t\t};');
rep('private static readonly int[] Openers;','private static readonly int[] Openers = new int[6]\n\t\t{\n'+['LobsterGrilled','KingCrabSteamed','SalmonGrilled','ScallopsBroiled','LobsterSalad','ClamChowderCooked'].map(v=>'\t\t\t(int)SeafoodPiece.'+v).join(',\n')+'\n\t\t};');
rep('private static readonly uint[][] CompleteStates;','private static readonly uint[][] CompleteStates = new uint[6][]\n\t\t{\n'+states.map(a=>'\t\t\tnew uint['+a.length+'] { '+a.map(v=>v+'u').join(', ')+' }').join(',\n')+'\n\t\t};');
fs.writeFileSync(p,s); console.log('ok');
