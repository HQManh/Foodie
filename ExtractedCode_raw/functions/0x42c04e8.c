// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress$$ResetVisual
// address: 0x42c04e8
// body: available
// range: 0x42c04e8-0x42c0707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c06ec to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c0700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c0704 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIMapBuildingProgress__ResetVisual(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09517317 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517317 = 1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0xa8),0,0);
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar5,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xb0),0);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_06fca5d0(*(long *)(param_1 + 0xb8),DAT_0919f998);
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_053ebbdc(*(long *)(param_1 + 0xc0),DAT_091a86c0);
      *(undefined2 *)(param_1 + 200) = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_UI_Slider__set_maxValue(0x3f800000,*(long *)(param_1 + 0x20),0);
        plVar2 = *(long **)(param_1 + 0x20);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x428))(0,plVar2,*(undefined8 *)(*plVar2 + 0x430));
          Utilities_GraphicExtension__SetA(0,*(undefined8 *)(param_1 + 0x28),0);
          plVar2 = *(long **)(param_1 + 0x48);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x2a8))(0,0,0,0,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
            lVar5 = *(long *)(param_1 + 0x38);
            if ((lVar5 != 0) && (uVar1 = *(uint *)(lVar5 + 0x18), 0 < (int)uVar1)) {
              lVar7 = 0;
              do {
                if (uVar1 <= (uint)lVar7) goto LAB_042c0704;
                lVar3 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
                if (lVar3 == 0) goto LAB_042c0700;
                UnityEngine_GameObject__SetActive(lVar3,0,0);
                uVar1 = *(uint *)(lVar5 + 0x18);
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < (int)uVar1);
            }
            lVar5 = *(long *)(param_1 + 0x40);
            if ((lVar5 != 0) && (uVar1 = *(uint *)(lVar5 + 0x18), 0 < (int)uVar1)) {
              lVar7 = 0;
              do {
                if (uVar1 <= (uint)lVar7) {
LAB_042c0704:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar3 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
                if (lVar3 == 0) goto LAB_042c0700;
                UnityEngine_GameObject__SetActive(lVar3,0,0);
                uVar1 = *(uint *)(lVar5 + 0x18);
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < (int)uVar1);
            }
            uVar6 = *(undefined8 *)(param_1 + 0x60);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if ((*(long *)(param_1 + 0x60) != 0) &&
               (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x60),0),
               lVar5 != 0)) {
              UnityEngine_GameObject__SetActive(lVar5,0,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_042c0700:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

