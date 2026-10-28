// rea decompile_all
// name: DG.Tweening.Core.Easing.EaseManager.<>c$$<ToEaseFunction>b__5_22
// address: 0x4579f94
// body: available
// range: 0x4579f94-0x457a0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_Core_Easing_EaseManager_<>c__<ToEaseFunction>b__5_22
                (float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_095188f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095188f2 = 1;
  }
  fVar1 = 0.0;
  if (param_1 != 0.0) {
    fVar1 = 1.0;
    if (param_1 / param_2 != 1.0) {
      fVar1 = param_2 * 0.3;
      if (param_4 != 0.0) {
        fVar1 = param_4;
      }
      if (1.0 <= param_3) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar2 = asin((double)(1.0 / param_3));
        fVar5 = (fVar1 / 6.2831855) * (float)dVar2;
      }
      else {
        param_3 = 1.0;
        fVar5 = fVar1 * 0.25;
      }
      fVar4 = param_1 / param_2 + -1.0;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar2 = (double)System_Math__Pow(0x4000000000000000,(double)(fVar4 * 10.0),0);
      dVar3 = sin((double)(((fVar4 * param_2 - fVar5) * -6.2831855) / fVar1));
      fVar1 = param_3 * (float)dVar2 * (float)dVar3;
    }
  }
  return fVar1;
}

