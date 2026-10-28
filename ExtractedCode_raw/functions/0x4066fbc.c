// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<unregisterConversionListener>d__56$$MoveNext
// address: 0x4066fbc
// body: available
// range: 0x4066fbc-0x4067123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406711c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4067120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<unregisterConversionListener>d__56__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long local_28;
  
  if ((DAT_09515bf1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_091e5ea0);
    FUN_03f5c2a4(&DAT_09224f80);
    DAT_09515bf1 = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(long *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = AppsFlyerSDK_AppsFlyer__FireAsync(DAT_09224f80,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = UnityEngine_Awaitable__GetAwaiter(lVar1,0);
    uVar2 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 6) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 6,0);
      FUN_04077fc4(param_1 + 2,&local_28,param_1,DAT_091e5ea0);
      return;
    }
  }
  if (local_28 != 0) {
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = (undefined8 *)(*(long *)(DAT_091814e8 + 0xb8) + 0x18);
    *puVar3 = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
    puVar3 = (undefined8 *)(*(long *)(DAT_091814e8 + 0xb8) + 0x20);
    *puVar3 = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
    *param_1 = -2;
    FUN_0406b130(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

