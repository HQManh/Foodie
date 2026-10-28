// rea decompile_all
// name: CakeOrder.Home.NewVersionNoticeService.<RunAsync>d__4$$MoveNext
// address: 0x43304bc
// body: available
// range: 0x43304bc-0x4330bdf inclusive
// range: 0x4330c58-0x4330ebf inclusive
// range: 0x4330f34-0x433104b inclusive
// range: 0x4331090-0x433129f inclusive
// range: 0x43313e0-0x433154f inclusive
// range: 0x4331588-0x43315e3 inclusive
// range: 0x43315ec-0x43315f3 inclusive
// range: 0x4331614-0x433161b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4330ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330ba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bb0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4330bd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x043315c8) */
/* WARNING: Removing unreachable block (ram,0x04331268) */
/* WARNING: Removing unreachable block (ram,0x04330f5c) */
/* WARNING: Removing unreachable block (ram,0x04331090) */
/* WARNING: Removing unreachable block (ram,0x043315ec) */
/* WARNING: Removing unreachable block (ram,0x043315ac) */

void CakeOrder_Home_NewVersionNoticeService_<RunAsync>d__4__MoveNext(int *param_1)

{
  long **pplVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long *local_130;
  int *piStack_128;
  long **local_120;
  undefined8 uStack_118;
  long *local_108;
  int *piStack_100;
  long **local_f8;
  undefined4 local_e8;
  long *local_e0;
  int *piStack_d8;
  long **local_d0;
  long *local_c0;
  int *piStack_b8;
  long **local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  int *piStack_98;
  long **local_90;
  long *local_80;
  int *piStack_78;
  long **local_70;
  int local_64;
  
  if ((DAT_095176d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09199c30);
    FUN_03f5c2a4(&DAT_09199c50);
    FUN_03f5c2a4(&DAT_0919a690);
    FUN_03f5c2a4(&DAT_0919a698);
    FUN_03f5c2a4(&DAT_09175b30);
    FUN_03f5c2a4(&DAT_0919f9a0);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9d8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a3a28);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a3a40);
    FUN_03f5c2a4(&DAT_091a3a30);
    FUN_03f5c2a4(&DAT_091a3a48);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a3a38);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a3a50);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091ae9e8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091aea20);
    FUN_03f5c2a4(&DAT_091ae9f0);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091ae9f8);
    FUN_03f5c2a4(&DAT_091ae9e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091aea00);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091aea08);
    FUN_03f5c2a4(&DAT_0917c7b0);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188788);
    FUN_03f5c2a4(&DAT_09188798);
    FUN_03f5c2a4(&DAT_091887a0);
    FUN_03f5c2a4(&DAT_091887a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ed8e8);
    FUN_03f5c2a4(&DAT_091ed8f0);
    FUN_03f5c2a4(&DAT_09192c68);
    FUN_03f5c2a4(&DAT_09192c60);
    FUN_03f5c2a4(&DAT_091bdec0);
    DAT_095176d2 = 1;
  }
  local_80 = (long *)0x0;
  piStack_78 = (int *)0x0;
  local_70 = (long **)0x0;
  local_a0 = (long *)0x0;
  piStack_98 = (int *)0x0;
  local_90 = (long **)0x0;
  uStack_a8 = 0;
  local_b0 = (long **)0x0;
  local_64 = *param_1;
  piStack_b8 = (int *)0x0;
  local_c0 = (long *)0x0;
  local_e0 = (long *)0x0;
  piStack_d8 = (int *)0x0;
  local_d0 = (long **)0x0;
  local_e8 = 0;
  if (local_64 == 0) {
LAB_04330b7c:
    local_70 = *(long ***)(param_1 + 0x1e);
    piStack_78 = *(int **)(param_1 + 0x1c);
    local_80 = *(long **)(param_1 + 0x1a);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_64 = -1;
    *param_1 = -1;
    do {
      plVar10 = local_80;
      piVar7 = piStack_78;
      if (local_80 != (long *)0x0) {
        uVar15 = (ulong)local_70 & 0xffff;
        lVar5 = *(long *)(DAT_0919a690 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c(lVar5);
        }
        lVar12 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar5) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04330cf4;
            }
            uVar11 = uVar11 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,0);
LAB_04330cf4:
        piVar7 = (int *)(*(code *)*puVar13)(plVar10,uVar15,puVar13[1]);
      }
      if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x12) + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e0e78(lVar5,*(undefined8 *)(piVar7 + 4),DAT_091b0578);
      if (*(long *)(piVar7 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057deea0(&local_130,*(long *)(piVar7 + 6),DAT_091aea20);
      piStack_b8 = piStack_128;
      local_c0 = local_130;
      uStack_a8 = uStack_118;
      local_b0 = local_120;
      while (uVar15 = FUN_071baaf4(&local_c0,DAT_091a3a48), uVar18 = uStack_a8, pplVar1 = local_b0,
            (uVar15 & 1) != 0) {
        uVar15 = System_String__IsNullOrEmpty(local_b0,0);
        if (((uVar15 & 1) == 0) && (0 < (int)uVar18)) {
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x28);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar15 = FUN_06fca63c(lVar5,pplVar1,DAT_0919f9a0);
          if ((uVar15 & 1) == 0) {
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x28);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fca434(lVar5,pplVar1,0,DAT_0919f9f0);
            lVar5 = DAT_091b0570;
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *(long *)(*(long *)(param_1 + 10) + 0x20);
            if (lVar12 == 0) {
LAB_04330ea0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_04330ea0;
            uVar8 = *(uint *)(lVar12 + 0x18);
            if (uVar8 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar8 + 1;
              plVar10 = (long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
              *plVar10 = (long)pplVar1;
              thunk_FUN_03f5d7b8(plVar10,pplVar1);
            }
            else {
              FUN_057e0c68(lVar12,pplVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x28);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = FUN_06fca3c8(lVar5,pplVar1,DAT_0919f9d8);
          FUN_06fca434(lVar5,pplVar1,iVar2 + (int)uVar18,DAT_0919f9f0);
        }
      }
      if (local_64 < 0) {
        FUN_071baaf0(&local_c0,DAT_091a3a40);
      }
LAB_04330f60:
      uVar15 = FUN_071bd28c(param_1 + 0x14,DAT_091a3a30);
      if ((uVar15 & 1) == 0) {
        iVar2 = 0x14;
        goto LAB_04331094;
      }
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar10 + 0x198))
                (&local_130,plVar10,*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(*plVar10 + 0x1a0));
      local_90 = local_120;
      piStack_98 = piStack_128;
      piStack_128 = (int *)0x0;
      local_120 = (long **)0x0;
      local_a0 = local_130;
      local_130 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdec0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      piStack_128 = piStack_98;
      local_130 = local_a0;
      local_120 = local_90;
      thunk_FUN_03f5d7b8(&local_130,0);
      piStack_78 = piStack_128;
      local_80 = local_130;
      local_70 = local_120;
      uVar15 = FUN_041e5390(&local_80,DAT_0919a698);
    } while ((uVar15 & 1) != 0);
    local_64 = 0;
    *param_1 = 0;
    *(int **)(param_1 + 0x1c) = piStack_78;
    *(long **)(param_1 + 0x1a) = local_80;
    *(long ***)(param_1 + 0x1e) = local_70;
    thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
    FUN_04340cd8(param_1 + 2,&local_80,param_1,DAT_09199c30);
    iVar2 = 0x10;
LAB_04331094:
    if (local_64 < 0) {
      FUN_071bd288(param_1 + 0x14,DAT_091a3a28);
    }
    if ((iVar2 != 0x14) && (iVar2 != 0)) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xe);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(param_1 + 10);
    plVar10 = (long *)FUN_057e0998(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091aea08);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar12 + 0x18) = uVar4;
    lVar5 = *(long *)(param_1 + 10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(lVar5 + 0x20);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar12 + 0x18) != 0) {
      FUN_057e185c(&local_130,lVar12,DAT_091b05a8);
      piStack_d8 = piStack_128;
      local_e0 = local_130;
      local_d0 = local_120;
      local_120 = &local_e0;
      local_130 = (long *)0x0;
      piStack_128 = &local_64;
      while (uVar15 = FUN_071bd28c(&local_e0,DAT_091a45a0), pplVar1 = local_d0, (uVar15 & 1) != 0) {
        lVar5 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar18 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                           (**(long **)(lVar5 + 0xb8),pplVar1,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = UnityEngine_Object__op_Inequality(uVar18,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x28);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *(long *)(*(long *)(param_1 + 0x12) + 0x20);
          uVar4 = FUN_06fca3c8(lVar5,pplVar1,DAT_0919f9d8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CakeOrder_UI_RewardListData__AddReward(lVar12,uVar18,uVar4,0,0);
        }
      }
      if (local_64 < 0) {
        FUN_071bd288(local_120,DAT_091a4598);
      }
      if ((char)param_1[0xc] == '\0') {
        lVar5 = *(long *)(param_1 + 0x12);
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar18 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar18,uVar16,DAT_091ed8f0,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar13 = (undefined8 *)(lVar5 + 0x28);
        *puVar13 = uVar18;
        thunk_FUN_03f5d7b8(puVar13,uVar18);
      }
      else {
        **(undefined1 **)(DAT_09188798 + 0xb8) = 1;
      }
      uVar18 = *(undefined8 *)(param_1 + 0x12);
      goto LAB_04331448;
    }
    if ((char)param_1[0xc] == '\0') {
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SetNewVersionNoticeOrder
                (*(long *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x18),0);
      uVar18 = 0;
      goto LAB_04331448;
    }
  }
  else {
    lVar5 = thunk_FUN_03f9944c(DAT_09192c68);
    System_Object___ctor(lVar5,0);
    plVar10 = (long *)(param_1 + 10);
    *plVar10 = lVar5;
    thunk_FUN_03f5d7b8(plVar10,lVar5);
    lVar12 = *plVar10;
    lVar5 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar13 = (undefined8 *)(lVar12 + 0x10);
    *puVar13 = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_03f5d7b8(puVar13);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*plVar10 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_NewVersionNoticeOrder
                      (lVar5,0);
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar5 = thunk_FUN_03f9944c(DAT_0917c7b0);
    FUN_057e0400(lVar5,DAT_091ae9e0);
    plVar14 = (long *)(param_1 + 0xe);
    *plVar14 = lVar5;
    thunk_FUN_03f5d7b8(plVar14,lVar5);
    if (*(int *)(DAT_091887a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = **(long **)(DAT_091887a0 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar8) {
      uVar19 = 0;
      do {
        if (uVar8 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if ((char)param_1[0xc] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar17 = *(long **)(lVar5 + (long)(int)uVar19 * 8 + 0x20);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
        lVar12 = DAT_091ae9e8;
        if (iVar2 < iVar3) {
          lVar6 = *plVar14;
          if (lVar6 == 0) {
LAB_04330ba8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04330ba8;
          uVar8 = *(uint *)(lVar6 + 0x18);
          if (uVar8 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar8 + 1;
            puVar13 = (undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
            *puVar13 = plVar17;
            thunk_FUN_03f5d7b8(puVar13,plVar17);
          }
          else {
            FUN_057e0c68(lVar6,plVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = *(uint *)(lVar5 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar8);
    }
    lVar5 = *plVar14;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x18) != 0) {
      if (*(int *)(DAT_09192c60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar13 = *(undefined8 **)(DAT_09192c60 + 0xb8);
      lVar12 = puVar13[1];
      if (lVar12 == 0) {
        if (*(int *)(DAT_09192c60 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar13 = *(undefined8 **)(DAT_09192c60 + 0xb8);
        }
        uVar18 = *puVar13;
        lVar12 = thunk_FUN_03f9944c(DAT_09175b30);
        FUN_06d4541c(lVar12,uVar18,DAT_091ed8e8,0);
        plVar17 = (long *)(*(long *)(DAT_09192c60 + 0xb8) + 8);
        *plVar17 = lVar12;
        thunk_FUN_03f5d7b8(plVar17,lVar12);
      }
      FUN_057e280c(lVar5,lVar12,DAT_091ae9f8);
      uVar18 = *(undefined8 *)(param_1 + 8);
      lVar5 = thunk_FUN_03f9944c(DAT_09188788);
      System_Object___ctor(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar18;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar18);
      *(long *)(param_1 + 0x10) = lVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x10,lVar5);
      lVar5 = thunk_FUN_03f9944c(DAT_091887a8);
      CakeOrder_Home_NewVersionPopupData___ctor();
      lVar12 = *plVar14;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar17 = (long *)FUN_057e0998(lVar12,*(int *)(lVar12 + 0x18) + -1,DAT_091aea08);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar18 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar5 + 0x10) = uVar18;
      thunk_FUN_03f5d7b8();
      *(long *)(param_1 + 0x12) = lVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x12,lVar5);
      lVar5 = *plVar10;
      uVar18 = thunk_FUN_03f9944c(DAT_09176b28);
      FUN_06fc96ac(uVar18,DAT_0919f978);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar13 = (undefined8 *)(lVar5 + 0x28);
      *puVar13 = uVar18;
      thunk_FUN_03f5d7b8(puVar13,uVar18);
      lVar5 = *plVar10;
      uVar18 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(uVar18,DAT_091b0558);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar13 = (undefined8 *)(lVar5 + 0x20);
      *puVar13 = uVar18;
      thunk_FUN_03f5d7b8(puVar13,uVar18);
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_108,*plVar14,DAT_091ae9f0);
      piStack_128 = piStack_100;
      local_130 = local_108;
      local_120 = local_f8;
      *(int **)(param_1 + 0x16) = piStack_100;
      *(long **)(param_1 + 0x14) = local_108;
      *(long ***)(param_1 + 0x18) = local_f8;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (local_64 != 0) goto LAB_04330f60;
      goto LAB_04330b7c;
    }
  }
  uVar18 = 0;
LAB_04331448:
  *param_1 = -2;
  piVar7 = param_1 + 10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  piVar7 = param_1 + 0xe;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  piVar7 = param_1 + 0x10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  piVar7 = param_1 + 0x12;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar18;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar18);
  }
  else {
    lVar5 = *(long *)(DAT_09199c50 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar12 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar13 = (undefined8 *)(lVar12 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0433153c;
        }
        uVar15 = uVar15 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,2);
LAB_0433153c:
    (*(code *)*puVar13)(plVar10,uVar18,puVar13[1]);
  }
  return;
}

