// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$UpdateTrailColors
// address: 0x43b80a4
// body: available
// range: 0x43b80a4-0x43b8293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b8290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__UpdateTrailColors(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_09517b40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_091b3f30);
    DAT_09517b40 = 1;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    auVar7 = NEON_fmov(0x3f800000,4);
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x98) == 0) {
LAB_043b8290:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = FUN_057e0998(*(long *)(param_1 + 0x98),iVar3,DAT_091b3f30);
      fVar11 = 0.0;
      if (1 < *(int *)(param_1 + 0x20)) {
        fVar11 = (float)iVar3 / (float)(*(int *)(param_1 + 0x20) + -1);
      }
      if (lVar2 == 0) goto LAB_043b8290;
      *(long *)(lVar2 + 0x60) = auVar7._8_8_;
      *(long *)(lVar2 + 0x58) = auVar7._0_8_;
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 != 0) {
        uVar12 = *(undefined4 *)(param_1 + 0x48);
        uVar13 = *(undefined4 *)(param_1 + 0x4c);
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = 0;
        uVar5 = ChocDino_UIFX_ColorUtils__EvalGradient(lVar4,2,0);
        *(undefined4 *)(lVar2 + 0x58) = uVar5;
        *(undefined4 *)(lVar2 + 0x5c) = uVar12;
        *(undefined4 *)(lVar2 + 0x60) = uVar13;
        *(undefined4 *)(lVar2 + 100) = uVar10;
      }
      lVar4 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(lVar2 + 0x68) = 0x3f800000;
      if (lVar4 == 0) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = (float)UnityEngine_AnimationCurve__Evaluate(lVar4,0);
        *(float *)(lVar2 + 0x68) = fVar6;
      }
      fVar8 = *(float *)(param_1 + 0x60);
      if (fVar8 < 1.0) {
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 1) {
          if (fVar8 <= fVar11) {
            fVar6 = 0.0;
          }
        }
        else if (iVar1 == 2) {
          fVar9 = fVar8 + -1.0 / (float)*(int *)(param_1 + 0x20);
          if (fVar9 == fVar8) {
            fVar11 = 0.0;
          }
          else {
            fVar9 = (fVar11 - fVar9) / (fVar8 - fVar9);
            fVar8 = 1.0;
            if (fVar9 <= 1.0) {
              fVar8 = fVar9;
            }
            fVar11 = 0.0;
            if (0.0 <= fVar9) {
              fVar11 = fVar8;
            }
          }
          fVar6 = fVar6 * (1.0 - fVar11);
        }
        else {
          if (iVar1 != 3) goto LAB_043b825c;
          fVar6 = fVar8 * fVar6;
        }
        *(float *)(lVar2 + 0x68) = fVar6;
      }
LAB_043b825c:
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}

