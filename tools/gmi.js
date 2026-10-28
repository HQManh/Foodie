const fs=require('fs');
const j=JSON.parse(fs.readFileSync('il2cpp_full.json','utf8').replace(/^﻿/,''));
const n=j.data.normalized_result;
const g=n.generic_method_instances;
console.log('generic_method_instances', Array.isArray(g)?g.length:Object.keys(g||{}).slice(0,8));
console.log(JSON.stringify(Array.isArray(g)?g.slice(0,2):g).slice(0,600));
console.log('method_addresses sample', JSON.stringify(n.method_addresses.slice(0,2)));
const want=process.argv.slice(2).map(a=>parseInt(a,16)-0x100000);
for(const w of want){const hits=n.method_addresses.map((a,i)=>[a,i]).filter(([a])=>a.rva&&Math.abs(parseInt(a.rva,16)-w)<=4);console.log('0x'+(w+0x100000).toString(16),'->',hits.map(([a,i])=>i+':'+(n.methods[i]||{}).name).join(', ')||'(no metadata method)');}
