// Convert events whose add/remove accessors are empty stubs into ordinary (field-like) events.
const fs=require('fs'),path=require('path');
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
// public [static|virtual] event <type> <name> { [CompilerGenerated] add { } [CompilerGenerated] remove { } }
const re=/^([ \t]*)((?:public|internal|protected|private)(?: static| virtual)? event [^\r\n]+?)\r?\n\1\{\r?\n\1\t\[CompilerGenerated\]\r?\n\1\tadd\r?\n\1\t\{\r?\n\1\t\}\r?\n\1\t\[CompilerGenerated\]\r?\n\1\tremove\r?\n\1\t\{\r?\n\1\t\}\r?\n\1\}/gm;
let total=0,files=0;
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs')){
  const t=fs.readFileSync(p,'utf8');let n=0;
  const out=t.replace(re,(m,ind,decl)=>{n++;return ind+decl+';';});
  if(n){fs.writeFileSync(p,out);total+=n;files++;}}}}
roots.forEach(walk);
console.log('converted',total,'events in',files,'files');
