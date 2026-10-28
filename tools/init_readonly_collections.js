const fs=require('fs'),path=require('path');
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
const re=/^(\s*(?:private|public|protected|internal)(?: static)? readonly )((?:List|Dictionary|HashSet|Queue|Stack)<[^;=\r\n]*>)(\s+)(\w+);/gm;
let total=0,files=0;
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs')){
 let t=fs.readFileSync(p,'utf8');let n=0;
 const out=t.replace(re,(m,pre,type,sp,name)=>{
  if(name.startsWith('_003C')) return m;
  const assigned=new RegExp('\\b'+name+'\\s*=(?!=)').test(t.replace(m,''));
  if(assigned) return m;
  n++; return pre+type+sp+name+' = new '+type+'();';});
 if(n){fs.writeFileSync(p,out);total+=n;files++;console.log(path.basename(p),n);}}}}
roots.forEach(walk);
console.log('initialised',total,'in',files,'files');
