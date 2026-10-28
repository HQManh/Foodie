const fs=require('fs'),cp=require('child_process');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/';
const find=n=>cp.execSync('find '+B+' -name '+n+'.cs',{encoding:'utf8'}).trim().split('\n')[0];
const items=[['CakeOrderMapLevelLayoutManager','private static','[MapLevelLayoutManager]','#ff5733'],
 ['HomeLevelPathWorldMap','private static','[HomeLevelPathWorldMap]','#FFA500'],
 ['SingleHomeMapDataCache','protected static','[HomeMapDataCache]','#46F567'],
 ['PetAssistantDataAccess','private static','[LevelProgressData]','#33abbc'],
 ['PlayerMapLevelProgressDataAccess','private static','[LevelProgressData]','#33ff89']];
for(const [cls,vis,tag,color] of items){const p=find(cls);const raw=fs.readFileSync(p,'utf8');const nl=raw.includes('\r\n')?'\r\n':'\n';
 const from=vis+' readonly R1Logger LocalLogger;';if(!raw.includes(from))throw new Error('nf '+cls);
 const to='// Values read from the static constructor (string literals decoded from the metadata).'+nl+'\t'+vis+' readonly R1Logger LocalLogger = new R1Logger'+nl+'\t{'+nl+'\t\tprefix = "'+tag+'",'+nl+'\t\tenableLog = true,'+nl+'\t\tcolorCode = "'+color+'"'+nl+'\t};';
 fs.writeFileSync(p,raw.replace(from,to));console.log('ok',cls);}
