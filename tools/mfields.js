// usage: node mfields.js <dumpfile> <TypeFullName>...   prints "Type.field : type" for the given managed types
const fs=require('fs');
const [,,file,...types]=process.argv;
const lines=fs.readFileSync(file,'utf8').split('\n');
let dt='',nm='',inFields=false;
for(const l of lines){
  if(/^fields\[/.test(l)||/^  fields\[/.test(l)) inFields=true;
  let m;
  if(m=l.match(/^\s+declaring_type:\s*(.*)$/)) dt=m[1].trim();
  else if(m=l.match(/^      name:\s*(.*)$/)) nm=m[1].trim();
  else if(m=l.match(/field_type:\s*(.*)$/)){ if(types.includes(dt)) console.log(dt+'.'+nm+' : '+m[1].trim()); }
}
