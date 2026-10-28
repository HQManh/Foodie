// rea decompile_all
// name: Cysharp.Threading.Tasks.CancellationTokenExtensions$$ToCancellationToken
// address: 0x7d893b8
// body: available
// range: 0x7d893b8-0x7d8955b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d89554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d89558 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_CancellationTokenExtensions__ToCancellationToken
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_34 [4];
  undefined8 local_28;
  
  local_28 = param_3;
  if ((DAT_09525d0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182358);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_0917fcb0);
    FUN_03f5c2a4(&DAT_09182348);
    DAT_09525d0f = 1;
  }
  local_34[0] = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Threading_CancellationToken__get_CanBeCanceled(&local_28,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_03f5c394(DAT_0917fcb0,1);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar2 + 0x20) = local_28;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),0);
        if (*(int *)(DAT_09182368 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource(lVar2,0);
        if (*(int *)(DAT_09182358 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182358);
        }
        local_34[0] = Cysharp_Threading_Tasks_CancellationTokenExtensions__ToCancellationTokenCore
                                (param_1,param_2,lVar2);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_34,0);
        if (lVar2 != 0) {
          uVar3 = System_Threading_CancellationTokenSource__get_Token(lVar2,0);
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_09182358 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_28 = Cysharp_Threading_Tasks_CancellationTokenExtensions__ToCancellationToken
                         (param_1,param_2);
  }
  return local_28;
}

