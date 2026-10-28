// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions$$ToUniTask
// address: 0x7dab554
// body: available
// range: 0x7dab554-0x7dab6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dab6d8 to 0x7dcb9f0 Cysharp.Threading.Tasks.Internal.Error$$ThrowArgumentNullExceptionCore (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UnityAsyncExtensions__ToUniTask
          (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined2 local_4c [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  
  local_48 = param_4;
  if ((DAT_09525edf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091959b8);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091cb710);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09217b00);
    DAT_09525edf = 1;
  }
  local_4c[0] = 0;
  if (param_1 != 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_48,0);
    uVar3 = local_48;
    if ((uVar2 & 1) == 0) {
      uVar2 = UnityEngine_AsyncOperation__get_isDone(param_1,0);
      uVar3 = local_48;
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_091959b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_40 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource__Create
                             (param_1,param_3,param_2,uVar3,param_5 & 1,local_4c);
        uVar1 = local_4c[0];
        uStack_38 = 0;
        uStack_36 = 0;
        thunk_FUN_03f5d7b8(&local_40,local_40);
        uStack_38 = uVar1;
      }
      else {
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = *(undefined8 *)(*(long *)(DAT_0918c610 + 0xb8) + 0x18);
        local_40 = *(undefined8 *)(*(long *)(DAT_0918c610 + 0xb8) + 0x10);
        uStack_38 = (undefined2)uVar3;
        uStack_36 = (undefined6)((ulong)uVar3 >> 0x10);
      }
    }
    else {
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar4 = Cysharp_Threading_Tasks_UniTask__FromCanceled(uVar3,0);
      local_40 = auVar4._0_8_;
      uStack_38 = auVar4._8_2_;
      uStack_36 = auVar4._10_6_;
    }
    auVar4._8_2_ = uStack_38;
    auVar4._0_8_ = local_40;
    auVar4._10_6_ = uStack_36;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  Cysharp_Threading_Tasks_Internal_Error__ThrowArgumentNullExceptionCore(DAT_09217b00);
}

