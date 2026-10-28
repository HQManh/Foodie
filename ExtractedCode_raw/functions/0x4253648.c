// rea decompile_all
// name: AnhPD.FoodOrder.UIPopupAlert$$OnBeforeShow
// address: 0x4253648
// body: available
// range: 0x4253648-0x42537cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42537c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42537cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIPopupAlert__OnBeforeShow(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_38;
  
  if ((DAT_09516ef2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b73f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c328);
    DAT_09516ef2 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__OnBeforeShow(param_1,0);
  plVar1 = (long *)CakeOrder_BaseUI_UIElementWithAnim__get_AnimShowHide(param_1,0);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(DAT_0918c328 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918c328 + 0x130) * 8 + -8) ==
        DAT_0918c328)) {
      if ((*(uint *)(param_1 + 0xd8) & 0xfffffffe) == 2) {
        local_38 = 0;
        FUN_05c37590(0,&local_38,DAT_091b73f0);
        lVar4 = local_38;
      }
      else {
        lVar4 = 0;
      }
      plVar1[0x12] = lVar4;
    }
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) goto LAB_042537cc;
          if (*(int *)(lVar3 + 0x28) == *(int *)(param_1 + 0xd8)) {
            AnhPD_FoodOrder_UIAlertBoard__Show(lVar3,*(undefined1 *)(param_1 + 0xdc));
          }
          else {
            AnhPD_FoodOrder_UIAlertBoard__Hide(lVar3);
          }
        }
        uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_042537cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

