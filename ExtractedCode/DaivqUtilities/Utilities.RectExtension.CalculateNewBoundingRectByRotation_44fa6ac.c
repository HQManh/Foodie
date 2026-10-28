// rea decompile_all
// name: Utilities.RectExtension$$CalculateNewBoundingRectByRotation
// address: 0x44fa6ac
// body: available
// range: 0x44fa6ac-0x44faa77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44faa70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44faa74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_RectExtension__CalculateNewBoundingRectByRotation
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float fStack_54;
  
  if ((DAT_09518462 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_09518462 = 1;
  }
  sincosf(param_5 * 0.017453292,&fStack_54,&local_58);
  lVar2 = FUN_03f5c394(DAT_091807e8,4);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189c30);
  }
  if (lVar2 == 0) goto LAB_044faa74;
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    fVar7 = (param_3 + param_1) * local_58;
    fVar9 = (param_4 + param_2) * fStack_54;
    fVar8 = (param_3 + param_1) * fStack_54;
    fVar10 = (param_4 + param_2) * local_58;
    *(float *)(lVar2 + 0x20) = fVar7 - fVar9;
    *(float *)(lVar2 + 0x24) = fVar8 + fVar10;
    if (uVar1 != 1) {
      *(float *)(lVar2 + 0x28) = param_1 * local_58 - fVar9;
      *(float *)(lVar2 + 0x2c) = param_1 * fStack_54 + fVar10;
      if (2 < uVar1) {
        *(float *)(lVar2 + 0x30) = param_1 * local_58 - param_2 * fStack_54;
        *(float *)(lVar2 + 0x34) = param_1 * fStack_54 + param_2 * local_58;
        if (uVar1 != 3) {
          *(float *)(lVar2 + 0x38) = fVar7 - param_2 * fStack_54;
          *(float *)(lVar2 + 0x3c) = fVar8 + param_2 * local_58;
          lVar3 = FUN_03f5c394(DAT_09180528,4);
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 != 0) {
            if (lVar3 == 0) {
LAB_044faa74:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = (uint)*(ulong *)(lVar3 + 0x18);
            if (uVar4 != 0) {
              fVar7 = *(float *)(lVar2 + 0x20);
              *(float *)(lVar3 + 0x20) = fVar7;
              if ((((uVar1 != 1) && (uVar4 != 1)) &&
                  (*(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x28), 2 < uVar1)) &&
                 (((2 < uVar4 &&
                   (*(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar2 + 0x30), uVar1 != 3)) &&
                  (uVar4 != 3)))) {
                *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar2 + 0x38);
                if (1 < (int)uVar4) {
                  lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
                  pfVar6 = (float *)(lVar3 + 0x24);
                  do {
                    fVar8 = *pfVar6;
                    if (fVar7 <= *pfVar6) {
                      fVar8 = fVar7;
                    }
                    fVar7 = fVar8;
                    lVar5 = lVar5 + -1;
                    pfVar6 = pfVar6 + 1;
                  } while (lVar5 != 0);
                }
                lVar3 = FUN_03f5c394(DAT_09180528,4);
                uVar1 = *(uint *)(lVar2 + 0x18);
                if (uVar1 != 0) {
                  if (lVar3 == 0) goto LAB_044faa74;
                  uVar4 = (uint)*(ulong *)(lVar3 + 0x18);
                  if (uVar4 != 0) {
                    fVar8 = *(float *)(lVar2 + 0x20);
                    *(float *)(lVar3 + 0x20) = fVar8;
                    if (((uVar1 != 1) && (uVar4 != 1)) &&
                       ((*(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x28), 2 < uVar1 &&
                        (((2 < uVar4 &&
                          (*(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar2 + 0x30), uVar1 != 3
                          )) && (uVar4 != 3)))))) {
                      *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar2 + 0x38);
                      if (1 < (int)uVar4) {
                        lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
                        pfVar6 = (float *)(lVar3 + 0x24);
                        do {
                          fVar9 = *pfVar6;
                          if (*pfVar6 <= fVar8) {
                            fVar9 = fVar8;
                          }
                          fVar8 = fVar9;
                          lVar5 = lVar5 + -1;
                          pfVar6 = pfVar6 + 1;
                        } while (lVar5 != 0);
                      }
                      lVar3 = FUN_03f5c394(DAT_09180528,4);
                      uVar1 = *(uint *)(lVar2 + 0x18);
                      if (uVar1 != 0) {
                        if (lVar3 == 0) goto LAB_044faa74;
                        uVar4 = (uint)*(ulong *)(lVar3 + 0x18);
                        if (uVar4 != 0) {
                          fVar8 = *(float *)(lVar2 + 0x24);
                          *(float *)(lVar3 + 0x20) = fVar8;
                          if (((uVar1 != 1) && (uVar4 != 1)) &&
                             (((*(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x2c),
                               2 < uVar1 &&
                               ((2 < uVar4 &&
                                (*(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar2 + 0x34),
                                uVar1 != 3)))) && (uVar4 != 3)))) {
                            *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar2 + 0x3c);
                            if (1 < (int)uVar4) {
                              lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
                              pfVar6 = (float *)(lVar3 + 0x24);
                              do {
                                fVar9 = *pfVar6;
                                if (fVar8 <= *pfVar6) {
                                  fVar9 = fVar8;
                                }
                                fVar8 = fVar9;
                                lVar5 = lVar5 + -1;
                                pfVar6 = pfVar6 + 1;
                              } while (lVar5 != 0);
                            }
                            lVar3 = FUN_03f5c394(DAT_09180528,4);
                            uVar1 = *(uint *)(lVar2 + 0x18);
                            if (uVar1 != 0) {
                              if (lVar3 == 0) goto LAB_044faa74;
                              uVar4 = (uint)*(ulong *)(lVar3 + 0x18);
                              if (uVar4 != 0) {
                                fVar8 = *(float *)(lVar2 + 0x24);
                                *(float *)(lVar3 + 0x20) = fVar8;
                                if (((((uVar1 != 1) && (uVar4 != 1)) &&
                                     (*(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x2c),
                                     2 < uVar1)) &&
                                    ((2 < uVar4 &&
                                     (*(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar2 + 0x34),
                                     uVar1 != 3)))) && (uVar4 != 3)) {
                                  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar2 + 0x3c);
                                  if (1 < (int)uVar4) {
                                    lVar2 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
                                    pfVar6 = (float *)(lVar3 + 0x24);
                                    do {
                                      fVar9 = *pfVar6;
                                      if (*pfVar6 <= fVar8) {
                                        fVar9 = fVar8;
                                      }
                                      lVar2 = lVar2 + -1;
                                      pfVar6 = pfVar6 + 1;
                                      fVar8 = fVar9;
                                    } while (lVar2 != 0);
                                  }
                                  return fVar7;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

