// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$ResolveToTexture
// address: 0x43bd5e0
// body: available
// range: 0x43bd5e0-0x43bd963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bd960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterStackTextMeshPro__ResolveToTexture(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_48;
  
  if ((DAT_09517b69 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09203f40);
    FUN_03f5c2a4(&DAT_0920be50);
    DAT_09517b69 = 1;
  }
  local_48 = 0;
  if (*(char *)(param_1 + 0xc9) == '\0') goto LAB_043bd944;
  uVar4 = UnityEngine_RenderTexture__GetActive(0);
  ChocDino_UIFX_FilterStackTextMeshPro__RenderToTexture(param_1);
  uVar5 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_043bd960;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_1 + 0x48) == 0) ||
         (plVar7 = *(long **)(*(long *)(param_1 + 0x48) + 0x10), plVar7 == (long *)0x0))
      goto LAB_043bd960;
      iVar1 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_043bd960;
      plVar7 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_043bd960;
      iVar2 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      plVar7 = (long *)(param_1 + 0xd8);
      lVar11 = *plVar7;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = UnityEngine_Shader__Find(DAT_09203f40,0);
        lVar11 = thunk_FUN_03f9944c(DAT_09187e28);
        UnityEngine_Material___ctor(lVar11,uVar5,0);
        *plVar7 = lVar11;
        thunk_FUN_03f5d7b8(plVar7,lVar11);
        if (*plVar7 == 0) goto LAB_043bd960;
        UnityEngine_Object__SetName(*plVar7,DAT_0920be50,0);
      }
      plVar7 = (long *)(param_1 + 0xd0);
      lVar11 = *plVar7;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar11,0);
      if ((uVar6 & 1) != 0) {
        plVar8 = (long *)*plVar7;
        if (plVar8 == (long *)0x0) goto LAB_043bd960;
        iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (iVar3 == iVar1) {
          plVar8 = (long *)*plVar7;
          if (plVar8 == (long *)0x0) goto LAB_043bd960;
          iVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (iVar3 == iVar2) goto LAB_043bd80c;
        }
        ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar7,0);
      }
LAB_043bd80c:
      lVar11 = *plVar7;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar11,0);
      if ((uVar6 & 1) == 0) {
        lVar11 = UnityEngine_RenderTexture__GetTemporary(iVar1,iVar2,0,0,2,0);
        *plVar7 = lVar11;
        thunk_FUN_03f5d7b8(plVar7,lVar11);
        if (*plVar7 == 0) goto LAB_043bd960;
        UnityEngine_Object__SetName(*plVar7,DAT_0920be50,0);
      }
      uVar5 = UnityEngine_RenderTexture__GetTemporary(iVar1,iVar2,0,2,1,0);
      local_48 = uVar5;
      UnityEngine_RenderTexture__set_active(uVar5,0);
      UnityEngine_GL__Clear(0,0,0,0,0,1,0);
      lVar11 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
      if (lVar11 == 0) {
LAB_043bd960:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = UnityEngine_Material__get_mainTexture(lVar11,0);
      uVar10 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184e48);
      }
      UnityEngine_Graphics__Blit(uVar9,uVar5,uVar10,0);
      UnityEngine_Graphics__Blit
                (uVar5,*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),0);
      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(&local_48,0);
      *(undefined1 *)(param_1 + 0xc9) = 0;
    }
  }
  UnityEngine_RenderTexture__set_active(uVar4,0);
LAB_043bd944:
  return *(undefined8 *)(param_1 + 0xd0);
}

