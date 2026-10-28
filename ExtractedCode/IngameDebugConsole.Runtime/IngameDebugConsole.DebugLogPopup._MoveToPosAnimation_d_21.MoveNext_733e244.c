// rea decompile_all
// name: IngameDebugConsole.DebugLogPopup.<MoveToPosAnimation>d__21$$MoveNext
// address: 0x733e244
// body: available
// range: 0x733e244-0x733e337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733e334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IngameDebugConsole_DebugLogPopup_<MoveToPosAnimation>d__21__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_3 + 0x20);
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x30) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_0733e334;
    uVar2 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar1 + 0x20),0);
    *(undefined4 *)(param_3 + 0x34) = uVar2;
    *(undefined4 *)(param_3 + 0x38) = param_2;
  }
  fVar5 = *(float *)(param_3 + 0x30);
  if (1.0 <= fVar5) {
    return 0;
  }
  fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  fVar5 = fVar5 + fVar3 * 4.0;
  *(float *)(param_3 + 0x30) = fVar5;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar3;
    }
    fVar5 = (float)*(undefined8 *)(param_3 + 0x34);
    fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20);
    fVar3 = fVar3 + ((float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20) - fVar3) * fVar4;
    UnityEngine_RectTransform__set_anchoredPosition
              (CONCAT44(fVar3,fVar5 + ((float)*(undefined8 *)(param_3 + 0x28) - fVar5) * fVar4),
               fVar3,*(long *)(lVar1 + 0x20),0);
    *(undefined8 *)(param_3 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),0);
    *(undefined4 *)(param_3 + 0x10) = 1;
    return 1;
  }
LAB_0733e334:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

