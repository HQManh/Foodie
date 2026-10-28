// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestHomeTabUICtrl.<UpdateUIActive>d__20$$MoveNext
// address: 0x77e2734
// body: available
// range: 0x77e2734-0x77e2b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e2b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e2b94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e2b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e2b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl_<UpdateUIActive>d__20__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0952306d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091c2a98);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_0952306d = 1;
  }
  lVar11 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__get_IsSelfActive(lVar11);
    if ((uVar6 & 1) == 0) goto LAB_077e2b68;
    iVar4 = _GAME_Levels_LevelManager__get_LevelCompleted(0);
    iVar5 = _GAME_Bridge_CookOrderBridge__get_WeeklyContestUnlockLevel(0);
    if (iVar4 < iVar5 + -1) {
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x28),1,0);
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x40),0,0);
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x50),0,0);
      goto LAB_077e2b68;
    }
    _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x28),0,0);
    bVar3 = _GAME_WeeklyContest_WeeklyContestManager__get_NeedFinalFetch();
    *(byte *)((long)param_1 + 0x31) = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x38);
      *(bool *)((long)param_1 + 0x32) = lVar7 != 0;
      if (lVar7 == 0) goto LAB_077e2a54;
      _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__ShowContent(lVar11);
    }
    else {
      *(undefined1 *)((long)param_1 + 0x32) = 0;
LAB_077e2a54:
      uVar6 = _GAME_Utils_Helper__ActiveSelf(*(undefined8 *)(lVar11 + 0x38),0);
      if ((uVar6 & 1) != 0) goto LAB_077e2b68;
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x38),1,0);
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x40),0,0);
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x50),0,0);
    }
    auVar12 = _GAME_WeeklyContest_WeeklyContestManager__FetchLeaderboard
                        (*(byte *)((long)param_1 + 0x31) | *(byte *)(param_1 + 0xc));
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar12;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar6 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bbcc0(param_1 + 2,local_50,param_1,DAT_091c2a98);
      return;
    }
  }
  uVar1 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    bVar3 = local_50[8] != '\0';
  }
  else {
    uVar2 = local_50._10_2_;
    lVar7 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *(long *)uVar1;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077e2914;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(uVar1,lVar7,0);
LAB_077e2914:
    bVar3 = (*(code *)*puVar8)(uVar1,uVar2,puVar8[1]);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar11,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x38),0,0);
    if (*(char *)((long)param_1 + 0x31) != '\0') {
      uVar6 = _GAME_WeeklyContest_WeeklyContestManager__get_NeedFinalFetch();
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = UnityEngine_Application__get_internetReachability(0);
        if (iVar4 != 0) {
          _GAME_WeeklyContest_WeeklyContestManager__FinishWeek(0);
          uVar6 = _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__get_IsSelfActive(lVar11);
          if ((uVar6 & 1) != 0) {
            _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__UpdateUIActive(lVar11,0);
          }
          goto LAB_077e2b68;
        }
      }
    }
    uVar6 = _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__get_IsSelfActive(lVar11);
    if ((uVar6 & 1) != 0) {
      if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x38) == 0) ||
         ((bVar3 & 1) == 0 && *(char *)((long)param_1 + 0x31) != '\0')) {
        _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x50),0,0);
        _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(lVar11 + 0x40),1,0);
      }
      else if (((bVar3 & 1) != 0) || (*(char *)((long)param_1 + 0x32) == '\0')) {
        _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__ShowContent(lVar11);
      }
    }
  }
LAB_077e2b68:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

