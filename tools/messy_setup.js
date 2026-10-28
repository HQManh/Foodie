const fs=require('fs');
const {patch}=require('D:/Unity/Foodie/tools/setbody.js');
const B='D:/Unity/Foodie/UnityProject/Assets/Scripts/Assembly-CSharp/AnhPD/FoodOrder/';
// 1) LevelInitializer reads the level singleton's data
{ const p=B+'LevelInitializer.cs'; let s=fs.readFileSync(p,'utf8'); const nl=s.includes('\r\n')?'\r\n':'\n';
  const a='private CakeLevelRuntimeData RuntimeData => null;'; const b='private CakeLevelInitData InitData => null;';
  if(!s.includes(a)||!s.includes(b)) throw new Error('nf initializer');
  s=s.replace(a,'private CakeLevelRuntimeData RuntimeData => LevelBaseCakeOrderAbstract.Instance != null ? LevelBaseCakeOrderAbstract.Instance.RuntimeData : null;');
  s=s.replace(b,'private CakeLevelInitData InitData => LevelBaseCakeOrderAbstract.Instance != null ? LevelBaseCakeOrderAbstract.Instance.InitData : null;');
  fs.writeFileSync(p,s); }
// 2) MessyController.OnSetUpLevel
const p=B+'MessyController.cs';
patch(p,[['protected override UniTask OnSetUpLevel()',[
 '// Rebuilt from the decompiled code: wires the piece ledger, supply, initializer, level info and the service graph.',
 'PieceLedger.Reset();',
 'PrepareRandomOrders();',
 'List<string> seedIds = StackModeService.ResolveQueueIngredientIds(InitData, recipeConfig, orderStrategy);',
 '_supply = LevelSupply.Build(recipeConfig, seedIds);',
 'LevelInitializer initializer = new LevelInitializer(recipeConfig, _supply);',
 'initializer.Initialize(_itemRefs, _areaRefs, _managerRefs, _itemDict, delegate',
 '{',
 '\tif (_endGame != null)',
 '\t{',
 '\t\t_endGame.CheckEndGame();',
 '\t}',
 '});',
 '_areaService = initializer.AreaService;',
 '_moneyService = initializer.MoneyService;',
 '_dragHandler = initializer.DragInteractionHandler;',
 '_spawnService = initializer.SpawnService;',
 'Info = new LevelInfo(recipeConfig, _areaService, orderStrategy, levelSkin);',
 'Info.Pieces = _supply.Pieces;',
 '_supply.Pieces.Setup(Info, InitData.customerSpawnData);',
 '_stackMode = new StackModeService(_areaRefs, _managerRefs, Info, recipeConfig);',
 '_autoCompleteFx = new AutoCompleteOrderFx(Info, _areaRefs.ingGrid, _managerRefs.spawnerController, _serve);',
 '_tint = new BackgroundTintService(BackgroundControl);',
 '_booster = new BoosterService(_areaRefs, _managerRefs, Info, _autoCompleteFx, _tint.SetBoosterDim);',
 'if (_areaRefs.ingGrid != null)',
 '{',
 '\t_areaRefs.ingGrid.SetupCellGrid(InitData);',
 '}',
 'if (_areaRefs.serveShelf != null)',
 '{',
 '\t_areaRefs.serveShelf.Setup(InitData.serveSlotConfig.init);',
 '}',
 'DifficultySprite.ApplyAllInScene();',
 'SpineSkinSwitcher.ApplyAllInScene();',
 'if (initializer.DragContext != null)',
 '{',
 '\tinitializer.DragContext.info = Info;',
 '}',
 '_spawnService.SetInteractContext(Info, OnItemLandedAtStation);',
 '_spawnService.OnDespawn = delegate(DragItem item)',
 '{',
 '\tif (_areaRefs != null && _areaRefs.serveShelf != null)',
 '\t{',
 '\t\t_areaRefs.serveShelf.ForgetItem(item);',
 '\t}',
 '};',
 '_stackMode.Setup();',
 'InitCustomerLine();',
 'return default(UniTask);']]],{methodTabs:2});
console.log('ok');
