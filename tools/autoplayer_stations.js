const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/Debug/FSBurgerAutoPlayer.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
const k='\t\tif (Time.time >= _nextReport)';
if(!s.includes(k)) throw new Error('nf');
const add=[
'\t\t// Like a player: send a grid item to a station that can take it.',
'\t\tMessyController game = MessyController.Ins;',
'\t\tif (game != null && game.Info != null)',
'\t\t{',
'\t\t\tforeach (DragItem drag in FindObjectsByType<DragItem>(FindObjectsSortMode.None))',
'\t\t\t{',
'\t\t\t\tif (drag == null || drag.Cell == null || drag.IsWindingUp)',
'\t\t\t\t{',
'\t\t\t\t\tcontinue;',
'\t\t\t\t}',
'\t\t\t\tif (game.Info.TryGetInteractableStation(drag.GetId(), drag.transform.position, out CookingStation station) && station != null)',
'\t\t\t\t{',
'\t\t\t\t\tgame.AutoFeedStationFromGrid(drag, station);',
'\t\t\t\t\t_fed++;',
'\t\t\t\t\tbreak;',
'\t\t\t\t}',
'\t\t\t}',
'\t\t}',
''].join(nl);
s=s.replace(k,add+k);
s=s.replace('private int _rejected;','private int _rejected;'+nl+nl+'\tprivate int _fed;');
s=s.replace('" skipped=" + _rejected +','" skipped=" + _rejected + " fedToStations=" + _fed +');
fs.writeFileSync(p,s); console.log('ok');
