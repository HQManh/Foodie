// rea decompile_all
// name: _GAME.Leaderboard.LeaderboardManager.<FetchLeaderboardPlayer>d__15$$MoveNext
// address: 0x77be8c0
// body: available
// range: 0x77be8c0-0x77bf21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bf20c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bf210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bf214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bf218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77bf21c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_LeaderboardManager_<FetchLeaderboardPlayer>d__15__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 local_180 [16];
  ulong local_170;
  ulong uStack_168;
  long *local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined4 local_138;
  long *local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *local_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 local_b0 [16];
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09522f14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199868);
    FUN_03f5c2a4(&DAT_09199790);
    FUN_03f5c2a4(&DAT_091998b0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a510);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a518);
    FUN_03f5c2a4(&DAT_091876b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bdd60);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_091ddb60);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522f14 = 1;
  }
  iVar3 = *param_1;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar14 = ZEXT816(0);
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  local_f8 = 0;
  uStack_100 = 0;
  local_138 = 0;
  if (iVar3 == 0) {
    local_b0 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_077beb5c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar6 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_b0._0_8_;
      uVar9 = local_b0._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_077bebe0;
          }
          uVar12 = uVar12 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,2);
LAB_077bebe0:
      (*(code *)*puVar5)(uVar6,uVar9,puVar5[1]);
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar12 & 1) != 0) {
LAB_077bec50:
      uVar11 = 0;
      goto LAB_077bf100;
    }
    if ((char)param_1[8] == '\0') {
      lVar4 = **(long **)(DAT_091876b8 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(long *)(lVar4 + 0x30) != 0) && (*(long *)(lVar4 + 0x38) != 0)) {
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
        if (**(long **)(DAT_091876b8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar4 - *(long *)(**(long **)(DAT_091876b8 + 0xb8) + 0x18) < 600) goto LAB_077bec50;
      }
    }
    _GAME_Leaderboard_LeaderboardServer__ReadLeaderboard(&local_60,0,100,DAT_091f5700);
    local_180._8_8_ = uStack_58;
    local_180._0_8_ = local_60;
    local_170 = local_50;
    *(undefined8 *)(param_1 + 0xc) = uStack_58;
    *(long **)(param_1 + 10) = local_60;
    *(ulong *)(param_1 + 0xe) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__EnsureCountryCode(&local_60,0);
    local_e0 = local_50;
    uStack_e8 = uStack_58;
    uStack_58 = 0;
    local_50 = 0;
    local_f0 = local_60;
    local_60 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_58 = uStack_e8;
    local_60 = local_f0;
    local_50 = local_e0;
    thunk_FUN_03f5d7b8(&local_60,0);
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    local_c0 = local_50;
    uVar12 = FUN_041e5390(&local_d0,DAT_0919a718);
    auVar14 = local_b0;
    if ((uVar12 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x16) = uStack_c8;
      *(long **)(param_1 + 0x14) = local_d0;
      *(ulong *)(param_1 + 0x18) = local_c0;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      FUN_0478fb6c(param_1 + 2,&local_d0,param_1,DAT_09199868);
      return;
    }
LAB_077bed3c:
    plVar13 = local_d0;
    uVar6 = uStack_c8;
    if (local_d0 != (long *)0x0) {
      uVar12 = local_c0 & 0xffff;
      lVar4 = *(long *)(DAT_0919a710 + 0x20);
      local_b0 = auVar14;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077bee88;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,lVar4,0);
LAB_077bee88:
      uVar6 = (*(code *)*puVar5)(plVar13,uVar12,puVar5[1]);
      auVar14 = local_b0;
    }
    local_b0 = auVar14;
    _GAME_Leaderboard_LeaderboardServer__ReadLeaderboard(local_180,0,100,uVar6);
    uStack_98 = local_180._8_8_;
    local_a0 = (long *)local_180._0_8_;
    uStack_158 = *(undefined8 *)(param_1 + 0xc);
    local_160 = *(long **)(param_1 + 10);
    local_90 = local_170;
    local_150 = *(ulong *)(param_1 + 0xe);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = local_150;
    uStack_58 = uStack_158;
    local_60 = local_160;
    uStack_78 = uStack_98;
    local_80 = local_a0;
    local_70 = local_90;
    FUN_04e146c8(local_180,&local_60,&local_80,DAT_091ddb60);
    uStack_118 = uStack_168;
    uStack_120 = local_170;
    uStack_128 = local_180._8_8_;
    local_130 = (long *)local_180._0_8_;
    local_180._8_8_ = 0;
    local_180._0_8_ = 0;
    uStack_168 = 0;
    local_170 = 0;
    if ((*(byte *)(*(long *)(DAT_091bdd60 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_180._8_8_ = uStack_128;
    local_180._0_8_ = local_130;
    uStack_168 = uStack_118;
    local_170 = uStack_120;
    thunk_FUN_03f5d7b8(local_180,0);
    uStack_108 = local_180._8_8_;
    local_110 = (long *)local_180._0_8_;
    local_f8 = uStack_168;
    uStack_100 = local_170;
    uVar12 = FUN_04340364(&local_110,DAT_0919a518);
    if ((uVar12 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x1c) = uStack_108;
      *(long **)(param_1 + 0x1a) = local_110;
      *(ulong *)(param_1 + 0x20) = local_f8;
      *(ulong *)(param_1 + 0x1e) = uStack_100;
      thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
      FUN_0478dab8(param_1 + 2,&local_110,param_1,DAT_09199790);
      return;
    }
  }
  else {
    if (iVar3 == 1) {
      local_c0 = *(ulong *)(param_1 + 0x18);
      uStack_c8 = *(undefined8 *)(param_1 + 0x16);
      local_d0 = *(long **)(param_1 + 0x14);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_077bed3c;
    }
    if (iVar3 != 2) {
      local_180 = _GAME_Leaderboard_LeaderboardManager__WaitServerIdReady();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_180,0);
      uVar2 = local_180._8_8_;
      uVar6 = local_180._0_8_;
      local_b0 = local_180;
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
      if ((long *)uVar6 != (long *)0x0) {
        lVar4 = *(long *)uVar6;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar12 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_077beb48;
            }
            uVar12 = uVar12 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(uVar6,DAT_091868c0,0);
LAB_077beb48:
        iVar3 = (*(code *)*puVar5)(uVar6,uVar2 & 0xffffffff,puVar5[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_b0;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_0479046c(param_1 + 2,local_b0,param_1,DAT_091998b0);
          return;
        }
      }
      goto LAB_077beb5c;
    }
    uStack_108 = *(undefined8 *)(param_1 + 0x1c);
    local_110 = *(long **)(param_1 + 0x1a);
    local_f8 = *(ulong *)(param_1 + 0x20);
    uStack_100 = *(ulong *)(param_1 + 0x1e);
    *param_1 = -1;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    local_b0 = auVar14;
  }
  plVar13 = local_110;
  auVar14._8_8_ = uStack_100;
  auVar14._0_8_ = uStack_108;
  if (local_110 != (long *)0x0) {
    uVar12 = local_f8 & 0xffff;
    lVar4 = *(long *)(DAT_0919a510 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077bf05c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,lVar4,0);
LAB_077bf05c:
    auVar14 = (*(code *)*puVar5)(plVar13,uVar12,puVar5[1]);
  }
  lVar7 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  auVar1._8_8_ = local_180._8_8_;
  auVar1._0_8_ = local_180._0_8_;
  uVar11 = 0;
  if ((lVar4 != 0) && (local_180 = auVar1, lVar7 != 0)) {
    lVar8 = **(long **)(DAT_091876b8 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar8 + 0x20) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x30));
    lVar4 = **(long **)(DAT_091876b8 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    thunk_FUN_03f5d7b8();
    lVar4 = **(long **)(DAT_091876b8 + 0xb8);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    uVar11 = 1;
  }
LAB_077bf100:
  plVar13 = *(long **)(param_1 + 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (plVar13 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar11;
  }
  else {
    lVar4 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077bf1ac;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,lVar4,2);
LAB_077bf1ac:
    (*(code *)*puVar5)(plVar13,uVar11,puVar5[1]);
  }
  return;
}

