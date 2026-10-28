// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadExtensionFormat
// address: 0x738df48
// body: available
// range: 0x738df48-0x738e0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackReader__ReadExtensionFormat(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b8;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  
  if ((DAT_09520a9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9700);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9fe0);
    FUN_03f5c2a4(&DAT_091b9ff0);
    DAT_09520a9e = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uVar1 = MessagePack_MessagePackReader__ReadExtensionFormatHeader(param_2);
  FUN_060972b8(&local_d0,param_2,DAT_091b9ff0);
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  local_70 = local_c0;
  auVar2 = FUN_06097460(param_2,DAT_091b9fe0);
  if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_05fdd034(&local_d0,&local_80,auVar2._0_8_,auVar2._8_8_,uVar1 >> 0x20,DAT_091b9700);
  uStack_58 = uStack_c8;
  local_60 = local_d0;
  local_50 = local_c0;
  FUN_042658c0(param_2,uVar1 >> 0x20,DAT_091b9f90);
  local_d0 = uVar1 & 0xff;
  local_c0 = uStack_58;
  uStack_c8 = local_60;
  local_b8 = local_50;
  thunk_FUN_03f5d7b8((ulong)&local_d0 | 8,0);
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = local_b8;
  param_1[2] = local_c0;
  return;
}

