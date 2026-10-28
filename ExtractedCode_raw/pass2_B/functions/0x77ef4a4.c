// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureManager.<FetchNewTreasureData>d__12$$MoveNext
// address: 0x77ef4a4
// body: available
// range: 0x77ef4a4-0x77efb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77efb44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77efb70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077efb80) */

void _GAME_TeamTreasure_TeamTreasureManager_<FetchNewTreasureData>d__12__MoveNext(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 local_70 [16];
  int local_54;
  
  if ((DAT_095230de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2140);
    FUN_03f5c2a4(&DAT_091a4778);
    FUN_03f5c2a4(&DAT_091a4780);
    FUN_03f5c2a4(&DAT_091a4788);
    FUN_03f5c2a4(&DAT_091b0ca0);
    FUN_03f5c2a4(&DAT_091b0ca8);
    FUN_03f5c2a4(&DAT_091b0cb0);
    FUN_03f5c2a4(&DAT_091b0c98);
    FUN_03f5c2a4(&DAT_091b0cb8);
    FUN_03f5c2a4(&DAT_091b0cc0);
    FUN_03f5c2a4(&DAT_0917ce10);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095230de = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_54 = *param_1;
  local_80 = (undefined1 *)0x0;
  local_98 = 0;
  if (local_54 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    local_54 = -1;
    *param_1 = -1;
  }
  else {
    if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(**(long **)(DAT_0918b998 + 0xb8) + 0x14) == 0) {
      _GAME_TeamTreasure_TeamTreasureManager__ResetDataNewSeason();
    }
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_b8 = _GAME_Team_TeamManager__ForceFetchNewTeamData(0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_b8,0);
    uVar3 = local_b8._8_8_;
    uVar8 = local_b8._0_8_;
    local_70 = local_b8;
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
    if ((long *)uVar8 != (long *)0x0) {
      lVar10 = *(long *)uVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_077ef6f8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar8,DAT_091868c0,0);
LAB_077ef6f8:
      iVar5 = (*(code *)*puVar7)(uVar8,uVar3 & 0xffffffff,puVar7[1]);
      if (iVar5 == 0) {
        local_54 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_049b2ed4(param_1 + 2,local_70,param_1,DAT_091c2140);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar8 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_70._0_8_;
    uVar15 = local_70._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_091868c0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_077ef790;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077ef790:
    (*(code *)*puVar7)(uVar8,uVar15,puVar7[1]);
  }
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = **(long **)(DAT_0918b978 + 0xb8);
  if (lVar10 != 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar10 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(long *)(lVar10 + 0x38) != 0) {
      lVar10 = **(long **)(DAT_0918b998 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(lVar10 + 0x34) = 0;
      uVar8 = thunk_FUN_03f9944c(DAT_0917ce10);
      FUN_057e0400(uVar8,DAT_091b0c98);
      *(undefined8 *)(lVar10 + 0x38) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x38),uVar8);
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = _GAME_Team_TeamDbModel__get_ListMember(**(long **)(DAT_0918b978 + 0xb8),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(local_b8,lVar10,DAT_091b0ca8);
      local_90 = local_b8;
      local_b8._8_8_ = &local_54;
      local_80 = local_a8;
      local_b8._0_8_ = 0;
      local_a8 = local_90;
LAB_077ef8b4:
      uVar11 = FUN_071bd28c(local_90,DAT_091a4780);
      puVar4 = local_80;
      if ((uVar11 & 1) != 0) {
        lVar10 = **(long **)(DAT_0918b998 + 0xb8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (local_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar5 = *(int *)(lVar10 + 0x34);
        iVar6 = _GAME_Team_TeamMemberModel__GetTreasurePoint
                          (local_80,*(undefined4 *)(lVar10 + 0x14),0);
        lVar9 = DAT_091896c0;
        *(int *)(lVar10 + 0x34) = iVar6 + iVar5;
        lVar10 = *(long *)(puVar4 + 0x10);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar9 = DAT_091896c0;
        }
        if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = System_String__Equals(lVar10,*(undefined8 *)(**(long **)(lVar9 + 0xb8) + 0x10),0);
        lVar10 = **(long **)(DAT_0918b998 + 0xb8);
        if ((uVar11 & 1) == 0) {
          if (lVar10 == 0) {
LAB_077efb48:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        else {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(puVar4 + 0x50);
        }
        iVar5 = 0;
        while( true ) {
          lVar9 = DAT_091b0ca0;
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar10 + 0x18);
          if ((int)uVar1 <= iVar5) {
            lVar12 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = puVar4;
              thunk_FUN_03f5d7b8(puVar7,puVar4);
            }
            else {
              FUN_057e0c68(lVar10,puVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_077ef8b4;
          }
          iVar6 = *(int *)(puVar4 + 0x50);
          lVar10 = FUN_057e0998(lVar10,iVar5,DAT_091b0cc0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar10 + 0x50) < iVar6) break;
          iVar5 = iVar5 + 1;
          lVar10 = **(long **)(DAT_0918b998 + 0xb8);
          if (lVar10 == 0) goto LAB_077efb48;
        }
        if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x38);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e1b20(lVar10,iVar5,puVar4,DAT_091b0cb0);
        goto LAB_077ef8b4;
      }
      if (local_54 < 0) {
        FUN_071bd288(local_a8,DAT_091a4778);
      }
    }
  }
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar14 = *(long **)(param_1 + 2);
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_091866a8) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_077efadc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar14,DAT_091866a8,2);
LAB_077efadc:
    (*(code *)*puVar7)(plVar14,puVar7[1]);
  }
  return;
}

