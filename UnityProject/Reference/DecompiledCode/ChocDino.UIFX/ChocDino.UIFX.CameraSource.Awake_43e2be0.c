// rea decompile_all
// name: ChocDino.UIFX.CameraSource$$Awake
// address: 0x43e2be0
// body: available
// range: 0x43e2be0-0x43e2cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_CameraSource__Awake(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  if ((DAT_09517d42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182320);
    DAT_09517d42 = 1;
  }
  local_30 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  UnityEngine_RenderTextureDescriptor___ctor(&local_a0,0x780,0x438,7,0);
  uStack_58 = uStack_98;
  local_60 = local_a0;
  uStack_48 = uStack_88;
  local_50 = local_90;
  uStack_38 = uStack_78;
  local_40 = local_80;
  local_30 = local_70;
  uVar2 = UnityEngine_RenderTextureDescriptor__get_colorFormat(&local_60,0);
  **(undefined4 **)(DAT_09182320 + 0xb8) = uVar2;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  UnityEngine_RenderTextureDescriptor___ctor(&local_e0,0x780,0x438,9,0);
  uStack_58 = uStack_d8;
  local_60 = local_e0;
  uStack_48 = uStack_c8;
  local_50 = local_d0;
  uStack_38 = uStack_b8;
  local_40 = local_c0;
  local_30 = local_b0;
  uVar2 = UnityEngine_RenderTextureDescriptor__get_colorFormat(&local_60,0);
  lVar1 = DAT_09182320;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 4) = uVar2;
  UnityEngine_EventSystems_UIBehaviour__Awake(param_1,0);
  return;
}

