const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Debug/FSBurgerDebugBootstrap.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b.replace(/\n/g,nl)); }
rep('\t\t\t\tstring id = database.GetMapId(i);\n\t\t\t\tif (mapId == null','\t\t\t\tstring id = database.GetMapId(i);\n\t\t\t\tDebug.Log("[FSBurgerDebugBootstrap] database map " + i + ": \'" + id + "\'");\n\t\t\t\tif (mapId == null');
rep('\t\tawait LevelPlayLoadAndSetupControl.Instance.SetUpAndStartDirect(','\t\tLevelPlayLoadAndSetupControl control = LevelPlayLoadAndSetupControl.Instance;\n\t\tif (control == null)\n\t\t{\n\t\t\tcontrol = new GameObject("LevelPlayLoadAndSetupControl").AddComponent<LevelPlayLoadAndSetupControl>();\n\t\t}\n\t\tawait control.SetUpAndStartDirect(');
fs.writeFileSync(p,s); console.log('ok');
