// rea decompile_all
// name: FUN_03fa6670
// address: 0x3fa6670
// body: available
// range: 0x3fa6670-0x3fa671f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa6670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  void *local_58;
  ulong uStack_50;
  void *local_48;
  void *local_40;
  ulong uStack_38;
  void *local_30;
  
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_03f922d0(&local_58,param_4);
    uStack_38 = uStack_50;
    local_40 = local_58;
    pvVar1 = local_40;
    local_40._0_1_ = (byte)local_58;
    uVar3 = (uint)(byte)local_40;
    local_30 = local_48;
    local_40 = pvVar1;
  }
  uStack_50 = (ulong)(uVar3 >> 1);
  local_58 = (void *)((ulong)&local_40 | 2);
  if ((uVar3 & 1) != 0) {
    uStack_50 = uStack_38;
    local_58 = local_30;
  }
  uVar2 = FUN_03fa65cc(param_1,param_2,param_3,&local_58);
  if (((ulong)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  return uVar2;
}

