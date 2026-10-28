// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable.UnityEventHandlerAsyncEnumerator$$MoveNextAsync
// address: 0x7db5928
// body: available
// range: 0x7db5928-0x7db5bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db5bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator__MoveNextAsync
          (ulong param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined2 local_36;
  undefined4 uStack_34;
  
  if ((DAT_09525fa7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bdb70);
    FUN_03f5c2a4(&DAT_091bdb98);
    FUN_03f5c2a4(&DAT_091bddd0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091f1fb8);
    FUN_03f5c2a4(&DAT_09195ac0);
    DAT_09525fa7 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 0x40,0);
  System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 0x48,0);
  FUN_06431a50(param_1 + 0x10,DAT_091bdb70);
  plVar5 = (long *)(param_1 + 0x50);
  if (*plVar5 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar3,param_1,DAT_091f1fb8,0);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8(plVar5,uVar3);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Events_UnityEvent__AddListener(*(long *)(param_1 + 0x38),*plVar5,0);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Threading_CancellationToken__get_CanBeCanceled(param_1 + 0x40,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(DAT_09195ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = **(undefined8 **)(DAT_09195ac0 + 0xb8);
      if (*(int *)(DAT_09182358 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182358);
      }
      Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                (&local_58,uVar3,uVar6,param_1,0);
      *(undefined8 *)(param_1 + 0x60) = uStack_50;
      *(undefined8 *)(param_1 + 0x58) = local_58;
      *(undefined8 *)(param_1 + 0x68) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x58,0);
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Threading_CancellationToken__get_CanBeCanceled(param_1 + 0x48,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      if (*(int *)(DAT_09195ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = *(undefined8 *)(*(long *)(DAT_09195ac0 + 0xb8) + 8);
      if (*(int *)(DAT_09182358 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182358);
      }
      Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
                (&local_58,uVar3,uVar6,param_1,0);
      *(undefined8 *)(param_1 + 0x78) = uStack_50;
      *(undefined8 *)(param_1 + 0x70) = local_58;
      *(undefined8 *)(param_1 + 0x80) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x70,0);
    }
  }
  uVar1 = *(undefined2 *)(param_1 + 0x20);
  local_38 = 0;
  uStack_37 = 0;
  local_36 = 0;
  uStack_34 = 0;
  local_40 = param_1;
  thunk_FUN_03f5d7b8(&local_40,param_1);
  auVar2[8] = 0;
  auVar2._0_8_ = local_40;
  auVar2[9] = uStack_37;
  auVar2._10_2_ = uVar1;
  auVar2._12_4_ = uStack_34;
  return auVar2;
}

