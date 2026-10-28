// rea decompile_all
// name: CakeOrder.InGame.InGameComboMechanicControl$$Update
// address: 0x438f1f0
// body: available
// range: 0x438f1f0-0x438f2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438f2e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameComboMechanicControl__Update(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (*(int *)(param_1 + 0x40) < 1) {
        return;
      }
      fVar3 = *(float *)(param_1 + 0x3c);
      if (fVar3 <= 0.0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_0438f2e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar5 = *(float *)(*(long *)(param_1 + 0x28) + 0x18);
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0438f2e0;
      fVar3 = fVar3 + (-1.0 / fVar5) * fVar4 * *(float *)(*(long *)(param_1 + 0x50) + 0x18);
      *(float *)(param_1 + 0x3c) = fVar3;
      if (0.0 < fVar3) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x40) + -1;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(int *)(param_1 + 0x40) = iVar1;
      if (0 < iVar1) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      }
      lVar2 = *(long *)(param_1 + 0x60);
    }
    else {
      fVar3 = (float)UnityEngine_Time__get_time(0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0438f2e0;
      if (fVar3 - *(float *)(param_1 + 0x44) < *(float *)(*(long *)(param_1 + 0x28) + 0x1c)) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0438f254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

