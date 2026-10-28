// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<logLocation>d__21$$MoveNext
// address: 0x4060e08
// body: available
// range: 0x4060e08-0x4061017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406100c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4061010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4061014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<logLocation>d__21__MoveNext(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined4 local_38;
  long local_28;
  
  if ((DAT_09515bcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_091e5d70);
    FUN_03f5c2a4(&DAT_0919fb70);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_0921e270);
    FUN_03f5c2a4(&DAT_0921eb70);
    FUN_03f5c2a4(&DAT_0921ebe8);
    DAT_09515bcb = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_28 = *(long *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar1 = thunk_FUN_03f9944c(DAT_09176b80);
    FUN_06fd76bc(lVar1,DAT_0919fb58);
    local_48[0] = *(undefined8 *)(param_1 + 6);
    uVar2 = FUN_03f5c42c(DAT_09535458,local_48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8454(lVar1,DAT_0921e270,uVar2,DAT_0919fb70);
    local_50 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_03f5c42c(DAT_09535458,&local_50);
    FUN_06fd8454(lVar1,DAT_0921ebe8,uVar2,DAT_0919fb70);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = AppsFlyerSDK_AppsFlyer__FireAsync(DAT_0921eb70,lVar1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = UnityEngine_Awaitable__GetAwaiter(lVar1,0);
    uVar3 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 10) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_04074c78(param_1 + 2,&local_28,param_1,DAT_091e5d70);
      return;
    }
  }
  if (local_28 != 0) {
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
    *param_1 = -2;
    FUN_0406b130(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

