const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject/Assets';const backup='D:/Unity/Foodie/backup_spine_materials';fs.mkdirSync(backup,{recursive:true});
const OLD='guid: ec2fd0829d47726418873dc8e0c3800f',NEW='guid: 6f0b04d2a91ccc341ba2fa666b108bc3';let n=0;
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(p.endsWith('.mat')){const t=fs.readFileSync(p,'utf8');if(t.includes(OLD)){fs.writeFileSync(path.join(backup,n+'_'+e.name),t);fs.writeFileSync(p,t.split(OLD).join(NEW));n++;}}}}
walk(root);console.log('remapped',n);
