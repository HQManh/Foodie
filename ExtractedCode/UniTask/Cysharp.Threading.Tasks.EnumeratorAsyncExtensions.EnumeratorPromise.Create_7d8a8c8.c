// rea decompile_all
// name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions.EnumeratorPromise$$Create
// address: 0x7d8a8c8
// body: available
// range: 0x7d8a8c8-0x7d8aaa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8aaa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__Create
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined2 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  if ((DAT_09525d2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181948);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09190578);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bc8b0);
    FUN_03f5c2a4(&DAT_091bdc10);
    DAT_09525d2c = 1;
  }
  local_40 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar3 = local_38;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09181948 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__CreateFromCanceled
                      (uVar3,param_4);
    return lVar2;
  }
  if (*(int *)(DAT_09190578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_05d7fc40(*(undefined8 *)(DAT_09190578 + 0xb8),&local_40,DAT_091bc8b0);
  if ((uVar1 & 1) == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09190578);
    System_Object___ctor(lVar2,0);
    local_40 = lVar2;
  }
  lVar2 = local_40;
  if (*(int *)(DAT_09190578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__ConsumeEnumerator
                    (param_1);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x18);
    *puVar4 = uVar3;
    thunk_FUN_03f5d7b8(puVar4,uVar3);
    if (local_40 != 0) {
      *(undefined8 *)(local_40 + 0x20) = local_38;
      thunk_FUN_03f5d7b8((undefined8 *)(local_40 + 0x20),0);
      if (local_40 != 0) {
        *(undefined2 *)(local_40 + 0x2c) = 1;
        *(undefined4 *)(local_40 + 0x28) = 0xffffffff;
        *param_4 = *(undefined2 *)(local_40 + 0x40);
        uVar1 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__MoveNext();
        lVar2 = local_40;
        if ((uVar1 & 1) == 0) {
          return local_40;
        }
        if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Cysharp_Threading_Tasks_PlayerLoopHelper__AddAction(param_2,lVar2);
        return local_40;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

