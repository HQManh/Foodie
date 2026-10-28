// rea decompile_all
// name: ChocDino.UIFX.LongShadow$$UpdateMaterials
// address: 0x43dfb94
// body: available
// range: 0x43dfb94-0x43dfe8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43dfe88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_LongShadow__UpdateMaterials(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09517d0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091925e0);
    DAT_09517d0f = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    fVar12 = *(float *)(*(long *)(param_1 + 0x70) + 0xb8);
    fVar13 = *(float *)(param_1 + 0x14);
    fVar9 = (*(float *)(param_1 + 0x1c) + 1.0) * 0.5;
    fVar6 = (float)ChocDino_UIFX_MathUtils__Lerp3(0x3f800000,0,0,fVar9,0);
    fVar7 = (float)ChocDino_UIFX_MathUtils__Lerp3(0x3f800000,0x3f800000,0,fVar9,0);
    plVar4 = *(long **)(param_1 + 0x60);
    fVar11 = -1.0;
    fVar9 = 1.0;
    if (*(float *)(param_1 + 0x18) != 1.0) {
      fVar9 = fVar12 * *(float *)(param_1 + 0x18);
    }
    if (0.0 <= *(float *)(param_1 + 0x14)) {
      fVar11 = 1.0;
    }
    if (plVar4 != (long *)0x0) {
      fVar10 = *(float *)(param_1 + 0x10);
      iVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        fVar10 = fVar10 * -0.017453292;
        fVar8 = sinf(fVar10);
        fVar10 = cosf(fVar10 + 3.1415927);
        lVar5 = *(long *)(param_1 + 0x50);
        if (*(int *)(DAT_091925e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 != 0) {
          fVar13 = ABS(fVar12 * fVar13);
          fVar6 = fVar13 * fVar6;
          fVar12 = fVar11 * fVar8 * (1.0 / (float)iVar2);
          fVar11 = fVar11 * fVar10 * (1.0 / (float)iVar3);
          UnityEngine_Material__SetColorImpl
                    (fVar6 * fVar12,fVar6 * fVar11,0,0,lVar5,
                     *(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 4),0);
          lVar5 = *(long *)(param_1 + 0x50);
          uVar1 = *(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 8);
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar5 != 0) {
            fVar6 = (fVar13 * fVar7 - fVar6) / fVar9;
            iVar2 = -0x80000000;
            if ((float)(int)fVar6 != INFINITY) {
              iVar2 = (int)fVar6;
            }
            UnityEngine_Material__SetInt(lVar5,uVar1,iVar2,0);
            if (*(long *)(param_1 + 0x50) != 0) {
              UnityEngine_Material__SetColorImpl
                        (fVar9 * fVar12,fVar9 * fVar11,0,0,*(long *)(param_1 + 0x50),
                         *(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 0xc),0);
              if (*(long *)(param_1 + 0x50) != 0) {
                UnityEngine_Material__SetColorImpl
                          (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(long *)(param_1 + 0x50),
                           *(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 0x10),0);
                if (*(long *)(param_1 + 0x50) != 0) {
                  UnityEngine_Material__SetColorImpl
                            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                             *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                             *(long *)(param_1 + 0x50),
                             *(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 0x14),0);
                  if (*(int *)(param_1 + 0x40) == 1) {
                    lVar5 = *(long *)(param_1 + 0x50);
                    if (*(int *)(DAT_091925e0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (lVar5 == 0) goto LAB_043dfe88;
                    UnityEngine_Material__SetTextureImpl
                              (lVar5,*(undefined4 *)(*(long *)(DAT_091925e0 + 0xb8) + 0x18),
                               *(undefined8 *)(param_1 + 0x48),0);
                  }
                  *(undefined1 *)(param_1 + 0x68) = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_043dfe88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

