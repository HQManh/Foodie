const fs=require('fs'),path=require('path');
const BS=String.fromCharCode(92);
const A='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/';
function edit(rel,a,b){const p=A+rel;let s=fs.readFileSync(p,'utf8');if(!s.includes(a))throw new Error('nf '+rel+': '+a);fs.writeFileSync(p,s.replace(a,b));}
edit('AnhPD/FoodOrder/IngredientSpawnerController.cs','private readonly ConveyorGrid _grid;','private readonly ConveyorGrid _grid = new ConveyorGrid();');
edit('AnhPD/FoodOrder/IngredientSpawnerController.cs','private readonly ConveyorChainRopeView _ropes;','private readonly ConveyorChainRopeView _ropes = new ConveyorChainRopeView();');
edit('AnhPD/FoodOrder/IngredientSpawnerController.cs','private readonly ConveyorQueueMask _mask;','private readonly ConveyorQueueMask _mask = new ConveyorQueueMask();');
edit('AnhPD/FoodOrder/ServeShelfController.cs','private readonly ShelfMergeQueue _merges;','private readonly ShelfMergeQueue _merges = new ShelfMergeQueue();');
edit('AnhPD/FoodOrder/ServeShelfController.cs','private readonly ShelfSnapshot _snapshot;','private readonly ShelfSnapshot _snapshot = new ShelfSnapshot();');
edit('Datpt/Utilities.cs','private static readonly DragData dragData;','private static readonly DragData dragData = new DragData();');
// private non-readonly collections that are never assigned and are not serialized
const roots=['D:/Unity/Foodie/UnityProject/Assets/Scripts','D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder','D:/Unity/Foodie/UnityProject/Assets/Plugins/DaivqUtilities'];
const files=[]; for(const r of roots)(function walk(d){for(const e of fs.readdirSync(d,{withFileTypes:true})){const p=path.join(d,e.name);if(e.isDirectory())walk(p);else if(e.name.endsWith('.cs'))files.push(p);}})(r);
const re=new RegExp('^([ '+BS+'t]*)(private|protected|internal)((?: static)?) ((?:List|Dictionary|HashSet|Queue|Stack)<[^;='+BS+'r'+BS+'n]*>) ([A-Za-z_][A-Za-z0-9_]*);','gm');
let n=0,nf=0;
for(const f of files){
  const t=fs.readFileSync(f,'utf8'); const lines=t.split('\n'); let changed=0;
  const out=t.replace(re,(m,ind,acc,st,type,name,off)=>{
    if(name.startsWith('_003C')) return m;
    // previous non-empty line is an attribute? skip serialized fields
    const before=t.slice(0,off).split('\n'); let k=before.length-2; while(k>=0&&before[k].trim()==='')k--;
    if(k>=0&&/^\s*\[(SerializeField|SerializeReference|NonSerialized|HideInInspector)/.test(before[k])) return m;
    const rest=t.replace(m,'');
    if(new RegExp(BS+'b'+name+BS+'s*=(?!=)').test(rest)) return m;
    changed++; return ind+acc+st+' '+type+' '+name+' = new '+type+'();';
  });
  if(changed){fs.writeFileSync(f,out);n+=changed;nf++;console.log(path.basename(f),changed);}
}
console.log('initialised',n,'private collections in',nf,'files');
