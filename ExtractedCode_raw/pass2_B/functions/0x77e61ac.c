// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager.<TryJoinRace>d__23$$MoveNext
// address: 0x77e61ac
// body: available
// range: 0x77e61ac-0x77e65cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e6594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e6598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e659c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65c0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e65c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077e64d0) */
/* WARNING: Removing unreachable block (ram,0x077e65bc) */

void _GAME_WeeklyContest_WeeklyContestManager_<TryJoinRace>d__23__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  undefined8 local_78;
  int *piStack_70;
  undefined8 *local_68;
  undefined4 local_58;
  undefined8 local_50;
  int *piStack_48;
  undefined8 *local_40;
  undefined8 local_30;
  int local_24;
  
  if ((DAT_09523088 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f28);
    FUN_03f5c2a4(&DAT_091a4e50);
    FUN_03f5c2a4(&DAT_091a4e58);
    FUN_03f5c2a4(&DAT_091a4e60);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b1d58);
    FUN_03f5c2a4(&DAT_091b1d68);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091bc588);
    FUN_03f5c2a4(&DAT_091bc590);
    FUN_03f5c2a4(&DAT_091bce18);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09523088 = 1;
  }
  local_24 = *param_1;
  local_30 = 0;
  local_50 = 0;
  piStack_48 = (int *)0x0;
  local_40 = (undefined8 *)0x0;
  local_58 = 0;
  if (local_24 == 0) {
    local_30 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    local_24 = -1;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 6) + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(bool *)(param_1 + 8) = *(int *)(lVar6 + 0x18) == 0;
    lVar6 = _GAME_WeeklyContest_WeeklyContestServer__JoinRace(0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_30 = FUN_062ee710(lVar6,DAT_091bce18);
    uVar4 = FUN_06209cac(&local_30,DAT_091bc590);
    if ((uVar4 & 1) == 0) {
      local_24 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049aff00(param_1 + 2,&local_30,param_1,DAT_091c1f28);
      return;
    }
  }
  lVar6 = FUN_06209cec(&local_30,DAT_091bc588);
  if (lVar6 != 0) {
    if ((char)param_1[8] != '\0') {
      if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_WeeklyContest_WeeklyContestManager__LogEventWeeklyContestJoin
                (*(undefined4 *)(**(long **)(DAT_0918d050 + 0xb8) + 0x14));
    }
    if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(*(long *)(lVar6 + 0x28) + 0x18)) {
      _GAME_WeeklyContest_WeeklyContestServer__ClaimRank(0);
    }
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_78,*(long *)(lVar6 + 0x18),DAT_091b1d58);
    local_40 = local_68;
    piStack_48 = piStack_70;
    local_50 = local_78;
    local_78 = 0;
    local_68 = &local_50;
    piStack_70 = &local_24;
    while (uVar4 = FUN_071bd28c(&local_50,DAT_091a4e58), lVar6 = DAT_091b0570, (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x18);
      if (lVar7 == 0) {
LAB_077e6594:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      uVar5 = local_40[2];
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_077e6594;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar5;
        thunk_FUN_03f5d7b8(puVar9);
      }
      else {
        FUN_057e0c68(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (local_24 < 0) {
      FUN_071bd288(local_68,DAT_091a4e50);
    }
    if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_WeeklyContest_WeeklyContestDbModel__AddSaveAction();
  }
  cVar3 = DAT_095162d8;
  *param_1 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077e6578;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_077e6578:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
  return;
}

