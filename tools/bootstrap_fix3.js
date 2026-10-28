const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Debug/FSBurgerDebugBootstrap.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b.replace(/\n/g,nl)); }
// replace the AssetDatabase lookup with loading the managers scene
const start=s.indexOf('\t\tCakeOrderDatabaseSO database = null;');
const end=s.indexOf('\t\tstring mapId = null;');
if(start<0||end<0) throw new Error('nf db block');
const block=[
'\t\t// The persistent managers (database, progress scenario, level control, ...) live in the InitManagers scene, which the real game',
'\t\t// loads first. Load it additively when the level scene was opened on its own.',
'\t\tif (CakeOrderDatabaseSO.Instance == null)',
'\t\t{',
'\t\t\tUnityEditor.SceneManagement.EditorSceneManager.LoadSceneInPlayMode(InitManagersScenePath, new LoadSceneParameters(LoadSceneMode.Additive));',
'\t\t\tfor (int frame = 0; frame < 120 && CakeOrderDatabaseSO.Instance == null; frame++)',
'\t\t\t{',
'\t\t\t\tawait UniTask.Yield();',
'\t\t\t}',
'\t\t\tawait UniTask.Yield();',
'\t\t}',
'\t\tCakeOrderDatabaseSO database = CakeOrderDatabaseSO.Instance;',
'\t\tDebug.Log("[FSBurgerDebugBootstrap] database: " + (database != null ? database.name + " (" + database.NumMaps + " maps)" : "not found"));',
''].join(nl);
s=s.slice(0,start)+block+s.slice(end);
rep('\t// Held so the database asset stays loaded; the game code finds it through Resources.FindObjectsOfTypeAll.\n\tprivate CakeOrderDatabaseSO _database;','\tprivate const string InitManagersScenePath = "Assets/_Production/Map-common_assets/Scenes/InitManagers.unity";');
s=s.replace('\t\t_database = database;'+nl,'');
fs.writeFileSync(p,s); console.log('ok');
