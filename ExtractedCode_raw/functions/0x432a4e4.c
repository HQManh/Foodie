// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainNormalMode.<OnSetUp>d__50$$MoveNext
// address: 0x432a4e4
// body: available
// range: 0x432a4e4-0x432a6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432a6cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432a6e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainNormalMode_<OnSetUp>d__50__MoveNext(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0951769c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcba8);
    FUN_03f5c2a4(&DAT_091dcbb0);
    DAT_0951769c = 1;
  }
  lVar7 = *(long *)(param_1 + 6);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar7 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(*(long *)(lVar7 + 0x48) + 0x10);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,lVar7,DAT_091dcbb0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Home_HomeSelectionControl__add_onSelectedMapChanged(lVar8,uVar2,0);
  if (*(long *)(lVar7 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(*(long *)(lVar7 + 0x48) + 0x10);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,lVar7,DAT_091dcba8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Home_HomeSelectionControl__add_onSelectedLevelChanged(lVar8,uVar2,0);
  uVar2 = *(undefined8 *)(lVar7 + 0x118);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar7 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_UIMapBuildingProgress__ResetVisual(*(long *)(lVar7 + 0x118),0);
  }
  if (*(long *)(lVar7 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar7 + 0xd8),0);
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar6 = *(long **)(param_1 + 2);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar6;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091866a8) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0432a6b4;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_0432a6b4:
                    /* WARNING: Could not recover jumptable at 0x0432a6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}

