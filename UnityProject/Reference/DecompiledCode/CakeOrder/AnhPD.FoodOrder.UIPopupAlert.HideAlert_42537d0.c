// rea decompile_all
// name: AnhPD.FoodOrder.UIPopupAlert$$HideAlert
// address: 0x42537d0
// body: available
// range: 0x42537d0-0x425399f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4253950 to 0x42c8d14 CakeOrder.BaseUI.UIElementAbstract$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4253998 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425399c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIPopupAlert__HideAlert(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_09516ef3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f1800);
    FUN_03f5c2a4(&DAT_09195778);
    DAT_09516ef3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195778);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 0x10);
    *plVar4 = param_3;
    thunk_FUN_03f5d7b8(plVar4,param_3);
    lVar6 = *(long *)(param_1 + 0xc0);
    if (lVar6 != 0) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar7 = 0;
        uVar3 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = *(long *)(lVar6 + 0x20 + uVar7 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
          if ((uVar3 & 1) != 0) {
            if (lVar5 == 0) goto LAB_0425399c;
            if (*(int *)(lVar5 + 0x28) == param_2) {
              AnhPD_FoodOrder_UIAlertBoard__Hide(lVar5);
            }
          }
          uVar3 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      uVar7 = AnhPD_FoodOrder_UIPopupAlert__HasBoardShowing(param_1);
      if (((uVar7 & 1) == 0) &&
         (uVar7 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0), (uVar7 & 1) != 0)) {
        uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
        FUN_070a8c30(uVar2,lVar1,DAT_091f1800,0);
        CakeOrder_BaseUI_UIElementAbstract__Hide(0,param_1,uVar2,0);
        return;
      }
      lVar1 = *plVar4;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0425397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
  }
LAB_0425399c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

