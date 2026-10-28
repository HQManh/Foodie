// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$set_transitionRotation
// address: 0x43e97ec
// body: available
// range: 0x43e97ec-0x43e98a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e98a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffect__set_transitionRotation(float param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_2 + 0x20);
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar2 = ABS(fVar5);
  if (fVar2 <= ABS(param_1)) {
    fVar2 = ABS(param_1);
  }
  fVar4 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar3 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar4) {
    fVar3 = fVar4;
  }
  if (fVar3 <= ABS(param_1 - fVar5)) {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
    *(float *)(param_2 + 0x20) = param_1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(float *)(lVar1 + 0x70) = param_1;
  }
  return;
}

