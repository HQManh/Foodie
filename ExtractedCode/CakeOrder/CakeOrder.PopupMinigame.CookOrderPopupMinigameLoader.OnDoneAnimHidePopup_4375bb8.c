// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader$$OnDoneAnimHidePopup
// address: 0x4375bb8
// body: available
// range: 0x4375bb8-0x4375d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4375d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4375d68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__OnDoneAnimHidePopup(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09517907 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517907 = 1;
  }
  plVar5 = (long *)(param_1 + 0x88);
  if (*plVar5 != 0) {
    uVar4 = *(undefined8 *)(*plVar5 + 0x68);
    lVar7 = *(long *)(param_1 + 0x98);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_04375d64;
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)(param_1 + 0x68) == 0) ||
           (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar2 == 0)) goto LAB_04375d64;
        uVar6 = UnityEngine_Component__get_gameObject(lVar2,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar1 & 1) != 0) {
          if (((*(long *)(param_1 + 0x68) == 0) ||
              (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar2 == 0)) ||
             (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
          goto LAB_04375d64;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
      }
    }
    lVar2 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)*plVar5;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x98),0);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar4,*(undefined8 *)(lVar7 + 0x28))
      ;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
LAB_04375d64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

