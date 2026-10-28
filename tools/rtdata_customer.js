const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const p='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/CakeLevelRuntimeDataCustomer.cs';
let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
function rep(a,b){ if(!s.includes(a)) throw new Error('nf '+a); s=s.replace(a,b); }
rep('public int maxNumCustomers { get; private set; }','public int maxNumCustomers { get; private set; }');
rep('public List<ResultCustomerData> servedCustomer { get; private set; }','public List<ResultCustomerData> servedCustomer { get; private set; } = new List<ResultCustomerData>();');
rep('public List<ResultCustomerData> failedCustomer { get; private set; }','public List<ResultCustomerData> failedCustomer { get; private set; } = new List<ResultCustomerData>();');
rep('public int Capacity => 0;','public int Capacity => maxNumCustomers;');
rep('public int Amount => 0;','public int Amount => servedCustomer.Count + failedCustomer.Count;');
rep('public float Progress => 0f;','public float Progress => maxNumCustomers > 0 ? (float)Amount / (float)maxNumCustomers : 0f;');
fs.writeFileSync(p,s);
patch(p,[
 ['public void TriggerSingleDishServed()',['NumDishServerd++;','this.onSingleDishServed?.Invoke();']],
 ['public void TriggerSingleDishFailed()',['NumDishFailed++;','this.onSingleDishFailed?.Invoke();']],
 ['public void ReportCustomerArrived(int customerIndex)',['this.onCustomerArrived?.Invoke(customerIndex);']],
 ['public void ReportCustomerEnded(int customerIndex, bool win)',['this.onCustomerEnded?.Invoke(customerIndex, win);']],
 ['public void AddServedCustomer(ResultCustomerData data)',['servedCustomer.Add(data);','this.onAddCustomerServed?.Invoke(data);','this.onAmountChanged?.Invoke();']],
 ['public void AddFailedCustomer(ResultCustomerData data)',['failedCustomer.Add(data);','this.onAddCustomerFailed?.Invoke(data);','this.onAmountChanged?.Invoke();']],
 ['public void SetMaxNumCustomers(int num)',['maxNumCustomers = num;','this.onAmountChanged?.Invoke();']],
 ['public CakeLevelRuntimeDataCustomer Clone()',[
  'CakeLevelRuntimeDataCustomer copy = new CakeLevelRuntimeDataCustomer();',
  'copy.maxNumCustomers = maxNumCustomers;',
  'copy.servedCustomer = new List<ResultCustomerData>(servedCustomer);',
  'copy.failedCustomer = new List<ResultCustomerData>(failedCustomer);',
  'copy.NumDishServerd = NumDishServerd;',
  'copy.NumDishFailed = NumDishFailed;',
  'return copy;']],
],{methodTabs:1});
// runtime data
const q='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/CakeLevelRuntimeData.cs';
let t=fs.readFileSync(q,'utf8');
t=t.replace('public bool IsDoneFirstTutUI => false;','public bool IsDoneFirstTutUI => customData != null && customData.TryGetValue(KEY_DONE_FIRST_TUT_UI, out var value) && value is bool done && done;');
fs.writeFileSync(q,t);
patch(q,[
 ['public CakeLevelRuntimeData(CakeLevelInitData initData)',[
  '// Rebuilt from the decompiled code. The original only builds the money/booster/heart parts when the init data carries the',
  '// restaurant params; the other members are always created here so a partial init cannot leave them null.',
  'resultType = GameResultType.None;',
  'timeCounter = new CakeLevelRuntimeDataTimeCounter();',
  'customerData = new CakeLevelRuntimeDataCustomer();',
  'customData = new Dictionary<string, object>();',
  'if (initData == null)',
  '{',
  '\treturn;',
  '}',
  'if (initData.levelMetadata != null)',
  '{',
  '\tcustomerData.SetMaxNumCustomers(initData.levelMetadata.numCustomers);',
  '}',
  'if (initData.restaurantParams != null)',
  '{',
  '\tsoftCurrencyData = new CakeLevelRuntimeDataSoftCurrency((float)initData.restaurantParams.profitPercentAdded / 100f + 1f);',
  '\tboosterCounter = new BoosterCounter();',
  '\tint hearts = initData.heartConfig != null ? initData.heartConfig.initHeart : 1;',
  '\theartData = new SimpleIngameNumberSource(hearts, hearts);',
  '}']],
 ['public void Update(float deltaTime)',['timeCounter.totalTime += deltaTime;']],
 ['public void SetDoneFirstTutUI()',['customData[KEY_DONE_FIRST_TUT_UI] = true;']],
],{methodTabs:1});
console.log('ok');
