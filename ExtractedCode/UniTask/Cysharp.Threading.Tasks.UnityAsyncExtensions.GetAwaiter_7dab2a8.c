// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions$$GetAwaiter
// address: 0x7dab2a8
// body: available
// range: 0x7dab2a8-0x7dab3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_24 [2];
  
  if ((DAT_09525edd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525edd = 1;
  }
  local_24[0] = 0;
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = Cysharp_Threading_Tasks_UnityAsyncExtensions_JobHandlePromise__Create
                    (param_1,param_2,local_24);
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091892e0);
  }
  Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(2,uVar3,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(6,uVar3,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(8,uVar3,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(10,uVar3,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(0xc,uVar3,0);
  uVar2 = local_24[0];
  uStack_58 = 0;
  local_60 = uVar3;
  thunk_FUN_03f5d7b8(&local_60,uVar3);
  uStack_58 = CONCAT62(uStack_58._2_6_,uVar2);
  uStack_48 = uStack_58;
  local_50 = local_60;
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_38 = uStack_48;
  local_40 = local_50;
  thunk_FUN_03f5d7b8(&local_40,0);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

