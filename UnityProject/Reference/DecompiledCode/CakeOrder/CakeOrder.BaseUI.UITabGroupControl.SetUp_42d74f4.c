// rea decompile_all
// name: CakeOrder.BaseUI.UITabGroupControl$$SetUp
// address: 0x42d74f4
// body: available
// range: 0x42d74f4-0x42d7793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d7724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d7790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UITabGroupControl__SetUp(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  if ((DAT_095173d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a58);
    FUN_03f5c2a4(&DAT_091dd100);
    FUN_03f5c2a4(&DAT_09211468);
    DAT_095173d7 = 1;
  }
  plVar7 = param_1 + 9;
  *plVar7 = param_2;
  thunk_FUN_03f5d7b8(plVar7,param_2);
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  thunk_FUN_03f5d7b8(plVar6,0);
  lVar4 = *plVar7;
  if (lVar4 != 0) {
    uVar8 = 0;
    while ((int)uVar8 < (int)*(uint *)(lVar4 + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_042d7790:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = (long)(int)uVar8;
      lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_042d7724;
      lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
      lVar5 = *plVar7;
      if (lVar5 == 0) goto LAB_042d7724;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_042d7790;
      lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
      if ((lVar5 == 0) ||
         (uVar1 = System_String__Concat(DAT_09211468,*(undefined8 *)(lVar5 + 0x48),0), lVar4 == 0))
      goto LAB_042d7724;
      UnityEngine_Object__SetName(lVar4,uVar1,0);
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_042d7724;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_042d7790;
      lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
      uVar1 = thunk_FUN_03f9944c(DAT_09174a58);
      FUN_070a8c30(uVar1,param_1,DAT_091dd100,0);
      if (lVar4 == 0) goto LAB_042d7724;
      CakeOrder_BaseUI_UIElementWithAnimHighlight__add_onClick(lVar4,uVar1);
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_042d7724;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_042d7790;
      lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_042d7724;
      uVar2 = System_String__op_Equality(*(undefined8 *)(lVar4 + 0x48),param_3,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = *plVar7;
        if (lVar4 == 0) goto LAB_042d7724;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_042d7790;
        lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_042d7724;
        *plVar6 = *(long *)(lVar4 + 0x48);
        thunk_FUN_03f5d7b8(plVar6);
      }
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_042d7724;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_042d7790;
      if (*(long *)(lVar4 + lVar9 * 8 + 0x20) == 0) goto LAB_042d7724;
      CakeOrder_BaseUI_UIElementAbstract__HideImmediate();
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_042d7724;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_042d7790;
      lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_042d7724;
      plVar3 = *(long **)(lVar4 + 0x58);
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if (plVar3 == (long *)0x0) goto LAB_042d7724;
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      lVar4 = *plVar7;
      uVar8 = uVar8 + 1;
      if (lVar4 == 0) goto LAB_042d7724;
    }
    uVar2 = System_String__IsNullOrEmpty(*plVar6,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_042d7724;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if ((int)*(long *)(lVar4 + 0x18) == 0) goto LAB_042d7790;
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_042d7724;
        *plVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x48);
        thunk_FUN_03f5d7b8(plVar6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x042d778c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
LAB_042d7724:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

