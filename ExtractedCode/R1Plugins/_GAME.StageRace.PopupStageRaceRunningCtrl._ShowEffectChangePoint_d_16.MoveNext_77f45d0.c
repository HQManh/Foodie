// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceRunningCtrl.<ShowEffectChangePoint>d__16$$MoveNext
// address: 0x77f45d0
// body: available
// range: 0x77f45d0-0x77f4997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f4980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f4984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f4988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f498c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f4994 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077f4720) */
/* WARNING: Removing unreachable block (ram,0x077f4990) */

void _GAME_StageRace_PopupStageRaceRunningCtrl_<ShowEffectChangePoint>d__16__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 local_98 [16];
  long **local_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  long *local_60;
  undefined8 uStack_58;
  long **local_50;
  int local_34;
  
  if ((DAT_09523111 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d80);
    FUN_03f5c2a4(&DAT_091a4520);
    FUN_03f5c2a4(&DAT_091a4528);
    FUN_03f5c2a4(&DAT_091a4530);
    FUN_03f5c2a4(&DAT_091b04c8);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523111 = 1;
  }
  local_34 = *param_1;
  lVar9 = *(long *)(param_1 + 10);
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = (long **)0x0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_78 = 0;
  if (local_34 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_34 = -1;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar9 + 0x138) = 1;
    if (*(long *)(lVar9 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(local_98,*(long *)(lVar9 + 0x128),DAT_091b04c8);
    uVar11 = 0;
    uStack_58 = local_98._8_8_;
    local_60 = (long *)local_98._0_8_;
    local_50 = local_88;
    local_98._8_8_ = &local_34;
    local_98._0_8_ = 0;
    local_88 = &local_60;
    while (uVar5 = FUN_071bd28c(&local_60,DAT_091a4528), (uVar5 & 1) != 0) {
      if (local_50 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = _GAME_StageRace_StageRacePlayerUICtrl__ShowEffectChangePoint();
      uVar11 = uVar3 | uVar11;
    }
    if (local_34 < 0) {
      FUN_071bd288(local_88,DAT_091a4520);
    }
    if ((uVar11 & 1) == 0) goto LAB_077f4864;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_98 = Cysharp_Threading_Tasks_UniTask__Delay(1000,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_98,0);
    uVar2 = local_98._8_8_;
    uVar1 = local_98._0_8_;
    local_70 = local_98;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    if ((long *)uVar1 != (long *)0x0) {
      lVar7 = *(long *)uVar1;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077f4930;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar1,DAT_091868c0,0);
LAB_077f4930:
      iVar4 = (*(code *)*puVar6)(uVar1,uVar2 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        local_34 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049ca0e0(param_1 + 2,local_70,param_1,DAT_091c2d80);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar1 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_70._0_8_;
    uVar10 = local_70._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077f4854;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077f4854:
    (*(code *)*puVar6)(uVar1,uVar10,puVar6[1]);
  }
LAB_077f4864:
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_StageRace_StageRaceManager__SavePointCachePopup();
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x138) = 0;
    _GAME_StageRace_PopupStageRaceRunningCtrl__OnUpdateData(lVar9);
    _GAME_StageRace_PopupStageRaceRunningCtrl__CheckFinishRaceWin(lVar9);
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

