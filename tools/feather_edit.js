const fs=require('fs');
const p='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/TrungKien/UI/NewFearther/UIPopupNewFeather.cs';
const raw=fs.readFileSync(p,'utf8');
const cr=raw.includes('\r\n')?'\r':'';
let lines=raw.split('\n');
function rep(prefix,text){
  const i=lines.findIndex(l=>l.includes(prefix));
  if(i<0) throw new Error('not found: '+prefix);
  lines.splice(i,1,...text.map(t=>'\t\t\t'+t+cr));
}
rep('base UICakePopup.Awake and UIElementAbstract.Hide',[
 '// Rebuilt from the decompiled code: base.Awake, then click listeners on btnClose and btnContinue.',
 '// The decompile does not name the listener methods; OnClickContinue and HideByBackButton are inferred from the button names.',
 'base.Awake();',
 'if (btnClose != null)',
 '{',
 '\tbtnClose.onClick.AddListener(HideByBackButton);',
 '}',
 'if (btnContinue != null)',
 '{',
 '\tbtnContinue.onClick.AddListener(OnClickContinue);',
 '}']);
rep('calls CakeOrder.BaseUI.UIElementAbstract.Hide, which is not in the stubs',['Hide();']);
rep('calls UIElementAbstract.Show (CakeOrder.BaseUI) which is not in the stubs',[
 'if (Setup(featherKey))',
 '{',
 '\tShow(onClosed);',
 '}']);
rep('calls base UICakePopup.OnBeforeShow, which is not in the stubs',[
 'base.OnBeforeShow();',
 'if (!_isQueuePrepared)',
 '{',
 '\tSetupNextLevel();',
 '}']);
rep('calls base UIElementWithAnim.OnDoneHide, which is not in the stubs',[
 'base.OnDoneHide();',
 'CollectCurrentFeather();',
 '_featherQueue.Clear();',
 '_featherIndex = 0;',
 '_isQueuePrepared = false;']);
fs.writeFileSync(p,lines.join('\n'));
console.log('ok, cr='+JSON.stringify(cr));
