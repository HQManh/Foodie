// rea decompile_all
// name: CakeOrder.InGame.CookOrderModuleIngredientShopping$$SetUp
// address: 0x4289018
// body: available
// range: 0x4289018-0x42891cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42891c8 to 0x4289220 CakeOrder.InGame.CookOrderModuleIngredientShopping$$TrigggerAllowShoppingChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42891cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookOrderModuleIngredientShopping__SetUp
               (long param_1,long param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_0951715a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09181e18);
    FUN_03f5c2a4(&DAT_091c6288);
    FUN_03f5c2a4(&DAT_091c6290);
    FUN_03f5c2a4(&DAT_09192370);
    DAT_0951715a = 1;
  }
  plVar4 = (long *)(param_1 + 0x38);
  *plVar4 = param_2;
  thunk_FUN_03f5d7b8(plVar4,param_2);
  uVar2 = DAT_09180e78;
  plVar5 = (long *)(param_1 + 0x28);
  lVar6 = *plVar5;
  *(byte *)(param_1 + 0x20) = param_3 & 1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  System_Action___ctor(uVar2,param_1,DAT_091c6290,0);
  lVar3 = thunk_FUN_03f9944c(DAT_09181e18);
  Utilities_BoolModifierWithRegisteredSource___ctor(lVar3,uVar2,0);
  *plVar5 = lVar3;
  thunk_FUN_03f5d7b8(plVar5,lVar3);
  if (*plVar5 != 0) {
    Utilities_BoolModifierWithRegisteredSource__AppendSources(*plVar5,lVar6,0);
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) {
      iVar1 = *(int *)(lVar3 + 0x50);
      if (iVar1 == 4) {
        if (*plVar5 == 0) goto LAB_042891cc;
        Utilities_BoolModifierWithRegisteredSource__RemoveModifier(*plVar5,0xffffd8f1,0);
      }
      else if (iVar1 < 4) {
        if (*plVar5 != 0) {
          Utilities_BoolModifierWithRegisteredSource__AddModifier(*plVar5,0xffffd8f1,0);
          if (*plVar4 != 0) {
            lVar3 = *(long *)(*plVar4 + 0x28);
            uVar2 = thunk_FUN_03f9944c(DAT_09192370);
            CakeOrder_InGame_LevelBaseCakeOrderAbstract_OnPlayStateChangedDelegate___ctor
                      (uVar2,param_1,DAT_091c6288,0);
            if (lVar3 != 0) {
              CakeOrder_InGame_LevelBaseCakeOrderAbstract__add_onPlayStateChanged(lVar3,uVar2,0);
              goto LAB_042891b4;
            }
          }
        }
        goto LAB_042891cc;
      }
LAB_042891b4:
      CakeOrder_InGame_CookOrderModuleIngredientShopping__TrigggerAllowShoppingChanged(param_1);
      return;
    }
  }
LAB_042891cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

