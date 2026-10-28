// rea decompile_all
// name: AllIn1SpriteShader.SetAtlasUvs$$GetAndSetUVs
// address: 0x4052704
// body: available
// range: 0x4052704-0x4052ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4052ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AllIn1SpriteShader_SetAtlasUvs__GetAndSetUVs
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  
  if ((DAT_09515b20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09515b20 = 1;
  }
  uVar2 = AllIn1SpriteShader_SetAtlasUvs__GetRendererReferencesIfNeeded(param_5);
  if ((uVar2 & 1) == 0) goto LAB_04052b84;
  if (*(char *)(param_5 + 0x40) == '\0') {
    if ((*(long *)(param_5 + 0x30) == 0) ||
       (lVar7 = UnityEngine_SpriteRenderer__get_sprite(*(long *)(param_5 + 0x30),0), lVar7 == 0))
    goto LAB_04052ba4;
    fVar10 = (float)UnityEngine_Sprite__GetTextureRect(lVar7,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0);
    if (plVar8 == (long *)0x0) goto LAB_04052ba4;
    iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0);
    if (plVar8 == (long *)0x0) goto LAB_04052ba4;
    iVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0);
    if (plVar8 == (long *)0x0) goto LAB_04052ba4;
    iVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0);
    if (plVar8 == (long *)0x0) goto LAB_04052ba4;
    fVar10 = fVar10 / (float)iVar3;
    param_2 = param_2 / (float)iVar5;
    iVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    if (*(char *)(param_5 + 0x21) == '\0') {
LAB_04052ad4:
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_04052ba4;
      lVar7 = UnityEngine_Renderer__GetSharedMaterial(*(long *)(param_5 + 0x28),0);
      uVar1 = *(undefined4 *)(param_5 + 0x44);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189c30);
      }
      if (lVar7 == 0) goto LAB_04052ba4;
      UnityEngine_Material__SetFloat(fVar10,lVar7,uVar1,0);
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Renderer__GetSharedMaterial(*(long *)(param_5 + 0x28),0), lVar7 == 0))
      goto LAB_04052ba4;
      UnityEngine_Material__SetFloat
                (fVar10 + param_3 / (float)iVar4,lVar7,*(undefined4 *)(param_5 + 0x48),0);
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Renderer__GetSharedMaterial(*(long *)(param_5 + 0x28),0), lVar7 == 0))
      goto LAB_04052ba4;
      UnityEngine_Material__SetFloat(param_2,lVar7,*(undefined4 *)(param_5 + 0x4c),0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_04052ba4;
      lVar7 = UnityEngine_Renderer__GetSharedMaterial(*(long *)(param_5 + 0x28),0);
    }
    else {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Application__get_isPlaying(0);
      if ((uVar9 & 1) == 0) goto LAB_04052ad4;
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_04052ba4;
      lVar7 = UnityEngine_Renderer__GetMaterial(*(long *)(param_5 + 0x28),0);
      uVar1 = *(undefined4 *)(param_5 + 0x44);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189c30);
      }
      if (lVar7 == 0) goto LAB_04052ba4;
      UnityEngine_Material__SetFloat(fVar10,lVar7,uVar1,0);
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Renderer__GetMaterial(*(long *)(param_5 + 0x28),0), lVar7 == 0))
      goto LAB_04052ba4;
      UnityEngine_Material__SetFloat
                (fVar10 + param_3 / (float)iVar4,lVar7,*(undefined4 *)(param_5 + 0x48),0);
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Renderer__GetMaterial(*(long *)(param_5 + 0x28),0), lVar7 == 0))
      goto LAB_04052ba4;
      UnityEngine_Material__SetFloat(param_2,lVar7,*(undefined4 *)(param_5 + 0x4c),0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_04052ba4;
      lVar7 = UnityEngine_Renderer__GetMaterial(*(long *)(param_5 + 0x28),0);
    }
    if (lVar7 == 0) {
LAB_04052ba4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_2 = param_2 + param_4 / (float)iVar3;
  }
  else {
    if ((*(long *)(param_5 + 0x38) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0xd8), lVar7 == 0)) goto LAB_04052ba4;
    fVar10 = (float)UnityEngine_Sprite__GetTextureRect(lVar7,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (((*(long *)(param_5 + 0x38) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0xd8), lVar7 == 0)) ||
       (plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0), plVar8 == (long *)0x0))
    goto LAB_04052ba4;
    iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (((*(long *)(param_5 + 0x38) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0xd8), lVar7 == 0)) ||
       (plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0), plVar8 == (long *)0x0))
    goto LAB_04052ba4;
    iVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (((*(long *)(param_5 + 0x38) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0xd8), lVar7 == 0)) ||
       (plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0), plVar8 == (long *)0x0))
    goto LAB_04052ba4;
    iVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    if (((*(long *)(param_5 + 0x38) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0xd8), lVar7 == 0)) ||
       (plVar8 = (long *)UnityEngine_Sprite__get_texture(lVar7,0), plVar8 == (long *)0x0))
    goto LAB_04052ba4;
    iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    plVar8 = *(long **)(param_5 + 0x38);
    if ((plVar8 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340)), lVar7 == 0)
       ) goto LAB_04052ba4;
    UnityEngine_Material__SetFloat(fVar10 / (float)iVar3,lVar7,*(undefined4 *)(param_5 + 0x44),0);
    plVar8 = *(long **)(param_5 + 0x38);
    if ((plVar8 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340)), lVar7 == 0)
       ) goto LAB_04052ba4;
    UnityEngine_Material__SetFloat
              (fVar10 / (float)iVar3 + param_3 / (float)iVar4,lVar7,*(undefined4 *)(param_5 + 0x48),
               0);
    plVar8 = *(long **)(param_5 + 0x38);
    if ((plVar8 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340)), lVar7 == 0)
       ) goto LAB_04052ba4;
    UnityEngine_Material__SetFloat(param_2 / (float)iVar5,lVar7,*(undefined4 *)(param_5 + 0x4c),0);
    plVar8 = *(long **)(param_5 + 0x38);
    if ((plVar8 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340)), lVar7 == 0)
       ) goto LAB_04052ba4;
    param_2 = param_2 / (float)iVar5 + param_4 / (float)iVar6;
  }
  UnityEngine_Material__SetFloat(param_2,lVar7,*(undefined4 *)(param_5 + 0x50),0);
LAB_04052b84:
  return uVar2 & 1;
}

