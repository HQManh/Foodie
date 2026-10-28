// rea decompile_all
// name: System.IO.Stream$$<ReadAsync>g__FinishReadAsync|44_0
// address: 0x757eb7c
// body: available
// range: 0x757eb7c-0x757ece7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream__<ReadAsync>g__FinishReadAsync_44_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09521ad4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a278);
    FUN_03f5c2a4(&DAT_0919a268);
    FUN_03f5c2a4(&DAT_0919a298);
    DAT_09521ad4 = 1;
  }
  local_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_78 = param_1;
  thunk_FUN_03f5d7b8(&local_78,param_1);
  local_70 = param_2;
  thunk_FUN_03f5d7b8(&local_70,param_2);
  uStack_68 = param_3;
  uStack_60 = param_4;
  thunk_FUN_03f5d7b8(&uStack_68,0);
  FUN_06b3db74(&local_c0,DAT_0919a278);
  local_90 = uStack_b8;
  uStack_98 = local_c0;
  uStack_80 = uStack_a8;
  uStack_88 = uStack_b0;
  thunk_FUN_03f5d7b8((ulong)&local_a0 | 8,0);
  lVar1 = DAT_0919a268;
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
  if (*(long *)(DAT_0919a268 + 0x38) == 0) {
    FUN_03f95ac8(DAT_0919a268);
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
  FUN_045dd3fc((ulong)&local_a0 | 8,&local_a0,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 8));
  FUN_06b3dd24((ulong)&local_a0 | 8,DAT_0919a298);
  return;
}

