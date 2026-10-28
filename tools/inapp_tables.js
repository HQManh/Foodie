const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/';
function edit(p,reps){const raw=fs.readFileSync(p,'utf8');const nl=raw.includes('\r\n')?'\r\n':'\n';let s=raw;
 for(const [from,to] of reps){if(!s.includes(from))throw new Error('nf '+from+' in '+p);s=s.replace(from,to.replace(/\r?\n/g,nl));}fs.writeFileSync(p,s);}
edit(B+'CakeOrder/CookingdomInappPackListDefinition.cs',[
 ['private static readonly CookingdomInappPackListDefinition Shared;','// Values read from the static constructor: Shared is a new instance, and the override table has one entry (bundle_medium = 7, "bundle.medium").\n\tprivate static readonly CookingdomInappPackListDefinition Shared = new CookingdomInappPackListDefinition();'],
 ['private static readonly (InAppShopId sku, string storeName)[] StoreNameOverrides;','private static readonly (InAppShopId sku, string storeName)[] StoreNameOverrides = new (InAppShopId, string)[1] { (InAppShopId.bundle_medium, "bundle.medium") };']]);
edit(B+'CakeOrder/RemoteConfigDefaultSetterCakeOrder.cs',[
 ['public static readonly string[] OverrideAuthorIds;','// Values read from the static constructor (string literals decoded from the metadata).\n\tpublic static readonly string[] OverrideAuthorIds = new string[4] { "daivq", "tantd", "linhnht", "anhpd" };']]);
edit(B+'CakeOrder.Home.Journey/UIJourneyChapterSection.cs',[['private static readonly Vector3[] BarCorners;','private static readonly Vector3[] BarCorners = new Vector3[4];']]);
edit(B+'CakeOrder.Home.Journey/UIJourneyProgressBar.cs',[['private static readonly Vector3[] TrackCorners;','private static readonly Vector3[] TrackCorners = new Vector3[4];']]);
console.log('ok');
