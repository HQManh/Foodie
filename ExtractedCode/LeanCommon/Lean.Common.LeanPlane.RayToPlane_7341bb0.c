// rea decompile_all
// name: Lean.Common.LeanPlane$$RayToPlane
// address: 0x7341bb0
// body: available
// range: 0x7341bb0-0x7341cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Lean_Common_LeanPlane__RayToPlane
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7,float *param_8)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_6 * param_7[5] + param_4 * param_7[3] + param_5 * param_7[4];
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar2 = ABS(fVar5);
  if (ABS(fVar5) <= 0.0) {
    fVar2 = 0.0;
  }
  fVar4 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar3 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar4) {
    fVar3 = fVar4;
  }
  if (fVar3 <= ABS(0.0 - fVar5)) {
    fVar5 = ((param_3 * param_6 + param_1 * param_4 + param_2 * param_5) -
            (param_6 * param_7[2] + param_4 * *param_7 + param_5 * param_7[1])) / fVar5;
    *param_8 = fVar5;
    bVar1 = 0.0 < fVar5;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

