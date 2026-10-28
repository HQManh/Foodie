// rea decompile_all
// name: _GAME.Team.TeamManager.<FetchChat>d__40$$MoveNext
// address: 0x77761d8
// body: available
// range: 0x77761d8-0x7776b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7776b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7776b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<FetchChat>d__40__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long **pplVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  long *local_1f0;
  long *plStack_1e8;
  long *local_1e0;
  ulong uStack_1d8;
  long *local_1d0;
  long *plStack_1c8;
  long *local_1c0;
  long *local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  long *local_190;
  long *plStack_188;
  long *local_180;
  long *local_170;
  long *plStack_168;
  long *local_160;
  long *local_150;
  long *plStack_148;
  long *local_140;
  long *local_130;
  long *plStack_128;
  long *local_120;
  long *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f0;
  long *plStack_e8;
  long *local_e0;
  undefined4 local_c8;
  long *local_c0;
  long *plStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  long *local_a0;
  long *plStack_98;
  long *plStack_90;
  ulong local_88;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long *local_60;
  long *plStack_58;
  long *local_50;
  
  if ((DAT_09522cf1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199778);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a4d0);
    FUN_03f5c2a4(&DAT_0919a4d8);
    FUN_03f5c2a4(&DAT_091b0c60);
    FUN_03f5c2a4(&DAT_091b0c78);
    FUN_03f5c2a4(&DAT_091b0c08);
    FUN_03f5c2a4(&DAT_0917ce08);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bdd30);
    FUN_03f5c2a4(&DAT_091ddad0);
    FUN_03f5c2a4(&DAT_091ddb48);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522cf1 = 1;
  }
  local_c8 = 0;
  local_f0 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_110 = (long *)0x0;
  plStack_108 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  local_c0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_88 = 0;
  plStack_90 = (long *)0x0;
  local_100 = (long *)0x0;
  local_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  local_120 = (long *)0x0;
  local_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  local_140 = (long *)0x0;
  local_170 = (long *)0x0;
  plStack_168 = (long *)0x0;
  local_160 = (long *)0x0;
  local_190 = (long *)0x0;
  plStack_188 = (long *)0x0;
  local_180 = (long *)0x0;
  local_1b0 = (long *)0x0;
  plStack_1a8 = (long *)0x0;
  local_1a0 = (long *)0x0;
  plStack_1c8 = (long *)0x0;
  local_1d0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  if (*param_1 == 0) {
    plStack_98 = *(long **)(param_1 + 0x10);
    local_a0 = *(long **)(param_1 + 0xe);
    local_88 = *(ulong *)(param_1 + 0x14);
    plStack_90 = *(long **)(param_1 + 0x12);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_077767d8:
    plVar11 = local_a0;
    auVar14._8_8_ = plStack_90;
    auVar14._0_8_ = plStack_98;
    if (local_a0 != (long *)0x0) {
      uVar2 = local_88 & 0xffff;
      lVar1 = *(long *)(DAT_0919a4d0 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c(lVar1);
      }
      lVar4 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077768b0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,lVar1,0);
LAB_077768b0:
      auVar14 = (*(code *)*puVar3)(plVar11,uVar2,puVar3[1]);
    }
    plVar11 = (long *)(param_1 + 10);
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(*plVar11 + 0x58);
    *puVar3 = auVar14._0_8_;
    thunk_FUN_03f5d7b8(puVar3,auVar14._0_8_);
    plVar12 = (long *)(param_1 + 0xc);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(*plVar12 + 0x60);
    *puVar3 = auVar14._8_8_;
    thunk_FUN_03f5d7b8(puVar3,auVar14._8_8_);
    *plVar11 = 0;
    thunk_FUN_03f5d7b8(plVar11,0);
    *plVar12 = 0;
    thunk_FUN_03f5d7b8(plVar12,0);
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = DAT_091ba4f0;
    lVar4 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(lVar1 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    uVar10 = **(undefined8 **)(lVar1 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar1 + 0x58) != 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar1 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar1 + 0x60) != 0) {
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = **(long **)(DAT_0918b978 + 0xb8);
          }
          if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar1 + 0x48) = uVar10;
          uVar9 = 1;
          goto LAB_07776a68;
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
    if ((char)param_1[8] != '\0') {
LAB_07776370:
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar1 + 0x58) == 0) {
LAB_077763c4:
        iVar5 = 0x14;
      }
      else {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar1 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(*(long *)(lVar1 + 0x58) + 0x18) < 0x14) goto LAB_077763c4;
        if ((char)param_1[8] == '\0') {
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = **(long **)(DAT_0918b978 + 0xb8);
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          if (*(long *)(lVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar5 = *(int *)(*(long *)(lVar1 + 0x58) + 0x18);
        }
        else {
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = **(long **)(DAT_0918b978 + 0xb8);
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          if (*(long *)(lVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar5 = *(int *)(*(long *)(lVar1 + 0x58) + 0x18) + 10;
        }
        if (99 < iVar5) {
          iVar5 = 100;
        }
      }
      _GAME_Team_TeamServer__FetchChat(&local_60,iVar5,0,(char)param_1[8]);
      plStack_1e8 = plStack_58;
      local_1f0 = local_60;
      local_1e0 = local_50;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = local_1e0;
      plVar12 = local_1f0;
      plVar13 = plStack_1e8;
      if (*(long *)(lVar1 + 0x60) == 0) {
LAB_0777656c:
        iVar5 = 0x14;
        local_170 = plVar12;
        plStack_168 = plVar13;
        local_160 = plVar11;
        local_f0 = plVar12;
        plStack_e8 = plVar13;
        local_e0 = plVar11;
      }
      else {
        plStack_108 = plStack_1e8;
        local_110 = local_1f0;
        local_100 = local_1e0;
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar1 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar11 = local_100;
        plVar12 = local_110;
        plVar13 = plStack_108;
        if (*(int *)(*(long *)(lVar1 + 0x60) + 0x18) < 0x14) goto LAB_0777656c;
        if ((char)param_1[8] == '\0') {
          plStack_148 = plStack_108;
          local_150 = local_110;
          local_140 = local_100;
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = **(long **)(DAT_0918b978 + 0xb8);
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          if (*(long *)(lVar1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar5 = *(int *)(*(long *)(lVar1 + 0x60) + 0x18);
          pplVar6 = &local_150;
        }
        else {
          plStack_128 = plStack_108;
          local_130 = local_110;
          local_120 = local_100;
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = **(long **)(DAT_0918b978 + 0xb8);
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          if (*(long *)(lVar1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          pplVar6 = &local_130;
          iVar5 = *(int *)(*(long *)(lVar1 + 0x60) + 0x18) + 10;
        }
        plStack_168 = pplVar6[1];
        local_170 = *pplVar6;
        local_160 = pplVar6[2];
        if (99 < iVar5) {
          iVar5 = 100;
        }
      }
      plStack_188 = plStack_168;
      local_190 = local_170;
      local_180 = local_160;
      if (*(int *)(DAT_09189970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
      if ((uVar2 & 1) == 0) {
        uVar10 = thunk_FUN_03f9944c(DAT_0917ce08);
        FUN_057e0400(uVar10,DAT_091b0c60);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04e124a4(&local_1f0,uVar10,DAT_091ddad0);
      }
      else {
        _GAME_Team_TeamServer__FetchLifeRequest(&local_1f0,iVar5,0,(char)param_1[8]);
      }
      plStack_1a8 = plStack_1e8;
      local_1b0 = local_1f0;
      local_1a0 = local_1e0;
      plStack_1c8 = plStack_188;
      local_1d0 = local_190;
      local_1c0 = local_180;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined8 *)(param_1 + 10) = **(undefined8 **)(DAT_0918b978 + 0xb8);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(param_1 + 0xc) = **(undefined8 **)(DAT_0918b978 + 0xb8);
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plStack_58 = plStack_1c8;
      local_60 = local_1d0;
      local_50 = local_1c0;
      plStack_78 = plStack_1a8;
      local_80 = local_1b0;
      local_70 = local_1a0;
      FUN_04e146c8(&local_1f0,&local_60,&local_80,DAT_091ddb48);
      uStack_a8 = uStack_1d8;
      plStack_b0 = local_1e0;
      plStack_b8 = plStack_1e8;
      local_c0 = local_1f0;
      plStack_1e8 = (long *)0x0;
      local_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      local_1e0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdd30 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      plStack_1e8 = plStack_b8;
      local_1f0 = local_c0;
      uStack_1d8 = uStack_a8;
      local_1e0 = plStack_b0;
      thunk_FUN_03f5d7b8(&local_1f0,0);
      plStack_98 = plStack_1e8;
      local_a0 = local_1f0;
      local_88 = uStack_1d8;
      plStack_90 = local_1e0;
      uVar2 = FUN_04340364(&local_a0,DAT_0919a4d8);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(long **)(param_1 + 0x10) = plStack_98;
        *(long **)(param_1 + 0xe) = local_a0;
        *(ulong *)(param_1 + 0x14) = local_88;
        *(long **)(param_1 + 0x12) = plStack_90;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_0478dcf8(param_1 + 2,&local_a0,param_1,DAT_09199778);
        return;
      }
      goto LAB_077767d8;
    }
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x58) == 0) goto LAB_07776370;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(long *)(lVar4 + 0x60) == 0) goto LAB_07776370;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (9999 < lVar1 - *(long *)(lVar4 + 0x48)) goto LAB_07776370;
  }
  uVar9 = 0;
LAB_07776a68:
  plVar11 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar11 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar9;
  }
  else {
    lVar1 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c(lVar1);
    }
    lVar4 = *plVar11;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07776b0c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,lVar1,2);
LAB_07776b0c:
    (*(code *)*puVar3)(plVar11,uVar9,puVar3[1]);
  }
  return;
}

