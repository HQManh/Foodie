// rea decompile_all
// name: CakeOrder.Home.LevelCoinRefundNotice$$BuildAsync
// address: 0x432ecd8
// body: available
// range: 0x432ecd8-0x432f78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432f75c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f760 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f768 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f77c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432f788 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_LevelCoinRefundNotice__BuildAsync(double *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  double dVar20;
  float fVar21;
  int iVar22;
  double dVar23;
  float fVar24;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double *pdStack_d0;
  double local_c8;
  double local_c0;
  double *pdStack_b8;
  double local_b0;
  long local_98;
  
  if ((DAT_095176c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0919f298);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091877d0);
    FUN_03f5c2a4(&DAT_091877d8);
    FUN_03f5c2a4(&DAT_091aea18);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_09188790);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ddb18);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092201b8);
    FUN_03f5c2a4(&DAT_092201c0);
    FUN_03f5c2a4(&DAT_09220b38);
    DAT_095176c6 = 1;
  }
  local_98 = 0;
  local_c0 = 0.0;
  pdStack_b8 = (double *)0x0;
  local_b0 = 0.0;
  lVar3 = thunk_FUN_03f9944c(DAT_09188790);
  CakeOrder_Home_NewVersionNoticeContent___ctor();
  lVar4 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar5 = FUN_05a8eda4(DAT_091b4950);
  if ((uVar5 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(DAT_091b4948 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if (lVar6 != 0) {
        fVar21 = 0.0;
        if (*(long *)(lVar6 + 0x50) != 0) {
          fVar21 = *(float *)(*(long *)(lVar6 + 0x50) + 0x14);
        }
        fVar24 = 0.0;
        if (0.0 <= fVar21) {
          fVar24 = fVar21;
        }
        lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar7,DAT_091b0558);
        if (*(int *)(DAT_091877d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar15 = **(long **)(DAT_091877d8 + 0xb8);
        if (lVar15 != 0) {
          if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
            iVar14 = 0;
            iVar19 = 0;
          }
          else {
            iVar19 = 0;
            iVar14 = 0;
            uVar5 = 0;
            uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar5) goto LAB_0432f760;
              uVar16 = *(undefined8 *)(lVar15 + uVar5 * 8 + 0x20);
              if (*(int *)(DAT_091877d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (**(long **)(DAT_091877d0 + 0xb8) == 0) goto LAB_0432f75c;
              uVar12 = FUN_06fd9fbc(**(long **)(DAT_091877d0 + 0xb8),uVar16,&local_98,DAT_0919f298);
              if ((uVar12 & 1) != 0) {
                uVar12 = System_String__op_Equality(uVar16,DAT_09220b38,0);
                if (local_98 == 0) goto LAB_0432f75c;
                uVar17 = 0;
                local_ec = 0;
                while (lVar1 = DAT_091b0570, (long)uVar17 < (long)*(int *)(local_98 + 0x18)) {
                  if (lVar4 == 0) goto LAB_0432f75c;
                  uVar8 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsLevelWin
                                    (lVar4,uVar16,uVar17 & 0xffffffff,0);
                  if ((uVar8 & 1) != 0) {
                    uVar8 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsExtraLevel
                                      (lVar6,uVar16,uVar17 & 0xffffffff,0);
                    if ((uVar8 & 1) == 0) {
                      if (local_98 == 0) goto LAB_0432f75c;
                      if (*(uint *)(local_98 + 0x18) <= uVar17) goto LAB_0432f760;
                      if ((uVar12 & 1) != 0) {
                        iVar22 = *(int *)(local_98 + uVar17 * 4 + 0x20);
                        if (*(int *)(DAT_091877d0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar18 = *(undefined8 *)(*(long *)(DAT_091877d0 + 0xb8) + 8);
                        if (*(int *)(DAT_091877d8 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_091877d8);
                        }
                        iVar2 = CakeOrder_Home_LevelCoinRefundNotice__LegacyCoinAt
                                          (uVar18,uVar17 & 0xffffffff);
                        uVar11 = iVar22 - iVar2;
                        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
                        iVar14 = uVar11 + iVar14;
                        goto LAB_0432f2a0;
                      }
                    }
                    else {
                      if (local_98 == 0) goto LAB_0432f75c;
                      if (*(uint *)(local_98 + 0x18) <= uVar17) goto LAB_0432f760;
                      iVar22 = *(int *)(local_98 + uVar17 * 4 + 0x20);
                      if (DAT_09515cf4 == '\0') {
                        FUN_03f5c2a4(&DAT_09187e80);
                        DAT_09515cf4 = '\x01';
                      }
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      fVar21 = fVar24 * (float)iVar22;
                      dVar23 = (double)fVar21;
                      dVar20 = modf(dVar23,&local_d8);
                      if (0.0 <= fVar21) {
                        if (dVar20 == 0.5) {
                          dVar20 = local_d8 + 1.0;
                          goto LAB_0432f260;
                        }
                        dVar23 = (double)(long)(dVar23 + 0.5);
                      }
                      else if (dVar20 == -0.5) {
                        dVar20 = local_d8 + -1.0;
LAB_0432f260:
                        dVar23 = local_d8;
                        if (((long)local_d8 & 1U) != 0) {
                          dVar23 = dVar20;
                        }
                      }
                      else {
                        dVar23 = (double)(long)(dVar23 + -0.5);
                      }
                      uVar11 = 0;
                      if (dVar23 != INFINITY) {
                        uVar11 = (int)dVar23 & ((int)dVar23 >> 0x1f ^ 0xffffffffU);
                      }
                      iVar14 = uVar11 + iVar14;
                      if ((uVar12 & 1) == 0) {
                        local_ec = uVar11 + local_ec;
                      }
                      else {
LAB_0432f2a0:
                        iVar19 = uVar11 + iVar19;
                      }
                    }
                  }
                  uVar17 = uVar17 + 1;
                  if (local_98 == 0) goto LAB_0432f75c;
                }
                if (0 < local_ec) {
                  if (lVar7 == 0) goto LAB_0432f75c;
                  lVar13 = *(long *)(lVar7 + 0x10);
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_0432f75c;
                  uVar11 = *(uint *)(lVar7 + 0x18);
                  if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar11 + 1;
                    puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar11 * 8 + 0x20);
                    *puVar9 = uVar16;
                    thunk_FUN_03f5d7b8(puVar9,uVar16);
                  }
                  else {
                    FUN_057e0c68(lVar7,uVar16,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
              uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar15 + 0x18));
          }
          if (iVar14 < 1) {
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04e124a4(&local_d8,lVar3,DAT_091ddb18);
            param_1[1] = (double)pdStack_d0;
            *param_1 = local_d8;
            param_1[2] = local_c8;
            return;
          }
          if (0 < iVar19) {
            if (lVar3 == 0) goto LAB_0432f75c;
            lVar4 = *(long *)(lVar3 + 0x10);
            plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
            if (*(int *)(DAT_091877d8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091877d8);
            }
            lVar6 = CakeOrder_Home_LevelCoinRefundNotice__MapName(DAT_09220b38);
            if (plVar10 == (long *)0x0) goto LAB_0432f75c;
            if ((lVar6 != 0) &&
               (lVar15 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0)) {
              uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar16,0);
            }
            if ((int)plVar10[3] == 0) {
LAB_0432f760:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar10[4] = lVar6;
            thunk_FUN_03f5d7b8(plVar10 + 4,lVar6);
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar16 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_092201c0,plVar10,0);
            lVar6 = DAT_091b0570;
            if (lVar4 == 0) goto LAB_0432f75c;
            lVar15 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_0432f75c;
            uVar11 = *(uint *)(lVar4 + 0x18);
            if (uVar11 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar11 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar11 * 8 + 0x20) = uVar16;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar4,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (lVar7 != 0) {
            FUN_057e185c(&local_d8,lVar7,DAT_091b05a8);
            pdStack_b8 = pdStack_d0;
            local_c0 = local_d8;
            local_b0 = local_c8;
            pdStack_d0 = &local_c0;
            local_d8 = 0.0;
            while (uVar5 = FUN_071bd28c(&local_c0,DAT_091a45a0), dVar20 = local_b0, (uVar5 & 1) != 0
                  ) {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *(long *)(lVar3 + 0x10);
              plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
              if (*(int *)(DAT_091877d8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar6 = CakeOrder_Home_LevelCoinRefundNotice__MapName(dVar20);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
                uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar16,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar10[4] = lVar6;
              thunk_FUN_03f5d7b8(plVar10 + 4,lVar6);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar16 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_092201b8,plVar10,0);
              lVar6 = DAT_091b0570;
              if (lVar4 == 0) {
LAB_0432f764:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_0432f764;
              uVar11 = *(uint *)(lVar4 + 0x18);
              if (uVar11 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar11 + 1;
                *(undefined8 *)(lVar7 + (long)(int)uVar11 * 8 + 0x20) = uVar16;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar4,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_071bd288(&local_c0,DAT_091a4598);
            if (lVar3 != 0) {
              lVar6 = *(long *)(lVar3 + 0x18);
              lVar4 = *(long *)(DAT_091b4b60 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              if ((**(long **)(lVar4 + 0xb8) != 0) &&
                 (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x48), lVar4 != 0)) {
                local_e8 = *(undefined8 *)(lVar4 + 0x18);
                local_e0 = 0;
                thunk_FUN_03f5d7b8(&local_e8);
                lVar4 = DAT_091aea18;
                local_e0 = CONCAT44(local_e0._4_4_,iVar14);
                if (lVar6 != 0) {
                  lVar7 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar11 = *(uint *)(lVar6 + 0x18);
                    if (uVar11 < *(uint *)(lVar7 + 0x18)) {
                      lVar7 = lVar7 + (long)(int)uVar11 * 0x10;
                      *(uint *)(lVar6 + 0x18) = uVar11 + 1;
                      puVar9 = (undefined8 *)(lVar7 + 0x20);
                      *puVar9 = local_e8;
                      *(undefined8 *)(lVar7 + 0x28) = local_e0;
                      thunk_FUN_03f5d7b8(puVar9,0);
                    }
                    else {
                      FUN_057de25c(lVar6,local_e8,local_e0,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    FUN_04e124a4(&local_d8,lVar3,DAT_091ddb18);
                    param_1[1] = (double)pdStack_d0;
                    *param_1 = local_d8;
                    param_1[2] = local_c8;
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_0432f75c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04e124a4(&local_d8,lVar3,DAT_091ddb18);
  param_1[1] = (double)pdStack_d0;
  *param_1 = local_d8;
  param_1[2] = local_c8;
  return;
}

