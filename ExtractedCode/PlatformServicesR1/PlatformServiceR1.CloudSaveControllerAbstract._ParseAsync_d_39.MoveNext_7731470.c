// rea decompile_all
// name: PlatformServiceR1.CloudSaveControllerAbstract.<ParseAsync>d__39$$MoveNext
// address: 0x7731470
// body: available
// range: 0x7731470-0x7731833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7731828 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773182c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7731830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_CloudSaveControllerAbstract_<ParseAsync>d__39__MoveNext(int *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((DAT_09522a79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a060);
    FUN_03f5c2a4(&DAT_0919a068);
    FUN_03f5c2a4(&DAT_0919a088);
    FUN_03f5c2a4(&DAT_09194d50);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522a79 = 1;
  }
  plVar6 = *(long **)(param_1 + 8);
  local_24[0] = 0;
  local_28[0] = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_24[0] = (undefined1)param_1[0x11];
    *(undefined1 *)(param_1 + 0x11) = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      local_50 = ZEXT816(0);
      goto LAB_07731650;
    }
    piVar5 = param_1 + 0xc;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_03f5d7b8(piVar5,0);
    piVar5 = param_1 + 0xe;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_03f5d7b8(piVar5,0);
    param_1[0x10] = 0;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_28[0] = Cysharp_Threading_Tasks_UniTask__SwitchToThreadPool(0);
    local_24[0] = Cysharp_Threading_Tasks_SwitchToThreadPoolAwaitable__GetAwaiter(local_28,0);
    if (*(int *)(DAT_09194d50 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194d50);
    }
    uVar4 = Cysharp_Threading_Tasks_SwitchToThreadPoolAwaitable_Awaiter__get_IsCompleted(local_24,0)
    ;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      uVar7 = DAT_0919a068;
      *(undefined1 *)(param_1 + 0x11) = local_24[0];
      FUN_04795488(param_1 + 2,local_24,param_1,uVar7);
      return;
    }
  }
  if (*(int *)(DAT_09194d50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Cysharp_Threading_Tasks_SwitchToThreadPoolAwaitable_Awaiter__GetResult(local_24,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = (**(code **)(*plVar6 + 0x198))
                    (plVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar6 + 0x1a0));
  *(undefined8 *)(param_1 + 0xc) = uVar7;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread(0,0);
  local_40 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter(local_50,0);
  uVar4 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted(local_40,0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    FUN_04795368(param_1 + 2,local_40,param_1,DAT_0919a060);
    return;
  }
LAB_07731650:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult(local_40,0);
  piVar5 = param_1 + 0xe;
  plVar6 = *(long **)piVar5;
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
        DAT_091842a0)) {
      uVar7 = thunk_FUN_03fc39d4(&DAT_091e66d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(plVar6,uVar7);
    }
    lVar1 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar6,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar1,0);
  }
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  *param_1 = -2;
  piVar5 = param_1 + 0xc;
  uVar7 = *(undefined8 *)piVar5;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  plVar6 = *(long **)(param_1 + 2);
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar7;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar7);
  }
  else {
    lVar1 = *(long *)(DAT_0919a088 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c(lVar1);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_077317f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar6,lVar1,2);
LAB_077317f0:
    (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
  }
  return;
}

