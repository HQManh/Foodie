// rea decompile_all
// name: ChocDino.UIFX.ColorAdjustFilter$$DoParametersModifySource
// address: 0x43ca84c
// body: available
// range: 0x43ca84c-0x43ca9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_ColorAdjustFilter__DoParametersModifySource
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(float *)(param_5 + 0x20) <= 0.0) {
    return false;
  }
  if (((((*(float *)(param_5 + 0x1c4) <= 0.0) && (*(float *)(param_5 + 0x1c8) == 0.0)) &&
       (*(float *)(param_5 + 0x1cc) == 0.0)) &&
      ((*(float *)(param_5 + 0x1d0) == 0.0 && (*(float *)(param_5 + 0x1d4) == 0.0)))) &&
     ((255.0 <= *(float *)(param_5 + 0x1d8) && (fVar2 = *(float *)(param_5 + 0x1dc), 1.0 <= fVar2)))
     ) {
    fVar3 = *(float *)(param_5 + 0x1e0);
    fVar4 = *(float *)(param_5 + 0x1e4);
    fVar5 = *(float *)(param_5 + 0x1e8);
    fVar6 = *(float *)(param_5 + 0x1ec);
    fVar1 = (float)FUN_043b2e90(0);
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar5 = fVar5 - param_3;
    fVar6 = fVar6 - param_4;
    fVar2 = fVar6 * fVar6;
    if ((fVar2 + fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 < 9.9999994e-11) &&
       (fVar3 = *(float *)(param_5 + 0x1f0), fVar4 = *(float *)(param_5 + 500),
       fVar7 = *(float *)(param_5 + 0x1f8), fVar8 = *(float *)(param_5 + 0x1fc),
       fVar1 = (float)FUN_043b2e90(0), fVar3 = fVar3 - fVar1, fVar4 = fVar4 - fVar2,
       fVar7 = fVar7 - fVar5, fVar8 = fVar8 - fVar6,
       fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3 + fVar4 * fVar4 < 9.9999994e-11)) {
      fVar3 = (float)*(undefined8 *)(param_5 + 0x200) + -255.0;
      fVar4 = (float)((ulong)*(undefined8 *)(param_5 + 0x200) >> 0x20) + -255.0;
      fVar2 = (float)*(undefined8 *)(param_5 + 0x208) + -255.0;
      fVar1 = (float)((ulong)*(undefined8 *)(param_5 + 0x208) >> 0x20) + -255.0;
      return 9.9999994e-11 <= fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
    }
  }
  return true;
}

