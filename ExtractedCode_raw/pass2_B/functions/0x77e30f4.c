// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager$$FinishWeek
// address: 0x77e30f4
// body: available
// range: 0x77e30f4-0x77e355b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e3554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager__FinishWeek(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_5c [3];
  undefined4 local_50;
  long local_48;
  
  if ((DAT_09523075 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919df40);
    FUN_03f5c2a4(&DAT_091c9da0);
    FUN_03f5c2a4(&DAT_091792b0);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091d6050);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091f2508);
    FUN_03f5c2a4(&DAT_09195fa0);
    FUN_03f5c2a4(&DAT_0918d050);
    FUN_03f5c2a4(&DAT_09214198);
    DAT_09523075 = 1;
  }
  local_48 = 0;
  local_50 = 0;
  if (**(long **)(DAT_0918d050 + 0xb8) == 0) goto LAB_077e3554;
  iVar7 = *(int *)(**(long **)(DAT_0918d050 + 0xb8) + 0x14);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
  if (iVar1 <= iVar7) {
    return;
  }
  lVar5 = **(long **)(DAT_0918d050 + 0xb8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_077e3554;
  uVar3 = FUN_06ef1fe8(*(long *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x14),&local_48,DAT_0919df40)
  ;
  if ((uVar3 & 1) == 0) {
LAB_077e3410:
    iVar7 = -1;
  }
  else {
    if (**(long **)(DAT_0918d050 + 0xb8) == 0) goto LAB_077e3554;
    lVar5 = *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x30);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      if (*(int *)(DAT_09195fa0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar6 = *(undefined8 **)(DAT_09195fa0 + 0xb8);
      lVar8 = puVar6[1];
      if (lVar8 == 0) {
        if (*(int *)(DAT_09195fa0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar6 = *(undefined8 **)(DAT_09195fa0 + 0xb8);
        }
        uVar9 = *puVar6;
        lVar8 = thunk_FUN_03f9944c(DAT_091792b0);
        FUN_05322d94(lVar8,uVar9,DAT_091f2508,0);
        plVar4 = (long *)(*(long *)(DAT_09195fa0 + 0xb8) + 8);
        *plVar4 = lVar8;
        thunk_FUN_03f5d7b8(plVar4,lVar8);
      }
      lVar5 = FUN_04ae5fd0(lVar5,lVar8,DAT_091c9da0);
    }
    lVar8 = DAT_0918d050;
    if ((param_1 & 1) == 0) {
      if (local_48 == 0) goto LAB_077e3554;
      *(undefined1 *)(local_48 + 0x14) = 1;
      if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_077e3554;
      local_5c[0] = *(undefined4 *)(**(long **)(lVar8 + 0xb8) + 0x14);
      uVar9 = FUN_03f5c42c(DAT_09535420,local_5c);
      uVar9 = System_String__Format(DAT_09214198,uVar9,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar9,0);
      goto LAB_077e3410;
    }
    if (local_48 == 0) goto LAB_077e3554;
    iVar7 = -1;
    if (((lVar5 != 0) && (*(char *)(local_48 + 0x14) == '\0')) && (0 < *(int *)(lVar5 + 0x1c))) {
      plVar4 = *(long **)(DAT_0918d050 + 0xb8);
      lVar5 = *plVar4;
      if (lVar5 == 0) goto LAB_077e3554;
      iVar7 = *(int *)(lVar5 + 0x28);
      uVar2 = *(undefined4 *)(lVar5 + 0x14);
      *(undefined1 *)(local_48 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 2) = uVar2;
      *(int *)((long)plVar4 + 0x14) = iVar7 + 1;
      _GAME_WeeklyContest_WeeklyContestManager__LogEventWeeklyContestComplete();
      if (**(long **)(DAT_0918d050 + 0xb8) == 0) goto LAB_077e3554;
      if (*(int *)(**(long **)(DAT_0918d050 + 0xb8) + 0x28) == 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__ChangeWeeklyContestTop1(1,0);
      }
    }
  }
  lVar5 = **(long **)(DAT_0918d050 + 0xb8);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
  lVar8 = DAT_0918d050;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x14) = uVar2;
    lVar5 = **(long **)(lVar8 + 0xb8);
    uVar9 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeekUtc(0);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09185080);
    }
    uVar9 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar9,0);
    lVar8 = DAT_0918d050;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = uVar9;
      if (**(long **)(lVar8 + 0xb8) != 0) {
        _GAME_WeeklyContest_WeeklyContestDbModel__AddSaveAction(**(long **)(lVar8 + 0xb8));
        lVar5 = **(long **)(DAT_0918d050 + 0xb8);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x38) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x38),0);
          *(undefined8 *)(lVar5 + 0x30) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x30),0);
          if (**(long **)(DAT_0918d050 + 0xb8) != 0) {
            *(undefined8 *)(**(long **)(DAT_0918d050 + 0xb8) + 0x40) = 0;
            if (-1 < iVar7) {
              lVar5 = _GAME_WeeklyContest_SOWeeklyContestConfig__GetRankReward(iVar7);
              if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
                *(undefined4 *)(*(long *)(DAT_0918d050 + 0xb8) + 0x10) = 0;
              }
              else {
                if (*(int *)(DAT_09189468 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = FUN_04ca5cb8(DAT_091d6050);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                _GAME_WeeklyContest_PopupWeeklyContestFinishCtrl__Open(lVar5,iVar7);
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_077e3554:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

