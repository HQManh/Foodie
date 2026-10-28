const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Debug/FSBurgerDebugBootstrap.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b.replace(/\n/g,nl)); }
rep('\tprivate const string MapIdFragment = "burger";','\tprivate const string MapIdFragment = "burger";\n\n\t// Held so the database asset stays loaded; the game code finds it through Resources.FindObjectsOfTypeAll.\n\tprivate CakeOrderDatabaseSO _database;');
rep('\t\tCakeOrderDatabaseSO[] databases = Resources.FindObjectsOfTypeAll<CakeOrderDatabaseSO>();\n\t\tCakeOrderDatabaseSO database = databases.Length > 0 ? databases[0] : null;',
'\t\tCakeOrderDatabaseSO database = null;\n\t\tforeach (string guid in UnityEditor.AssetDatabase.FindAssets("t:CakeOrderDatabaseSO"))\n\t\t{\n\t\t\tdatabase = UnityEditor.AssetDatabase.LoadAssetAtPath<CakeOrderDatabaseSO>(UnityEditor.AssetDatabase.GUIDToAssetPath(guid));\n\t\t\tbreak;\n\t\t}\n\t\t_database = database;\n\t\tDebug.Log("[FSBurgerDebugBootstrap] database: " + (database != null ? database.name + " (" + database.NumMaps + " maps)" : "not found"));');
fs.writeFileSync(p,s); console.log('ok');
