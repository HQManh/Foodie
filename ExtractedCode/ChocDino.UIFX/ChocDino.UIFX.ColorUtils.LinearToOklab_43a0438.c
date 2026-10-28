// rea decompile_all
// name: ChocDino.UIFX.ColorUtils$$LinearToOklab
// address: 0x43a0438
// body: available
// range: 0x43a0438-0x43a05c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] ChocDino_UIFX_ColorUtils__LinearToOklab(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09517a9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    DAT_09517a9b = 1;
  }
  if (*(int *)(DAT_09182738 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar8 = param_3 * 0.6299787 + param_1 * 0.08830246 + param_2 * 0.28171885;
  fVar2 = powf(ABS(fVar8),0.33333334);
  uVar6 = NEON_rev64(CONCAT44(param_1 * 0.2119035,param_2 * 0.53633255),4);
  fVar5 = param_3 * 0.10739696 + param_2 * 0.6806995 + (float)uVar6;
  fVar7 = param_3 * 0.051445995 + param_1 * 0.41222146 + (float)((ulong)uVar6 >> 0x20);
  fVar1 = -fVar2;
  if (0.0 <= fVar8) {
    fVar1 = fVar2;
  }
  fVar2 = powf(ABS(fVar7),0.33333334);
  fVar8 = powf(ABS(fVar5),0.33333334);
  uVar3 = CONCAT44(fVar2,fVar8) ^
          (CONCAT44(fVar2,fVar8) ^ CONCAT44(-fVar2,-fVar8)) &
          ~CONCAT44(-(uint)(0.0 <= fVar7),-(uint)(0.0 <= fVar5));
  fVar2 = (float)uVar3;
  fVar5 = (float)(uVar3 >> 0x20);
  uVar6 = NEON_rev64(CONCAT44(fVar5 * 0.21045426,fVar2 * 2.4285922),4);
  auVar4._0_4_ = (fVar2 * 0.7936178 + (float)uVar6) - fVar1 * 0.004072047;
  auVar4._4_4_ = (fVar5 * 1.9779985 + (float)((ulong)uVar6 >> 0x20)) - fVar1 * 0.4505937;
  auVar4._8_8_ = 0;
  return auVar4;
}

