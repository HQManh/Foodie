// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$Awake
// address: 0x40f3270
// body: available
// range: 0x40f3270-0x40f34ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f34f8 to 0x40f0d30 AnhPD.FoodOrder.IngredientSpawnerController$$SetupBeltScroll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f34fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__Awake(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_095160fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174798);
    FUN_03f5c2a4(&DAT_09182bf0);
    FUN_03f5c2a4(&DAT_09182c10);
    FUN_03f5c2a4(&DAT_09182c28);
    FUN_03f5c2a4(&DAT_09182c30);
    FUN_03f5c2a4(&DAT_091cfe60);
    FUN_03f5c2a4(&DAT_091cfe68);
    FUN_03f5c2a4(&DAT_091cfe50);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160fb = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = UnityEngine_Component__get_transform(param_1,0);
    *(undefined8 *)(param_1 + 200) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar6);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x138);
  uVar1 = *(undefined4 *)(param_1 + 0x13c);
  uVar6 = thunk_FUN_03f9944c(DAT_09182bf0);
  AnhPD_FoodOrder_ConveyorFreeze___ctor(uVar7,uVar6,uVar1,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar6;
  thunk_FUN_03f5d7b8(param_1 + 0x1c0,uVar6);
  uVar6 = thunk_FUN_03f9944c(DAT_09174798);
  FUN_070a8c30(uVar6,param_1,DAT_091cfe50,0);
  lVar3 = thunk_FUN_03f9944c(DAT_09182c10);
  AnhPD_FoodOrder_ConveyorPickup___ctor(lVar3,uVar6);
  uVar6 = thunk_FUN_03f9944c(DAT_09174798);
  FUN_070a8c30(uVar6,param_1,DAT_091cfe60,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar6);
    uVar6 = thunk_FUN_03f9944c(DAT_09174798);
    FUN_070a8c30(uVar6,param_1,DAT_091cfe68,0);
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30),uVar6);
    *(long *)(param_1 + 0x1b8) = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x1b8,lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x1b8);
    lVar3 = thunk_FUN_03f9944c(DAT_09182c30);
    System_Object___ctor(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar6);
    *(long *)(param_1 + 0x1c8) = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x1c8,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    uVar6 = thunk_FUN_03f9944c(DAT_09182c28);
    AnhPD_FoodOrder_ConveyorStuckAlert___ctor(uVar6,uVar5);
    *(undefined8 *)(param_1 + 0x1d0) = uVar6;
    thunk_FUN_03f5d7b8(param_1 + 0x1d0,uVar6);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x1a0) + 0x10);
      *plVar4 = param_1;
      thunk_FUN_03f5d7b8(plVar4,param_1);
      AnhPD_FoodOrder_IngredientSpawnerController__SetupBeltScroll(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

