// rea decompile_all
// name: Utilities.AnimationCurveExtension$$EvaluateInt
// address: 0x44f651c
// body: available
// range: 0x44f651c-0x44f6607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f6604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Utilities_AnimationCurveExtension__EvaluateInt(long param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double __x;
  double local_28;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar2 = (float)UnityEngine_AnimationCurve__Evaluate(param_1,0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar2;
  dVar3 = modf(__x,&local_28);
  if (0.0 <= fVar2) {
    if (dVar3 != 0.5) {
      local_28 = (double)(long)(__x + 0.5);
      goto LAB_044f65dc;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      local_28 = (double)(long)(__x + -0.5);
      goto LAB_044f65dc;
    }
    dVar3 = -1.0;
  }
  if (((long)local_28 & 1U) != 0) {
    local_28 = local_28 + dVar3;
  }
LAB_044f65dc:
  iVar1 = -0x80000000;
  if (local_28 != INFINITY) {
    iVar1 = (int)local_28;
  }
  return iVar1;
}

