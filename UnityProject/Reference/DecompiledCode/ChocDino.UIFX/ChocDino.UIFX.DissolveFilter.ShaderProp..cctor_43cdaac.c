// rea decompile_all
// name: ChocDino.UIFX.DissolveFilter.ShaderProp$$.cctor
// address: 0x43cdaac
// body: available
// range: 0x43cdaac-0x43cdc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_DissolveFilter_ShaderProp___cctor(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((DAT_09517c14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190198);
    FUN_03f5c2a4(&DAT_092151f0);
    FUN_03f5c2a4(&DAT_092152c8);
    FUN_03f5c2a4(&DAT_092152b0);
    FUN_03f5c2a4(&DAT_092152f8);
    FUN_03f5c2a4(&DAT_09215418);
    FUN_03f5c2a4(&DAT_092158d0);
    DAT_09517c14 = 1;
  }
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_092151f0,0);
  uVar1 = DAT_09215418;
  **(undefined4 **)(DAT_09190198 + 0xb8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092152f8;
  *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092152b0;
  *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092152c8;
  *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0xc) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092158d0;
  *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0x10) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  *(undefined4 *)(*(long *)(DAT_09190198 + 0xb8) + 0x14) = uVar2;
  return;
}

