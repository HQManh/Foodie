// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl.<ScrollToTopAfterLateUpdate>d__27$$MoveNext
// address: 0x77aca3c
// body: available
// range: 0x77aca3c-0x77acbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77acbd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl_<ScrollToTopAfterLateUpdate>d__27__MoveNext(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  if ((DAT_09522e62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2dd8);
    FUN_03f5c2a4(&DAT_091c56f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522e62 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 10);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28._4_4_ = param_1[0xe];
    param_1[0xe] = 0;
    *param_1 = -1;
    local_28._0_4_ = 0;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Cysharp_Threading_Tasks_UniTask__Yield(0xc,0);
    local_28 = CONCAT44(local_28._4_4_,uVar1);
    iVar2 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_28,0);
    local_28._4_4_ = iVar2;
    uVar3 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted((long)&local_28 + 4,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      uVar4 = DAT_091c2dd8;
      param_1[0xe] = local_28._4_4_;
      FUN_049cbbc0(param_1 + 2,(long)&local_28 + 4,param_1,uVar4);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult((long)&local_28 + 4,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_04a6a8a8(*(long *)(param_1 + 0xc),1,DAT_091c56f0);
      _GAME_Utils_Helper__ScrollToTop(uVar4,0);
    }
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

