// rea decompile_all
// name: System.IO.FileStatus$$Refresh
// address: 0x757cf2c
// body: available
// range: 0x757cf2c-0x757d0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStatus__Refresh(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09521ab2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_09521ab2 = 1;
  }
  iVar2 = *(int *)(DAT_09188f58 + 0xe4);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  auVar4 = System_IO_PathInternal__TrimEndingDirectorySeparator(param_2,param_3,0);
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = Interop_Sys__LStat(auVar4._0_8_,auVar4._8_8_,param_1,0);
  if (iVar2 < 0) {
    if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_a8 = Interop_Sys__GetLastErrorInfo(0);
    if (((int)local_a8 == 0x10039) || ((int)local_a8 == 0x1002d)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined1 *)(param_1 + 0x76) = 0;
    }
    else {
      uVar3 = Interop_ErrorInfo__get_RawErrno(&local_a8,0);
      *(undefined4 *)(param_1 + 0x70) = uVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x76) = 1;
    uVar1 = *(uint *)(param_1 + 4) & 0xf000;
    *(bool *)(param_1 + 0x75) = uVar1 == 0x4000;
    if (uVar1 == 0xa000) {
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = Interop_Sys__Stat(auVar4._0_8_,auVar4._8_8_,&local_a0,0);
      if (-1 < iVar2) {
        *(bool *)(param_1 + 0x75) = (local_a0._4_4_ & 0xf000) == 0x4000;
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

