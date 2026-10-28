// rea decompile_all
// name: ChocDino.UIFX.GaussianBlurReference$$Process
// address: 0x43c7c24
// body: available
// range: 0x43c7c24-0x43c7e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c7e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_GaussianBlurReference__Process(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_09517bc1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517bc1 = 1;
  }
  fVar8 = *(float *)(param_1 + 0x14);
  iVar1 = ChocDino_UIFX_GaussianBlurReference__GetDownsampleFactor(param_1);
  if (fVar8 / (float)iVar1 <= 0.0) {
    ChocDino_UIFX_GaussianBlurReference__FreeTextures(param_1);
  }
  else {
    uVar2 = UnityEngine_RenderTexture__GetActive(0);
    ChocDino_UIFX_GaussianBlurReference__SetupResources(param_1,param_2);
    if (*(char *)(param_1 + 0x48) != '\0') {
      ChocDino_UIFX_GaussianBlurReference__UpdateKernel(param_1);
    }
    if (*(char *)(param_1 + 0x49) != '\0') {
      ChocDino_UIFX_GaussianBlurReference__UpdateMaterial(param_1);
    }
    param_2 = *(long *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x14);
    iVar1 = ChocDino_UIFX_GaussianBlurReference__GetDownsampleFactor(param_1);
    if (fVar8 / (float)iVar1 <= 0.0) {
      ChocDino_UIFX_GaussianBlurReference__FreeTextures(param_1);
    }
    else {
      iVar1 = ChocDino_UIFX_GaussianBlurReference__GetDownsampleFactor(param_1);
      lVar4 = param_2;
      if (1 < iVar1) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Graphics__Blit(param_2,uVar7,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_043c7e8c;
        UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x30),0);
        lVar4 = *(long *)(param_1 + 0x30);
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Graphics__Blit(lVar4,uVar7,uVar6,0,0);
        if (*(long *)(param_1 + 0x28) == 0) {
LAB_043c7e8c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x28),0);
        UnityEngine_Graphics__Blit
                  (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x18),1,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_043c7e8c;
        UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x30),0);
        param_2 = *(long *)(param_1 + 0x30);
      }
      else {
        param_2 = *(long *)(param_1 + 0x28);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Graphics__Blit(lVar4,param_2,uVar7,iVar1 != 1,0);
        if (param_2 == 0) goto LAB_043c7e8c;
        UnityEngine_Texture__IncrementUpdateCount(param_2,0);
      }
      puVar5 = (undefined8 *)(param_1 + 0x28);
      uVar7 = *puVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(param_2,uVar7,0);
      if ((uVar3 & 1) != 0) {
        puVar5 = (undefined8 *)(param_1 + 0x30);
      }
      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar5,0);
    }
    UnityEngine_RenderTexture__set_active(uVar2,0);
  }
  return param_2;
}

