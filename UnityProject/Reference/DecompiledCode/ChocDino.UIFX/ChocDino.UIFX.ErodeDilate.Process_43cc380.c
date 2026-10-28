// rea decompile_all
// name: ChocDino.UIFX.ErodeDilate$$Process
// address: 0x43cc380
// body: available
// range: 0x43cc380-0x43cc65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cc65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_ErodeDilate__Process(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long local_78;
  
  if ((DAT_09517bfd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517bfd = 1;
  }
  local_78 = 0;
  if ((0.0 < *(float *)(param_1 + 0x10)) || (0.0 < *(float *)(param_1 + 0x14))) {
    uVar4 = UnityEngine_RenderTexture__GetActive(0);
    ChocDino_UIFX_ErodeDilate__SetupResources(param_1,param_2);
    if (*(char *)(param_1 + 0x48) != '\0') {
      ChocDino_UIFX_ErodeDilate__UpdateMaterials(param_1);
    }
    lVar8 = *(long *)(param_1 + 0x38);
    local_78 = 0;
    plVar7 = (long *)(param_1 + 0x40);
    *plVar7 = lVar8;
    thunk_FUN_03f5d7b8(plVar7,lVar8);
    if (*(char *)(param_1 + 0x1c) != '\0') {
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) {
LAB_043cc65c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) goto LAB_043cc65c;
      uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_043cc65c;
      uVar3 = UnityEngine_RenderTexture__get_format(*(long *)(param_1 + 0x28),0);
      lVar8 = UnityEngine_RenderTexture__GetTemporary(uVar1,uVar2,0,uVar3,1,0);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      local_78 = lVar8;
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Graphics__Blit(uVar12,lVar8,uVar9,5,0);
      if (lVar8 == 0) goto LAB_043cc65c;
      UnityEngine_Texture__IncrementUpdateCount(lVar8,0);
    }
    fVar16 = *(float *)(param_1 + 0x10);
    fVar17 = *(float *)(param_1 + 0x14);
    if (*(char *)(param_1 + 0x1d) == '\0') {
      ChocDino_UIFX_ErodeDilate__DoPass(fVar17,fVar16,param_1,lVar8,*(undefined8 *)(param_1 + 0x28))
      ;
    }
    else {
      fVar14 = fVar16;
      if (fVar16 <= fVar17) {
        fVar14 = fVar17;
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (((float)(int)(fVar14 * 0.25) != INFINITY) && (iVar11 = (int)(fVar14 * 0.25), 0 < iVar11))
      {
        iVar13 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Equality(lVar8,lVar10,0);
          if ((uVar6 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x30);
          }
          uVar1 = NEON_fminnm(fVar17,0x40800000);
          uVar2 = NEON_fminnm(fVar16,0x40800000);
          ChocDino_UIFX_ErodeDilate__DoPass(uVar1,uVar2,param_1,lVar8,lVar10);
          fVar14 = fVar17 + -4.0;
          fVar15 = fVar16 + -4.0;
          iVar13 = iVar13 + 1;
          fVar17 = 0.0;
          if (0.0 <= fVar14) {
            fVar17 = fVar14;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar15) {
            fVar16 = fVar15;
          }
          lVar8 = lVar10;
        } while (iVar13 < iVar11);
      }
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(&local_78,0);
    UnityEngine_RenderTexture__set_active(uVar4,0);
    param_2 = *plVar7;
  }
  else {
    ChocDino_UIFX_ErodeDilate__FreeTextures(param_1);
  }
  return param_2;
}

