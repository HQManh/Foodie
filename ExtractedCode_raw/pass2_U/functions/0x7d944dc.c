// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$WaitUntil
// address: 0x7d944dc
// body: available
// range: 0x7d944dc-0x7d94587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UniTask__WaitUntil
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 local_50;
  undefined2 local_48;
  undefined6 uStack_46;
  undefined2 local_34 [2];
  
  if ((DAT_09525d9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195948);
    DAT_09525d9e = 1;
  }
  local_34[0] = 0;
  if (*(int *)(DAT_09195948 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = Cysharp_Threading_Tasks_UniTask_WaitUntilPromise__Create
                       (param_1,param_2,param_3,param_4 & 1,local_34);
  uVar2 = local_34[0];
  local_48 = 0;
  uStack_46 = 0;
  thunk_FUN_03f5d7b8(&local_50,local_50);
  auVar1._8_2_ = uVar2;
  auVar1._0_8_ = local_50;
  auVar1._10_6_ = uStack_46;
  return auVar1;
}

