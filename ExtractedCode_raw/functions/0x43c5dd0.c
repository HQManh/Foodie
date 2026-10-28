// rea decompile_all
// name: ChocDino.UIFX.BlurZoomFilter$$DoParametersModifySource
// address: 0x43c5dd0
// body: available
// range: 0x43c5dd0-0x43c5e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_BlurZoomFilter__DoParametersModifySource(long param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((0.0 < *(float *)(param_1 + 0x20)) &&
     ((*(float *)(param_1 + 0x1cc) != 1.0 ||
      (uVar2 = NEON_fmov(0xbf800000,4),
      fVar4 = (float)*(undefined8 *)(param_1 + 0x1f0) + (float)uVar2,
      fVar3 = (float)((ulong)uVar2 >> 0x20),
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) + fVar3,
      fVar1 = (float)*(undefined8 *)(param_1 + 0x1f8) + (float)uVar2,
      fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x1f8) >> 0x20) + fVar3,
      9.9999994e-11 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5)))) {
    return 1;
  }
  return 0;
}

