// rea decompile_all
// name: _GAME.Team.TeamManager.<HandleEditTeam>d__39$$MoveNext
// address: 0x777aea4
// body: available
// range: 0x777aea4-0x777b45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777b418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777b444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<HandleEditTeam>d__39__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522cfd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091997f8);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522cfd = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0777b070:
    uVar6 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      bVar3 = local_50[8] != '\0';
    }
    else {
      uVar2 = local_50._10_2_;
      lVar10 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c(lVar10);
      }
      lVar7 = *(long *)uVar6;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0777b114;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(uVar6,lVar10,0);
LAB_0777b114:
      bVar3 = (*(code *)*puVar11)(uVar6,uVar2,puVar11[1]);
    }
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = DAT_091ba4f0;
    lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    uVar6 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    bVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if (((bVar4 | bVar3 ^ 0xff) & 1) == 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      uVar6 = _GAME_BaseGame_WebService__NormalizeCountryCode
                        (*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar11 = (undefined8 *)(lVar10 + 0x30);
      *puVar11 = uVar6;
      thunk_FUN_03f5d7b8(puVar11);
      lVar10 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(lVar10 + 0x38) + 0x1c) != *(int *)(*(long *)(param_1 + 8) + 0x1c)) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar10 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        lVar7 = DAT_091896c0;
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar10 + 0x38);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c);
        uVar13 = *(undefined8 *)(lVar10 + 0x10);
        uVar6 = *(undefined8 *)(lVar10 + 0x20);
        *(undefined4 *)(lVar10 + 0x1c) = uVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__SaveTeamInfo(uVar13,uVar1,uVar6,0);
      }
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x40);
      thunk_FUN_03f5d7b8();
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = 1;
      *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x38);
      goto LAB_0777b348;
    }
  }
  else {
    uVar5 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty
                        (*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),0);
      if ((uVar5 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 8);
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
        if (lVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar7 + 0x30);
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar11 = (undefined8 *)(lVar10 + 0x30);
        *puVar11 = uVar6;
        thunk_FUN_03f5d7b8(puVar11);
      }
      auVar14 = _GAME_Team_TeamServer__EditTeam(*(undefined8 *)(param_1 + 8),0);
      local_40._0_8_ = 0;
      local_40._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_40 = auVar14;
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
      uVar5 = FUN_0430cf0c(local_50,DAT_0919a588);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_0478eccc(param_1 + 2,local_50,param_1,DAT_091997f8);
        return;
      }
      goto LAB_0777b070;
    }
  }
  uVar9 = 0;
LAB_0777b348:
  plVar12 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar12 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar9;
  }
  else {
    lVar10 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c(lVar10);
    }
    lVar7 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0777b3ec;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar12,lVar10,2);
LAB_0777b3ec:
    (*(code *)*puVar11)(plVar12,uVar9,puVar11[1]);
  }
  return;
}

