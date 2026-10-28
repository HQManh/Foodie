// rea decompile_all
// name: Utilities.DragToChangePageUI$$OnDrag
// address: 0x451d73c
// body: available
// range: 0x451d73c-0x451d8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451d83c to 0x451d8a8 Utilities.DragToChangePageUI$$StopScrollingHere (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451d8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DragToChangePageUI__OnDrag(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar3 = *(float *)(param_2 + 0x144) - *(float *)(param_1 + 0x38);
    fVar4 = *(float *)(param_2 + 0x148) - *(float *)(param_1 + 0x3c);
    if (*(char *)(param_1 + 0x40) == '\0') {
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(float *)(param_1 + 0x28) <= SQRT(fVar3 * fVar3 + fVar4 * fVar4)) {
        *(undefined1 *)(param_1 + 0x40) = 1;
        fVar4 = ABS(fVar4) * *(float *)(param_1 + 0x24);
        *(bool *)(param_1 + 0x41) = fVar4 < ABS(fVar3);
        if (fVar4 < ABS(fVar3)) {
          Utilities_DragToChangePageUI__StopScrollingHere(param_1,param_2);
          return;
        }
        *(undefined1 *)(param_1 + 0x42) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x41) != '\0') {
      fVar2 = (float)UnityEngine_Screen__get_dpi(0);
      if (fVar2 <= 0.0) {
        fVar2 = 96.0;
      }
      else {
        fVar2 = (float)UnityEngine_Screen__get_dpi(0);
      }
      if (*(float *)(param_1 + 0x20) <= (ABS(fVar3) / fVar2) * 2.54) {
        lVar1 = *(long *)(param_1 + 0x30);
        *(undefined1 *)(param_1 + 0x42) = 1;
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0451d898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))
                    (fVar3,fVar4,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          return;
        }
      }
    }
  }
  return;
}

