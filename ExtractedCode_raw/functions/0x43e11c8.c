// rea decompile_all
// name: ChocDino.UIFX.MipmapFilter$$RenderFilters
// address: 0x43e11c8
// body: available
// range: 0x43e11c8-0x43e14a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e14a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_MipmapFilter__RenderFilters(long param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if ((DAT_09517d28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc00);
    DAT_09517d28 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x1d0);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar8 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x1d0);
    if (plVar9 == (long *)0x0) goto LAB_043e14a0;
    iVar3 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (param_2 == (long *)0x0) goto LAB_043e14a0;
    iVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (iVar3 == iVar4) {
      plVar9 = *(long **)(param_1 + 0x1d0);
      if (plVar9 == (long *)0x0) goto LAB_043e14a0;
      iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      iVar4 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      if (iVar3 == iVar4) {
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043e14a0;
        iVar3 = UnityEngine_RenderTexture__get_format(*(long *)(param_1 + 0x1d0),0);
        iVar4 = UnityEngine_RenderTexture__get_format(param_2,0);
        if (iVar3 == iVar4) {
          if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043e14a0;
          bVar2 = UnityEngine_RenderTexture__get_autoGenerateMips(*(long *)(param_1 + 0x1d0),0);
          if (*(byte *)(param_1 + 0x1c2) == (bVar2 & 1)) goto LAB_043e130c;
        }
      }
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x1d0,0);
  }
LAB_043e130c:
  uVar10 = *(undefined8 *)(param_1 + 0x1d0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar8 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_043e14a0;
    uVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar6 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    uVar7 = UnityEngine_RenderTexture__get_format(param_2,0);
    UnityEngine_RenderTextureDescriptor___ctor(&local_70,uVar5,uVar6,uVar7,0,0);
    cVar1 = *(char *)(param_1 + 0x1c2);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      if (*(int *)(DAT_0918bc00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = **(undefined4 **)(DAT_0918bc00 + 0xb8);
    }
    local_60 = CONCAT44(local_60._4_4_,uVar5);
    UnityEngine_RenderTextureDescriptor__set_autoGenerateMips(&local_70,cVar1 != '\0',0);
    UnityEngine_RenderTextureDescriptor__set_useMipMap(&local_70,cVar1 != '\0',0);
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    uStack_98 = uStack_58;
    uStack_a0 = local_60;
    uStack_88 = uStack_48;
    local_90 = local_50;
    local_80 = local_40;
    uVar10 = UnityEngine_RenderTexture__GetTemporary(&local_b0,0);
    *(undefined8 *)(param_1 + 0x1d0) = uVar10;
    thunk_FUN_03f5d7b8(param_1 + 0x1d0,uVar10);
    if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043e14a0;
    UnityEngine_Texture__set_filterMode(*(long *)(param_1 + 0x1d0),2,0);
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    UnityEngine_Texture__set_anisoLevel
              (*(long *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1c8),0);
    if (*(char *)(param_1 + 0x1c2) != '\0') {
      if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043e14a0;
      UnityEngine_Texture__set_mipMapBias
                (*(undefined4 *)(param_1 + 0x1c4),*(long *)(param_1 + 0x1d0),0);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x1d0);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Graphics__Blit(param_2,uVar10,0);
    return *(undefined8 *)(param_1 + 0x1d0);
  }
LAB_043e14a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

