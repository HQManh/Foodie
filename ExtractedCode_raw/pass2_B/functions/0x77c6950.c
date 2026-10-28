// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardTabTeamCtrl.<UpdateUIActive>d__18$$MoveNext
// address: 0x77c6950
// body: available
// range: 0x77c6950-0x77c6cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c6c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6c9c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6ca4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6cac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077c6c98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_Leaderboard_UILeaderboardTabTeamCtrl_<UpdateUIActive>d__18__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  long local_40;
  int local_34;
  undefined1 local_30 [16];
  
  if ((DAT_09522f62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2a88);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522f62 = 1;
  }
  local_34 = *param_1;
  local_40 = *(long *)(param_1 + 10);
  local_50._8_8_ = 0;
  local_50._0_8_ = 0;
  if (local_34 == 0) {
LAB_077c6af4:
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_34 = -1;
    *param_1 = -1;
LAB_077c6b0c:
    uVar1 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      bVar3 = local_50[8] != '\0';
    }
    else {
      uVar2 = local_50._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar9 = *(long *)uVar1;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077c6bb4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar1,lVar6,0);
LAB_077c6bb4:
      bVar3 = (*(code *)*puVar7)(uVar1,uVar2,puVar7[1]);
    }
    iVar8 = 9;
  }
  else {
    bVar3 = _GAME_Leaderboard_LeaderboardManager__get_HasTeamData();
    *(byte *)(param_1 + 0xc) = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(local_40 + 0x28),0,0);
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Leaderboard_UILeaderboardTabTeamCtrl__ShowCurrentTab();
    }
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_40 + 0x8c) != '\0') goto LAB_077c6c70;
    *(undefined1 *)(local_40 + 0x8c) = 1;
    if (local_34 == 0) goto LAB_077c6af4;
    auVar11 = _GAME_Leaderboard_LeaderboardManager__FetchLeaderboardTeam(0);
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_30 = auVar11;
    thunk_FUN_03f5d7b8(local_30,0);
    local_50 = local_30;
    uVar5 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar5 & 1) != 0) goto LAB_077c6b0c;
    local_34 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    FUN_049bb7e4(param_1 + 2,local_50,param_1,DAT_091c2a88);
    bVar3 = 0;
    iVar8 = 8;
  }
  lVar6 = local_40;
  if (local_34 < 0) {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_40 + 0x8c) = 0;
  }
  if ((iVar8 != 9) && (iVar8 != 0)) {
    return;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = _GAME_Leaderboard_LeaderboardManager__get_HasTeamData();
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_Helper__SetActive
              (0x3f800000,*(undefined8 *)(local_40 + 0x28),(uVar4 ^ 0xffffffff) & 1,0);
    if (((uVar4 & 1) != 0) && (((bVar3 & 1) != 0 || ((char)param_1[0xc] == '\0')))) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Leaderboard_UILeaderboardTabTeamCtrl__ShowCurrentTab();
    }
  }
LAB_077c6c70:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

