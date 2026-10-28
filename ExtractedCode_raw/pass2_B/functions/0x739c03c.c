// rea decompile_all
// name: MessagePack.MessagePackStreamReader$$ReadAsync
// address: 0x739c03c
// body: available
// range: 0x739c03c-0x739c1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackStreamReader__ReadAsync
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09520b27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a208);
    FUN_03f5c2a4(&DAT_0919a200);
    FUN_03f5c2a4(&DAT_0919a228);
    DAT_09520b27 = 1;
  }
  local_60 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  FUN_06b3d85c(&local_100,DAT_0919a208);
  uStack_b0 = uStack_f8;
  uStack_b8 = local_100;
  local_a0 = uStack_e8;
  uStack_a8 = uStack_f0;
  uStack_90 = uStack_d8;
  uStack_98 = local_e0;
  local_80 = uStack_c8;
  uStack_88 = uStack_d0;
  thunk_FUN_03f5d7b8((ulong)&local_c0 | 8,0);
  uStack_78 = param_2;
  thunk_FUN_03f5d7b8(&uStack_78,param_2);
  local_70 = param_3;
  thunk_FUN_03f5d7b8(&local_70,0);
  lVar1 = DAT_0919a200;
  local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
  if (*(long *)(DAT_0919a200 + 0x38) == 0) {
    FUN_03f95ac8(DAT_0919a200);
  }
  lVar2 = *(long *)(lVar1 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_045cf008((ulong)&local_c0 | 8,&local_c0,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 8));
  FUN_06b3da30(&local_130,(ulong)&local_c0 | 8,DAT_0919a228);
  param_1[5] = uStack_108;
  param_1[4] = local_110;
  param_1[1] = uStack_128;
  *param_1 = local_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  return;
}

