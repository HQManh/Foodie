const fs=require('fs'),path=require('path');
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
const re=/^([ \t]*)public event ([^\r\n]+?)\r?\n\1\{\r?\n\1\t\[CompilerGenerated\]\r?\n\1\tadd\r?\n\1\t\{\r?\n\1\t\}\r?\n\1\t\[CompilerGenerated\]\r?\n\1\tremove\r?\n\1\t\{\r?\n\1\t\}\r?\n\1\}/gm;
let total=0;const per=[];
function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs')){const t=fs.readFileSync(p,'utf8');const m=[...t.matchAll(re)];if(m.length){total+=m.length;per.push([p.replace(/^.*Assets\//,''),m.length]);}}}}
roots.forEach(walk);
console.log('events with empty add/remove:',total,'in',per.length,'files');per.sort((a,b)=>b[1]-a[1]).slice(0,15).forEach(x=>console.log(' ',x[1],x[0]));
fs.writeFileSync('D:/Unity/Foodie/tools/empty_events.json',JSON.stringify(per));
