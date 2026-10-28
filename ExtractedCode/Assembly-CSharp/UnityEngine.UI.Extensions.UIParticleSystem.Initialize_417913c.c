// rea decompile_all
// name: UnityEngine.UI.Extensions.UIParticleSystem$$Initialize
// address: 0x417913c
// body: available
// range: 0x417913c-0x4179667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4179664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UnityEngine_UI_Extensions_UIParticleSystem__Initialize(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_38;
  
  if ((DAT_09516618 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5410);
    FUN_03f5c2a4(&DAT_091c5408);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180b58);
    FUN_03f5c2a4(&DAT_0918aa98);
    FUN_03f5c2a4(&DAT_09215b28);
    FUN_03f5c2a4(&DAT_09211450);
    DAT_09516618 = 1;
  }
  local_38 = 0;
  lVar8 = param_1[0x1c];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if ((uVar4 & 1) != 0) {
    lVar8 = UnityEngine_Component__get_transform(param_1,0);
    param_1[0x1c] = lVar8;
    thunk_FUN_03f5d7b8(param_1 + 0x1c,lVar8);
  }
  plVar7 = param_1 + 0x1d;
  lVar8 = *plVar7;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if ((uVar4 & 1) != 0) {
    lVar8 = FUN_04a6a14c(param_1,DAT_091c5408);
    param_1[0x1d] = lVar8;
    thunk_FUN_03f5d7b8(plVar7,lVar8);
    lVar8 = param_1[0x1d];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*plVar7 == 0) goto LAB_04179664;
    lVar8 = UnityEngine_ParticleSystem__get_main(*plVar7,0);
    param_1[0x29] = lVar8;
    thunk_FUN_03f5d7b8(param_1 + 0x29,0);
    if (param_1[0x1d] == 0) goto LAB_04179664;
    local_38 = UnityEngine_ParticleSystem__get_main(param_1[0x1d],0);
    iVar1 = UnityEngine_ParticleSystem_MainModule__get_maxParticles(&local_38,0);
    if (14000 < iVar1) {
      UnityEngine_ParticleSystem_MainModule__set_maxParticles(param_1 + 0x29,14000,0);
    }
    if (*plVar7 == 0) goto LAB_04179664;
    lVar8 = FUN_04a6a14c(*plVar7,DAT_091c5410);
    param_1[0x25] = lVar8;
    thunk_FUN_03f5d7b8(param_1 + 0x25,lVar8);
    lVar8 = param_1[0x25];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (param_1[0x25] == 0) goto LAB_04179664;
      UnityEngine_Renderer__set_enabled(param_1[0x25],0,0);
    }
    uVar5 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_0918aa98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_UI_Extensions_ShaderLibrary__GetShaderInstance(DAT_09211450);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) != 0) {
        uVar6 = thunk_FUN_03f9944c(DAT_09187e28);
        UnityEngine_Material___ctor(uVar6,uVar5,0);
        (**(code **)(*param_1 + 0x348))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x350));
      }
    }
    lVar8 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    param_1[0x27] = lVar8;
    thunk_FUN_03f5d7b8(param_1 + 0x27,lVar8);
    lVar8 = param_1[0x27];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
    if ((uVar4 & 1) != 0) {
      if (param_1[0x27] == 0) goto LAB_04179664;
      uVar4 = UnityEngine_Material__HasProperty(param_1[0x27],DAT_09215b28,0);
      if ((uVar4 & 1) != 0) {
        if (param_1[0x27] == 0) goto LAB_04179664;
        lVar8 = UnityEngine_Material__get_mainTexture(param_1[0x27],0);
        param_1[0x28] = lVar8;
        thunk_FUN_03f5d7b8(param_1 + 0x28,lVar8);
        lVar8 = param_1[0x28];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Equality(lVar8,0,0);
        if ((uVar4 & 1) != 0) {
          lVar8 = UnityEngine_Texture2D__get_whiteTexture(0);
          param_1[0x28] = lVar8;
          thunk_FUN_03f5d7b8(param_1 + 0x28,lVar8);
        }
      }
    }
    (**(code **)(*param_1 + 0x348))(param_1,param_1[0x27],*(undefined8 *)(*param_1 + 0x350));
    UnityEngine_ParticleSystem_MainModule__set_scalingMode(param_1 + 0x29,0,0);
    param_1[0x1e] = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x1e,0);
  }
  plVar9 = param_1 + 0x1e;
  if (*plVar9 == 0) {
    if (*plVar7 == 0) goto LAB_04179664;
    local_38 = UnityEngine_ParticleSystem__get_main(*plVar7,0);
    uVar2 = UnityEngine_ParticleSystem_MainModule__get_maxParticles(&local_38,0);
    lVar8 = FUN_03f5c394(DAT_09180b58,uVar2);
    *plVar9 = lVar8;
    thunk_FUN_03f5d7b8(plVar9,lVar8);
  }
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x20] = 0;
  if (param_1[0x1d] != 0) {
    lVar8 = UnityEngine_ParticleSystem__get_textureSheetAnimation(param_1[0x1d],0);
    param_1[0x22] = lVar8;
    thunk_FUN_03f5d7b8(param_1 + 0x22,0);
    *(undefined4 *)(param_1 + 0x23) = 0;
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    *(undefined8 *)((long)param_1 + 0x11c) = **(undefined8 **)(DAT_0918cb68 + 0xb8);
    uVar4 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_enabled(param_1 + 0x22,0);
    if ((uVar4 & 1) != 0) {
      iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                        (param_1 + 0x22,0);
      iVar3 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesY
                        (param_1 + 0x22,0);
      *(int *)(param_1 + 0x23) = iVar3 * iVar1;
      iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesX
                        (param_1 + 0x22,0);
      iVar3 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_numTilesY
                        (param_1 + 0x22,0);
      *(float *)((long)param_1 + 0x11c) = 1.0 / (float)iVar1;
      *(float *)(param_1 + 0x24) = 1.0 / (float)iVar3;
    }
    return 1;
  }
LAB_04179664:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

