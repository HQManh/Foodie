// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPage$$OnSwipeToChangeTab
// address: 0x43452fc
// body: available
// range: 0x43452fc-0x434542b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434540c to 0x4306650 CakeOrder.Home.HomeControllerCookOrder$$ChangeTabByScreenOffset (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4345424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4345428 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPage__OnSwipeToChangeTab(float param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09517761 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5850);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517761 = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_2,0), (uVar2 & 1) == 0)) {
    return;
  }
  lVar3 = FUN_04a6ac70(param_2,1,DAT_091c5850);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + lVar7 * 8);
        if (plVar4 == (long *)0x0) goto LAB_04345424;
        (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      uVar5 = 0xffffffff;
      if (param_1 <= 0.0) {
        uVar5 = 1;
      }
      CakeOrder_Home_HomeControllerCookOrder__ChangeTabByScreenOffset
                (*(long *)(param_2 + 0x48),uVar5,0);
      return;
    }
  }
LAB_04345424:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

