// rea decompile_all
// name: Lean.Touch.LeanSwipeBase$$AngleIsValid
// address: 0x73504a4
// body: available
// range: 0x73504a4-0x735054f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lean_Touch_LeanSwipeBase__AngleIsValid(float param_1,float param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_3 + 0x24);
  if (0.0 <= fVar6) {
    fVar3 = atan2f(param_1,param_2);
    fVar4 = *(float *)(param_3 + 0x20) + fVar3 * -57.29578;
    fVar4 = fVar4 + (float)(int)(fVar4 / 360.0) * -360.0;
    fVar3 = 360.0;
    if (fVar4 <= 360.0) {
      fVar3 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar3;
    }
    fVar3 = fVar5 + -360.0;
    if (fVar5 <= 180.0) {
      fVar3 = fVar5;
    }
    bVar1 = false;
    bVar2 = false;
    if (fVar6 * -0.5 <= fVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(fVar6 * 0.5)) {
        bVar1 = fVar3 < fVar6 * 0.5;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      return 0;
    }
  }
  return 1;
}

