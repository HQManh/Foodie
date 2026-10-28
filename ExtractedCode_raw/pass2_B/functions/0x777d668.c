// rea decompile_all
// name: _GAME.Team.TeamManager.<LoadMemberProfileDetailEnvelope>d__32$$MoveNext
// address: 0x777d668
// body: available
// range: 0x777d668-0x777e003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777dfb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777dfe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<LoadMemberProfileDetailEnvelope>d__32__MoveNext(int *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  long *local_180;
  long *plStack_178;
  long *plStack_170;
  long *local_168;
  long *local_160;
  ulong uStack_158;
  undefined8 local_150;
  int *piStack_148;
  int **local_140;
  undefined8 *puStack_138;
  long *local_130;
  long *plStack_128;
  long *local_120;
  undefined4 local_100;
  undefined8 local_f8;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  long *plStack_d8;
  long *local_d0;
  ulong uStack_c8;
  long local_b8;
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  int local_6c;
  int *local_68;
  long *local_60;
  long *local_58;
  long *plStack_50;
  long *local_48;
  
  local_68 = param_1;
  if ((DAT_09522d06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09197380);
    FUN_03f5c2a4(&DAT_09199d28);
    FUN_03f5c2a4(&DAT_09199d50);
    FUN_03f5c2a4(&DAT_0919a6e0);
    FUN_03f5c2a4(&DAT_0919a6e8);
    FUN_03f5c2a4(&DAT_0919ef30);
    FUN_03f5c2a4(&DAT_091a0650);
    FUN_03f5c2a4(&DAT_0919ef40);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_091a0658);
    FUN_03f5c2a4(&DAT_0919ef48);
    FUN_03f5c2a4(&DAT_091a0660);
    FUN_03f5c2a4(&DAT_09177a78);
    FUN_03f5c2a4(&DAT_09194f40);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091f0c58);
    FUN_03f5c2a4(&DAT_09194f38);
    FUN_03f5c2a4(&DAT_091ddb30);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0920e8b8);
    DAT_09522d06 = 1;
  }
  local_6c = *param_1;
  plStack_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_98 = 0;
  local_90 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  local_e0 = (long *)0x0;
  uStack_c8 = 0;
  local_d0 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_f8 = 0;
  local_100 = 0;
  local_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  local_120 = (long *)0x0;
  if (local_6c == 0) {
LAB_0777db40:
    piStack_148 = &local_6c;
    local_140 = &local_68;
    local_150 = 0;
    puStack_138 = &local_f8;
    if (local_6c == 0) {
      plStack_e8 = *(long **)(local_68 + 0x16);
      local_f0 = *(long **)(local_68 + 0x14);
      plStack_d8 = *(long **)(local_68 + 0x1a);
      local_e0 = *(long **)(local_68 + 0x18);
      uStack_c8 = *(ulong *)(local_68 + 0x1e);
      local_d0 = *(long **)(local_68 + 0x1c);
      local_6c = -1;
      local_68[0x16] = 0;
      local_68[0x17] = 0;
      local_68[0x14] = 0;
      local_68[0x15] = 0;
      local_68[0x1a] = 0;
      local_68[0x1b] = 0;
      local_68[0x18] = 0;
      local_68[0x19] = 0;
      local_68[0x1e] = 0;
      local_68[0x1f] = 0;
      local_68[0x1c] = 0;
      local_68[0x1d] = 0;
      *local_68 = -1;
LAB_0777dc1c:
      plVar14 = local_f0;
      plStack_170 = local_d0;
      plVar12 = plStack_e8;
      local_180 = local_e0;
      plStack_178 = plStack_d8;
      if (local_f0 != (long *)0x0) {
        uVar5 = uStack_c8 & 0xffff;
        lVar11 = *(long *)(DAT_0919a6e0 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c(lVar11);
        }
        lVar8 = *plVar14;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0777dcc0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar14,lVar11,0);
LAB_0777dcc0:
        (*(code *)*puVar7)(&local_60,plVar14,uVar5,puVar7[1]);
        plStack_170 = local_48;
        plVar12 = local_60;
        local_180 = local_58;
        plStack_178 = plStack_50;
      }
      iVar15 = 0xf;
      local_b0 = local_180;
      plStack_a8 = plStack_178;
      local_a0 = plStack_170;
    }
    else {
      if (*(long *)(local_68 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_063f80e4(&local_180,*(long *)(local_68 + 0x12),DAT_09197380);
      plStack_e8 = plStack_178;
      local_f0 = local_180;
      plStack_d8 = local_168;
      local_e0 = plStack_170;
      uStack_c8 = uStack_158;
      local_d0 = local_160;
      uVar5 = FUN_064167ec(&local_f0,DAT_0919a6e8);
      if ((uVar5 & 1) != 0) goto LAB_0777dc1c;
      local_6c = 0;
      *local_68 = 0;
      *(ulong *)(local_68 + 0x1e) = uStack_c8;
      *(long **)(local_68 + 0x1c) = local_d0;
      *(long **)(local_68 + 0x16) = plStack_e8;
      *(long **)(local_68 + 0x14) = local_f0;
      *(long **)(local_68 + 0x1a) = plStack_d8;
      *(long **)(local_68 + 0x18) = local_e0;
      thunk_FUN_03f5d7b8(local_68 + 0x14,0);
      FUN_0479593c(local_68 + 2,&local_f0,local_68,DAT_09199d28);
      plVar12 = (long *)0x0;
      iVar15 = 0xc;
    }
    FUN_03ebe2f4(&local_150);
    if (iVar15 != 0xf) {
      if (iVar15 == 4) {
        plVar12 = (long *)0x0;
        plVar14 = local_90;
        plVar1 = plStack_88;
        plVar2 = local_80;
        goto LAB_0777de94;
      }
      if (iVar15 != 0) {
        return;
      }
    }
    if (plVar12 != (long *)0x0) {
      if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = System_String__Equals(lVar11,plVar12[2],0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = *(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10);
        lVar11 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918be20);
        }
        lVar8 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
        lVar6 = thunk_FUN_03f9944c(DAT_09194f40);
        System_Object___ctor(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = plVar12;
        *(long **)(lVar6 + 0x20) = plStack_a8;
        *(long **)(lVar6 + 0x18) = local_b0;
        *(long **)(lVar6 + 0x28) = local_a0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),0);
        *(long *)(lVar6 + 0x30) = lVar8 + 60000;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd8440(lVar11,uVar4,lVar6,DAT_091a0660);
        plVar14 = local_b0;
        plVar1 = plStack_a8;
        plVar2 = local_a0;
        if (((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
            (lVar11 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), plVar14 = local_b0,
            plVar1 = plStack_a8, plVar2 = local_a0, lVar11 != 0)) &&
           (lVar11 = *(long *)(lVar11 + 0x58), plVar14 = local_b0, plVar1 = plStack_a8,
           plVar2 = local_a0, lVar11 != 0)) {
          if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          bVar3 = FUN_06fd9fbc(lVar11,*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),&local_b8,
                               DAT_0919ffb8);
          plVar14 = local_b0;
          plVar1 = plStack_a8;
          plVar2 = local_a0;
          if ((bVar3 & local_b8 != 0) != 0) {
            *(undefined8 *)(local_b8 + 0x48) = plVar12;
            thunk_FUN_03f5d7b8((undefined8 *)(local_b8 + 0x48),plVar12);
            plVar14 = local_b0;
            plVar1 = plStack_a8;
            plVar2 = local_a0;
          }
        }
        goto LAB_0777de94;
      }
    }
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_09194f38);
    System_Object___ctor(uVar4,0);
    *(undefined8 *)(local_68 + 0x10) = uVar4;
    thunk_FUN_03f5d7b8(local_68 + 0x10,uVar4);
    if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10) = *(undefined8 *)(local_68 + 0xe);
    thunk_FUN_03f5d7b8();
    if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty
                      (*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
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
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = System_String__Equals(lVar11,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = **(long **)(DAT_091896c0 + 0xb8);
        if (lVar11 == 0) {
          plVar12 = (long *)0x0;
          local_130 = (long *)0x0;
          plStack_128 = (long *)0x0;
          local_120 = (long *)0x0;
          plVar14 = local_130;
          plVar1 = plStack_128;
          plVar2 = local_120;
        }
        else {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar11 = **(long **)(DAT_091896c0 + 0xb8);
          }
          _GAME_Profile_ProfileReadEnvelope__LocalAuthoritative(&local_180,lVar11,DAT_0920e8b8,0);
          plStack_128 = plStack_170;
          local_130 = plStack_178;
          local_120 = local_168;
          plVar12 = local_180;
          plVar14 = local_130;
          plVar1 = plStack_128;
          plVar2 = local_120;
        }
        goto LAB_0777de94;
      }
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = FUN_06fd9fbc(lVar8,*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),&local_98,
                           DAT_091a0658);
      if ((uVar5 & 1) != 0) {
        if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = _GAME_Profile_ProfileReadEnvelope__get_HasProfile(local_98 + 0x10,0);
        if ((uVar5 & 1) != 0) {
          if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar11 < *(long *)(local_98 + 0x30)) {
            plVar12 = *(long **)(local_98 + 0x10);
            plVar14 = *(long **)(local_98 + 0x18);
            plVar1 = *(long **)(local_98 + 0x20);
            plVar2 = *(long **)(local_98 + 0x28);
            goto LAB_0777de94;
          }
        }
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd9970(lVar11,*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),DAT_091a0650);
      }
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = FUN_06fd9fbc(lVar11,*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),local_68 + 0x12
                           ,DAT_0919ef48);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)(local_68 + 0x10);
        uVar4 = thunk_FUN_03f9944c(DAT_09177a78);
        FUN_052fbf48(uVar4,uVar13,DAT_091f0c58,0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = FUN_04e12710(uVar4,DAT_091ddb30);
        *(undefined8 *)(local_68 + 0x12) = uVar4;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd8454(lVar11,*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10),
                     *(undefined8 *)(local_68 + 0x12),DAT_0919ef30);
      }
      goto LAB_0777db40;
    }
  }
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_80 = (long *)0x0;
  plVar12 = (long *)0x0;
  plVar14 = local_90;
  plVar1 = plStack_88;
  plVar2 = local_80;
LAB_0777de94:
  local_80 = plVar2;
  plStack_88 = plVar1;
  local_90 = plVar14;
  *local_68 = -2;
  piVar10 = local_68 + 0x10;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  piVar10 = local_68 + 0x12;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  plVar14 = *(long **)(local_68 + 2);
  if (plVar14 == (long *)0x0) {
    *(long **)(local_68 + 6) = plVar12;
    *(long **)(local_68 + 10) = plStack_88;
    *(long **)(local_68 + 8) = local_90;
    *(long **)(local_68 + 0xc) = local_80;
    thunk_FUN_03f5d7b8(local_68 + 6,0);
  }
  else {
    lVar11 = *(long *)(DAT_09199d50 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c(lVar11);
    }
    lVar8 = *plVar14;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0777df74;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar14,lVar11,2);
LAB_0777df74:
    plStack_170 = plStack_88;
    plStack_178 = local_90;
    local_168 = local_80;
    local_180 = plVar12;
    (*(code *)*puVar7)(plVar14,&local_180,puVar7[1]);
  }
  return;
}

