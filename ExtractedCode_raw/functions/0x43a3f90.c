// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$AddBounds
// address: 0x43a3f90
// body: available
// range: 0x43a3f90-0x43a4bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a4bd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a4bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__AddBounds
               (float param_1,float param_2,undefined4 param_3,float param_4,float param_5,
               undefined4 param_6,long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [8];
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  
  if ((DAT_09517abc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918a730);
    DAT_09517abc = 1;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = DAT_0918a730;
  *(float *)(param_7 + 0x3c) = param_1;
  *(float *)(param_7 + 0x40) = param_2;
  *(float *)(param_7 + 0x44) = param_4 - param_1;
  *(float *)(param_7 + 0x48) = param_5 - param_2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918a730;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(float *)(lVar6 + 0x20) = param_1;
      *(float *)(lVar6 + 0x24) = param_2;
      *(undefined4 *)(lVar6 + 0x28) = param_3;
      lVar6 = **(long **)(DAT_0918a730 + 0xb8);
      if (lVar6 == 0) goto LAB_043a4bdc;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(float *)(lVar6 + 0x2c) = param_4;
        *(float *)(lVar6 + 0x30) = param_5;
        *(undefined4 *)(lVar6 + 0x34) = param_6;
        lVar6 = **(long **)(DAT_0918a730 + 0xb8);
        if (lVar6 == 0) goto LAB_043a4bdc;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(float *)(lVar6 + 0x38) = param_1;
          *(float *)(lVar6 + 0x3c) = param_2;
          *(undefined4 *)(lVar6 + 0x40) = param_6;
          lVar6 = **(long **)(DAT_0918a730 + 0xb8);
          if (lVar6 == 0) goto LAB_043a4bdc;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(float *)(lVar6 + 0x44) = param_1;
            *(float *)(lVar6 + 0x48) = param_5;
            *(undefined4 *)(lVar6 + 0x4c) = param_3;
            lVar6 = **(long **)(DAT_0918a730 + 0xb8);
            if (lVar6 == 0) goto LAB_043a4bdc;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(float *)(lVar6 + 0x50) = param_4;
              *(float *)(lVar6 + 0x54) = param_2;
              *(undefined4 *)(lVar6 + 0x58) = param_3;
              lVar6 = **(long **)(DAT_0918a730 + 0xb8);
              if (lVar6 == 0) goto LAB_043a4bdc;
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(float *)(lVar6 + 0x5c) = param_1;
                *(float *)(lVar6 + 0x60) = param_5;
                *(undefined4 *)(lVar6 + 100) = param_6;
                lVar6 = **(long **)(DAT_0918a730 + 0xb8);
                if (lVar6 == 0) goto LAB_043a4bdc;
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(float *)(lVar6 + 0x68) = param_4;
                  *(float *)(lVar6 + 0x6c) = param_2;
                  *(undefined4 *)(lVar6 + 0x70) = param_6;
                  lVar6 = **(long **)(DAT_0918a730 + 0xb8);
                  if (lVar6 == 0) goto LAB_043a4bdc;
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    *(float *)(lVar6 + 0x74) = param_4;
                    *(float *)(lVar6 + 0x78) = param_5;
                    *(undefined4 *)(lVar6 + 0x7c) = param_3;
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar5 = UnityEngine_Object__op_Implicit(param_8,0);
                    if ((uVar5 & 1) == 0) {
LAB_043a42c8:
                      lVar6 = DAT_0918a730;
                      if (*(int *)(param_7 + 0x68) == 1) {
                        uVar9 = *(undefined8 *)(param_7 + 0x60);
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
                        lVar6 = DAT_0918a730;
                        if ((uVar5 & 1) != 0) {
                          uVar9 = *(undefined8 *)(param_7 + 0x60);
                          if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          UnityEngine_GeometryUtility__CalculateFrustumPlanes
                                    (uVar9,*(undefined8 *)(*(long *)(DAT_0918a730 + 0xb8) + 8),0);
                          iVar4 = ChocDino_UIFX_MathUtils__GetFrustumIntersectsOBB
                                            ((*(undefined8 **)(DAT_0918a730 + 0xb8))[1],
                                             **(undefined8 **)(DAT_0918a730 + 0xb8));
                          lVar6 = DAT_0918a730;
                          if (iVar4 == 2) {
                            uVar5 = 0;
                            do {
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                FUN_03f5c424();
                                lVar6 = DAT_0918a730;
                              }
                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                              if (lVar11 == 0) goto LAB_043a4bdc;
                              if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_043a4bd8;
                              lVar11 = lVar11 + uVar5 * 0x10;
                              uVar10 = 0;
                              fVar24 = *(float *)(lVar11 + 0x20);
                              fVar18 = *(float *)(lVar11 + 0x24);
                              fVar21 = *(float *)(lVar11 + 0x28);
                              fVar12 = *(float *)(lVar11 + 0x2c);
                              do {
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                  lVar6 = DAT_0918a730;
                                }
                                lVar11 = (*(long **)(lVar6 + 0xb8))[2];
                                if (lVar11 == 0) goto LAB_043a4bdc;
                                if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_043a4bd8;
                                lVar7 = **(long **)(lVar6 + 0xb8);
                                if (lVar7 == 0) goto LAB_043a4bdc;
                                lVar1 = lVar11 + uVar10 * 4;
                                uVar2 = *(uint *)(lVar1 + 0x20);
                                if (((*(uint *)(lVar7 + 0x18) <= uVar2) ||
                                    ((ulong)*(uint *)(lVar11 + 0x18) <= uVar10 + 1)) ||
                                   (uVar3 = *(uint *)(lVar1 + 0x24),
                                   *(uint *)(lVar7 + 0x18) <= uVar3)) goto LAB_043a4bd8;
                                lVar11 = lVar7 + (long)(int)uVar2 * 0xc;
                                lVar7 = lVar7 + (long)(int)uVar3 * 0xc;
                                fVar32 = *(float *)(lVar11 + 0x20);
                                fVar29 = *(float *)(lVar11 + 0x24);
                                fVar30 = *(float *)(lVar11 + 0x28);
                                local_e4 = *(float *)(lVar7 + 0x20);
                                fVar22 = *(float *)(lVar7 + 0x24);
                                local_e8 = *(float *)(lVar7 + 0x28);
                                fVar31 = (fVar30 - local_e8) * (fVar30 - local_e8) +
                                         (fVar32 - local_e4) * (fVar32 - local_e4) +
                                         (fVar29 - fVar22) * (fVar29 - fVar22);
                                if (9.9999994e-11 <= fVar31) {
                                  fVar15 = fVar24 * fVar32 + fVar18 * fVar29 + fVar21 * fVar30;
                                  if (fVar12 + fVar15 <= 0.0) {
                                    if (DAT_0951690c == '\0') {
                                      FUN_03f5c2a4(&DAT_0918cbd0);
                                      DAT_0951690c = '\x01';
                                    }
                                    if (DAT_0951690d == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e80);
                                      DAT_0951690d = '\x01';
                                    }
                                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    fVar16 = fVar22 - fVar29;
                                    fVar13 = local_e4 - fVar32;
                                    fVar19 = local_e8 - fVar30;
                                    fVar23 = SQRT(fVar13 * fVar13 + fVar16 * fVar16 +
                                                  fVar19 * fVar19);
                                    if (fVar23 <= 1e-05) {
                                      pfVar8 = *(float **)(DAT_0918cbd0 + 0xb8);
                                      fVar16 = pfVar8[1];
                                      fVar19 = pfVar8[2];
                                      fVar13 = *pfVar8;
                                    }
                                    else {
                                      fVar13 = fVar13 / fVar23;
                                      fVar16 = fVar16 / fVar23;
                                      fVar19 = fVar19 / fVar23;
                                    }
                                    if (DAT_0951690d == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e80);
                                      DAT_0951690d = '\x01';
                                    }
                                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    fVar27 = 0.0;
                                    fVar28 = 0.0;
                                    fVar26 = 0.0;
                                    fVar23 = SQRT(fVar19 * fVar19 +
                                                  fVar16 * fVar16 + fVar13 * fVar13);
                                    if (1e-05 < fVar23) {
                                      fVar27 = fVar13 / fVar23;
                                      fVar28 = fVar16 / fVar23;
                                      fVar26 = fVar19 / fVar23;
                                    }
                                    if (DAT_09515cee == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e98);
                                      DAT_09515cee = '\x01';
                                    }
                                    fVar23 = fVar24 * fVar27 + fVar18 * fVar28 + fVar21 * fVar26;
                                    fVar26 = ABS(fVar23);
                                    if (fVar26 <= 0.0) {
                                      fVar26 = 0.0;
                                    }
                                    fVar28 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
                                    fVar27 = fVar26 * 1e-06;
                                    if (fVar26 * 1e-06 <= fVar28) {
                                      fVar27 = fVar28;
                                    }
                                    if ((fVar27 <= ABS(0.0 - fVar23)) &&
                                       (fVar23 = (-fVar15 - fVar12) / fVar23, 0.0 < fVar23)) {
                                      if (DAT_0951690d == '\0') {
                                        FUN_03f5c2a4(&DAT_09187e80);
                                        DAT_0951690d = '\x01';
                                      }
                                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      if (fVar23 < SQRT(fVar31)) {
                                        fVar32 = fVar32 + fVar13 * fVar23;
                                        fVar29 = fVar29 + fVar16 * fVar23;
                                        fVar30 = fVar30 + fVar19 * fVar23;
                                      }
                                    }
                                  }
                                  fVar31 = fVar24 * local_e4 + fVar18 * fVar22 + fVar21 * local_e8;
                                  if (fVar12 + fVar31 <= 0.0) {
                                    if (DAT_0951690c == '\0') {
                                      FUN_03f5c2a4(&DAT_0918cbd0);
                                      DAT_0951690c = '\x01';
                                    }
                                    if (DAT_0951690d == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e80);
                                      DAT_0951690d = '\x01';
                                    }
                                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    fVar13 = fVar29 - fVar22;
                                    fVar15 = fVar32 - local_e4;
                                    fVar16 = fVar30 - local_e8;
                                    fVar19 = SQRT(fVar16 * fVar16 +
                                                  fVar13 * fVar13 + fVar15 * fVar15);
                                    if (fVar19 <= 1e-05) {
                                      pfVar8 = *(float **)(DAT_0918cbd0 + 0xb8);
                                      fVar13 = pfVar8[1];
                                      fVar16 = pfVar8[2];
                                      fVar15 = *pfVar8;
                                    }
                                    else {
                                      fVar15 = fVar15 / fVar19;
                                      fVar13 = fVar13 / fVar19;
                                      fVar16 = fVar16 / fVar19;
                                    }
                                    if (DAT_0951690d == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e80);
                                      DAT_0951690d = '\x01';
                                    }
                                    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    fVar27 = 0.0;
                                    fVar28 = 0.0;
                                    fVar26 = 0.0;
                                    fVar23 = SQRT(fVar16 * fVar16 +
                                                  fVar13 * fVar13 + fVar15 * fVar15);
                                    if (1e-05 < fVar23) {
                                      fVar27 = fVar15 / fVar23;
                                      fVar26 = fVar13 / fVar23;
                                      fVar28 = fVar16 / fVar23;
                                    }
                                    if (DAT_09515cee == '\0') {
                                      FUN_03f5c2a4(&DAT_09187e98);
                                      DAT_09515cee = '\x01';
                                    }
                                    fVar23 = fVar24 * fVar27 + fVar18 * fVar26 + fVar21 * fVar28;
                                    fVar26 = ABS(fVar23);
                                    if (fVar26 <= 0.0) {
                                      fVar26 = 0.0;
                                    }
                                    fVar28 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
                                    fVar27 = fVar26 * 1e-06;
                                    if (fVar26 * 1e-06 <= fVar28) {
                                      fVar27 = fVar28;
                                    }
                                    if ((fVar27 <= ABS(0.0 - fVar23)) &&
                                       (fVar23 = (-fVar31 - fVar12) / fVar23, 0.0 < fVar23)) {
                                      if (DAT_0951690d == '\0') {
                                        FUN_03f5c2a4(&DAT_09187e80);
                                        DAT_0951690d = '\x01';
                                      }
                                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      if (fVar23 < fVar19) {
                                        local_e4 = local_e4 + fVar15 * fVar23;
                                        fVar22 = fVar22 + fVar13 * fVar23;
                                        local_e8 = local_e8 + fVar16 * fVar23;
                                      }
                                    }
                                  }
                                  if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  lVar6 = (*(long **)(DAT_0918a730 + 0xb8))[2];
                                  if (lVar6 == 0) goto LAB_043a4bdc;
                                  if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_043a4bd8;
                                  lVar11 = **(long **)(DAT_0918a730 + 0xb8);
                                  if (lVar11 == 0) goto LAB_043a4bdc;
                                  uVar2 = *(uint *)(lVar6 + uVar10 * 4 + 0x20);
                                  if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_043a4bd8;
                                  lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
                                  *(float *)(lVar11 + 0x20) = fVar32;
                                  *(float *)(lVar11 + 0x24) = fVar29;
                                  *(float *)(lVar11 + 0x28) = fVar30;
                                  lVar6 = (*(long **)(DAT_0918a730 + 0xb8))[2];
                                  if (lVar6 == 0) goto LAB_043a4bdc;
                                  if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar10 + 1)
                                  goto LAB_043a4bd8;
                                  lVar11 = **(long **)(DAT_0918a730 + 0xb8);
                                  if (lVar11 == 0) goto LAB_043a4bdc;
                                  uVar2 = *(uint *)(lVar6 + uVar10 * 4 + 0x24);
                                  if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_043a4bd8;
                                  lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
                                  *(float *)(lVar11 + 0x20) = local_e4;
                                  *(float *)(lVar11 + 0x24) = fVar22;
                                  *(float *)(lVar11 + 0x28) = local_e8;
                                  lVar6 = DAT_0918a730;
                                }
                                uVar10 = uVar10 + 2;
                              } while (uVar10 != 0x18);
                              uVar5 = uVar5 + 1;
                            } while (uVar5 != 6);
                          }
                        }
                      }
                      lVar11 = 0;
                      uVar5 = 0;
                      do {
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar6 = DAT_0918a730;
                        }
                        if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_043a4bdc;
                        if ((long)*(int *)(**(long **)(lVar6 + 0xb8) + 0x18) <= (long)uVar5) {
                          return;
                        }
                        uVar9 = *(undefined8 *)(param_7 + 0x60);
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar10 = UnityEngine_Object__op_Implicit(uVar9,0);
                        if ((uVar10 & 1) != 0) {
                          if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar6 = **(long **)(DAT_0918a730 + 0xb8);
                          if (lVar6 == 0) goto LAB_043a4bdc;
                          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_043a4bd8;
                          if (*(long *)(param_7 + 0x60) == 0) goto LAB_043a4bdc;
                          lVar7 = lVar6 + lVar11;
                          uVar17 = *(undefined4 *)(lVar7 + 0x24);
                          uVar20 = *(undefined4 *)(lVar7 + 0x28);
                          uVar14 = UnityEngine_Camera__WorldToScreenPoint
                                             (*(undefined4 *)(lVar7 + 0x20),
                                              *(long *)(param_7 + 0x60),0);
                          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_043a4bd8;
                          *(undefined4 *)(lVar7 + 0x20) = uVar14;
                          *(undefined4 *)(lVar7 + 0x24) = uVar17;
                          *(undefined4 *)(lVar7 + 0x28) = uVar20;
                        }
                        if (*(char *)(param_7 + 0x10) == '\0') {
                          if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar6 = DAT_0918a730;
                          lVar7 = **(long **)(DAT_0918a730 + 0xb8);
                          if (lVar7 == 0) goto LAB_043a4bdc;
                          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_043a4bd8;
                          fVar12 = *(float *)(param_7 + 0x1c) - *(float *)(param_7 + 0x28);
                          fVar18 = *(float *)(param_7 + 0x1c) + *(float *)(param_7 + 0x28);
                          uVar10 = *(ulong *)(lVar7 + lVar11 + 0x20);
                          fVar24 = (float)*(undefined8 *)(param_7 + 0x14);
                          fVar21 = (float)*(undefined8 *)(param_7 + 0x20);
                          fVar30 = fVar24 - fVar21;
                          fVar22 = (float)((ulong)*(undefined8 *)(param_7 + 0x14) >> 0x20);
                          fVar29 = (float)((ulong)*(undefined8 *)(param_7 + 0x20) >> 0x20);
                          fVar31 = fVar22 - fVar29;
                          uVar25 = CONCAT44(fVar31,fVar30);
                          fVar24 = fVar24 + fVar21;
                          fVar22 = fVar22 + fVar29;
                          fVar29 = *(float *)(lVar7 + lVar11 + 0x28);
                          fVar21 = (float)(uVar10 >> 0x20);
                          if (fVar29 <= fVar12) {
                            fVar12 = fVar29;
                          }
                          uVar25 = uVar25 ^ (uVar25 ^ uVar10) &
                                            ~CONCAT44(-(uint)(fVar31 < fVar21),
                                                      -(uint)(fVar30 < (float)uVar10));
                          uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar22,fVar24)) &
                                            CONCAT44(-(uint)(fVar21 < fVar22),
                                                     -(uint)((float)uVar10 < fVar24));
                          if (fVar18 <= fVar29) {
                            fVar18 = fVar29;
                          }
                          fVar22 = (float)uVar25;
                          fVar29 = (float)(uVar25 >> 0x20);
                          fVar21 = ((float)uVar10 - fVar22) * 0.5;
                          fVar24 = ((float)(uVar10 >> 0x20) - fVar29) * 0.5;
                          fVar18 = (fVar18 - fVar12) * 0.5;
                          *(ulong *)(param_7 + 0x20) = CONCAT44(fVar24,fVar21);
                          *(float *)(param_7 + 0x28) = fVar18;
                          *(ulong *)(param_7 + 0x14) = CONCAT44(fVar29 + fVar24,fVar22 + fVar21);
                          *(float *)(param_7 + 0x1c) = fVar12 + fVar18;
                        }
                        else {
                          if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar6 = DAT_0918a730;
                          lVar7 = **(long **)(DAT_0918a730 + 0xb8);
                          if (lVar7 == 0) goto LAB_043a4bdc;
                          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_043a4bd8;
                          uVar9 = *(undefined8 *)(lVar7 + lVar11 + 0x20);
                          uVar14 = *(undefined4 *)(lVar7 + lVar11 + 0x28);
                          *(undefined1 *)(param_7 + 0x10) = 0;
                          *(undefined8 *)(param_7 + 0x14) = uVar9;
                          *(undefined4 *)(param_7 + 0x1c) = uVar14;
                        }
                        uVar5 = uVar5 + 1;
                        lVar11 = lVar11 + 0xc;
                      } while( true );
                    }
                    lVar6 = 0;
                    uVar5 = 0;
                    while( true ) {
                      if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar11 = **(long **)(DAT_0918a730 + 0xb8);
                      if (lVar11 == 0) goto LAB_043a4bdc;
                      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar5) goto LAB_043a42c8;
                      if (*(int *)(DAT_0918a730 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar11 = **(long **)(DAT_0918a730 + 0xb8);
                      }
                      if (param_8 == 0) goto LAB_043a4bdc;
                      UnityEngine_Transform__get_localToWorldMatrix(local_e0,param_8,0);
                      lVar7 = **(long **)(DAT_0918a730 + 0xb8);
                      if (lVar7 == 0) goto LAB_043a4bdc;
                      if (*(uint *)(lVar7 + 0x18) <= uVar5) break;
                      if (lVar11 == 0) goto LAB_043a4bdc;
                      if (*(uint *)(lVar11 + 0x18) <= uVar5) break;
                      lVar7 = lVar7 + lVar6;
                      uVar5 = uVar5 + 1;
                      fVar18 = *(float *)(lVar7 + 0x20);
                      fVar21 = *(float *)(lVar7 + 0x24);
                      fVar24 = *(float *)(lVar7 + 0x28);
                      lVar11 = lVar11 + lVar6;
                      lVar6 = lVar6 + 0xc;
                      fVar12 = 1.0 / (local_a4 +
                                     fStack_d4 * fVar18 + fStack_c4 * fVar21 + local_b4 * fVar24);
                      *(ulong *)(lVar11 + 0x20) =
                           CONCAT44(((float)((ulong)local_b0 >> 0x20) +
                                    local_e0._4_4_ * fVar18 +
                                    (float)((ulong)local_d0 >> 0x20) * fVar21 +
                                    (float)((ulong)local_c0 >> 0x20) * fVar24) * fVar12,
                                    ((float)local_b0 +
                                    local_e0._0_4_ * fVar18 + (float)local_d0 * fVar21 +
                                    (float)local_c0 * fVar24) * fVar12);
                      *(float *)(lVar11 + 0x28) =
                           (local_a8 + local_d8 * fVar18 + local_c8 * fVar21 + local_b8 * fVar24) *
                           fVar12;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_043a4bd8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_043a4bdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

