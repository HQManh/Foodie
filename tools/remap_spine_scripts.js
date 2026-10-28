const fs=require('fs'),path=require('path');
const dir='D:/Unity/Foodie/UnityProject/Assets/MonoBehaviour';
const backup='D:/Unity/Foodie/backup_spine_assets';
fs.mkdirSync(backup,{recursive:true});
const OLD='guid: ebe353a9e51fc6708625f16edcb81e06';
const maps=[
 ['{fileID: 106799970, guid: ebe353a9e51fc6708625f16edcb81e06, type: 3}','{fileID: 11500000, guid: f1b3b4b945939a54ea0b23d3396115fb, type: 3}'], // SkeletonDataAsset
 ['{fileID: 1497261852, guid: ebe353a9e51fc6708625f16edcb81e06, type: 3}','{fileID: 11500000, guid: a6b194f808b1af6499c93410e504af42, type: 3}'], // SpineAtlasAsset
];
let changed=0, left=0;
for(const f of fs.readdirSync(dir)){
  if(!f.endsWith('.asset')) continue;
  const p=path.join(dir,f); let s=fs.readFileSync(p,'utf8');
  if(!s.includes(OLD)) continue;
  fs.copyFileSync(p,path.join(backup,f));
  for(const [a,b] of maps) s=s.split(a).join(b);
  if(s.includes(OLD)) left++;
  fs.writeFileSync(p,s); changed++;
}
console.log('remapped',changed,'assets; still containing the old guid:',left);
