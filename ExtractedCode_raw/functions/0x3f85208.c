// rea decompile_all
// name: SystemNative_LStat2
// address: 0x3f85208
// body: available
// range: 0x3f85208-0x3f8527f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SystemNative_LStat2(char *param_1,undefined4 *param_2)

{
  int iVar1;
  __dev_t local_90;
  __ino_t _Stack_88;
  __nlink_t local_80;
  undefined8 local_78;
  undefined8 local_70;
  __dev_t _Stack_68;
  __off_t local_60;
  __blksize_t _Stack_58;
  __blkcnt_t local_50;
  __time_t _Stack_48;
  long lStack_40;
  __time_t _Stack_38;
  long local_30;
  __time_t _Stack_28;
  long lStack_20;
  long lStack_18;
  
  _Stack_88 = 0;
  local_90 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_80 = 0;
  _Stack_68 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  _Stack_38 = 0;
  lStack_40 = 0;
  _Stack_28 = 0;
  local_30 = 0;
  lStack_18 = 0;
  lStack_20 = 0;
  iVar1 = lstat(param_1,(stat *)&local_90);
  if (iVar1 == 0) {
    param_2[0x1a] = 0;
    *(__ino_t *)(param_2 + 0x18) = _Stack_88;
    *(__dev_t *)(param_2 + 0x16) = local_90;
    *param_2 = 0;
    param_2[1] = (undefined4)local_80;
    *(long *)(param_2 + 8) = lStack_40;
    *(__time_t *)(param_2 + 6) = _Stack_48;
    *(undefined8 *)(param_2 + 2) = local_78;
    *(long *)(param_2 + 0xc) = local_30;
    *(__time_t *)(param_2 + 10) = _Stack_38;
    *(__off_t *)(param_2 + 4) = local_60;
    *(long *)(param_2 + 0x10) = lStack_20;
    *(__time_t *)(param_2 + 0xe) = _Stack_28;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  return;
}

