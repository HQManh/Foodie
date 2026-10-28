// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$get_rootCanvasRect
// address: 0x4403cd0
// body: available
// range: 0x4403cd0-0x44041e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44041e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44041e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Coffee_UIExtensions_UIParticleRenderer__get_rootCanvasRect(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 local_b0 [8];
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  
  if ((DAT_09517e8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c440);
    DAT_09517e8b = 1;
  }
  if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
  lVar1 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar1 != 0) {
    fVar7 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
    uVar9 = 0;
    uVar6 = UnityEngine_Transform__TransformPoint
                      (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xf0),lVar1,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_044041e0;
      *(undefined4 *)(lVar5 + 0x20) = uVar6;
      *(float *)(lVar5 + 0x24) = fVar7;
      *(undefined4 *)(lVar5 + 0x28) = uVar9;
      lVar5 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
      lVar1 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar1 != 0) {
        fVar7 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xf4);
        uVar9 = 0;
        uVar6 = UnityEngine_Transform__TransformPoint
                          (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xf0),lVar1,0);
        if (lVar5 != 0) {
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_044041e0;
          *(undefined4 *)(lVar5 + 0x2c) = uVar6;
          *(float *)(lVar5 + 0x30) = fVar7;
          *(undefined4 *)(lVar5 + 0x34) = uVar9;
          lVar5 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
          lVar1 = UnityEngine_Component__get_transform(param_1,0);
          if (lVar1 != 0) {
            fVar7 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xf4);
            uVar9 = 0;
            uVar6 = UnityEngine_Transform__TransformPoint
                              (*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xf0),lVar1,0);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_044041e0;
              *(undefined4 *)(lVar5 + 0x38) = uVar6;
              *(float *)(lVar5 + 0x3c) = fVar7;
              *(undefined4 *)(lVar5 + 0x40) = uVar9;
              lVar5 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
              lVar1 = UnityEngine_Component__get_transform(param_1,0);
              if (lVar1 != 0) {
                fVar7 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
                uVar9 = 0;
                uVar6 = UnityEngine_Transform__TransformPoint
                                  (*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xf0),lVar1,0);
                if (lVar5 != 0) {
                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) {
LAB_044041e0:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  *(undefined4 *)(lVar5 + 0x44) = uVar6;
                  *(float *)(lVar5 + 0x48) = fVar7;
                  *(undefined4 *)(lVar5 + 0x4c) = uVar9;
                  uVar2 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188ad0);
                  }
                  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
                  if ((uVar3 & 1) != 0) {
                    lVar1 = UnityEngine_UI_Graphic__get_canvas(param_1,0);
                    if (((lVar1 == 0) ||
                        (lVar1 = UnityEngine_Canvas__get_rootCanvas(lVar1,0), lVar1 == 0)) ||
                       (lVar1 = UnityEngine_Component__get_transform(lVar1,0), lVar1 == 0))
                    goto LAB_044041e4;
                    UnityEngine_Transform__get_worldToLocalMatrix(local_b0,lVar1,0);
                    lVar1 = 0;
                    uVar3 = 0;
                    do {
                      if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar5 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                      if (lVar5 == 0) goto LAB_044041e4;
                      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_044041e0;
                      lVar5 = lVar5 + lVar1;
                      uVar3 = uVar3 + 1;
                      lVar1 = lVar1 + 0xc;
                      fVar7 = *(float *)(lVar5 + 0x20);
                      fVar8 = *(float *)(lVar5 + 0x24);
                      fVar11 = *(float *)(lVar5 + 0x28);
                      fVar10 = 1.0 / (fStack_74 +
                                     fStack_a4 * fVar7 + fStack_94 * fVar8 + fStack_84 * fVar11);
                      *(ulong *)(lVar5 + 0x20) =
                           CONCAT44(((float)((ulong)local_80 >> 0x20) +
                                    local_b0._4_4_ * fVar7 +
                                    (float)((ulong)local_a0 >> 0x20) * fVar8 +
                                    (float)((ulong)local_90 >> 0x20) * fVar11) * fVar10,
                                    ((float)local_80 +
                                    local_b0._0_4_ * fVar7 + (float)local_a0 * fVar8 +
                                    (float)local_90 * fVar11) * fVar10);
                      *(float *)(lVar5 + 0x28) =
                           (local_78 + local_a8 * fVar7 + local_98 * fVar8 + local_88 * fVar11) *
                           fVar10;
                    } while (uVar3 != 4);
                  }
                  if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar1 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                  if (lVar1 != 0) {
                    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_044041e0;
                    fVar11 = *(float *)(lVar1 + 0x20);
                    fVar10 = *(float *)(lVar1 + 0x24);
                    uVar3 = 1;
                    lVar1 = 0x2c;
                    lVar5 = DAT_0918c440;
                    fVar7 = fVar11;
                    fVar8 = fVar10;
                    while( true ) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar5 = DAT_0918c440;
                      }
                      lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
                      if (lVar4 == 0) break;
                      if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                      if (fVar11 <= *(float *)(lVar4 + lVar1)) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                          lVar5 = DAT_0918c440;
                          if (lVar4 == 0) break;
                        }
                        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                        if (fVar7 < *(float *)(lVar4 + lVar1)) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            FUN_03f5c424();
                            lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                            lVar5 = DAT_0918c440;
                            if (lVar4 == 0) break;
                          }
                          if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                          fVar7 = *(float *)(lVar4 + lVar1);
                        }
                      }
                      else {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                          lVar5 = DAT_0918c440;
                          if (lVar4 == 0) break;
                        }
                        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                        fVar11 = *(float *)(lVar4 + lVar1);
                      }
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar5 = DAT_0918c440;
                      }
                      lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
                      if (lVar4 == 0) break;
                      if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                      if (fVar10 <= *(float *)(lVar4 + lVar1 + 4)) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 0x18);
                          lVar5 = DAT_0918c440;
                          if (lVar4 == 0) break;
                        }
                        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                        if (fVar8 < *(float *)(lVar4 + lVar1 + 4)) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            FUN_03f5c424();
                            lVar5 = DAT_0918c440;
                          }
                          lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
                          if (lVar4 == 0) break;
                          if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                          fVar8 = *(float *)(lVar4 + lVar1 + 4);
                        }
                      }
                      else {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar5 = DAT_0918c440;
                        }
                        lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
                        if (lVar4 == 0) break;
                        if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_044041e0;
                        fVar10 = *(float *)(lVar4 + lVar1 + 4);
                      }
                      lVar1 = lVar1 + 0xc;
                      uVar3 = uVar3 + 1;
                      if (lVar1 == 0x50) {
                        return fVar11;
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
LAB_044041e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

