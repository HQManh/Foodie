// rea decompile_all
// name: IapAdsSystem.UIAdBannerSafeArea$$ApplyOffset
// address: 0x732b900
// body: available
// range: 0x732b900-0x732bc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732bc8c to 0x866b874 UnityEngine.RectTransform$$set_offsetMax (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x732bc90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_UIAdBannerSafeArea__ApplyOffset
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09520602 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c320);
    DAT_09520602 = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  if (iVar1 < 1) {
    return;
  }
  if (iVar2 < 1) {
    return;
  }
  fVar7 = (float)UnityEngine_Screen__get_safeArea(0);
  *(float *)(param_5 + 0x4c) = fVar7;
  *(float *)(param_5 + 0x50) = param_2;
  *(float *)(param_5 + 0x54) = param_3;
  *(float *)(param_5 + 0x58) = param_4;
  uVar3 = UnityEngine_Screen__get_width(0);
  lVar4 = UnityEngine_Screen__get_height(0);
  lVar6 = DAT_09188ad0;
  uVar5 = *(undefined8 *)(param_5 + 0x40);
  *(ulong *)(param_5 + 0x5c) = uVar3 & 0xffffffff | lVar4 << 0x20;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  fVar8 = 1.0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_0732bc90;
    fVar8 = (float)UnityEngine_Canvas__get_scaleFactor(*(long *)(param_5 + 0x40),0);
  }
  fVar12 = (float)iVar2;
  *(float *)(param_5 + 100) = fVar8;
  if (*(char *)(param_5 + 0x20) == '\0') {
    fVar13 = 0.0;
  }
  else {
    fVar13 = param_2;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  fVar9 = fVar8 * *(float *)(param_5 + 0x24);
  if (fVar13 <= fVar9) {
    fVar13 = fVar9;
  }
  fVar13 = fVar13 / fVar12;
  if (0.0 < *(float *)(param_5 + 0x48)) {
    if (*(int *)(DAT_0918c320 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = (float)IapAdsSystem_UIAdBannerSafeArea__GetBannerBaselineNormalized();
    fVar9 = fVar9 + *(float *)(param_5 + 0x48) / fVar12;
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
  }
  fVar9 = 0.0;
  fVar11 = 0.0;
  if ((*(char *)(param_5 + 0x22) != '\0') && (fVar11 = fVar7, *(int *)(DAT_09189c30 + 0xe4) == 0)) {
    FUN_03f5c424();
  }
  fVar14 = (float)iVar1;
  fVar10 = fVar8 * *(float *)(param_5 + 0x2c);
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  if (*(char *)(param_5 + 0x23) != '\0') {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = fVar14 - (param_3 + fVar7);
  }
  fVar7 = fVar8 * *(float *)(param_5 + 0x30);
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
  }
  if (*(char *)(param_5 + 0x21) == '\0') {
    fVar7 = 0.0;
  }
  else {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = fVar12 - (param_4 + param_2);
  }
  fVar8 = fVar8 * *(float *)(param_5 + 0x28);
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    fVar7 = 1.0 - fVar7 / fVar12;
    if (fVar7 <= fVar13) {
      fVar13 = fVar7;
    }
    UnityEngine_RectTransform__set_anchorMin(fVar11 / fVar14,fVar13,*(long *)(param_5 + 0x38),0);
    if (*(long *)(param_5 + 0x38) != 0) {
      UnityEngine_RectTransform__set_anchorMax
                (1.0 - fVar9 / fVar14,fVar7,*(long *)(param_5 + 0x38),0);
      lVar6 = *(long *)(param_5 + 0x38);
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      if (lVar6 != 0) {
        UnityEngine_RectTransform__set_offsetMin
                  (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1]
                   ,lVar6,0);
        lVar6 = *(long *)(param_5 + 0x38);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        if (lVar6 != 0) {
          UnityEngine_RectTransform__set_offsetMax
                    (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                     (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],lVar6,0);
          return;
        }
      }
    }
  }
LAB_0732bc90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

