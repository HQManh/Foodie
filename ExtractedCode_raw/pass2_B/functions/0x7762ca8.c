// rea decompile_all
// name: _GAME.Bridge.R1HomeTabPage.<RefreshPanelWhenCurrent>d__14$$MoveNext
// address: 0x7762ca8
// body: available
// range: 0x7762ca8-0x7762da3 inclusive
// range: 0x7762db0-0x7762f87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7762da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7762f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1HomeTabPage_<RefreshPanelWhenCurrent>d__14__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09522c43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2798);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522c43 = 1;
  }
  local_70._8_8_ = 0;
  lVar9 = *(long *)(param_1 + 4);
  local_80._8_8_ = 0;
  local_70._0_8_ = 0;
  local_80._0_8_ = 0;
  auVar10 = ZEXT816(0);
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
    goto LAB_07762e30;
  }
  uVar3 = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy
                    (lVar9,0);
  *(undefined8 *)(param_1 + 6) = uVar3;
  thunk_FUN_03f5d7b8(param_1 + 6,0);
  auVar10._8_8_ = local_80._8_8_;
  auVar10._0_8_ = local_80._0_8_;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  param_1[8] = (uint)(*(int *)(lVar9 + 0x68) == 6);
  param_1[9] = 0;
  do {
    local_80 = auVar10;
    uVar6 = _GAME_Bridge_CookOrderBridge__IsHomeTabShowing(param_1[8]);
    auVar10 = local_80;
    if ((uVar6 & 1) != 0) break;
    uVar3 = *(undefined8 *)(param_1 + 6);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar10 = Cysharp_Threading_Tasks_UniTask__Yield(8,uVar3,0,0);
    local_80 = auVar10;
    auVar10 = Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow(local_80,0);
    local_60._0_8_ = 0;
    local_60._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_60 = auVar10;
    thunk_FUN_03f5d7b8(local_60,0);
    local_70 = local_60;
    uVar6 = FUN_0430cf0c(local_70,DAT_0919a588);
    auVar10 = local_80;
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049b466c(param_1 + 2,local_70,param_1,DAT_091c2798);
      return;
    }
LAB_07762e30:
    uVar3 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
      if (local_70[8] != '\0') goto LAB_07762f18;
    }
    else {
      uVar2 = local_70._10_2_;
      lVar4 = *(long *)(DAT_0919a580 + 0x20);
      local_80 = auVar10;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *(long *)uVar3;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07762ec8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar3,lVar4,0);
LAB_07762ec8:
      uVar6 = (*(code *)*puVar5)(uVar3,uVar2,puVar5[1]);
      auVar10 = local_80;
      if ((uVar6 & 1) != 0) goto LAB_07762f18;
    }
    iVar1 = param_1[9];
    param_1[9] = iVar1 + 1;
  } while (iVar1 + 1 < 10);
  local_80 = auVar10;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar9,0);
  auVar10 = local_80;
  if ((uVar6 & 1) != 0) {
    _GAME_Bridge_R1HomeTabPage__RefreshPanel(lVar9);
    auVar10 = local_80;
  }
LAB_07762f18:
  *param_1 = -2;
  param_1[6] = 0;
  param_1[7] = 0;
  local_80 = auVar10;
  FUN_042dada8(param_1 + 2,0);
  return;
}

