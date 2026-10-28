// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$IsVertexTintColorSpaceConversionAgnostic
// address: 0x43bcea8
// body: available
// range: 0x43bcea8-0x43bd1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bd1ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
ChocDino_UIFX_FilterStackTextMeshPro__IsVertexTintColorSpaceConversionAgnostic
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_09517b67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b67 = 1;
  }
  if (param_5 != (long *)0x0) {
    fVar3 = (float)(**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    if (*(int *)(DAT_09182738 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                      (fVar3,param_2,param_3,param_4,0);
    if ((uVar1 & 1) != 0) {
      if (*(char *)((long)param_5 + 0x175) == '\0') {
        return 1;
      }
      lVar2 = param_5[0x38];
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar1 & 1) == 0) {
        fVar4 = *(float *)((long)param_5 + 0x17c);
        fVar5 = *(float *)(param_5 + 0x30);
        fVar10 = *(float *)((long)param_5 + 0x184);
        fVar11 = *(float *)(param_5 + 0x31);
        fVar18 = *(float *)((long)param_5 + 0x18c);
        fVar16 = *(float *)(param_5 + 0x32);
        fVar13 = *(float *)((long)param_5 + 0x1a4);
        fVar7 = *(float *)(param_5 + 0x35);
        fVar19 = *(float *)((long)param_5 + 0x194);
        fVar17 = *(float *)(param_5 + 0x33);
        fVar14 = *(float *)((long)param_5 + 0x1ac);
        fVar8 = *(float *)(param_5 + 0x36);
        fVar12 = *(float *)((long)param_5 + 0x19c);
        fVar6 = *(float *)(param_5 + 0x34);
        fVar15 = *(float *)((long)param_5 + 0x1b4);
        fVar9 = *(float *)(param_5 + 0x37);
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                          (fVar3 * fVar4,param_2 * fVar5,param_3 * fVar10,param_4 * fVar11,0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                          (fVar3 * fVar18,param_2 * fVar16,param_3 * fVar19,param_4 * fVar17,0);
      }
      else {
        lVar2 = param_5[0x38];
        if (lVar2 == 0) goto LAB_043bd1ec;
        fVar4 = *(float *)(lVar2 + 0x1c);
        fVar10 = *(float *)(lVar2 + 0x20);
        fVar16 = *(float *)(lVar2 + 0x24);
        fVar17 = *(float *)(lVar2 + 0x28);
        fVar19 = *(float *)(lVar2 + 0x2c);
        fVar18 = *(float *)(lVar2 + 0x30);
        fVar11 = *(float *)(lVar2 + 0x34);
        fVar5 = *(float *)(lVar2 + 0x38);
        fVar12 = *(float *)(lVar2 + 0x3c);
        fVar6 = *(float *)(lVar2 + 0x40);
        fVar13 = *(float *)(lVar2 + 0x44);
        fVar7 = *(float *)(lVar2 + 0x48);
        fVar14 = *(float *)(lVar2 + 0x4c);
        fVar8 = *(float *)(lVar2 + 0x50);
        fVar15 = *(float *)(lVar2 + 0x54);
        fVar9 = *(float *)(lVar2 + 0x58);
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                          (fVar3 * fVar4,param_2 * fVar10,param_3 * fVar16,param_4 * fVar17,0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                          (fVar3 * fVar19,param_2 * fVar18,param_3 * fVar11,param_4 * fVar5,0);
      }
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09182738 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                          (fVar3 * fVar12,param_2 * fVar6,param_3 * fVar13,param_4 * fVar7,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(DAT_09182738 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = ChocDino_UIFX_ColorUtils__IsColorGammaLinearConversionAgnostic
                            (fVar3 * fVar14,param_2 * fVar8,param_3 * fVar15,param_4 * fVar9,0);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
LAB_043bd1ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

