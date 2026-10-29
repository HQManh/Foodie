const fs=require('fs'),path=require('path');
const root='D:/Unity/Foodie/UnityProject/Assets';const backup='D:/Unity/Foodie/backup_more_materials';fs.mkdirSync(backup,{recursive:true});
const map={'1bdaffe163b013846ad1f37a64bb28cf':'fa95b0fb6983c0f40a152e6f9aa82bfb','28e392b8b4479024d967dafa486c56f2':'fa95b0fb6983c0f40a152e6f9aa82bfb','abfd882ad3fc6af43957b6746f169151':'a1e4ab34b07f81e4e94f0d241c416669','bdeebffe6f223c44bb628b454a27b1d8':'cfbf95ed0fe6c554c8c2ee6c8325937c','c4acc686f3f061243ae9213ac0041b89':'c61244023592f95479fddd71b5067683','f3e5597d6f0596249be7b24202bd7b0a':'ce268bcb24514a64aae3ddfbab03a4a2'};
let n=0;
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(p.endsWith('.mat')){let t=fs.readFileSync(p,'utf8');const m=t.match(/m_Shader: \{fileID: 4800000, guid: ([0-9a-f]{32})/);if(m&&map[m[1]]){fs.writeFileSync(path.join(backup,n+'_'+e.name),t);t=t.replace('guid: '+m[1],'guid: '+map[m[1]]);fs.writeFileSync(p,t);n++;}}}}
walk(root);console.log('remapped',n);
