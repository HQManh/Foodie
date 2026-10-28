// rea decompile_all
// name: ChocDino.UIFX.ColorAdjust$$SetupResources
// address: 0x43c9768
// body: available
// range: 0x43c9768-0x43c9963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c994c to 0x43ca088 ChocDino.UIFX.ColorAdjust$$CreateShaders (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c9960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorAdjust__SetupResources(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09517bd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517bd5 = 1;
  }
  plVar6 = (long *)(param_1 + 0x70);
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) {
LAB_043c9960:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (param_2 == (long *)0x0) goto LAB_043c9960;
      iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (iVar1 == iVar2) {
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) goto LAB_043c9960;
        iVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
        if (iVar1 == iVar2) goto LAB_043c987c;
      }
    }
    ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x68,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    thunk_FUN_03f5d7b8(plVar6,0);
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
LAB_043c987c:
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
    if ((uVar3 & 1) != 0) {
      ChocDino_UIFX_ColorAdjust__CreateTextures(param_1,param_2);
    }
  }
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar7,param_2,0);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    *(long **)(param_1 + 0x70) = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    ChocDino_UIFX_ColorAdjust__CreateShaders(param_1);
    return;
  }
  return;
}

