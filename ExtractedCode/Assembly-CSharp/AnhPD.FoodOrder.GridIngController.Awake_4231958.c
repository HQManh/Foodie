// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$Awake
// address: 0x4231958
// body: available
// range: 0x4231958-0x4231c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4231c9c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__Awake(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09516dd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174650);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09179270);
    FUN_03f5c2a4(&DAT_091ce2f8);
    FUN_03f5c2a4(&DAT_091ce308);
    FUN_03f5c2a4(&DAT_091ce318);
    FUN_03f5c2a4(&DAT_091ce2e0);
    FUN_03f5c2a4(&DAT_09186bb0);
    FUN_03f5c2a4(&DAT_09186bb8);
    FUN_03f5c2a4(&DAT_09186bc0);
    FUN_03f5c2a4(&DAT_09186bc8);
    FUN_03f5c2a4(&DAT_091eaed8);
    FUN_03f5c2a4(&DAT_091910b8);
    DAT_09516dd1 = 1;
  }
  uVar1 = AnhPD_FoodOrder_GridIngController__BuildLayout(param_1);
  puVar4 = (undefined8 *)(param_1 + 0xb8);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  AnhPD_FoodOrder_GridIngController__SetupSaveMeBagAnchor(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = UnityEngine_Component__get_transform(param_1,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09186bb0);
  AnhPD_FoodOrder_IngCellDisplayPool___ctor(uVar2,uVar5,uVar1);
  puVar6 = (undefined8 *)(param_1 + 0xd0);
  *puVar6 = uVar2;
  thunk_FUN_03f5d7b8(puVar6,uVar2);
  uVar7 = *puVar4;
  uVar1 = thunk_FUN_03f9944c(DAT_09179270);
  FUN_05329bb0(uVar1,param_1,DAT_091ce2f8,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09179270);
  FUN_05329bb0(uVar2,param_1,DAT_091ce318,0);
  uVar5 = thunk_FUN_03f9944c(DAT_09186bb8);
  AnhPD_FoodOrder_IngCellFinder___ctor(uVar5,uVar7,uVar1,uVar2);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar5);
  uVar7 = *puVar4;
  uVar5 = *puVar6;
  uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar1,param_1,DAT_091ce2e0,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09186bc0);
  AnhPD_FoodOrder_IngCellStatus___ctor(uVar2,uVar7,uVar5,uVar1);
  *(undefined8 *)(param_1 + 200) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar2);
  uVar2 = *puVar4;
  uVar1 = thunk_FUN_03f9944c(DAT_09179270);
  FUN_05329bb0(uVar1,param_1,DAT_091ce318,0);
  if (*(int *)(DAT_091910b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_091910b8 + 0xb8);
  lVar8 = puVar4[1];
  if (lVar8 == 0) {
    if (*(int *)(DAT_091910b8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_091910b8 + 0xb8);
    }
    uVar5 = *puVar4;
    lVar8 = thunk_FUN_03f9944c(DAT_09174650);
    FUN_070a8c30(lVar8,uVar5,DAT_091eaed8,0);
    plVar3 = (long *)(*(long *)(DAT_091910b8 + 0xb8) + 8);
    *plVar3 = lVar8;
    thunk_FUN_03f5d7b8(plVar3,lVar8);
  }
  uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar5,param_1,DAT_091ce308,0);
  uVar7 = thunk_FUN_03f9944c(DAT_09186bc8);
  AnhPD_FoodOrder_IngDirtyPlateCleaner___ctor(uVar7,uVar2,uVar1,lVar8,uVar5);
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar7);
  return;
}

