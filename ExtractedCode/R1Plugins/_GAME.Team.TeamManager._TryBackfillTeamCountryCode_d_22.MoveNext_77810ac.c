// rea decompile_all
// name: _GAME.Team.TeamManager.<TryBackfillTeamCountryCode>d__22$$MoveNext
// address: 0x77810ac
// body: available
// range: 0x77810ac-0x77819e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77819a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77819d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<TryBackfillTeamCountryCode>d__22__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_09522d11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1eb0);
    FUN_03f5c2a4(&DAT_091c1db0);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_09213bc0);
    DAT_09522d11 = 1;
  }
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xc);
    uStack_48 = *(undefined8 *)(param_1 + 10);
    local_50 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_07781278:
    plVar12 = local_50;
    uVar13 = uStack_48;
    if (local_50 != (long *)0x0) {
      uVar9 = local_40 & 0xffff;
      lVar6 = *(long *)(DAT_0919a710 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_077816a0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar12,lVar6,0);
LAB_077816a0:
      uVar13 = (*(code *)*puVar7)(plVar12,uVar9,puVar7[1]);
    }
    piVar11 = param_1 + 6;
    *(undefined8 *)piVar11 = uVar13;
    thunk_FUN_03f5d7b8(piVar11);
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_091ba4f0;
    lVar8 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar9 & 1) != 0) goto LAB_077818f0;
    uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)piVar11,0);
    if ((uVar9 & 1) != 0) goto LAB_077818f0;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38) == 0) goto LAB_077818f0;
    lVar6 = thunk_FUN_03f9944c(DAT_0918b958);
    _GAME_Team_TeamInfoModel___ctor();
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x1c);
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar8 + 0x40);
    *(undefined4 *)(lVar6 + 0x1c) = uVar1;
    thunk_FUN_03f5d7b8();
    if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x38);
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)piVar11;
    *(undefined4 *)(lVar6 + 0x38) = uVar1;
    thunk_FUN_03f5d7b8();
    auVar14 = _GAME_Team_TeamServer__EditTeam(lVar6,0);
    local_b0._0_8_ = 0;
    local_b0._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_b0 = auVar14;
    thunk_FUN_03f5d7b8(local_b0,0);
    local_80 = local_b0;
    uVar9 = FUN_0430cf0c(local_80,DAT_0919a588);
    if ((uVar9 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049ae9c0(param_1 + 2,local_80,param_1,DAT_091c1db0);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar12 = *(long **)(DAT_0918b978 + 0xb8);
      if (*(char *)((long)plVar12 + 0x24) != '\0') goto LAB_077818f0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar12 = *(long **)(DAT_0918b978 + 0xb8);
      }
      auVar2._8_8_ = local_80._8_8_;
      auVar2._0_8_ = local_80._0_8_;
      auVar14._8_8_ = local_b0._8_8_;
      auVar14._0_8_ = local_b0._0_8_;
      lVar6 = *plVar12;
      if ((lVar6 == 0) || (local_b0 = auVar14, local_80 = auVar2, *(long *)(lVar6 + 0x38) == 0))
      goto LAB_077818f0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(long *)(lVar6 + 0x40) == 0) goto LAB_077818f0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(long *)(lVar6 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(lVar6 + 0x40) + 0x30) != 1) goto LAB_077818f0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = _GAME_BaseGame_WebService__NormalizeCountryCode
                         (*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x30),0);
      uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar13,0);
      if ((uVar9 & 1) == 0) goto LAB_077818f0;
      uVar9 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
      if ((uVar9 & 1) == 0) goto LAB_077818f0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = DAT_091896c0;
      *(undefined1 *)(*(long *)(DAT_0918b978 + 0xb8) + 0x24) = 1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__EnsureCountryCode(local_b0,0);
      uStack_68 = local_b0._8_8_;
      local_70 = (long *)local_b0._0_8_;
      local_60 = local_a0;
      FUN_039b5b60(local_b0,&local_70,DAT_091bdf18);
      uStack_48 = local_b0._8_8_;
      local_50 = (long *)local_b0._0_8_;
      local_40 = local_a0;
      uVar9 = FUN_041e5390(&local_50,DAT_0919a718);
      if ((uVar9 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = uStack_48;
        *(long **)(param_1 + 8) = local_50;
        *(ulong *)(param_1 + 0xc) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049af784(param_1 + 2,&local_50,param_1,DAT_091c1eb0);
        return;
      }
      goto LAB_07781278;
    }
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  uVar13 = local_80._0_8_;
  if ((long *)local_80._0_8_ == (long *)0x0) {
    bVar4 = local_80[8] != '\0';
  }
  else {
    uVar3 = local_80._10_2_;
    lVar6 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *(long *)uVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_077814e0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar13,lVar6,0);
LAB_077814e0:
    bVar4 = (*(code *)*puVar7)(uVar13,uVar3,puVar7[1]);
  }
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = DAT_091ba4f0;
  lVar8 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  bVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
  if (((bVar5 | bVar4 ^ 0xff) & 1) == 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar6 + 0x38) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 6);
      thunk_FUN_03f5d7b8();
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_b0._0_8_ = *(undefined8 *)(lVar6 + 0x10);
      uVar13 = FUN_03f5c42c(DAT_09535440,local_b0);
      uVar13 = System_String__Format(DAT_09213bc0,uVar13,*(undefined8 *)(param_1 + 6),0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar13,0);
    }
  }
LAB_077818f0:
  *param_1 = -2;
  piVar11 = param_1 + 6;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091866a8) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07781988;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091866a8,2);
LAB_07781988:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  return;
}

