// rea decompile_all
// name: DG.Tweening.Core.Easing.Flash$$WeightedEase
// address: 0x457a5cc
// body: available
// range: 0x457a5cc-0x457a70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_Core_Easing_Flash__WeightedEase
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
                int param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  if ((DAT_095188f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095188f5 = 1;
  }
  if ((param_4 <= 0.0) || ((param_1 != INFINITY && (((int)param_1 & 1U) != 0)))) {
    if (param_4 < 0.0) {
      param_6 = ((uint)(param_1 != INFINITY) & (int)param_1) + param_6;
    }
  }
  else {
    param_6 = param_6 + 1;
  }
  if (param_2 <= 0.0) {
    fVar2 = 0.0;
    if (0.0 <= param_2) {
      param_1 = 0.0;
      goto LAB_0457a6e0;
    }
    fVar1 = (float)param_6;
    param_2 = -param_2;
  }
  else {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar3 = (double)System_Math__Truncate((double)param_1,0);
    fVar4 = param_1 - (float)dVar3;
    fVar1 = fmodf((float)dVar3,2.0);
    fVar2 = 1.0 - fVar4;
    if (fVar1 <= 0.0) {
      fVar2 = fVar4;
    }
    fVar1 = param_1 - (float)param_6;
    fVar2 = (fVar2 * (float)param_6) / param_1;
  }
  param_1 = (fVar1 * param_5) / param_1;
LAB_0457a6e0:
  param_5 = fVar2 + (param_1 - param_5) * param_2 + param_5;
  fVar2 = 1.0;
  if (param_5 <= 1.0) {
    fVar2 = param_5;
  }
  return fVar2;
}

