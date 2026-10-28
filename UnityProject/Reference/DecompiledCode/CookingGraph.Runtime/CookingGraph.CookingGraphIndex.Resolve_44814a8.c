// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$Resolve
// address: 0x44814a8
// body: available
// range: 0x44814a8-0x4482567 inclusive
// range: 0x448256c-0x44825ff inclusive
// range: 0x4482604-0x4482607 inclusive
// range: 0x448260c-0x448260f inclusive
// range: 0x4482614-0x4482617 inclusive
// range: 0x448261c-0x448261f inclusive
// range: 0x4482624-0x4482627 inclusive
// range: 0x448262c-0x4482673 inclusive
// range: 0x44826e4-0x4483303 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4481e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44825fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448260c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448261c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482670 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4482e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4483104 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04483180) */
/* WARNING: Removing unreachable block (ram,0x04482b28) */
/* WARNING: Removing unreachable block (ram,0x044825ec) */
/* WARNING: Removing unreachable block (ram,0x044832bc) */
/* WARNING: Removing unreachable block (ram,0x044832b4) */
/* WARNING: Removing unreachable block (ram,0x0448276c) */
/* WARNING: Removing unreachable block (ram,0x044832b8) */
/* WARNING: Removing unreachable block (ram,0x04481f14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long CookingGraph_CookingGraphIndex__Resolve(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  long extraout_x1;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  int local_74;
  
  if ((DAT_095180bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04e0);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_09182c98);
    FUN_03f5c2a4(&DAT_0919cc78);
    FUN_03f5c2a4(&DAT_0919cc70);
    FUN_03f5c2a4(&DAT_091761c8);
    FUN_03f5c2a4(&DAT_0918f268);
    FUN_03f5c2a4(&DAT_091c9380);
    FUN_03f5c2a4(&DAT_091c9670);
    FUN_03f5c2a4(&DAT_091c96e0);
    FUN_03f5c2a4(&DAT_091c9868);
    FUN_03f5c2a4(&DAT_091c9740);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091c98f0);
    FUN_03f5c2a4(&DAT_091c9908);
    FUN_03f5c2a4(&DAT_091c9cc0);
    FUN_03f5c2a4(&DAT_091c9de8);
    FUN_03f5c2a4(&DAT_091c9df0);
    FUN_03f5c2a4(&DAT_091c9eb0);
    FUN_03f5c2a4(&DAT_091c9e58);
    FUN_03f5c2a4(&DAT_091c9f38);
    FUN_03f5c2a4(&DAT_091ca9d0);
    FUN_03f5c2a4(&DAT_091ca8d0);
    FUN_03f5c2a4(&DAT_091ca338);
    FUN_03f5c2a4(&DAT_091ca238);
    FUN_03f5c2a4(&DAT_091cad50);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_09178250);
    FUN_03f5c2a4(&DAT_09178260);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_091787e8);
    FUN_03f5c2a4(&DAT_09178258);
    FUN_03f5c2a4(&DAT_09178618);
    FUN_03f5c2a4(&DAT_09178268);
    FUN_03f5c2a4(&DAT_091792f0);
    FUN_03f5c2a4(&DAT_09178270);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a280);
    FUN_03f5c2a4(&DAT_0917a4f8);
    FUN_03f5c2a4(&DAT_0917a268);
    FUN_03f5c2a4(&DAT_0917a3b8);
    FUN_03f5c2a4(&DAT_0917aa60);
    FUN_03f5c2a4(&DAT_0917a8b0);
    FUN_03f5c2a4(&DAT_0917aba8);
    FUN_03f5c2a4(&DAT_0917a8c8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917afe0);
    FUN_03f5c2a4(&DAT_0917afc0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091ac5b0);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091acfc0);
    FUN_03f5c2a4(&DAT_091aa9c8);
    FUN_03f5c2a4(&DAT_091aa9d8);
    FUN_03f5c2a4(&DAT_091aa9e0);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c270);
    FUN_03f5c2a4(&DAT_0917bb10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7238);
    FUN_03f5c2a4(&DAT_091e7240);
    FUN_03f5c2a4(&DAT_091e7248);
    FUN_03f5c2a4(&DAT_091e7250);
    FUN_03f5c2a4(&DAT_091e7258);
    FUN_03f5c2a4(&DAT_091e7278);
    FUN_03f5c2a4(&DAT_091e7348);
    FUN_03f5c2a4(&DAT_091e7350);
    FUN_03f5c2a4(&DAT_091e7358);
    FUN_03f5c2a4(&DAT_0918f1d8);
    FUN_03f5c2a4(&DAT_091e7380);
    FUN_03f5c2a4(&DAT_091e7388);
    FUN_03f5c2a4(&DAT_0918f1f8);
    FUN_03f5c2a4(&DAT_091e7398);
    FUN_03f5c2a4(&DAT_0918f208);
    FUN_03f5c2a4(&DAT_091e73b8);
    FUN_03f5c2a4(&DAT_0918f220);
    FUN_03f5c2a4(&DAT_0918f178);
    FUN_03f5c2a4(&DAT_09202f68);
    FUN_03f5c2a4(&DAT_09218650);
    DAT_095180bf = 1;
  }
  local_74 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_0918f1d8);
  System_Object___ctor(lVar7,0);
  if (lVar7 == 0) goto LAB_04482e74;
  *(long *)(lVar7 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),param_1);
  if (param_2 == 0) goto LAB_04482e74;
  plVar19 = (long *)(lVar7 + 0x30);
  *plVar19 = *(long *)(param_2 + 0x10);
  thunk_FUN_03f5d7b8(plVar19);
  plVar8 = (long *)0x0;
  if (*plVar19 != 0) {
    plVar8 = (long *)CookingGraph_CookingGraphIndex_<>c__DisplayClass24_0__<Resolve>g__Asset_0
                               (lVar7);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != DAT_091828a0) {
      plVar8 = (long *)0x0;
    }
  }
  plVar19 = (long *)(lVar7 + 0x38);
  *plVar19 = (long)plVar8;
  thunk_FUN_03f5d7b8(plVar19);
  if ((*(long *)(lVar7 + 0x30) != 0) && (*(int *)(*(long *)(lVar7 + 0x30) + 0x10) == 1)) {
    lVar20 = *plVar19;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = UnityEngine_Object__op_Equality(lVar20,0,0);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = FUN_04ad4c4c(*(undefined8 *)(param_1 + 0x18),*plVar19,DAT_091c96e0),
       (uVar9 & 1) != 0)) {
      lVar20 = *plVar19;
      if (lVar20 == 0) goto LAB_04482e74;
      if (*(char *)(lVar20 + 0x38) != '\0') {
        uVar10 = CookingGraph_CompositeStructureTranslator__SlotsOf
                           (*(undefined8 *)(param_1 + 0x88),lVar20,0);
        puVar21 = (undefined8 *)(lVar7 + 0x18);
        *puVar21 = uVar10;
        thunk_FUN_03f5d7b8(puVar21,uVar10);
        lVar20 = thunk_FUN_03f9944c(DAT_0917bb10);
        FUN_056bdd10(lVar20,DAT_091aa9c8);
        plVar8 = (long *)(lVar7 + 0x20);
        *plVar8 = lVar20;
        thunk_FUN_03f5d7b8(plVar8,lVar20);
        uVar10 = thunk_FUN_03f9944c(DAT_091761c8);
        FUN_06fc96ac(uVar10,DAT_0919cc70);
        *(undefined8 *)(lVar7 + 0x28) = uVar10;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28),uVar10);
        uVar22 = *(undefined8 *)(lVar7 + 0x30);
        uVar10 = thunk_FUN_03f9944c(DAT_0917c270);
        FUN_057e0400(uVar10,DAT_091acfc0);
        CookingGraph_CookingGraphIndex_<>c__DisplayClass24_0__<Resolve>g__Walk_1
                  (lVar7,uVar22,uVar10);
        lVar20 = *plVar8;
        if (lVar20 == 0) goto LAB_04482e74;
        if (*(int *)(lVar20 + 0x18) == 0) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          puVar13 = &DAT_092012e0;
        }
        else {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar14 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          lVar24 = puVar14[0x13];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar14 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            }
            uVar10 = *puVar14;
            lVar24 = thunk_FUN_03f9944c(DAT_09178258);
            FUN_0530e9f0(lVar24,uVar10,DAT_091e7258,0);
            plVar11 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x98);
            *plVar11 = lVar24;
            thunk_FUN_03f5d7b8(plVar11,lVar24);
          }
          uVar9 = FUN_04ab4cd4(lVar20,lVar24,DAT_091c9380);
          if ((uVar9 & 1) != 0) {
            uVar10 = *puVar21;
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            lVar20 = puVar21[0x14];
            if (lVar20 == 0) {
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              }
              uVar22 = *puVar21;
              lVar20 = thunk_FUN_03f9944c(DAT_091792f0);
              FUN_05324070(lVar20,uVar22,DAT_091e7238,0);
              plVar11 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xa0);
              *plVar11 = lVar20;
              thunk_FUN_03f5d7b8(plVar11,lVar20);
            }
            uVar10 = FUN_04afac50(uVar10,lVar20,DAT_091ca9d0);
            plVar11 = (long *)FUN_04add4b8(uVar10,DAT_091c9908);
            if (plVar11 != (long *)0x0) {
              lVar20 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar9 != 0) {
                piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == DAT_0917a4f8) {
                    puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_04481c40;
                  }
                  uVar9 = uVar9 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar9 != 0);
              }
              puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a4f8,0);
LAB_04481c40:
              plVar11 = (long *)(*(code *)*puVar21)(plVar11,puVar21[1]);
              do {
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar20 = *plVar11;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar9 != 0) {
                  piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == DAT_09185b10) {
                      puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_04481cec;
                    }
                    uVar9 = uVar9 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar9 != 0);
                }
                puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_04481cec:
                uVar9 = (*(code *)*puVar21)(plVar11,puVar21[1]);
                if ((uVar9 & 1) == 0) {
                  if (plVar11 == (long *)0x0) goto LAB_04481f08;
                  lVar20 = *plVar11;
                  uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar9 == 0) goto LAB_04481ee0;
                  piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  goto LAB_04481ec8;
                }
                lVar20 = thunk_FUN_03f9944c(DAT_0918f1f8);
                System_Object___ctor(lVar20,0);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar23 = (long *)(lVar20 + 0x18);
                *plVar23 = lVar7;
                thunk_FUN_03f5d7b8(plVar23);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar24 = *plVar11;
                uVar9 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar9 != 0) {
                  piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == DAT_0917aba8) {
                      puVar21 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_04481d7c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar9 != 0);
                }
                puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917aba8,0);
LAB_04481d7c:
                lVar24 = (*(code *)*puVar21)(plVar11,puVar21[1]);
                plVar25 = (long *)(lVar20 + 0x10);
                *plVar25 = lVar24;
                thunk_FUN_03f5d7b8(plVar25);
                if (*plVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar24 = *(long *)(*plVar23 + 0x28);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar9 = FUN_06fcbf70(lVar24,*plVar25,&local_74,DAT_0919cc78);
                lVar24 = *plVar25;
                iVar3 = local_74;
                if ((uVar9 & 1) == 0) {
                  iVar3 = 0;
                }
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (iVar3 < *(int *)(lVar24 + 0x38)) {
LAB_044830c0:
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar10 = thunk_FUN_03f9944c();
                  uVar22 = thunk_FUN_03fc39d4(&DAT_09209ee0);
                  System_ArgumentException___ctor(uVar10,uVar22,0);
                  uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar10,uVar22);
                }
                lVar17 = *(long *)(lVar24 + 0x40);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (((*(char *)(lVar17 + 0x10) != '\0') && (-1 < *(int *)(lVar17 + 0x14))) &&
                   (*(int *)(lVar17 + 0x14) < iVar3)) goto LAB_044830c0;
                if (*(char *)(lVar24 + 0x48) != '\0') {
                  if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0);
                  uVar10 = thunk_FUN_03f9944c(DAT_09178db8);
                  FUN_05322d94(uVar10,lVar20,DAT_091e7380,0);
                  uVar10 = FUN_04b0cafc(uVar22,uVar10,DAT_091cb538);
                  uVar22 = thunk_FUN_03f9944c(DAT_09178db8);
                  FUN_05322d94(uVar22,lVar20,DAT_091e7388,0);
                  iVar3 = FUN_04adc4d0(uVar10,uVar22,DAT_091c9868);
                  if (1 < iVar3) {
                    thunk_FUN_03fc39d4(&DAT_09181548);
                    uVar10 = thunk_FUN_03f9944c();
                    uVar22 = thunk_FUN_03fc39d4(&DAT_09209f00);
                    System_ArgumentException___ctor(uVar10,uVar22,0);
                    uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar10,uVar22);
                  }
                }
              } while( true );
            }
            goto LAB_04482e74;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          puVar13 = &DAT_09200a28;
        }
        goto LAB_04483248;
      }
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar10 = thunk_FUN_03f9944c();
  puVar13 = &DAT_09200a30;
LAB_04483248:
  uVar22 = thunk_FUN_03fc39d4(puVar13);
  System_ArgumentException___ctor(uVar10,uVar22,0);
  uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar22);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_04481ec8:
    if (*(long *)(piVar18 + -2) == DAT_09185a58) {
      puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_04481efc;
    }
  }
LAB_04481ee0:
  puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_04481efc:
  (*(code *)*puVar21)(plVar11,puVar21[1]);
LAB_04481f08:
  lVar20 = *plVar8;
  if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
  lVar24 = puVar21[0x15];
  if (lVar24 == 0) {
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    }
    uVar10 = *puVar21;
    lVar24 = thunk_FUN_03f9944c(DAT_09178270);
    FUN_0530f3c8(lVar24,uVar10,DAT_091e7240,0);
    plVar11 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xa8);
    *plVar11 = lVar24;
    thunk_FUN_03f5d7b8(plVar11,lVar24);
  }
  plVar11 = (long *)FUN_04ae6ba8(lVar20,lVar24,DAT_091c9df0);
  if (plVar11 != (long *)0x0) {
    lVar20 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_0917a280) {
          puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0448200c;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar9 != 0);
    }
    puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a280,0);
LAB_0448200c:
    plVar11 = (long *)(*(code *)*puVar21)(plVar11,puVar21[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar20 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_09185b10) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_044820b0;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_044820b0:
      uVar9 = (*(code *)*puVar21)(plVar11,puVar21[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_0448275c;
        lVar20 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 == 0) goto LAB_04482734;
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        goto LAB_0448271c;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar20 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917a8c8) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0448211c;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a8c8,0);
LAB_0448211c:
      plVar23 = (long *)(*(code *)*puVar21)(plVar11,puVar21[1]);
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar20 = *plVar23;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917afe0) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0448217c;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar23,DAT_0917afe0,0);
LAB_0448217c:
      lVar20 = (*(code *)*puVar21)(plVar23,puVar21[1]);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (-1 < *(int *)(lVar20 + 0x14)) {
        iVar3 = FUN_04ad74f8(plVar23,DAT_091c9740);
        lVar20 = *plVar23;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917afe0) {
              puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_044821f0;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar23,DAT_0917afe0,0);
LAB_044821f0:
        lVar20 = (*(code *)*puVar21)(plVar23,puVar21[1]);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar20 + 0x14) < iVar3) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          uVar22 = thunk_FUN_03fc39d4(&DAT_09209ed8);
          System_ArgumentException___ctor(uVar10,uVar22,0);
          uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,uVar22);
        }
      }
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar20 = puVar21[0x16];
      if (lVar20 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar10 = *puVar21;
        lVar20 = thunk_FUN_03f9944c(DAT_09178268);
        FUN_0530f3c8(lVar20,uVar10,DAT_091e7248,0);
        plVar25 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xb0);
        *plVar25 = lVar20;
        thunk_FUN_03f5d7b8(plVar25,lVar20);
      }
      plVar25 = (long *)FUN_04ae6ba8(plVar23,lVar20,DAT_091c9de8);
      if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar20 = *plVar25;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917a268) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_04482318;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar25,DAT_0917a268,0);
LAB_04482318:
      plVar25 = (long *)(*(code *)*puVar21)(plVar25,puVar21[1]);
joined_r0x04482334:
      if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar20 = *plVar25;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_09185b10) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_04482384;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar25,DAT_09185b10,0);
LAB_04482384:
      uVar9 = (*(code *)*puVar21)(plVar25,puVar21[1]);
      if ((uVar9 & 1) != 0) {
        if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar20 = *plVar25;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917a8b0) {
              puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_044823e8;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar25,DAT_0917a8b0,0);
LAB_044823e8:
        plVar12 = (long *)(*(code *)*puVar21)(plVar25,puVar21[1]);
        lVar20 = *plVar23;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917afe0) {
              puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_04482444;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar23,DAT_0917afe0,0);
LAB_04482444:
        lVar20 = (*(code *)*puVar21)(plVar23,puVar21[1]);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar24 = *plVar23;
        lVar20 = *(long *)(lVar20 + 0x28);
        uVar9 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917afe0) {
              puVar21 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_044824a4;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar23,DAT_0917afe0,0);
LAB_044824a4:
        lVar24 = (*(code *)*puVar21)(plVar23,puVar21[1]);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar17 = *plVar12;
        lVar24 = *(long *)(lVar24 + 0x20);
        uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917afc0) {
              puVar21 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_04482508;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917afc0,0);
LAB_04482508:
        uVar10 = (*(code *)*puVar21)(plVar12,puVar21[1]);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar10,uVar10);
        }
        uVar9 = FUN_057e1a08(lVar24,uVar10,DAT_091ada20);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar9,uVar9 & 0xffffffff);
        }
        iVar3 = FUN_05796eb0(lVar20,uVar9 & 0xffffffff,DAT_091add20);
        if ((0 < iVar3) && (iVar4 = FUN_04ad74f8(plVar12,DAT_091c9740), iVar3 < iVar4)) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          uVar22 = thunk_FUN_03fc39d4(&DAT_09209ed0);
          System_ArgumentException___ctor(uVar10,uVar22,0);
          uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,uVar22);
        }
        goto joined_r0x04482334;
      }
      if (plVar25 != (long *)0x0) {
        lVar20 = *plVar25;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_09185a58) {
              puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_044825d4;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar25,DAT_09185a58,0);
LAB_044825d4:
        (*(code *)*puVar21)(plVar25,puVar21[1]);
      }
    } while( true );
  }
  goto LAB_04482e74;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_0448271c:
    if (*(long *)(piVar18 + -2) == DAT_09185a58) {
      puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_04482750;
    }
  }
LAB_04482734:
  puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_04482750:
  (*(code *)*puVar21)(plVar11,puVar21[1]);
LAB_0448275c:
  if (*plVar19 != 0) {
    if (*(char *)(*plVar19 + 0x39) != '\0') {
      lVar20 = *plVar8;
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar24 = puVar21[0x17];
      if (lVar24 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar10 = *puVar21;
        lVar24 = thunk_FUN_03f9944c(DAT_09178258);
        FUN_0530e9f0(lVar24,uVar10,DAT_091e7278,0);
        plVar11 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xb8);
        *plVar11 = lVar24;
        thunk_FUN_03f5d7b8(plVar11,lVar24);
      }
      uVar9 = FUN_04ab4cd4(lVar20,lVar24,DAT_091c9380);
      if ((uVar9 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar10 = thunk_FUN_03f9944c();
        puVar13 = &DAT_09209f08;
        goto LAB_04483248;
      }
    }
    lVar20 = *plVar8;
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    lVar24 = puVar21[0x18];
    if (lVar24 == 0) {
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar21 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      }
      uVar10 = *puVar21;
      lVar24 = thunk_FUN_03f9944c(DAT_09178250);
      FUN_0530f3c8(lVar24,uVar10,DAT_091e7250,0);
      plVar11 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xc0);
      *plVar11 = lVar24;
      thunk_FUN_03f5d7b8(plVar11,lVar24);
    }
    uVar10 = FUN_04afa630(lVar20,lVar24,DAT_091ca8d0);
    plVar11 = (long *)FUN_04add4b8(uVar10,DAT_091c98f0);
    if (plVar11 != (long *)0x0) {
      lVar20 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917a3b8) {
            puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_04482924;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a3b8,0);
LAB_04482924:
      plVar11 = (long *)(*(code *)*puVar21)(plVar11,puVar21[1]);
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar20 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_09185b10) {
              puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_044829b8;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_044829b8:
        uVar9 = (*(code *)*puVar21)(plVar11,puVar21[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_04482b1c;
          lVar20 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar9 == 0) goto LAB_04482af4;
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_04482adc;
        }
        lVar20 = thunk_FUN_03f9944c(DAT_0918f208);
        System_Object___ctor(lVar20,0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar24 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917aa60) {
              puVar21 = (undefined8 *)(lVar24 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_04482a30;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917aa60,0);
LAB_04482a30:
        lVar24 = (*(code *)*puVar21)(plVar11,puVar21[1]);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar23 = (long *)(lVar20 + 0x10);
        *plVar23 = lVar24;
        thunk_FUN_03f5d7b8(plVar23);
        if (*plVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(*plVar23 + 0x39) != '\0') {
          lVar24 = *plVar8;
          uVar10 = thunk_FUN_03f9944c(DAT_09178258);
          FUN_0530e9f0(uVar10,lVar20,DAT_091e7398,0);
          uVar9 = FUN_04ab4cd4(lVar24,uVar10,DAT_091c9380);
          if ((uVar9 & 1) == 0) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar10 = thunk_FUN_03f9944c();
            uVar22 = thunk_FUN_03fc39d4(&DAT_09208740);
            System_ArgumentException___ctor(uVar10,uVar22,0);
            uVar22 = thunk_FUN_03fc39d4(&DAT_091c6630);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,uVar22);
          }
        }
      } while( true );
    }
  }
  goto LAB_04482e74;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_04482adc:
    if (*(long *)(piVar18 + -2) == DAT_09185a58) {
      puVar21 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_04482b10;
    }
  }
LAB_04482af4:
  puVar21 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_04482b10:
  (*(code *)*puVar21)(plVar11,puVar21[1]);
LAB_04482b1c:
  uVar22 = *(undefined8 *)(lVar7 + 0x20);
  uVar10 = thunk_FUN_03f9944c(DAT_09178260);
  FUN_0530f3c8(uVar10,lVar7,DAT_091e7348,0);
  uVar10 = FUN_04aef7e8(uVar22,uVar10,DAT_091ca238);
  uVar10 = FUN_04b049e4(uVar10,DAT_091cad50);
  puVar21 = (undefined8 *)(lVar7 + 0x40);
  *puVar21 = uVar10;
  thunk_FUN_03f5d7b8();
  lVar20 = thunk_FUN_03f9944c(DAT_0918f220);
  System_Object___ctor(lVar20,0);
  if (lVar20 != 0) {
    plVar8 = (long *)(lVar20 + 0x18);
    *plVar8 = lVar7;
    thunk_FUN_03f5d7b8(plVar8,lVar7);
    *(undefined4 *)(lVar20 + 0x10) = 0;
    lVar24 = *plVar8;
    if (lVar24 != 0) {
      iVar3 = 0;
      while (lVar24 = *(long *)(lVar24 + 0x20), lVar24 != 0) {
        if (*(int *)(lVar24 + 0x18) <= iVar3) {
          uVar10 = *(undefined8 *)(lVar7 + 0x40);
          uVar22 = CookingGraph_CookingGraphIndex__Collapse
                             (param_1,*(undefined8 *)(lVar7 + 0x38),uVar10);
          *(undefined8 *)(lVar7 + 0x40) = uVar22;
          thunk_FUN_03f5d7b8(puVar21,uVar22);
          uVar16 = *(undefined8 *)(param_1 + 0x88);
          uVar26 = *(undefined8 *)(lVar7 + 0x40);
          uVar22 = thunk_FUN_03f9944c(DAT_09178618);
          FUN_05324070(uVar22,lVar7,DAT_091e7350,0);
          uVar22 = FUN_04af8044(uVar26,uVar22,DAT_091ca338);
          uVar9 = CookingGraph_CookingSelectionRules__Allows(uVar16,uVar22,0);
          if ((uVar9 & 1) == 0) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar10 = thunk_FUN_03f9944c();
            puVar13 = &DAT_09209f10;
            goto LAB_04483248;
          }
          lVar20 = *(long *)(param_1 + 0x88);
          if (lVar20 == 0) break;
          lVar24 = *(long *)(lVar20 + 0x58);
          uVar16 = *(undefined8 *)(lVar20 + 0xb8);
          uVar22 = thunk_FUN_03f9944c(DAT_091787e8);
          FUN_05322d94(uVar22,lVar7,DAT_091e7358,0);
          lVar7 = FUN_04ae5fd0(uVar16,uVar22,DAT_091c9cc0);
          if (lVar7 == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(undefined8 *)(lVar7 + 0x18);
          }
          if (lVar24 == 0) break;
          uVar5 = FUN_057e1a08(lVar24,uVar22,DAT_091ac5b0);
          if (*plVar19 == 0) break;
          uVar9 = System_String__op_Equality(*(undefined8 *)(*plVar19 + 0x58),DAT_09202f68,0);
          if ((uVar9 & 1) == 0) {
            if (*plVar19 == 0) break;
            uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(*plVar19 + 0x58),0);
            if ((uVar9 & 1) == 0) {
              bVar2 = 0;
            }
            else {
              if ((*(long *)(param_1 + 0x88) == 0) ||
                 (lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar7 == 0)) break;
              uVar9 = System_String__op_Equality(*(undefined8 *)(lVar7 + 0x10),DAT_09218650,0);
              if ((uVar9 & 1) == 0) {
                bVar2 = 0;
              }
              else {
                if (*plVar19 == 0) break;
                bVar2 = System_String__op_Equality(*(undefined8 *)(*plVar19 + 0x18),DAT_09218650,0);
              }
            }
          }
          else {
            bVar2 = 1;
          }
          lVar7 = thunk_FUN_03f9944c(DAT_0918f268);
          System_Object___ctor(lVar7,0);
          uVar6 = FUN_04ee582c(*(undefined8 *)(param_1 + 0x18),*plVar19,DAT_091c04e0);
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x10) = uVar6;
            *(undefined4 *)(lVar7 + 0x14) = uVar5;
            *(byte *)(lVar7 + 0x18) = bVar2 & 1;
            *(undefined8 *)(lVar7 + 0x20) = *puVar21;
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar7 + 0x28) = uVar10;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28),uVar10);
            return lVar7;
          }
          break;
        }
        FUN_056be2a8(lVar24,iVar3,DAT_091aa9e0);
        if (extraout_x1 == 0) break;
        uVar10 = FUN_04aea2a0(*(undefined8 *)(extraout_x1 + 0x18),DAT_091c9f38);
        lVar24 = FUN_04ae8ca0(uVar10,DAT_091c9eb0);
        if (lVar24 == 0) {
          if (*plVar8 != 0) {
            lVar24 = *(long *)(*plVar8 + 0x38);
            goto joined_r0x04482c48;
          }
          break;
        }
        while( true ) {
          uVar10 = *(undefined8 *)(lVar24 + 0x40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if ((uVar9 & 1) == 0) break;
          lVar24 = *(long *)(lVar24 + 0x40);
joined_r0x04482c48:
          if (lVar24 == 0) goto LAB_04482e74;
        }
        if (*(char *)(lVar24 + 0x3b) != '\0') {
          if ((*plVar8 == 0) || (lVar24 = *(long *)(*plVar8 + 0x40), lVar24 == 0)) break;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar20 + 0x10)) goto LAB_04483194;
          lVar24 = *(long *)(lVar24 + (long)(int)*(uint *)(lVar20 + 0x10) * 8 + 0x20);
          if (lVar24 == 0) break;
          uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar24 + 0x18),0);
          if ((uVar9 & 1) == 0) {
            uVar10 = System_Linq_Enumerable__Range(0,*(undefined4 *)(lVar20 + 0x10),0);
            uVar22 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar22,lVar20,DAT_091e73b8,0);
            uVar10 = FUN_04b0c1f0(uVar10,uVar22,DAT_091cb4e8);
            uVar10 = FUN_04adcc84(uVar10,0xffffffff,DAT_091c98c8);
            iVar3 = FUN_04ae7450(uVar10,DAT_091c9e58);
            if (-1 < iVar3) {
              if ((*plVar8 == 0) || (lVar24 = *(long *)(*plVar8 + 0x40), lVar24 == 0)) break;
              uVar1 = *(uint *)(lVar20 + 0x10);
              if (*(uint *)(lVar24 + 0x18) <= uVar1) {
LAB_04483194:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar17 = lVar24 + (long)(int)uVar1 * 8;
              plVar11 = (long *)(lVar17 + 0x20);
              lVar15 = *plVar11;
              if (lVar15 == 0) break;
              uVar5 = *(undefined4 *)(lVar15 + 0x10);
              uVar6 = *(undefined4 *)(lVar15 + 0x14);
              uVar22 = *(undefined8 *)(lVar15 + 0x20);
              uVar10 = *(undefined8 *)(lVar15 + 0x28);
              lVar15 = FUN_03f5c394(DAT_091801b8,1);
              if (lVar15 == 0) break;
              if (*(int *)(lVar15 + 0x18) == 0) goto LAB_04483194;
              *(int *)(lVar15 + 0x20) = iVar3;
              uVar10 = FUN_04ad4310(uVar10,lVar15,DAT_091c9670);
              if ((*plVar8 == 0) || (lVar15 = *(long *)(*plVar8 + 0x40), lVar15 == 0)) break;
              if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar20 + 0x10)) goto LAB_04483194;
              lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(lVar20 + 0x10) * 8 + 0x20);
              if (lVar15 == 0) break;
              uVar16 = *(undefined8 *)(lVar15 + 0x18);
              lVar15 = thunk_FUN_03f9944c(DAT_09182c98);
              CookingGraph_Execution_CookingAssemblySlot___ctor
                        (uVar22,lVar15,uVar5,uVar6,uVar10,uVar16,0);
              if (*(uint *)(lVar24 + 0x18) <= uVar1) goto LAB_04483194;
              *plVar11 = lVar15;
              thunk_FUN_03f5d7b8(lVar17 + 0x20,lVar15);
            }
          }
        }
        lVar24 = *(long *)(lVar20 + 0x18);
        iVar3 = *(int *)(lVar20 + 0x10) + 1;
        *(int *)(lVar20 + 0x10) = iVar3;
        if (lVar24 == 0) break;
      }
    }
  }
LAB_04482e74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

