// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecDiv
// address: 0x7613190
// body: available
// range: 0x7613190-0x76139df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7613940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7613958 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76139b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76139b8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecDiv(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint local_b0;
  uint uStack_ac;
  uint local_a4;
  ulong local_a0;
  undefined8 local_98;
  int local_8c;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  lVar17 = tpidr_el0;
  local_68 = *(long *)(lVar17 + 0x28);
  if ((DAT_095220c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095220c5 = 1;
  }
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_80 = 0;
  uStack_7c = 0;
  iVar10 = (int)((*param_1 - *param_2) * 0x100) >> 0x18;
  local_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_8c = iVar10;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = param_2[1];
  if (param_2[3] == 0 && uVar6 == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = param_2[2];
    uVar19 = (ulong)uVar6;
    if (uVar6 == 0) {
      thunk_FUN_03fc39d4(&DAT_09183c10);
      uVar13 = thunk_FUN_03f9944c();
      System_DivideByZeroException___ctor(uVar13,0);
      lVar17 = *(long *)(lVar17 + 0x28);
      goto LAB_07613994;
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar18 = *(ulong *)(param_1 + 2);
    local_88._0_4_ = (uint)uVar18;
    local_88._4_4_ = (uint)(uVar18 >> 0x20);
    if (param_1[1] == 0) {
      local_80 = 0;
      if (uVar18 == 0) goto LAB_076136c8;
      uVar16 = 0;
      if (uVar19 != 0) {
        uVar16 = uVar18 / uVar19;
      }
      uVar7 = (uint)local_88 - (int)uVar16 * uVar6;
      local_88._4_4_ = (uint)(uVar16 >> 0x20);
      local_88._0_4_ = (int)uVar16;
    }
    else {
      uVar16 = 0;
      if (uVar19 != 0) {
        uVar16 = CONCAT44(param_1[1],local_88._4_4_) / uVar19;
      }
      iVar8 = (int)uVar16;
      local_80 = (uint)(uVar16 >> 0x20);
      uVar18 = uVar18 & 0xffffffff | (ulong)(local_88._4_4_ - uVar6 * iVar8) << 0x20;
      local_88._4_4_ = iVar8;
      if (uVar18 == 0) {
LAB_076136c8:
        uVar7 = 0;
      }
      else {
        iVar8 = 0;
        if (uVar19 != 0) {
          iVar8 = (int)(uVar18 / uVar19);
        }
        uVar7 = (uint)local_88 - uVar6 * iVar8;
        local_88._0_4_ = iVar8;
      }
    }
    bVar5 = false;
    do {
      uVar2 = local_88;
      if (uVar7 != 0) {
        if (iVar10 != 0x1c) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = System_Decimal_DecCalc__SearchScale(&local_88,iVar10);
          uVar2 = local_88;
          if (uVar11 != 0) {
            bVar5 = true;
            goto LAB_07613738;
          }
        }
        if ((int)uVar7 < 0) goto LAB_07613850;
        if (uVar7 << 1 < uVar6) goto LAB_07613894;
        uVar18 = uVar2;
        if (uVar7 << 1 <= uVar6) goto joined_r0x0761384c;
        goto LAB_07613850;
      }
      if (-1 < iVar10) goto LAB_076137ec;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_Math__Min(9,-iVar10,0);
LAB_07613738:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar15 = **(long **)(DAT_0918ff90 + 0xb8);
      if (lVar15 == 0) goto LAB_0761392c;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_07613944;
      iVar10 = iVar10 + uVar11;
      uVar11 = *(uint *)(lVar15 + (long)(int)uVar11 * 4 + 0x20);
      local_8c = iVar10;
      iVar8 = System_Decimal_DecCalc__IncreaseScale(&local_88,uVar11);
      if (iVar8 != 0) goto LAB_0761395c;
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = (ulong)uVar11 * (ulong)uVar7;
      uVar18 = 0;
      if (uVar19 != 0) {
        uVar18 = uVar16 / uVar19;
      }
      uVar7 = (int)uVar16 - uVar6 * (int)uVar18;
      bVar4 = CARRY8(local_88,uVar18 & 0xffffffff);
      local_88 = local_88 + (uVar18 & 0xffffffff);
    } while ((!bVar4) || (bVar4 = local_80 != 0xffffffff, local_80 = local_80 + 1, bVar4));
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar10 = System_Decimal_DecCalc__OverflowUnscale(&local_88,iVar10,uVar7 != 0);
    local_8c = iVar10;
    uVar2 = local_88;
LAB_076137ec:
    if (!bVar5) goto LAB_076137f0;
LAB_07613894:
    local_88._4_4_ = (uint)(uVar2 >> 0x20);
    local_88._0_4_ = (uint)uVar2;
    local_b0 = local_88._4_4_;
    uStack_ac = local_80;
    local_a4 = (uint)local_88;
    local_88 = uVar2;
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0762357c(&local_a4,&local_b0,&local_8c,0);
    param_1[2] = local_a4;
    param_1[3] = local_b0;
    param_1[1] = uStack_ac;
    iVar10 = local_8c;
  }
  else {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar6 = param_2[1];
    }
    if (uVar6 == 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = param_2[3];
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = 0x11;
    uVar7 = uVar6 << 0x10;
    if (0xffff < uVar6) {
      uVar11 = 1;
      uVar7 = uVar6;
    }
    bVar5 = uVar7 >> 0x18 != 0;
    uVar6 = uVar7 << 8;
    if (bVar5) {
      uVar6 = uVar7;
    }
    uVar7 = uVar11 | 8;
    if (bVar5) {
      uVar7 = uVar11;
    }
    uVar11 = uVar7 | 4;
    uVar1 = uVar6 << 4;
    if (uVar6 >> 0x1c != 0) {
      uVar11 = uVar7;
      uVar1 = uVar6;
    }
    uVar7 = uVar1 << 2;
    uVar6 = uVar11 | 2;
    if (uVar1 >> 0x1e != 0) {
      uVar7 = uVar1;
      uVar6 = uVar11;
    }
    uVar6 = uVar6 + ((int)uVar7 >> 0x1f);
    local_78 = *(ulong *)(param_1 + 2) << ((ulong)uVar6 & 0x3f);
    local_70 = (*(ulong *)(param_1 + 2) >> 0x20 | (ulong)param_1[1] << 0x20) >>
               ((ulong)(0x20 - uVar6) & 0x3f);
    uVar7 = param_2[1];
    uVar19 = *(ulong *)(param_2 + 2) << ((ulong)uVar6 & 0x3f);
    if (uVar7 == 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_88._4_4_ = System_Decimal_DecCalc__Div96By64((ulong)&local_78 | 4,uVar19);
      uVar16 = System_Decimal_DecCalc__Div96By64(&local_78,uVar19);
      uVar18 = uVar16 & 0xffffffff;
      bVar5 = false;
      local_88 = CONCAT44(local_88._4_4_,(int)uVar16);
      do {
        uVar16 = local_78;
        if (local_78 != 0) {
          if (iVar10 != 0x1c) {
            if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Decimal_DecCalc__SearchScale(&local_88,iVar10);
            if (uVar6 != 0) {
              bVar5 = true;
              goto LAB_07613438;
            }
          }
          uVar2 = local_88;
          if ((long)uVar16 < 0) goto LAB_07613850;
          uVar16 = uVar16 << 1;
          goto LAB_07613840;
        }
        uVar2 = local_88;
        if (-1 < iVar10) goto LAB_076134fc;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Math__Min(9,-iVar10,0);
LAB_07613438:
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar15 = **(long **)(DAT_0918ff90 + 0xb8);
        if (lVar15 == 0) goto LAB_0761392c;
        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_07613944;
        iVar10 = iVar10 + uVar6;
        uVar9 = *(undefined4 *)(lVar15 + (long)(int)uVar6 * 4 + 0x20);
        local_8c = iVar10;
        iVar8 = System_Decimal_DecCalc__IncreaseScale(&local_88,uVar9);
        if (iVar8 != 0) goto LAB_0761395c;
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Decimal_DecCalc__IncreaseScale64(&local_78,uVar9);
        uVar18 = System_Decimal_DecCalc__Div96By64(&local_78,uVar19);
        uVar16 = local_78;
        bVar4 = CARRY8(local_88,uVar18 & 0xffffffff);
        uVar18 = local_88 + (uVar18 & 0xffffffff);
        local_88 = uVar18;
      } while ((!bVar4) || (bVar4 = local_80 != 0xffffffff, local_80 = local_80 + 1, bVar4));
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar10 = System_Decimal_DecCalc__OverflowUnscale(&local_88,iVar10,uVar16 != 0);
      local_8c = iVar10;
      uVar2 = local_88;
LAB_076134fc:
      if (bVar5) goto LAB_07613894;
    }
    else {
      local_a0 = uVar19;
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar18 = (ulong)param_2[3];
        uVar7 = param_2[1];
      }
      else {
        uVar18 = *(ulong *)(param_2 + 2) >> 0x20;
      }
      uVar6 = (uint)((uVar18 | (ulong)uVar7 << 0x20) >> ((ulong)(0x20 - uVar6) & 0x3f));
      local_98 = CONCAT44(local_98._4_4_,uVar6);
      uVar18 = System_Decimal_DecCalc__Div128By96(&local_78,&local_a0);
      uVar18 = uVar18 & 0xffffffff;
      bVar5 = false;
LAB_07613548:
      uVar3 = local_70;
      uVar12 = local_78;
      iVar8 = (int)local_70;
      local_88 = uVar18;
      uVar2 = uVar18;
      if (local_78 != 0 || (int)local_70 != 0) {
        if (iVar10 != 0x1c) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Decimal_DecCalc__SearchScale(&local_88,iVar10);
          uVar2 = local_88;
          if (uVar7 != 0) {
            bVar5 = true;
            goto LAB_076135b4;
          }
        }
        if (iVar8 < 0) goto LAB_07613850;
        uVar16 = uVar12 << 1;
        uVar7 = (uint)((uVar3 << 0x20 | uVar12 >> 0x20) >> 0x1f);
        local_70 = CONCAT44(local_70._4_4_,uVar7);
        local_78 = uVar16;
        if (uVar6 < uVar7) goto LAB_07613850;
        local_88 = uVar2;
        if (uVar7 != uVar6) goto LAB_07613894;
LAB_07613840:
        uVar2 = local_88;
        if (uVar19 < uVar16) {
LAB_07613850:
          bVar5 = uVar2 == 0xffffffffffffffff;
          local_88 = uVar2 + 1;
          uVar2 = local_88;
          if ((bVar5) && (bVar5 = local_80 == 0xffffffff, local_80 = local_80 + 1, bVar5)) {
            if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_8c = System_Decimal_DecCalc__OverflowUnscale(&local_88,iVar10,1);
            uVar2 = local_88;
          }
        }
        else if (uVar16 == uVar19) {
joined_r0x0761384c:
          if ((uVar18 & 1) != 0) goto LAB_07613850;
        }
        goto LAB_07613894;
      }
      if (-1 < iVar10) goto LAB_07613680;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Math__Min(9,-iVar10,0);
LAB_076135b4:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar15 = **(long **)(DAT_0918ff90 + 0xb8);
      if (lVar15 == 0) goto LAB_0761392c;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_07613944;
      iVar10 = iVar10 + uVar7;
      uVar9 = *(undefined4 *)(lVar15 + (long)(int)uVar7 * 4 + 0x20);
      local_8c = iVar10;
      iVar8 = System_Decimal_DecCalc__IncreaseScale(&local_88,uVar9);
      if (iVar8 != 0) goto LAB_0761395c;
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_Decimal_DecCalc__IncreaseScale(&local_78,uVar9);
      local_70 = CONCAT44(uVar9,(int)local_70);
      uVar12 = System_Decimal_DecCalc__Div128By96(&local_78,&local_a0);
      uVar2 = local_70;
      uVar16 = local_78;
      uVar18 = local_88 + (uVar12 & 0xffffffff);
      if ((!CARRY8(local_88,uVar12 & 0xffffffff)) ||
         (bVar4 = local_80 != 0xffffffff, local_80 = local_80 + 1, bVar4)) goto LAB_07613548;
      local_88 = uVar18;
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar10 = System_Decimal_DecCalc__OverflowUnscale(&local_88,iVar10,uVar2 != 0 || uVar16 != 0);
      local_8c = iVar10;
      uVar2 = local_88;
LAB_07613680:
      if (bVar5) goto LAB_07613894;
    }
LAB_076137f0:
    local_88 = uVar2;
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(ulong *)(param_1 + 2) = uVar2;
    param_1[1] = local_80;
  }
  *param_1 = (*param_2 ^ *param_1) & 0x80000000 | iVar10 << 0x10;
  if (*(long *)(lVar17 + 0x28) == local_68) {
    return;
  }
  goto LAB_076139b8;
LAB_0761392c:
  if (*(long *)(lVar17 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_076139b8;
LAB_0761395c:
  thunk_FUN_03fc39d4(&DAT_09188d78);
  uVar13 = thunk_FUN_03f9944c();
  uVar14 = thunk_FUN_03fc39d4(&DAT_09212d08);
  System_OverflowException___ctor(uVar13,uVar14,0);
  lVar17 = *(long *)(lVar17 + 0x28);
LAB_07613994:
  if (lVar17 == local_68) {
    uVar14 = thunk_FUN_03fc39d4(&DAT_091e8c88);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar13,uVar14);
  }
  goto LAB_076139b8;
LAB_07613944:
  if (*(long *)(lVar17 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_076139b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

