// rea decompile_all
// name: ChocDino.UIFX.FillGradientFilter$$GradientToArrays
// address: 0x43d2a28
// body: available
// range: 0x43d2a28-0x43d2d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d2cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43d2d00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FillGradientFilter__GradientToArrays(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_09517c6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    DAT_09517c6a = 1;
  }
  if ((*(long *)(param_1 + 0x1e0) != 0) &&
     (lVar2 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e0),0), lVar2 != 0)) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    if (0 < (int)uVar4) {
      uVar6 = 0;
      lVar2 = 0x30;
      lVar7 = 0x20;
      do {
        if ((*(long *)(param_1 + 0x1e0) == 0) ||
           (lVar3 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e0),0), lVar3 == 0))
        goto LAB_043d2cfc;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043d2d00;
        lVar3 = lVar3 + lVar2;
        uVar11 = *(undefined4 *)(lVar3 + -0x10);
        uVar10 = *(undefined4 *)(lVar3 + -0xc);
        uVar9 = *(undefined4 *)(lVar3 + -8);
        if ((*(int *)(param_1 + 0x1e8) == 0) || (*(int *)(param_1 + 0x1ec) != 1)) {
          iVar1 = UnityEngine_QualitySettings__get_activeColorSpace(0);
          if (iVar1 == 1) {
            uVar11 = UnityEngine_Mathf__GammaToLinearSpace(uVar11,0);
            uVar10 = UnityEngine_Mathf__GammaToLinearSpace(uVar10,0);
            uVar9 = UnityEngine_Mathf__GammaToLinearSpace(uVar9,0);
          }
          if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d2cfc;
          lVar8 = *(long *)(param_1 + 0x218);
          lVar3 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e0),0);
          if (lVar3 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043d2d00;
          if (lVar8 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_043d2d00;
          uVar12 = *(undefined4 *)(lVar3 + lVar2);
          puVar5 = (undefined4 *)(lVar8 + lVar7);
          *puVar5 = uVar11;
        }
        else {
          uVar12 = *(undefined4 *)(lVar3 + -4);
          uVar11 = UnityEngine_Mathf__GammaToLinearSpace(uVar11,0);
          uVar10 = UnityEngine_Mathf__GammaToLinearSpace(uVar10,0);
          uVar9 = UnityEngine_Mathf__GammaToLinearSpace(uVar9,0);
          if (*(int *)(DAT_09182738 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = ChocDino_UIFX_ColorUtils__LinearToOklab(uVar11,uVar10,uVar9,uVar12,0);
          if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d2cfc;
          lVar8 = *(long *)(param_1 + 0x218);
          lVar3 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_1 + 0x1e0),0);
          if (lVar3 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043d2d00;
          if (lVar8 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_043d2d00;
          uVar12 = *(undefined4 *)(lVar3 + lVar2);
          *(undefined4 *)(lVar8 + lVar7) = uVar11;
          puVar5 = (undefined4 *)(lVar8 + uVar6 * 0x10 + 0x20);
        }
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 0x14;
        lVar7 = lVar7 + 0x10;
        puVar5[1] = uVar10;
        puVar5[2] = uVar9;
        puVar5[3] = uVar12;
      } while ((uVar4 & 0xffffffff) != uVar6);
    }
    if ((*(long *)(param_1 + 0x1e0) != 0) &&
       (lVar2 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x1e0),0), lVar2 != 0)) {
      uVar4 = *(ulong *)(lVar2 + 0x18);
      if (0 < (int)uVar4) {
        uVar6 = 0;
        lVar7 = 0x20;
        lVar2 = 0x20;
        do {
          if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d2cfc;
          lVar8 = *(long *)(param_1 + 0x220);
          lVar3 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x1e0),0);
          if (lVar3 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_043d2d00:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_043d2cfc;
          uVar9 = *(undefined4 *)(lVar3 + lVar2);
          lVar3 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_1 + 0x1e0),0);
          if (lVar3 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_043d2d00;
          if (lVar8 == 0) goto LAB_043d2cfc;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_043d2d00;
          uVar6 = uVar6 + 1;
          puVar5 = (undefined4 *)(lVar8 + lVar7);
          uVar10 = *(undefined4 *)(lVar3 + lVar2 + 4);
          lVar2 = lVar2 + 8;
          lVar7 = lVar7 + 0x10;
          *puVar5 = uVar9;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = uVar10;
        } while ((uVar4 & 0xffffffff) != uVar6);
      }
      return;
    }
  }
LAB_043d2cfc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

