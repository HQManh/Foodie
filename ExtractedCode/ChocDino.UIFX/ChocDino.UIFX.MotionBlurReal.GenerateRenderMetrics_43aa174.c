// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$GenerateRenderMetrics
// address: 0x43aa174
// body: available
// range: 0x43aa174-0x43aa967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43aa434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43aa964 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurReal__GenerateRenderMetrics(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined1 local_b0 [8];
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  
  if ((DAT_09517ad6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517ad6 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x180);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_043aa964:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    fVar15 = *(float *)(param_1 + 0x120);
    uVar13 = *(undefined8 *)(param_1 + 0x124);
    fVar17 = *(float *)(param_1 + 300);
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) -
                  (float)((ulong)uVar13 >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x118) - (float)uVar13);
    *(float *)(lVar9 + 0x28) = fVar15 - fVar17;
    lVar9 = *(long *)(param_1 + 0x180);
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_043aa964;
      uVar13 = *(undefined8 *)(param_1 + 0x124);
      fVar15 = *(float *)(param_1 + 0x120);
      fVar17 = *(float *)(param_1 + 300);
      *(ulong *)(lVar9 + 0x2c) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) +
                    (float)((ulong)uVar13 >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x118) + (float)uVar13);
      *(float *)(lVar9 + 0x34) = fVar15 + fVar17;
      lVar9 = *(long *)(param_1 + 0x180);
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (((uVar2 == 0) || (uVar2 == 1)) || (uVar2 < 3)) goto LAB_043aa964;
        *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar9 + 0x20);
        *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(lVar9 + 0x34);
        lVar9 = *(long *)(param_1 + 0x180);
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (((uVar2 == 0) || (uVar2 == 1)) || (uVar2 < 4)) goto LAB_043aa964;
          *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(lVar9 + 0x20);
          *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar9 + 0x30);
          *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(lVar9 + 0x28);
          lVar9 = *(long *)(param_1 + 0x180);
          if (lVar9 != 0) {
            if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) < 5)) goto LAB_043aa964;
            *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(lVar9 + 0x2c);
            *(undefined8 *)(lVar9 + 0x54) = *(undefined8 *)(lVar9 + 0x24);
            lVar9 = *(long *)(param_1 + 0x180);
            if (lVar9 != 0) {
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (((uVar2 == 0) || (uVar2 == 1)) || (uVar2 < 6)) goto LAB_043aa964;
              *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar9 + 0x20);
              *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(lVar9 + 0x30);
              lVar9 = *(long *)(param_1 + 0x180);
              if (lVar9 != 0) {
                if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) < 7))
                goto LAB_043aa964;
                *(undefined4 *)(lVar9 + 0x68) = *(undefined4 *)(lVar9 + 0x2c);
                *(undefined4 *)(lVar9 + 0x6c) = *(undefined4 *)(lVar9 + 0x24);
                *(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(lVar9 + 0x34);
                lVar9 = *(long *)(param_1 + 0x180);
                if (lVar9 != 0) {
                  if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) < 8))
                  goto LAB_043aa964;
                  *(undefined8 *)(lVar9 + 0x74) = *(undefined8 *)(lVar9 + 0x2c);
                  *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(lVar9 + 0x28);
                  uVar13 = *(undefined8 *)(param_1 + 0xd8);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
                  if ((uVar7 & 1) == 0) {
                    lVar9 = *(long *)(param_1 + 0x180);
                    *(undefined8 *)(param_1 + 0x168) = 0;
                    *(undefined8 *)(param_1 + 0x170) = 0;
                    *(undefined8 *)(param_1 + 0x160) = 0;
                    if (lVar9 != 0) {
LAB_043aa454:
                      if (0 < *(int *)(lVar9 + 0x18)) {
                        lVar9 = 0;
                        uVar7 = 0;
                        do {
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar8 = UnityEngine_Object__op_Implicit(param_2,0);
                          if ((uVar8 & 1) != 0) {
                            lVar10 = *(long *)(param_1 + 0x180);
                            if (lVar10 == 0) goto LAB_043aa434;
                            if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_043aa964;
                            if (param_2 == 0) goto LAB_043aa434;
                            lVar1 = lVar10 + lVar9;
                            uVar12 = *(undefined4 *)(lVar1 + 0x24);
                            uVar16 = *(undefined4 *)(lVar1 + 0x28);
                            uVar11 = UnityEngine_Camera__WorldToScreenPoint
                                               (*(undefined4 *)(lVar1 + 0x20),param_2,0);
                            if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_043aa964;
                            *(undefined4 *)(lVar1 + 0x20) = uVar11;
                            *(undefined4 *)(lVar1 + 0x24) = uVar12;
                            *(undefined4 *)(lVar1 + 0x28) = uVar16;
                          }
                          lVar10 = *(long *)(param_1 + 0x180);
                          if (lVar9 == 0) {
                            if (lVar10 == 0) goto LAB_043aa434;
                            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_043aa964;
                            uVar11 = *(undefined4 *)(lVar10 + 0x24);
                            fVar15 = *(float *)(lVar10 + 0x28);
                            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar10 + 0x20);
                            *(undefined4 *)(param_1 + 0x164) = uVar11;
                          }
                          else {
                            if (lVar10 == 0) goto LAB_043aa434;
                            if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_043aa964;
                            uVar21 = *(ulong *)(lVar10 + lVar9 + 0x20);
                            fVar18 = (float)*(undefined8 *)(param_1 + 0x16c);
                            fVar23 = *(float *)(param_1 + 0x160) - fVar18;
                            fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x16c) >> 0x20);
                            fVar14 = *(float *)(param_1 + 0x164) - fVar19;
                            uVar8 = CONCAT44(fVar14,fVar23);
                            fVar15 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x174);
                            fVar17 = *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0x174);
                            fVar18 = fVar18 + *(float *)(param_1 + 0x160);
                            fVar19 = *(float *)(param_1 + 0x164) + fVar19;
                            fVar20 = *(float *)(lVar10 + lVar9 + 0x28);
                            fVar22 = (float)(uVar21 >> 0x20);
                            uVar8 = uVar8 ^ (uVar8 ^ uVar21) &
                                            ~CONCAT44(-(uint)(fVar14 < fVar22),
                                                      -(uint)(fVar23 < (float)uVar21));
                            if (fVar20 <= fVar15) {
                              fVar15 = fVar20;
                            }
                            if (fVar17 <= fVar20) {
                              fVar17 = fVar20;
                            }
                            uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(fVar19,fVar18)) &
                                              CONCAT44(-(uint)(fVar22 < fVar19),
                                                       -(uint)((float)uVar21 < fVar18));
                            fVar23 = (float)uVar8;
                            fVar14 = (float)(uVar8 >> 0x20);
                            fVar17 = (fVar17 - fVar15) * 0.5;
                            fVar18 = ((float)uVar21 - fVar23) * 0.5;
                            fVar19 = ((float)(uVar21 >> 0x20) - fVar14) * 0.5;
                            *(float *)(param_1 + 0x174) = fVar17;
                            fVar15 = fVar15 + fVar17;
                            *(ulong *)(param_1 + 0x16c) = CONCAT44(fVar19,fVar18);
                            *(float *)(param_1 + 0x160) = fVar23 + fVar18;
                            *(float *)(param_1 + 0x164) = fVar14 + fVar19;
                          }
                          *(float *)(param_1 + 0x168) = fVar15;
                          uVar7 = uVar7 + 1;
                          lVar9 = lVar9 + 0xc;
                        } while ((long)uVar7 < (long)*(int *)(lVar10 + 0x18));
                      }
                      if (DAT_09515ce8 == '\0') {
                        FUN_03f5c2a4(&DAT_0918cb68);
                        DAT_09515ce8 = '\x01';
                      }
                      fVar15 = **(float **)(DAT_0918cb68 + 0xb8);
                      fVar17 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
                      iVar5 = UnityEngine_Screen__get_width(0);
                      iVar6 = UnityEngine_Screen__get_height(0);
                      fVar14 = *(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x16c);
                      fVar23 = *(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x16c);
                      fVar18 = *(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x170);
                      if (fVar15 <= fVar14) {
                        fVar15 = fVar14;
                      }
                      fVar14 = *(float *)(param_1 + 0x164) + *(float *)(param_1 + 0x170);
                      if (fVar17 <= fVar18) {
                        fVar17 = fVar18;
                      }
                      fVar18 = (float)iVar5;
                      if (fVar23 <= (float)iVar5) {
                        fVar18 = fVar23;
                      }
                      fVar23 = (float)iVar6;
                      if (fVar14 <= (float)iVar6) {
                        fVar23 = fVar14;
                      }
                      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar9 = DAT_09188ad0;
                      *(float *)(param_1 + 0x150) = fVar15;
                      *(float *)(param_1 + 0x154) = fVar17;
                      *(float *)(param_1 + 0x158) = fVar18 - fVar15;
                      *(float *)(param_1 + 0x15c) = fVar23 - fVar17;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar7 = UnityEngine_Object__op_Implicit(param_2,0);
                      if ((uVar7 & 1) == 0) {
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        fVar15 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x174);
                        uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20) *
                                          0.5,(float)*(undefined8 *)(param_1 + 0x150) +
                                              (float)*(undefined8 *)(param_1 + 0x158) * 0.5);
                      }
                      else {
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        if (param_2 == 0) goto LAB_043aa434;
                        fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20) * 0.5;
                        fVar15 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x174);
                        uVar11 = UnityEngine_Camera__ScreenToWorldPoint(param_2,0);
                        uVar13 = CONCAT44(fVar17,uVar11);
                      }
                      *(undefined8 *)(param_1 + 0x144) = uVar13;
                      lVar9 = DAT_09188ad0;
                      *(float *)(param_1 + 0x14c) = fVar15;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar7 = UnityEngine_Object__op_Implicit(param_2,0);
                      if ((uVar7 & 1) == 0) {
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        fVar15 = *(float *)(param_1 + 0x15c);
                      }
                      else {
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        if (param_2 == 0) goto LAB_043aa434;
                        fVar17 = *(float *)(param_1 + 0x154);
                        UnityEngine_Camera__ScreenToWorldPoint
                                  (*(undefined4 *)(param_1 + 0x150),fVar17,
                                   *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x174),param_2
                                   ,0);
                        if (DAT_09517b1a == '\0') {
                          FUN_03f5c2a4(&DAT_09189c30);
                          DAT_09517b1a = '\x01';
                        }
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                          fVar23 = *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x150);
                          if (DAT_09517b1a == '\0') {
                            FUN_03f5c2a4(&DAT_09189c30);
                            DAT_09517b1a = '\x01';
                          }
                        }
                        else {
                          fVar23 = *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x150);
                        }
                        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        fVar15 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x154);
                        UnityEngine_Camera__ScreenToWorldPoint
                                  (fVar23,fVar15,
                                   *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x174),param_2
                                   ,0);
                        fVar15 = fVar15 - fVar17;
                      }
                      cVar3 = DAT_095163ce;
                      *(float *)(param_1 + 0x140) = fVar15;
                      fVar17 = (*(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x16c)) -
                               (*(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x16c));
                      fVar15 = (*(float *)(param_1 + 0x164) + *(float *)(param_1 + 0x170)) -
                               (*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x170));
                      *(float *)(param_1 + 0x130) = fVar17;
                      *(float *)(param_1 + 0x134) = fVar15;
                      if (cVar3 == '\0') {
                        FUN_03f5c2a4(&DAT_09187e80);
                        DAT_095163ce = '\x01';
                      }
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                        bVar4 = DAT_095163ce == '\0';
                      }
                      else {
                        bVar4 = false;
                      }
                      uVar2 = 0x7fffffff;
                      if ((float)(int)fVar17 != INFINITY) {
                        uVar2 = (int)fVar17 - 1;
                      }
                      uVar2 = uVar2 | (int)uVar2 >> 0x10;
                      uVar2 = uVar2 | (int)uVar2 >> 8;
                      uVar2 = uVar2 | (int)uVar2 >> 4;
                      uVar2 = uVar2 | (int)uVar2 >> 2;
                      *(uint *)(param_1 + 0x138) = (uVar2 | (int)uVar2 >> 1) + 1;
                      if (bVar4) {
                        FUN_03f5c2a4(&DAT_09187e80);
                        DAT_095163ce = '\x01';
                      }
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar2 = 0x7fffffff;
                      if ((float)(int)fVar15 != INFINITY) {
                        uVar2 = (int)fVar15 - 1;
                      }
                      uVar2 = uVar2 | (int)uVar2 >> 0x10;
                      uVar2 = uVar2 | (int)uVar2 >> 8;
                      uVar2 = uVar2 | (int)uVar2 >> 4;
                      uVar2 = uVar2 | (int)uVar2 >> 2;
                      *(uint *)(param_1 + 0x13c) = (uVar2 | (int)uVar2 >> 1) + 1;
                      return;
                    }
                  }
                  else if ((*(long *)(param_1 + 0xd8) != 0) &&
                          (lVar9 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xd8),0)
                          , lVar9 != 0)) {
                    UnityEngine_Transform__get_localToWorldMatrix(local_b0,lVar9,0);
                    lVar9 = *(long *)(param_1 + 0x180);
                    if (lVar9 != 0) {
                      lVar10 = 0;
                      uVar7 = 0;
                      do {
                        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar7) {
                          *(undefined8 *)(param_1 + 0x160) = 0;
                          *(undefined8 *)(param_1 + 0x168) = 0;
                          *(undefined8 *)(param_1 + 0x170) = 0;
                          goto LAB_043aa454;
                        }
                        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_043aa964;
                        lVar9 = lVar9 + lVar10;
                        lVar10 = lVar10 + 0xc;
                        uVar7 = uVar7 + 1;
                        fVar15 = *(float *)(lVar9 + 0x20);
                        fVar17 = *(float *)(lVar9 + 0x24);
                        fVar23 = *(float *)(lVar9 + 0x28);
                        *(ulong *)(lVar9 + 0x20) =
                             CONCAT44((float)((ulong)local_80 >> 0x20) +
                                      local_b0._4_4_ * fVar15 +
                                      (float)((ulong)local_a0 >> 0x20) * fVar17 +
                                      (float)((ulong)local_90 >> 0x20) * fVar23,
                                      (float)local_80 +
                                      local_b0._0_4_ * fVar15 + (float)local_a0 * fVar17 +
                                      (float)local_90 * fVar23);
                        *(float *)(lVar9 + 0x28) =
                             local_78 + local_a8 * fVar15 + local_98 * fVar17 + local_88 * fVar23;
                        lVar9 = *(long *)(param_1 + 0x180);
                      } while (lVar9 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_043aa434:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

