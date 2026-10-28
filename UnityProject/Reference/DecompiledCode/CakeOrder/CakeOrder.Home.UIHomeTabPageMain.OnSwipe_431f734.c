// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain$$OnSwipe
// address: 0x431f734
// body: available
// range: 0x431f734-0x431f80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431f7dc to 0x430f6b8 CakeOrder.Home.HomeSelectionControl$$ChangeMap (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431f804 to 0x4306650 CakeOrder.Home.HomeControllerCookOrder$$ChangeTabByScreenOffset (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431f808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain__OnSwipe(float param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x50);
  if (param_1 <= 0.0) {
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
      iVar1 = CakeOrder_Home_HomeSelectionControl__FindVisibleMapIndex
                        (lVar4,*(int *)(lVar4 + 0x28) + 1,1);
      if (iVar1 < 0) {
        lVar4 = *(long *)(param_2 + 0x48);
        if (lVar4 != 0) {
          uVar3 = 1;
          goto LAB_0431f7fc;
        }
      }
      else if ((*(long *)(param_2 + 0x50) != 0) &&
              (lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0x10), lVar4 != 0)) {
        uVar3 = 1;
        iVar1 = *(int *)(lVar4 + 0x28) + 1;
        goto LAB_0431f7cc;
      }
    }
  }
  else if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
    iVar1 = CakeOrder_Home_HomeSelectionControl__FindVisibleMapIndex
                      (lVar4,*(int *)(lVar4 + 0x28) + -1,0xffffffff);
    if (iVar1 < 0) {
      lVar4 = *(long *)(param_2 + 0x48);
      if (lVar4 != 0) {
        uVar3 = 0xffffffff;
LAB_0431f7fc:
        CakeOrder_Home_HomeControllerCookOrder__ChangeTabByScreenOffset(lVar4,uVar3,0);
        return;
      }
    }
    else if ((*(long *)(param_2 + 0x50) != 0) &&
            (lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0x10), lVar4 != 0)) {
      uVar3 = 0xffffffff;
      iVar1 = *(int *)(lVar4 + 0x28) + -1;
LAB_0431f7cc:
      uVar2 = CakeOrder_Home_HomeSelectionControl__FindVisibleMapIndex(lVar4,iVar1,uVar3);
      CakeOrder_Home_HomeSelectionControl__ChangeMap(lVar4,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

