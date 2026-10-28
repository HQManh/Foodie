const fs=require("fs");
const R="D:/Unity/Foodie/Reference/", P="D:/Unity/Foodie/UnityProject/";
const rd=f=>fs.readFileSync(R+f,"utf8").split(/\r?\n/).filter(Boolean).map(x=>x.split("\\").join("/"));
const fix=(list,re,rep,tag)=>{for(const f of rd(list)){const p=P+f;if(!fs.existsSync(p))continue;const s=fs.readFileSync(p,"utf8");const t=s.replace(re,rep);if(t!==s){fs.writeFileSync(p,t);console.log(tag,f);}}};
fix("debugfiles.txt",/(?<![.\w])Debug\./g,"UnityEngine.Debug.","Debug fixed");
fix("nrefiles.txt",/(?<![.\w])NullReferenceException(?![\w])/g,"System.NullReferenceException","NRE fixed");
fix("animfiles.txt",/(?<![.\w])AnimationState(?![\w])/g,"Spine.AnimationState","Anim fixed");
