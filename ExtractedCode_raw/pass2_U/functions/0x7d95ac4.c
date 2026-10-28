// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$WhenAny
// address: 0x7d95ac4
// body: available
// range: 0x7d95ac4-0x7d95bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTask__WhenAny(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  
  if ((DAT_09525da4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0e60);
    FUN_03f5c2a4(&DAT_091b9ad8);
    FUN_03f5c2a4(&DAT_091bde60);
    FUN_03f5c2a4(&DAT_09195960);
    DAT_09525da4 = 1;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_04985cc4(&local_48,param_1,DAT_091c0e60);
  uVar3 = local_40;
  uVar2 = local_48;
  local_58 = 0;
  puStack_50 = &local_48;
  uVar4 = thunk_FUN_03f9944c(DAT_09195960);
  Cysharp_Threading_Tasks_UniTask_WhenAnyPromise___ctor(uVar4,uVar2,uVar3 & 0xffffffff);
  local_60 = 0;
  local_5c = 0;
  uStack_5a = 0;
  local_68 = uVar4;
  thunk_FUN_03f5d7b8(&local_68,uVar4);
  local_5c = 0;
  local_60 = 0;
  auVar1._8_6_ = 0;
  auVar1._0_8_ = local_68;
  auVar1._14_2_ = uStack_5a;
  FUN_06066cc4(&local_48,DAT_091b9ad8);
  return auVar1;
}

