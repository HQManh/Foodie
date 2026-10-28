const fs=require("fs"),path=require("path");
const ROOT="D:/Unity/Foodie/UnityProject";
const UI_STUB="d3e719b59ab71ba3f6b398058c866280";
const PKG="D:/Unity/Foodie/UnityProject/Library/PackageCache/com.unity.ugui@1890c14c96ff/Runtime";
function findGuid(cls){
  const out=[];
  (function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name===cls+".cs.meta")out.push(p);}})(PKG);
  if(out.length!==1) throw new Error(cls+" matches "+out.length);
  return fs.readFileSync(out[0],"utf8").match(/^guid: ([0-9a-f]+)/m)[1];
}
const map={
 "-765806418":"Image","1741964061":"ContentSizeFitter","-1200242548":"Mask",
 "1980459831":"CanvasScaler","-2095666955":"GridLayoutGroup","1301386320":"GraphicRaycaster",
 "1679637790":"LayoutElement","1573420865":"Shadow","1367256648":"ScrollRect",
 "-146154839":"RectMask2D","-1254083943":"AspectRatioFitter","-1690312454":"PhysicsRaycaster",
 "-1862395651":"EventTrigger","-1184210157":"ToggleGroup","-619905303":"EventSystem"
};
const guids={};
for(const id of Object.keys(map)) guids[id]=findGuid(map[id]);
console.log("resolved guids:",Object.keys(guids).length);
const counts={};let files=0;
(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(/\.(unity|prefab|asset)$/.test(e.name)){
  let s=fs.readFileSync(p,"utf8");let changed=false;
  for(const id of Object.keys(map)){
    const re=new RegExp("m_Script: \{fileID: "+id.replace("-","\-")+", guid: "+UI_STUB+", type: 3\}","g");
    const n=(s.match(re)||[]).length;
    if(n){s=s.replace(re,"m_Script: {fileID: 11500000, guid: "+guids[id]+", type: 3}");counts[map[id]]=(counts[map[id]]||0)+n;changed=true;}
  }
  if(changed){fs.writeFileSync(p,s);files++;}
}}})(path.join(ROOT,"Assets"));
console.log("files changed:",files);
console.log(JSON.stringify(counts,null,1));
const left=(function count(d){let c=0;for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())c+=count(p);else if(/\.(unity|prefab|asset)$/.test(e.name)){c+=(fs.readFileSync(p,"utf8").match(new RegExp(UI_STUB,"g"))||[]).length;}}return c;})(path.join(ROOT,"Assets"));
console.log("remaining UI-stub references:",left);
