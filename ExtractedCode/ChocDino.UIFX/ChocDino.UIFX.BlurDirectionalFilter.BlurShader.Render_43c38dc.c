// rea decompile_all
// name: ChocDino.UIFX.BlurDirectionalFilter.BlurShader$$Render
// address: 0x43c38dc
// body: available
// range: 0x43c38dc-0x43c3cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c3cd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_BlurDirectionalFilter_BlurShader__Render
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,long param_6,long *param_7,uint param_8,int param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((DAT_09517b90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09196428);
    FUN_03f5c2a4(&DAT_092117b0);
    FUN_03f5c2a4(&DAT_091ffc80);
    DAT_09517b90 = 1;
  }
  if (param_7 == (long *)0x0) goto LAB_043c3cd8;
  iVar3 = (**(code **)(*param_7 + 0x188))(param_7,*(undefined8 *)(*param_7 + 400));
  iVar4 = (**(code **)(*param_7 + 0x1a8))(param_7,*(undefined8 *)(*param_7 + 0x1b0));
  plVar10 = (long *)(param_6 + 0x10);
  lVar11 = *plVar10;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar11,0,0);
  if ((uVar7 & 1) != 0) {
    plVar8 = (long *)*plVar10;
    if (plVar8 == (long *)0x0) goto LAB_043c3cd8;
    iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (iVar5 == iVar3) {
      plVar8 = (long *)*plVar10;
      if (plVar8 == (long *)0x0) goto LAB_043c3cd8;
      iVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      if (iVar5 == iVar4) goto LAB_043c3a28;
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar10,0);
  }
LAB_043c3a28:
  lVar11 = *plVar10;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar11,0,0);
  if ((uVar7 & 1) != 0) {
    uVar6 = UnityEngine_RenderTexture__get_format(param_7,0);
    if (*(int *)(DAT_09184618 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184618);
    }
    uVar9 = *(uint *)(*(long *)(DAT_09184618 + 0xb8) + 4);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(DAT_09184618 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184618);
        uVar9 = *(uint *)(*(long *)(DAT_09184618 + 0xb8) + 4);
      }
      uVar12 = uVar6;
      if ((uVar9 >> 1 & 1) != 0) {
        uVar12 = 2;
        goto LAB_043c3ac0;
      }
    }
    else {
      uVar12 = 7;
LAB_043c3ac0:
      uVar7 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(uVar12,0);
      if ((uVar7 & 1) == 0) {
        uVar12 = uVar6;
      }
    }
    lVar11 = UnityEngine_RenderTexture__GetTemporary(iVar3,iVar4,0,uVar12,1,0);
    *plVar10 = lVar11;
    thunk_FUN_03f5d7b8(plVar10,lVar11);
  }
  ChocDino_UIFX_BlurDirectionalFilter_BlurShader__CreateResources(param_6);
  lVar11 = *(long *)(param_6 + 0x18);
  if (*(int *)(DAT_09196428 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar11 != 0) {
    UnityEngine_Material__SetColorImpl
              (param_2,param_3,0,0,lVar11,**(undefined4 **)(DAT_09196428 + 0xb8),0);
    if (*(long *)(param_6 + 0x18) != 0) {
      UnityEngine_Material__SetFloat
                (param_1,*(long *)(param_6 + 0x18),
                 *(undefined4 *)(*(long *)(DAT_09196428 + 0xb8) + 4),0);
      lVar11 = *(long *)(param_6 + 0x18);
      if (param_5 <= 0.0) {
        if (lVar11 == 0) goto LAB_043c3cd8;
        UnityEngine_Material__DisableKeyword(lVar11,DAT_092117b0,0);
      }
      else {
        if (*(int *)(DAT_09196428 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar11 == 0) goto LAB_043c3cd8;
        UnityEngine_Material__SetFloat
                  (param_5,lVar11,*(undefined4 *)(*(long *)(DAT_09196428 + 0xb8) + 8),0);
        if (*(long *)(param_6 + 0x18) == 0) goto LAB_043c3cd8;
        UnityEngine_Material__EnableKeyword(*(long *)(param_6 + 0x18),DAT_092117b0,0);
      }
      if (param_9 == 1) {
        if (*(long *)(param_6 + 0x18) == 0) goto LAB_043c3cd8;
        UnityEngine_Material__EnableKeyword(*(long *)(param_6 + 0x18),DAT_091ffc80,0);
      }
      else if (param_9 == 0) {
        if (*(long *)(param_6 + 0x18) == 0) goto LAB_043c3cd8;
        UnityEngine_Material__DisableKeyword(*(long *)(param_6 + 0x18),DAT_091ffc80,0);
      }
      if ((param_8 & 1) == 0) {
        lVar11 = *(long *)(param_6 + 0x18);
        if (*(int *)(DAT_09196428 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar11 == 0) goto LAB_043c3cd8;
        UnityEngine_Material__SetFloat
                  (param_4,lVar11,*(undefined4 *)(*(long *)(DAT_09196428 + 0xb8) + 0xc),0);
      }
      uVar1 = *(undefined8 *)(param_6 + 0x10);
      uVar2 = *(undefined8 *)(param_6 + 0x18);
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Graphics__Blit(param_7,uVar1,uVar2,(param_8 ^ 0xffffffff) & 1,0);
      if (*plVar10 != 0) {
        UnityEngine_Texture__IncrementUpdateCount(*plVar10,0);
        return *plVar10;
      }
    }
  }
LAB_043c3cd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

