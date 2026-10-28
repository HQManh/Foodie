const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.Home/';
function edit(p,reps){const raw=fs.readFileSync(p,'utf8');const nl=raw.includes('\r\n')?'\r\n':'\n';let s=raw;
 for(const [from,to] of reps){if(!s.includes(from))throw new Error('nf '+from);s=s.replace(from,to.replace(/\r?\n/g,nl));}fs.writeFileSync(p,s);}
edit(B+'LevelCoinRefundNotice.cs',[['private static readonly string[] MapsWithOldExtraLevels;','// Values read from the static constructor (string literals decoded from the metadata).\n\tprivate static readonly string[] MapsWithOldExtraLevels = new string[4] { "burger", "coffee", "sushi", "pasta" };']]);
edit(B+'UpgradeRebalanceNotice.cs',[['private static readonly string[] MapsWithNewExtraLevels;','// Value read from the static constructor (string literal decoded from the metadata).\n\tprivate static readonly string[] MapsWithNewExtraLevels = new string[1] { "burger" };']]);
edit(B+'NewVersionNotices.cs',[['public static readonly NewVersionNotice[] All;','// The static constructor builds two notices; the classes were identified from the type globals it uses (UpgradeRebalanceNotice, then LevelCoinRefundNotice).\n\tpublic static readonly NewVersionNotice[] All = new NewVersionNotice[2]\n\t{\n\t\tnew UpgradeRebalanceNotice(),\n\t\tnew LevelCoinRefundNotice()\n\t};']]);
console.log('ok');
