const fs=require('fs');
const src=fs.readFileSync(__dirname+'/blobs.js','utf8').replace("console.log(h,JSON.stringify(out));","console.log(h,JSON.stringify(out.map(v=>v>>>0)));");
fs.writeFileSync(__dirname+'/blobs_u.js',src);
