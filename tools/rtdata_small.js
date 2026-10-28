const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const B='D:/Unity/Foodie/UnityProject/Assets/Plugins/CakeOrder/CakeOrder.InGame/';
function rep(p,a,b){ let s=fs.readFileSync(p,'utf8'); if(!s.includes(a)) throw new Error('nf '+a); fs.writeFileSync(p,s.replace(a,b)); }
// time counter
patch(B+'CakeLevelRuntimeDataTimeCounter.cs',[['public void Update(float deltaTime)',['totalTime += deltaTime;']]],{methodTabs:1});
// number source
patch(B+'SimpleIngameNumberSource.cs',[
 ['public SimpleIngameNumberSource(int capacity, int amount)',['_capacity = capacity;','_amount = amount;']],
 ['public void SetAmount(int newAmount)',['if (_amount != newAmount)','{','\t_amount = newAmount;','\tthis.onAmountChanged?.Invoke();','}']],
 ['public void ChangeAmount(int delta)',['if (delta != 0)','{','\t_amount += delta;','\tthis.onAmountChanged?.Invoke();','}']],
 ['public void SetCapacity(int newCapacity)',['if (_capacity != newCapacity)','{','\t_capacity = newCapacity;','\tthis.onAmountChanged?.Invoke();','}']],
],{methodTabs:1});
rep(B+'SimpleIngameNumberSource.cs','public int Capacity => 0;','public int Capacity => _capacity;');
rep(B+'SimpleIngameNumberSource.cs','public int Amount => 0;','public int Amount => _amount;');
// booster counter
const bc=B+'BoosterCounter.cs';
patch(bc,[
 ['public void RecordUseBoosterByAds(string boosterId)',['RecordUseBooster(boosterId);','Add(countBoosterByAds, boosterId, 1);']],
 ['public void RecordUseBoosterByItem(string boosterId, int amount = 1)',['RecordUseBooster(boosterId);','Add(countBoosterByItem, boosterId, amount);']],
 ['public void RecordUseBoosterByHardCurrency(string boosterId, int price)',['RecordUseBooster(boosterId);','Add(countBoosterByHardCurrency, boosterId, 1);','Add(countBoosterCostHardCurrency, boosterId, price);']],
 ['public int GetTotalCostHardCurrency()',['int total = 0;','foreach (int cost in countBoosterCostHardCurrency.Values)','{','\ttotal += cost;','}','return total;']],
 ['private void RecordUseBooster(string boosterId)',['Add(countBoosterTotal, boosterId, 1);']],
],{methodTabs:1});
let s=fs.readFileSync(bc,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
for(const n of ['countBoosterTotal','countBoosterByAds','countBoosterByItem','countBoosterByHardCurrency','countBoosterCostHardCurrency'])
  s=s.replace('public Dictionary<string, int> '+n+';','public Dictionary<string, int> '+n+' = new Dictionary<string, int>();');
const helper=['\tprivate static void Add(Dictionary<string, int> map, string key, int amount)','\t{','\t\tmap.TryGetValue(key, out var current);','\t\tmap[key] = current + amount;','\t}',''].join(nl);
const idx=s.lastIndexOf('}'+nl+'}'); s=s.slice(0,idx)+nl+helper+s.slice(idx); fs.writeFileSync(bc,s);
// soft currency
const sc=B+'CakeLevelRuntimeDataSoftCurrency.cs';
rep(sc,'public int AmountEarnBeforeMultiplier => 0;','public int AmountEarnBeforeMultiplier => _amountEarn;');
rep(sc,'public int AmountEarnAddedByMultiplier => 0;','public int AmountEarnAddedByMultiplier => Mathf.RoundToInt((MultiplierEarn - 1f) * (float)_amountEarn);');
rep(sc,'public int AmountEarn => 0;','public int AmountEarn => Mathf.RoundToInt(MultiplierEarn * (float)_amountEarn);');
rep(sc,'public int Amount => 0;','// The decompile multiplies by MultiplierEarn a second time here; that is taken to be a decompiler artefact, so Amount is earned minus spent.\n\tpublic int Amount => AmountEarn - AmountSpend;');
patch(sc,[
 ['public CakeLevelRuntimeDataSoftCurrency(float multiplier = 1f)',['MultiplierEarn = multiplier;','_amountEarn = 0;']],
 ['public void Change(float amount)',['Change(Mathf.RoundToInt(amount));']],
 ['public void Change(int amount)',['if (amount > 0)','{','\tEarn(amount);','}','else if (amount < 0)','{','\tint previous = AmountSpend;','\tAmountSpend = previous - amount;','\tthis.onAmountChanged?.Invoke(previous, AmountSpend);','}']],
 ['public void Earn(float amount)',['Earn(Mathf.RoundToInt(amount));']],
 ['public void Earn(int amount)',['_amountEarn += amount;','this.onAmountChanged?.Invoke(AmountEarn - Mathf.RoundToInt(MultiplierEarn * (float)amount), AmountEarn);']],
 ['public void Spend(float amount)',['Spend(Mathf.RoundToInt(amount));']],
 ['public void Spend(int amount)',['int previous = AmountSpend;','AmountSpend = amount;','this.onAmountChanged?.Invoke(previous, amount);']],
 ['public CakeLevelRuntimeDataSoftCurrency Clone()',['CakeLevelRuntimeDataSoftCurrency copy = new CakeLevelRuntimeDataSoftCurrency();','copy._amountEarn = _amountEarn;','copy.MultiplierEarn = MultiplierEarn;','return copy;']],
],{methodTabs:1});
s=fs.readFileSync(sc,'utf8'); if(!/using UnityEngine;/.test(s)) s='using UnityEngine;'+nl+s; fs.writeFileSync(sc,s);
console.log('ok');
