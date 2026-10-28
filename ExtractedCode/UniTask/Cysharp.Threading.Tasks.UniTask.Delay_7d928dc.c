// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$Delay
// address: 0x7d928dc
// body: available
// range: 0x7d928dc-0x7d92ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d92ae0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UniTask__Delay
          (undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined2 local_64 [2];
  undefined2 local_60 [2];
  undefined2 local_5c [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined6 uStack_46;
  
  local_58 = param_1;
  if ((DAT_09525d8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195900);
    FUN_03f5c2a4(&DAT_09195908);
    FUN_03f5c2a4(&DAT_09195910);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09525d8a = 1;
  }
  local_5c[0] = 0;
  local_60[0] = 0;
  local_64[0] = 0;
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_TimeSpan__op_LessThan(param_1,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 2) {
      if (*(int *)(DAT_09195910 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = Cysharp_Threading_Tasks_UniTask_DelayRealtimePromise__Create
                           (param_1,param_3,param_4,param_5 & 1,local_60);
      uVar5 = local_60[0];
    }
    else if (param_2 == 1) {
      if (*(int *)(DAT_09195900 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = Cysharp_Threading_Tasks_UniTask_DelayIgnoreTimeScalePromise__Create
                           (param_1,param_3,param_4,param_5 & 1,local_5c);
      uVar5 = local_5c[0];
    }
    else {
      if (*(int *)(DAT_09195908 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = Cysharp_Threading_Tasks_UniTask_DelayPromise__Create
                           (param_1,param_3,param_4,param_5 & 1,local_64);
      uVar5 = local_64[0];
    }
    local_48 = 0;
    uStack_46 = 0;
    thunk_FUN_03f5d7b8(&local_50,local_50);
    auVar1._8_2_ = uVar5;
    auVar1._0_8_ = local_50;
    auVar1._10_6_ = uStack_46;
    return auVar1;
  }
  thunk_FUN_03fc39d4(&DAT_0918bd60);
  FUN_039afb80();
  uVar3 = System_TimeSpan__ToString(&local_58,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_092005f0);
  uVar3 = System_String__Concat(uVar4,uVar3,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ddb80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

