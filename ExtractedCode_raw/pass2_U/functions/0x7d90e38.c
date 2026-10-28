// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$op_Implicit
// address: 0x7d90e38
// body: available
// range: 0x7d90e38-0x7d90e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTask__op_Implicit(long *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long local_20;
  undefined2 local_18;
  bool local_16;
  undefined5 uStack_15;
  
  local_20 = *param_1;
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_20 = 0;
    local_18 = 0;
    uStack_15 = 0;
  }
  else {
    lVar3 = param_1[1];
    local_18 = 0;
    local_16 = false;
    uStack_15 = 0;
    thunk_FUN_03f5d7b8(&local_20);
    local_18 = (short)lVar3;
  }
  local_16 = !bVar1;
  auVar2._8_2_ = local_18;
  auVar2._0_8_ = local_20;
  auVar2[10] = local_16;
  auVar2._11_5_ = uStack_15;
  return auVar2;
}

