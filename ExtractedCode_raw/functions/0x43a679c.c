// rea decompile_all
// name: ChocDino.UIFX.UnityShaderProp$$.cctor
// address: 0x43a679c
// body: available
// range: 0x43a679c-0x43a6a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UnityShaderProp___cctor(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((DAT_09517ac7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c760);
    FUN_03f5c2a4(&DAT_09214ba0);
    FUN_03f5c2a4(&DAT_09216498);
    FUN_03f5c2a4(&DAT_092164b8);
    FUN_03f5c2a4(&DAT_09216490);
    FUN_03f5c2a4(&DAT_092164d8);
    FUN_03f5c2a4(&DAT_09214dd8);
    FUN_03f5c2a4(&DAT_09216820);
    FUN_03f5c2a4(&DAT_092164b0);
    FUN_03f5c2a4(&DAT_09216680);
    FUN_03f5c2a4(&DAT_092160e0);
    FUN_03f5c2a4(&DAT_09214bb0);
    DAT_09517ac7 = 1;
  }
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09216680,0);
  uVar1 = DAT_092160e0;
  **(undefined4 **)(DAT_0918c760 + 0xb8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_09216820;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 4) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_09216490;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 8) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_09216498;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0xc) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092164b0;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x10) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092164d8;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x14) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_092164b8;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x18) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  uVar1 = DAT_09214bb0;
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x1c) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(uVar1,0);
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x20) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09214ba0,0);
  *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x24) = uVar2;
  uVar2 = UnityEngine_Shader__PropertyToID(DAT_09214dd8,0);
  lVar3 = *(long *)(DAT_0918c760 + 0xb8);
  *(undefined4 *)(lVar3 + 0x28) = uVar2;
  *(undefined8 *)(lVar3 + 0x34) = 0x7f8000007f800000;
  *(undefined8 *)(lVar3 + 0x2c) = 0xff800000ff800000;
  return;
}

