// rea decompile_all
// name: Lean.Touch.LeanTouchSimulator$$HandleSimulateFingers
// address: 0x7350bb0
// body: available
// range: 0x7350bb0-0x7350dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7350da8 to 0x7350dc8 Lean.Touch.LeanTouch$$AddFinger (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7350dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouchSimulator__HandleSimulateFingers
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09520776 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183148);
    DAT_09520776 = 1;
  }
  if (*(int *)(DAT_09183148 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = CW_Common_CwInput__GetMouseExists(0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09183148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = CW_Common_CwInput__GetKeyboardExists(0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09183148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar9 = (float)CW_Common_CwInput__GetMousePosition(0);
      uVar7 = 0;
      uVar8 = 0;
      iVar3 = 0;
      do {
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = CW_Common_CwInput__GetMouseIsHeld(iVar3,0);
        uVar7 = uVar7 | uVar2;
        uVar2 = CW_Common_CwInput__GetMouseWentUp(iVar3,0);
        iVar3 = iVar3 + 1;
        uVar8 = uVar8 | uVar2;
      } while (iVar3 != 5);
      if (((uVar7 | uVar8) & 1) != 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x24);
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = CW_Common_CwInput__GetKeyIsHeld(uVar1,0);
        if ((uVar5 & 1) != 0) {
          iVar3 = UnityEngine_Screen__get_width(0);
          *(float *)(param_3 + 0x38) = fVar9 / (float)iVar3;
          iVar3 = UnityEngine_Screen__get_height(0);
          *(float *)(param_3 + 0x3c) = param_2 / (float)iVar3;
        }
        uVar1 = *(undefined4 *)(param_3 + 0x20);
        if (*(int *)(DAT_09183148 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = CW_Common_CwInput__GetKeyIsHeld(uVar1,0);
        if ((uVar5 & 1) == 0) {
          uVar1 = *(undefined4 *)(param_3 + 0x28);
          if (*(int *)(DAT_09183148 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = CW_Common_CwInput__GetKeyIsHeld(uVar1,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          lVar6 = *(long *)(param_3 + 0x40);
          if (lVar6 == 0) goto LAB_07350dc4;
        }
        else {
          iVar3 = UnityEngine_Screen__get_width(0);
          fVar11 = *(float *)(param_3 + 0x38);
          iVar4 = UnityEngine_Screen__get_height(0);
          lVar6 = *(long *)(param_3 + 0x40);
          if (lVar6 == 0) {
LAB_07350dc4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar10 = *(float *)(param_3 + 0x3c) * (float)iVar4;
          fVar11 = fVar11 * (float)iVar3;
          param_2 = fVar10 - (param_2 - fVar10);
          fVar9 = fVar11 - (fVar9 - fVar11);
        }
        Lean_Touch_LeanTouch__AddFinger(fVar9,param_2,0x3f800000,lVar6,0xfffffffe,uVar7 & 1);
        return;
      }
    }
  }
  return;
}

