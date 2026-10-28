const fs=require('fs');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/';
function edit(file, reps){
  const p=B+file; let s=fs.readFileSync(p,'utf8');
  for(const [from,to] of reps){ if(!s.includes(from)) throw new Error('nf '+from+' in '+file); s=s.replace(from,to); }
  fs.writeFileSync(p,s);
}
const d='/* decoded from the metadata */';
edit('AnhPD/FoodOrder/FTimer.cs',[['Shader.PropertyToID("_FillAmount" /* literal recovered by guess */)','Shader.PropertyToID("_Fill") '+d]]);
edit('AnhPD/FoodOrder/GroupViewSpineAnimation.cs',[['idlePoseAnim + "_pose" /* literal recovered by guess */','idlePoseAnim + "@pose" '+d]]);
edit('AnhPD/FoodOrder/GroupViewTeapot.cs',[
 ['private string teaId = "tea" /* literal recovered by guess */;','private string teaId = "tea_leaf"; '+d],
 ['private string cupPourSfxEvent = "pour_sfx" /* literal recovered by guess */;','private string cupPourSfxEvent = "pour_sfx_start"; '+d],
 ['private string cupPourEndEvent = "pour_end" /* literal recovered by guess */;','private string cupPourEndEvent = "pour_sfx_end"; '+d]]);
edit('AnhPD/FoodOrder/IngGridLayout.cs',[['return "none"; /* literal recovered by guess */','return "-"; '+d]]);
edit('Datpt/Cook_Order/OrderCircleCountDownTimer.cs',[['_material.SetFloat("_Progress" /* literal recovered by guess */, progress);','_material.SetFloat("_FillAmount" '+d+', progress);']]);
edit('AnhPD/FoodOrder/RecipeConfigSO.cs',[['return "Dish_" /* literal recovered by guess */ + dishKind.ToString();','return "dish_" '+d+' + dishKind.ToString();']]);
// SpriteProgressBar: the static constructor duplicated (with a wrong "_Vertical") the inline initializers now on the fields.
{const p=B+'Datpt/Cook_Order/SpriteProgressBar.cs';let s=fs.readFileSync(p,'utf8');const nl=s.includes('\r\n')?'\r\n':'\n';
 const block=['\t\tstatic SpriteProgressBar()','\t\t{','\t\t\tFillID = Shader.PropertyToID("_Fill" /* literal recovered by guess */);','\t\t\tVerticalID = Shader.PropertyToID("_Vertical" /* literal recovered by guess */);','\t\t\tReverseID = Shader.PropertyToID("_Reverse" /* literal recovered by guess */);','\t\t\tColorID = Shader.PropertyToID("_Color" /* literal recovered by guess */);','\t\t}',''].join(nl)+nl;
 if(!s.includes(block)) throw new Error('nf spb block'); s=s.replace(block,''); fs.writeFileSync(p,s);}
console.log('ok');
