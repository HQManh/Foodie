const fs=require("fs"),path=require("path");
const ROOT="D:/Unity/Foodie/UnityProject";
const UI_STUB="d3e719b59ab71ba3f6b398058c866280";
const PKG="D:/Unity/Foodie/UnityProject/Library/PackageCache/com.unity.ugui@1890c14c96ff/Runtime";
function findGuid(cls){const out=[];(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name===cls+".cs.meta")out.push(p);}})(PKG);if(out.length!==1)throw new Error(cls+" matches "+out.length);return fs.readFileSync(out[0],"utf8").match(/^guid: ([0-9a-f]+)/m)[1];}
const BUTTON=findGuid("Button"), SELECTABLE=findGuid("Selectable");
const re=new RegExp("m_Script: \{fileID: 1392445389, guid: "+UI_STUB+", type: 3\}","g");
let btn=0,sel=0,files=0;
(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(/\.(unity|prefab|asset)$/.test(e.name)){
  const s=fs.readFileSync(p,"utf8");if(!re.test(s)){re.lastIndex=0;continue;}re.lastIndex=0;
  // split into YAML documents; each component block begins with "--- !u!"
  const parts=s.split(/(?=^--- )/m);
  let changed=false;
  const out=parts.map(b=>{
    if(!/m_Script: \{fileID: 1392445389, guid: d3e719b59ab71ba3f6b398058c866280, type: 3\}/.test(b))return b;
    const isButton=/^  m_OnClick:/m.test(b)||/^  m_OnClick: /m.test(b);
    if(isButton){btn++;}else{sel++;}
    changed=true;
    return b.replace("m_Script: {fileID: 1392445389, guid: "+UI_STUB+", type: 3}","m_Script: {fileID: 11500000, guid: "+(isButton?BUTTON:SELECTABLE)+", type: 3}");
  });
  if(changed){fs.writeFileSync(p,out.join(""));files++;}
}}})(path.join(ROOT,"Assets"));
console.log("Button:",btn,"Selectable:",sel,"files:",files);
