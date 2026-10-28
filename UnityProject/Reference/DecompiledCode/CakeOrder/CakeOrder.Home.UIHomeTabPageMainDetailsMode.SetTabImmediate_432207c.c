// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$SetTabImmediate
// address: 0x432207c
// body: available
// range: 0x432207c-0x43221af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432219c to 0x42d7830 CakeOrder.BaseUI.UIElementAbstract$$ShowImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43221ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode__SetTabImmediate(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 100) = param_2;
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar1 == 0)) goto LAB_043221ac;
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  CakeOrder_Home_UIHomeTabPageMainDetailsMode__HideListsOfOtherMaps(param_1,uVar2,1);
  if (param_2 == 2) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
              (*(long *)(param_1 + 0x68),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
              (*(long *)(param_1 + 0x70),0);
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__ShowImmediate
              (*(long *)(param_1 + 0x78),0);
    lVar1 = CakeOrder_Home_UIHomeTabPageMainDetailsMode__GetOrSpawnListCustomer(param_1,uVar2);
  }
  else {
    if (param_2 == 1) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_043221ac;
      CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
                (*(long *)(param_1 + 0x68),0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_043221ac;
      CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__ShowImmediate
                (*(long *)(param_1 + 0x70),0);
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_043221ac;
      CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
                (*(long *)(param_1 + 0x78),0);
      lVar1 = CakeOrder_Home_UIHomeTabPageMainDetailsMode__GetOrSpawnListToolRecipeCard
                        (param_1,uVar2);
      if (lVar1 == 0) goto LAB_043221ac;
      goto LAB_0432218c;
    }
    if (param_2 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__ShowImmediate
              (*(long *)(param_1 + 0x68),0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
              (*(long *)(param_1 + 0x70),0);
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_043221ac;
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
              (*(long *)(param_1 + 0x78),0);
    lVar1 = CakeOrder_Home_UIHomeTabPageMainDetailsMode__GetOrSpawnListBuildingOption(param_1,uVar2)
    ;
  }
  if (lVar1 != 0) {
LAB_0432218c:
    CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar1,0,0);
    return;
  }
LAB_043221ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

