// rea decompile_all
// name: _GAME.Profile.ProfileFIconUICtrl.<Start>d__5$$MoveNext
// address: 0x77bdba8
// body: available
// range: 0x77bdba8-0x77bdf53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bdf48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bdf4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bdf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileFIconUICtrl_<Start>d__5__MoveNext(int *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522f01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2a50);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_091eeb08);
    FUN_03f5c2a4(&DAT_09193758);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522f01 = 1;
  }
  lVar8 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar11 = ZEXT816(0);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    uVar2 = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy
                      (lVar8,0);
    if (*(int *)(DAT_09193758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09193758 + 0xb8);
    lVar9 = puVar5[1];
    if (lVar9 == 0) {
      if (*(int *)(DAT_09193758 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_09193758 + 0xb8);
      }
      uVar10 = *puVar5;
      lVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
      FUN_053007d8(lVar9,uVar10,DAT_091eeb08,0);
      plVar3 = (long *)(*(long *)(DAT_09193758 + 0xb8) + 8);
      *plVar3 = lVar9;
      thunk_FUN_03f5d7b8(plVar3,lVar9);
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_70 = Cysharp_Threading_Tasks_UniTask__WaitUntil(lVar9,8,uVar2,0,0);
    auVar11 = Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow(local_70,0);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar11;
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    uVar4 = FUN_0430cf0c(local_60,DAT_0919a588);
    auVar11 = local_70;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049ba6e0(param_1 + 2,local_60,param_1,DAT_091c2a50);
      return;
    }
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    if (local_60[8] != '\0') goto LAB_077bdf1c;
  }
  else {
    uVar1 = local_60._10_2_;
    lVar9 = *(long *)(DAT_0919a580 + 0x20);
    local_70 = auVar11;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar6 = *(long *)uVar2;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077bde6c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar2,lVar9,0);
LAB_077bde6c:
    uVar4 = (*(code *)*puVar5)(uVar2,uVar1,puVar5[1]);
    auVar11 = local_70;
    if ((uVar4 & 1) != 0) goto LAB_077bdf1c;
  }
  local_70 = auVar11;
  if (*(int *)(DAT_09189938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522cab == '\0') {
    FUN_03f5c2a4(&DAT_09189938);
    DAT_09522cab = '\x01';
  }
  if (*(int *)(DAT_09189938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09189938 + 0xb8) + 9) == '\0') {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Profile_ProfileFIconUICtrl__Setup(lVar8);
    auVar11 = local_70;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_Component__get_transform(lVar8,0);
    _GAME_Bridge_CookOrderBridge__ShowCoreProfileButton(uVar2,0);
    lVar8 = UnityEngine_Component__get_gameObject(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar8,0,0);
    auVar11 = local_70;
  }
LAB_077bdf1c:
  *param_1 = -2;
  local_70 = auVar11;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

