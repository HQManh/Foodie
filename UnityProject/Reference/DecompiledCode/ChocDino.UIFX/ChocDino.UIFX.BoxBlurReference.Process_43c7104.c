// rea decompile_all
// name: ChocDino.UIFX.BoxBlurReference$$Process
// address: 0x43c7104
// body: available
// range: 0x43c7104-0x43c73fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c73f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_BoxBlurReference__Process(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  float fVar15;
  
  if ((DAT_09517bb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517bb8 = 1;
  }
  fVar15 = (float)ChocDino_UIFX_BoxBlurReference__GetScaledRadius(param_1);
  if (fVar15 <= 0.0) {
    ChocDino_UIFX_BoxBlurReference__FreeTextures(param_1);
  }
  else {
    uVar4 = UnityEngine_RenderTexture__GetActive(0);
    ChocDino_UIFX_BoxBlurReference__SetupResources(param_1,param_2);
    if (*(char *)(param_1 + 0x44) != '\0') {
      ChocDino_UIFX_BoxBlurReference__UpdateMaterial(param_1);
    }
    param_2 = *(long *)(param_1 + 0x28);
    fVar15 = (float)ChocDino_UIFX_BoxBlurReference__GetScaledRadius(param_1);
    if (fVar15 <= 0.0) {
      ChocDino_UIFX_BoxBlurReference__FreeTextures(param_1);
    }
    else {
      iVar3 = ChocDino_UIFX_BoxBlurReference__GetDownsampleFactor(param_1);
      if (1 < iVar3) {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Graphics__Blit(param_2,uVar13,0);
        if (*(long *)(param_1 + 0x38) == 0) {
LAB_043c73f8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x38),0);
        param_2 = *(long *)(param_1 + 0x38);
      }
      if ((*(char *)(param_1 + 0x10) == '\0') ||
         (fVar15 = (float)ChocDino_UIFX_BoxBlurReference__GetScaledRadius(param_1),
         fVar15 == (float)(int)fVar15)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (0 < *(int *)(param_1 + 0x14)) {
        uVar14 = 0;
        uVar8 = 2;
        if (!bVar2) {
          uVar8 = 0;
        }
        uVar6 = 3;
        lVar10 = param_2;
        if (!bVar2) {
          uVar6 = 1;
        }
        do {
          iVar3 = *(int *)(param_1 + 0x40);
          if (iVar3 == 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x30);
            uVar11 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Graphics__Blit(lVar10,uVar13,uVar11,uVar8,0);
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_043c73f8;
            UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x30),0);
            uVar13 = *(undefined8 *)(param_1 + 0x30);
            uVar11 = *(undefined8 *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Graphics__Blit(uVar13,uVar11,uVar12,uVar6,0);
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_043c73f8;
            UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x38),0);
            param_2 = *(long *)(param_1 + 0x38);
          }
          else {
            uVar7 = 2;
            if (iVar3 != 1) {
              uVar7 = 3;
            }
            if (!bVar2) {
              uVar7 = iVar3 != 1;
            }
            lVar1 = 0x30;
            if ((uVar14 & 1) != 0) {
              lVar1 = 0x38;
            }
            uVar13 = *(undefined8 *)(param_1 + 0x20);
            param_2 = *(long *)(param_1 + lVar1);
            if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Graphics__Blit(lVar10,param_2,uVar13,uVar7,0);
            if (param_2 == 0) goto LAB_043c73f8;
            UnityEngine_Texture__IncrementUpdateCount(param_2,0);
          }
          uVar14 = uVar14 + 1;
          lVar10 = param_2;
        } while ((int)uVar14 < *(int *)(param_1 + 0x14));
      }
      puVar9 = (undefined8 *)(param_1 + 0x30);
      uVar13 = *puVar9;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(param_2,uVar13,0);
      if ((uVar5 & 1) != 0) {
        puVar9 = (undefined8 *)(param_1 + 0x38);
      }
      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar9,0);
    }
    UnityEngine_RenderTexture__set_active(uVar4,0);
  }
  return param_2;
}

