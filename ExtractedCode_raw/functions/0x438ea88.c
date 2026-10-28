// rea decompile_all
// name: CakeOrder.InGame.InGameComboMechanicControl$$SetUp
// address: 0x438ea88
// body: available
// range: 0x438ea88-0x438ecaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438ecac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameComboMechanicControl__SetUp
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((DAT_09517a0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174910);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091cfcc8);
    FUN_03f5c2a4(&DAT_091cfcd0);
    FUN_03f5c2a4(&DAT_091cfcd8);
    FUN_03f5c2a4(&DAT_091cfce0);
    FUN_03f5c2a4(&DAT_091cfce8);
    FUN_03f5c2a4(&DAT_09192370);
    DAT_09517a0b = 1;
  }
  plVar5 = (long *)(param_1 + 0x28);
  *plVar5 = param_3;
  thunk_FUN_03f5d7b8(plVar5,param_3);
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = param_4;
  thunk_FUN_03f5d7b8(plVar4,param_4);
  plVar3 = (long *)(param_1 + 0x20);
  *plVar3 = param_2;
  thunk_FUN_03f5d7b8(plVar3,param_2);
  lVar2 = *plVar3;
  uVar1 = thunk_FUN_03f9944c(DAT_09192370);
  CakeOrder_InGame_LevelBaseCakeOrderAbstract_OnPlayStateChangedDelegate___ctor
            (uVar1,param_1,DAT_091cfcd8);
  if (lVar2 != 0) {
    CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onPlayStateChanged(lVar2,uVar1);
    if (*plVar5 != 0) {
      lVar2 = *plVar4;
      if (*(char *)(*plVar5 + 0x24) == '\0') {
        uVar1 = thunk_FUN_03f9944c(DAT_09174910);
        FUN_070a8c30(uVar1,param_1,DAT_091cfcd0,0);
        if (lVar2 == 0) goto LAB_0438ecac;
        CakeOrder_InGame_CakeLevelRuntimeDataCustomer__add_onAddCustomerServed(lVar2,uVar1);
      }
      else {
        uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar1,param_1,DAT_091cfce8,0);
        if (lVar2 == 0) goto LAB_0438ecac;
        CakeOrder_InGame_CakeLevelRuntimeDataCustomer__add_onSingleDishServed(lVar2,uVar1);
        lVar2 = *(long *)(param_1 + 0x30);
        uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar1,param_1,DAT_091cfce0,0);
        if (lVar2 == 0) goto LAB_0438ecac;
        CakeOrder_InGame_CakeLevelRuntimeDataCustomer__add_onSingleDishFailed(lVar2,uVar1);
      }
      lVar2 = *(long *)(param_1 + 0x30);
      uVar1 = thunk_FUN_03f9944c(DAT_09174910);
      FUN_070a8c30(uVar1,param_1,DAT_091cfcc8,0);
      if (lVar2 != 0) {
        CakeOrder_InGame_CakeLevelRuntimeDataCustomer__add_onAddCustomerFailed(lVar2,uVar1);
        *(undefined8 *)(param_1 + 0x3c) = 0;
        return;
      }
    }
  }
LAB_0438ecac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

