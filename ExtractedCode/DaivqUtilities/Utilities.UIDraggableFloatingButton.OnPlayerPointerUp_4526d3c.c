// rea decompile_all
// name: Utilities.UIDraggableFloatingButton$$OnPlayerPointerUp
// address: 0x4526d3c
// body: available
// range: 0x4526d3c-0x4526e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4526e48 to 0x4526e50 Utilities.UIDraggableFloatingButton$$Snap (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4526e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIDraggableFloatingButton__OnPlayerPointerUp
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_04526e4c;
  if ((*(char *)(*(long *)(param_1 + 0x48) + 0x18) != '\0') || (*(char *)(param_1 + 0x60) == '\0'))
  {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x78) == '\0') {
    fVar2 = (float)UnityEngine_Time__get_time(0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_04526e4c;
    if (fVar2 - *(float *)(param_1 + 0x74) < *(float *)(*(long *)(param_1 + 0x38) + 0x30)) {
      if (param_3 == 0) {
LAB_04526e4c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(param_1 + 100);
      uVar5 = *(undefined8 *)(param_3 + 0x144);
      if (DAT_09515fab == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_04526e4c;
      fVar2 = (float)uVar4 - (float)uVar5;
      fVar3 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
      if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < *(float *)(*(long *)(param_1 + 0x38) + 0x2c)) {
        lVar1 = *(long *)(param_1 + 0x50);
        goto joined_r0x04526e24;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x58);
joined_r0x04526e24:
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  Utilities_UIDraggableFloatingButton__Snap(param_1);
  return;
}

