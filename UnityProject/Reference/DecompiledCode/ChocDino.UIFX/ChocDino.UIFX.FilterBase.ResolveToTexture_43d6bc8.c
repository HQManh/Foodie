// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$ResolveToTexture
// address: 0x43d6bc8
// body: available
// range: 0x43d6bc8-0x43d6f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d6f54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ChocDino_UIFX_FilterBase__ResolveToTexture(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  if ((DAT_09517c92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09203f40);
    FUN_03f5c2a4(&DAT_0920be50);
    DAT_09517c92 = 1;
  }
  local_48 = 0;
  if ((char)param_1[0x32] == '\0') goto LAB_043d6f38;
  uVar4 = UnityEngine_RenderTexture__GetActive(0);
  uVar5 = (**(code **)(*param_1 + 0x348))(param_1,1,*(undefined8 *)(*param_1 + 0x350));
  if ((uVar5 & 1) == 0) {
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x18,0);
  }
  else {
    lVar9 = param_1[0xe];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar5 & 1) != 0) {
      if (param_1[0xd] == 0) goto LAB_043d6f54;
      uVar10 = *(undefined8 *)(param_1[0xd] + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar5 & 1) != 0) {
        if ((param_1[0xd] == 0) || (plVar6 = *(long **)(param_1[0xd] + 0x10), plVar6 == (long *)0x0)
           ) goto LAB_043d6f54;
        iVar1 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (param_1[0xd] == 0) goto LAB_043d6f54;
        plVar6 = *(long **)(param_1[0xd] + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_043d6f54;
        iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        plVar6 = param_1 + 0x19;
        lVar9 = *plVar6;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar5 & 1) == 0) {
          uVar10 = UnityEngine_Shader__Find(DAT_09203f40,0);
          lVar9 = thunk_FUN_03f9944c(DAT_09187e28);
          UnityEngine_Material___ctor(lVar9,uVar10,0);
          *plVar6 = lVar9;
          thunk_FUN_03f5d7b8(plVar6,lVar9);
          if (*plVar6 == 0) goto LAB_043d6f54;
          UnityEngine_Object__SetName(*plVar6,DAT_0920be50,0);
        }
        plVar6 = param_1 + 0x18;
        lVar9 = *plVar6;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar5 & 1) != 0) {
          plVar7 = (long *)*plVar6;
          if (plVar7 == (long *)0x0) goto LAB_043d6f54;
          iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
          if (iVar3 == iVar1) {
            plVar7 = (long *)*plVar6;
            if (plVar7 == (long *)0x0) goto LAB_043d6f54;
            iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
            if (iVar3 == iVar2) goto LAB_043d6dfc;
          }
          ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar6,0);
        }
LAB_043d6dfc:
        lVar9 = *plVar6;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar5 & 1) == 0) {
          lVar9 = UnityEngine_RenderTexture__GetTemporary(iVar1,iVar2,0,0,2,0);
          *plVar6 = lVar9;
          thunk_FUN_03f5d7b8(plVar6,lVar9);
          if (*plVar6 == 0) goto LAB_043d6f54;
          UnityEngine_Object__SetName(*plVar6,DAT_0920be50,0);
        }
        uVar10 = UnityEngine_RenderTexture__GetTemporary(iVar1,iVar2,0,2,1,0);
        local_48 = uVar10;
        UnityEngine_RenderTexture__set_active(uVar10,0);
        UnityEngine_GL__Clear(0,0,0,0,0,1,0);
        if (param_1[0xe] == 0) {
LAB_043d6f54:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = UnityEngine_Material__get_mainTexture(param_1[0xe],0);
        lVar9 = param_1[0xe];
        if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09184e48);
        }
        UnityEngine_Graphics__Blit(uVar8,uVar10,lVar9,0);
        UnityEngine_Graphics__Blit(uVar10,param_1[0x18],param_1[0x19],0);
        ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(&local_48,0);
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
    }
  }
  UnityEngine_RenderTexture__set_active(uVar4,0);
LAB_043d6f38:
  return param_1[0x18];
}

