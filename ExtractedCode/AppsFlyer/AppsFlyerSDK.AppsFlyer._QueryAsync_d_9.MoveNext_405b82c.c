// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<QueryAsync>d__9$$MoveNext
// address: 0x405b82c
// body: available
// range: 0x405b82c-0x405bc13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405bc00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405bc04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405bc08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405bc0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405bc10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<QueryAsync>d__9__MoveNext(int *param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_38;
  
  if ((DAT_09515ba4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814f0);
    FUN_03f5c2a4(&DAT_0919a388);
    FUN_03f5c2a4(&DAT_0919a390);
    FUN_03f5c2a4(&DAT_0919a3b0);
    FUN_03f5c2a4(&DAT_09181970);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09177d18);
    FUN_03f5c2a4(&DAT_091bc3b8);
    FUN_03f5c2a4(&DAT_091bc3c0);
    FUN_03f5c2a4(&DAT_091bccb0);
    FUN_03f5c2a4(&DAT_091e1e00);
    FUN_03f5c2a4(&DAT_0918e500);
    DAT_09515ba4 = 1;
  }
  local_38 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      local_60 = ZEXT816(0);
      goto LAB_0405ba90;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_0918e500);
    System_Object___ctor(lVar3,0);
    plVar6 = (long *)(param_1 + 10);
    *plVar6 = lVar3;
    thunk_FUN_03f5d7b8(plVar6,lVar3);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar6 + 0x10) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_03f5d7b8();
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar6 + 0x18) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    piVar1 = param_1 + 0xc;
    piVar1[0] = 0;
    piVar1[1] = 0;
    thunk_FUN_03f5d7b8(piVar1,0);
    uVar5 = *(undefined8 *)(param_1 + 10);
    param_1[0xe] = 0;
    uVar4 = thunk_FUN_03f9944c(DAT_09177d18);
    FUN_053017a8(uVar4,uVar5,DAT_091e1e00,0);
    if (*(int *)(DAT_091814f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = AppsFlyerSDK_AppsFlyerJniWorker__EnqueueExecute(uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar3,DAT_091bccb0);
    uVar2 = FUN_06209cac(&local_38,DAT_091bc3c0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_040726bc(param_1 + 2,&local_38,param_1,DAT_0919a390);
      return;
    }
  }
  uVar4 = FUN_06209cec(&local_38,DAT_091bc3b8);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_03f5d7b8();
  param_1[0xe] = 1;
  if (*(int *)(DAT_09181970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_60 = UnityEngine_Awaitable__MainThreadAsync(0);
  local_50 = UnityEngine_MainThreadAwaitable__GetAwaiter(local_60,0);
  uVar2 = UnityEngine_MainThreadAwaitable__get_IsCompleted(local_50,0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    FUN_0407287c(param_1 + 2,local_50,param_1,DAT_0919a388);
    return;
  }
LAB_0405ba90:
  piVar1 = param_1 + 0xc;
  plVar6 = *(long **)piVar1;
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
        DAT_091842a0)) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_091e1e08);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(plVar6,uVar4);
    }
    lVar3 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar6,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar3,0);
  }
  if (param_1[0xe] == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    piVar1[0] = 0;
    piVar1[1] = 0;
    thunk_FUN_03f5d7b8(piVar1,0);
    piVar1 = param_1 + 0x10;
    piVar1[0] = 0;
    piVar1[1] = 0;
    thunk_FUN_03f5d7b8(piVar1,0);
    piVar1 = param_1 + 10;
    piVar1[0] = 0;
    piVar1[1] = 0;
    thunk_FUN_03f5d7b8(piVar1,0);
    uVar4 = 0;
  }
  piVar1 = param_1 + 10;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar1,0);
  FUN_06b426d4(param_1 + 2,uVar4,DAT_0919a3b0);
  return;
}

