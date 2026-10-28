// rea decompile_all
// name: ChocDino.UIFX.ColorUtils$$Blend
// address: 0x43a0314
// body: available
// range: 0x43a0314-0x43a038b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] ChocDino_UIFX_ColorUtils__Blend(undefined1 param_1 [16],int param_2)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  float in_s4;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._4_4_;
  fVar1 = param_1._0_4_;
  if (param_2 < 3) {
    if (param_2 == 1) {
      return ZEXT416((uint)in_s4);
    }
    if (param_2 == 2) {
      return ZEXT416((uint)in_s4);
    }
  }
  else if (param_2 == 3) {
    fVar1 = fVar1 * in_s4;
    uVar3 = 0;
    uVar4 = 0;
  }
  else if (param_2 == 4) {
    return ZEXT416((uint)(fVar1 + in_s4));
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}

