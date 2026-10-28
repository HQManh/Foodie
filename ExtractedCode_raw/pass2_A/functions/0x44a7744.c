// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$AnimateShift
// address: 0x44a7744
// body: available
// range: 0x44a7744-0x44a82e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a8140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a828c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a8298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a829c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a82a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a82a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a82a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044a82dc) */
/* WARNING: Removing unreachable block (ram,0x044a81c4) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimateShift
               (undefined1 param_1 [16],float param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  long local_b0;
  long *local_a8;
  
  if ((DAT_09518210 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_091c6548);
    FUN_03f5c2a4(&DAT_091c6550);
    FUN_03f5c2a4(&DAT_0919e420);
    FUN_03f5c2a4(&DAT_091c99c8);
    FUN_03f5c2a4(&DAT_091ca370);
    FUN_03f5c2a4(&DAT_091cb438);
    FUN_03f5c2a4(&DAT_091786d8);
    FUN_03f5c2a4(&DAT_091786e0);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a468);
    FUN_03f5c2a4(&DAT_0917ab10);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ada78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbd48);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091e6e70);
    FUN_03f5c2a4(&DAT_091e6e78);
    FUN_03f5c2a4(&DAT_091e7098);
    FUN_03f5c2a4(&DAT_0918f0e8);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_09518210 = 1;
  }
  local_b0 = 0;
  local_a8 = (long *)0x0;
  *(undefined1 *)(param_4 + 0x68) = 0;
  if ((*(long *)(param_4 + 0x2d8) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar4 == 0)) goto LAB_044a82b0;
  lVar4 = CookingGraph_CookingLevelSimulation__ReadSnapshot(lVar4,0);
  if (*(long *)(param_4 + 0x60) == 0) {
LAB_044a7a60:
    lVar13 = DAT_091c99c8;
    lVar7 = *(long *)(DAT_091c99c8 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c99c8);
      lVar7 = *(long *)(lVar13 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x60) + 0x48);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar13 = puVar6[2];
    if (lVar13 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar14 = *puVar6;
      lVar13 = thunk_FUN_03f9944c(DAT_091786d8);
      FUN_05322d94(lVar13,uVar14,DAT_091e6e70,0);
      plVar5 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x10);
      *plVar5 = lVar13;
      thunk_FUN_03f5d7b8(plVar5,lVar13);
    }
    uVar12 = FUN_04b0cafc(uVar12,lVar13,DAT_091cb438);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
    }
    puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar13 = puVar6[3];
    if (lVar13 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
        puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar14 = *puVar6;
      lVar13 = thunk_FUN_03f9944c(DAT_091786e0);
      FUN_05323c00(lVar13,uVar14,DAT_091e6e78,0);
      plVar5 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x18);
      *plVar5 = lVar13;
      thunk_FUN_03f5d7b8(plVar5,lVar13);
    }
    lVar13 = FUN_04af73b4(uVar12,lVar13,DAT_091ca370);
    if (lVar13 == 0) goto LAB_044a7a60;
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1208(lVar7,lVar13,DAT_091a8300);
  uVar12 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EffectSequence(param_4);
  if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x28), plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a468) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_044a7b44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a468,0);
LAB_044a7b44:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    do {
      local_a8 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044a7bd8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044a7bd8:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      plVar5 = local_a8;
      if ((uVar10 & 1) == 0) {
        if (local_a8 == (long *)0x0) goto LAB_044a81b8;
        lVar4 = *local_a8;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_044a8190;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_044a8178;
      }
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *local_a8;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ab10) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044a7c3c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917ab10,0);
LAB_044a7c3c:
      lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = FUN_06f54e88(*(long *)(param_4 + 0x300),*(undefined8 *)(lVar4 + 0x10),&local_b0,
                            DAT_0919e420);
      fVar19 = (float)param_3;
      plVar5 = local_a8;
      if ((uVar10 & 1) != 0) {
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar13 = *(long *)(local_b0 + 0x88);
        if ((lVar13 != 0) &&
           ((*(int *)(lVar4 + 0x1c) != *(int *)(lVar13 + 0x1c) ||
            (*(int *)(lVar4 + 0x18) != *(int *)(lVar13 + 0x18))))) {
          if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x10);
          FUN_053e230c(*(long *)(param_4 + 0x58),uVar14,DAT_091a8308);
          if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar13 = UnityEngine_Component__get_transform(local_b0,0);
          DG_Tweening_ShortcutExtensions__DOKill(lVar13,0,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar15 = (float)UnityEngine_Transform__get_localScale(lVar13,0);
          if (*(long *)(param_4 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = *(int *)(lVar8 + 0x18);
          iVar2 = *(int *)(lVar4 + 0x18);
          fVar23 = *(float *)(param_4 + 0x2a4);
          fVar24 = *(float *)(param_4 + 0x2ac);
          fVar25 = *(float *)(param_4 + 0x2a8);
          iVar26 = *(int *)(lVar4 + 0x1c);
          uVar10 = FUN_053e1824(lVar7,uVar14,DAT_091a8318);
          fVar20 = (float)iVar26;
          fVar25 = fVar25 * fVar20;
          fVar23 = fVar23 * ((float)iVar2 + (float)(iVar1 + -1) * -0.5);
          fVar24 = fVar24 - fVar25;
          if ((uVar10 & 1) == 0) {
            if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = *(undefined4 *)(lVar4 + 0x28);
            param_3 = 0;
            uVar14 = DG_Tweening_ShortcutExtensions__DOLocalMove
                               (fVar23,fVar24,0,*(undefined4 *)(lVar4 + 0x2c),lVar13,0,0);
            if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar4 + 0x38),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(uVar3,uVar12,uVar14,0);
            plVar5 = local_a8;
            param_2 = fVar24;
          }
          else {
            lVar4 = thunk_FUN_03f9944c(DAT_0918f0e8);
            CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass24_0___ctor
                      (lVar4,0);
            lVar8 = FUN_04a6a14c(lVar13,DAT_091c54d0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar5 = (long *)(lVar4 + 0x10);
            *plVar5 = lVar8;
            thunk_FUN_03f5d7b8(plVar5);
            lVar8 = *plVar5;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = UnityEngine_Object__op_Implicit(lVar8,0);
            if ((uVar10 & 1) == 0) {
              lVar8 = UnityEngine_Component__get_gameObject(lVar13,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = FUN_04b7c294(lVar8,DAT_091cd7a0);
              *plVar5 = lVar8;
              thunk_FUN_03f5d7b8(plVar5);
            }
            if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(*plVar5,0);
            *(undefined4 *)(lVar4 + 0x18) = uVar3;
            if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(lVar4 + 0x10),100,0);
            if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x20);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar22 = *(float *)(lVar8 + 0x1c);
            fVar16 = *(float *)(lVar8 + 0x20);
            fVar17 = (float)UnityEngine_Transform__get_localPosition(lVar13,0);
            if (DAT_09515faa == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515faa = '\x01';
            }
            fVar18 = *(float *)(param_4 + 0x2a8);
            lVar9 = *(long *)(DAT_0918cbd0 + 0xb8);
            fVar21 = *(float *)(lVar8 + 0x18);
            uVar14 = DG_Tweening_ShortcutExtensions__DOLocalMove
                               (fVar17 + *(float *)(lVar9 + 0x18) * fVar18 * fVar21,
                                fVar25 + *(float *)(lVar9 + 0x1c) * fVar18 * fVar21,
                                fVar20 + *(float *)(lVar9 + 0x20) * fVar18 * fVar21,
                                *(undefined4 *)(lVar8 + 0x1c),lVar13,0,0);
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar8 + 0x30),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(0,uVar12,uVar14,0);
            fVar25 = *(float *)(lVar8 + 0x14);
            uVar14 = DG_Tweening_ShortcutExtensions__DOScale
                               (fVar15 * fVar25,param_2 * fVar25,fVar19 * fVar25,
                                *(undefined4 *)(lVar8 + 0x1c),lVar13,0);
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar8 + 0x48),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(0,uVar12,uVar14,0);
            if (DAT_09515faa == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515faa = '\x01';
            }
            fVar25 = *(float *)(param_4 + 0x2a8);
            lVar9 = *(long *)(DAT_0918cbd0 + 0xb8);
            fVar20 = *(float *)(lVar8 + 0x18);
            uVar14 = DG_Tweening_ShortcutExtensions__DOLocalMove
                               (fVar23 + *(float *)(lVar9 + 0x18) * fVar25 * fVar20,
                                fVar24 + *(float *)(lVar9 + 0x1c) * fVar25 * fVar20,
                                *(float *)(lVar9 + 0x20) * fVar25 * fVar20 + 0.0,
                                *(undefined4 *)(lVar8 + 0x20),lVar13,0,0);
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar8 + 0x38),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(fVar22,uVar12,uVar14,0);
            uVar14 = DG_Tweening_ShortcutExtensions__DOLocalMove
                               (fVar23,fVar24,0,*(undefined4 *)(lVar8 + 0x24),lVar13,0,0);
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar8 + 0x40),DAT_091dbea8);
            fVar22 = fVar22 + fVar16;
            DG_Tweening_TweenSettingsExtensions__Insert(fVar22,uVar12,uVar14,0);
            param_3 = (ulong)(uint)fVar19;
            uVar14 = DG_Tweening_ShortcutExtensions__DOScale
                               (fVar15,param_2,param_3,*(undefined4 *)(lVar8 + 0x24),lVar13,0);
            uVar14 = FUN_04d95dc4(uVar14,*(undefined8 *)(lVar8 + 0x50),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(fVar22,uVar12,uVar14,0);
            uVar14 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar14,lVar4,DAT_091e7098,0);
            DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar12,uVar14,0);
            plVar5 = local_a8;
          }
        }
      }
    } while( true );
  }
LAB_044a82b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_044a8178:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_044a81ac;
    }
  }
LAB_044a8190:
  puVar6 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_044a81ac:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_044a81b8:
  uVar14 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar14,param_4,DAT_091c6548,0);
  uVar12 = FUN_04d956bc(uVar12,uVar14,DAT_091dbd18);
  uVar14 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar14,param_4,DAT_091c6550,0);
  FUN_04d956e8(uVar12,uVar14,DAT_091dbd48);
  return;
}

