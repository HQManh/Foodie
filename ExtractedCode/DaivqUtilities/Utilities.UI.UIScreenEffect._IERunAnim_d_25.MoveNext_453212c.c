// rea decompile_all
// name: Utilities.UI.UIScreenEffect.<IERunAnim>d__25$$MoveNext
// address: 0x453212c
// body: available
// range: 0x453212c-0x45322bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45322b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45322bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UI_UIScreenEffect_<IERunAnim>d__25__MoveNext(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09518648 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518648 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(int *)(param_1 + 0x10) == 1) || (*(int *)(param_1 + 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_045322b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar4 + 0x20) == '\0') {
      fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      fVar7 = (float)UnityEngine_Time__get_time(0);
    }
    fVar8 = *(float *)(lVar4 + 0x24) / *(float *)(lVar4 + 0x28);
    if (fVar7 < *(float *)(lVar4 + 0x8c) + fVar8 + 0.1) {
      *(float *)(lVar4 + 0x88) = (fVar7 - *(float *)(lVar4 + 0x8c)) / fVar8;
      Utilities_UI_UIScreenEffect__UpdateColor(lVar4);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined4 *)(lVar4 + 0x88) = 0x3f800000;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x90),0);
    uVar5 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(lVar4 + 0x30);
      if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
          if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
          goto LAB_045322b8;
          UnityEngine_GameObject__SetActive(lVar3,0,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
    }
    else {
      if ((*(long *)(lVar4 + 0x50) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x50),0), lVar4 == 0))
      goto LAB_045322b8;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
  }
  return 0;
}

