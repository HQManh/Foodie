// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$RefreshWaitingTransfers
// address: 0x44b1030
// body: available
// range: 0x44b1030-0x44b16b3 inclusive
// range: 0x44b17b4-0x44b1857 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b1658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b165c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b166c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b167c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1684 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__RefreshWaitingTransfers
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  long **local_c0;
  long local_b8;
  undefined8 local_b0;
  uint local_a4;
  long local_a0;
  long *local_98;
  
  if ((DAT_09518229 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e420);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_091cd8d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09224100);
    DAT_09518229 = 1;
  }
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_a4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) ||
     (plVar12 = *(long **)(*(long *)(param_5 + 0x10) + 0x30), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar12;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917a478) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_044b1154;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a478,0);
LAB_044b1154:
  plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
  local_c0 = &local_98;
  local_c8 = 0;
joined_r0x044b116c:
  do {
    do {
      local_98 = plVar12;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044b11e4;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_044b11e4:
      uVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      plVar12 = local_98;
      if ((uVar8 & 1) == 0) {
        plVar12 = *local_c0;
        if (plVar12 == (long *)0x0) goto LAB_044b1820;
        lVar6 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_044b17f8;
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_044b17e0;
      }
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_98;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ab20) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044b1248;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab20,0);
LAB_044b1248:
      lVar6 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = CookingGraph_Execution_CookingTransferSnapshot__get_Phase(lVar6,0);
      plVar12 = local_98;
    } while (iVar3 != 0);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x48);
    local_e0 = *(undefined8 *)(lVar6 + 0x40);
    local_d0 = *(undefined8 *)(lVar6 + 0x50);
    uVar8 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                      (param_4,&local_e0,&local_a0);
    plVar12 = local_98;
  } while ((uVar8 & 1) == 0);
  if (*(int *)(lVar6 + 0x34) == 0) {
    if (*(long *)(param_4 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                       (*(long *)(param_4 + 0x2e0),*(undefined4 *)(lVar6 + 0x30),0);
    if (lVar15 == 0) goto LAB_044b129c;
    uVar13 = *(undefined8 *)(lVar15 + 0x18);
    bVar1 = false;
  }
  else {
    lVar15 = 0;
LAB_044b129c:
    uVar13 = 0;
    bVar1 = true;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar13,0);
  if ((uVar8 & 1) == 0) {
    lVar5 = 0;
    lVar14 = 0;
    uVar13 = 0;
    if (!bVar1) goto LAB_044b131c;
  }
  else {
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = FUN_04b7c324(*(long *)(lVar15 + 0x18),DAT_091cd8d8);
LAB_044b131c:
    uVar13 = *(undefined8 *)(lVar15 + 0x18);
    lVar14 = lVar5;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar13,0);
  if ((uVar8 & 1) == 0) {
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    lVar15 = *(long *)(DAT_0918cbd0 + 0xb8);
    fVar16 = *(float *)(lVar15 + 0xc);
    fVar18 = *(float *)(lVar15 + 0x10);
    fVar19 = *(float *)(lVar15 + 0x14);
  }
  else {
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = UnityEngine_GameObject__get_transform(*(long *)(lVar15 + 0x18),0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar16 = (float)UnityEngine_Transform__get_localScale(lVar15,0);
    fVar18 = param_2;
    fVar19 = param_3;
  }
  uStack_f8 = *(undefined8 *)(lVar6 + 0x30);
  local_100 = *(undefined8 *)(lVar6 + 0x28);
  local_f0 = *(undefined8 *)(lVar6 + 0x38);
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__get_position(local_a0,0);
  uStack_118 = uStack_f8;
  local_120 = local_100;
  local_110 = local_f0;
  lVar15 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureUnit(param_4,&local_120);
  if (*(int *)(lVar6 + 0x40) == 1) {
    if (*(long *)(lVar6 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = System_String__StartsWith(*(long *)(lVar6 + 0x48),DAT_09224100,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar6 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = System_String__Substring(*(long *)(lVar6 + 0x48),5,0);
      bVar2 = System_Int32__TryParse(uVar13,&local_a4,0);
      if ((bVar2 & -1 < (int)local_a4) != 0) {
        lVar5 = *(long *)(param_4 + 0x1c0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((int)local_a4 < *(int *)(lVar5 + 0x18)) {
          uVar13 = *(undefined8 *)(lVar5 + (ulong)local_a4 * 8 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = UnityEngine_Object__op_Implicit(uVar13,0);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(param_4 + 800) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06f4c418(*(long *)(param_4 + 800),*(undefined8 *)(lVar6 + 0x28),local_a4,
                         DAT_0919e478);
            if (*(long *)(param_4 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06f4c418(*(long *)(param_4 + 0xb0),*(undefined8 *)(lVar6 + 0x28),
                         *(undefined4 *)(lVar6 + 0x50),DAT_0919e478);
            CookOrder_Cooking_Implement_CookingGameplayPresentation__PlaceHeldOnTool
                      (param_4,*(undefined8 *)(lVar6 + 0x28),lVar15,local_a4,
                       *(undefined4 *)(lVar6 + 0x50));
            plVar12 = local_98;
            goto joined_r0x044b116c;
          }
        }
      }
    }
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__RestoreHeldSorting
            (param_4,*(undefined8 *)(lVar6 + 0x28));
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = UnityEngine_Component__get_gameObject(lVar15,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = *(int *)(lVar6 + 0x58);
  fVar17 = (float)UnityEngine_Transform__get_position(local_a0,0);
  if (iVar3 == 4) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Implicit(lVar14,0);
    if ((uVar8 & 1) == 0) goto LAB_044b1564;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    pfVar7 = (float *)(lVar14 + 0x24);
    pfVar9 = (float *)(lVar14 + 0x28);
    pfVar10 = (float *)(lVar14 + 0x2c);
  }
  else {
LAB_044b1564:
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar7 = *(float **)(DAT_0918cbd0 + 0xb8);
    pfVar9 = pfVar7 + 1;
    pfVar10 = pfVar7 + 2;
  }
  UnityEngine_Transform__set_position
            (fVar17 + *pfVar7,param_2 + *pfVar9,param_3 + *pfVar10,lVar15,0);
  fVar17 = 1.0;
  if (iVar3 == 4) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Implicit(lVar14,0);
    fVar17 = 1.0;
    if ((uVar8 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar17 = *(float *)(lVar14 + 0x30);
    }
  }
  param_2 = fVar18 * fVar17;
  param_3 = fVar19 * fVar17;
  UnityEngine_Transform__set_localScale(fVar16 * fVar17,lVar15,0);
  plVar12 = local_98;
  if ((*(int *)(lVar6 + 0x40) == 0) &&
     (uVar8 = System_Int64__TryParse(*(undefined8 *)(lVar6 + 0x48),&local_b0,0), plVar12 = local_98,
     (uVar8 & 1) != 0)) {
    if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = FUN_06f54e88(*(long *)(param_4 + 0x300),local_b0,&local_b8,DAT_0919e420);
    plVar12 = local_98;
    if ((uVar8 & 1) != 0) {
      if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CookOrder_Cooking_Implement_CookingQueueTile__SetConsumed(local_b8,1,0);
      plVar12 = local_98;
    }
  }
  goto joined_r0x044b116c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_044b17e0:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_044b1814;
    }
  }
LAB_044b17f8:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_044b1814:
  (*(code *)*puVar4)(plVar12,puVar4[1]);
LAB_044b1820:
  if (local_c8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  return;
}

