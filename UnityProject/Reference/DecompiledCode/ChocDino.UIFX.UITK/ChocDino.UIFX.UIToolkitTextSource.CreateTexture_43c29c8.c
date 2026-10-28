// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$CreateTexture
// address: 0x43c29c8
// body: available
// range: 0x43c29c8-0x43c2cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c2cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
ChocDino_UIFX_UIToolkitTextSource__CreateTexture(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_09517b8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09211640);
    DAT_09517b8a = 1;
  }
  if (*(long *)(param_3 + 0x188) == 0) {
    iVar5 = 0;
    iVar7 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x1d0) == 0) goto LAB_043c2cf0;
    fVar9 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_3 + 0x1d0),0);
    if ((*(int *)(param_3 + 0x108) != 0) && (*(int *)(param_3 + 0x108) != 3)) {
      plVar6 = *(long **)(param_3 + 0x188);
      if (plVar6 == (long *)0x0) goto LAB_043c2cf0;
      uVar2 = (**(code **)(*plVar6 + 0xe28))(plVar6,*(undefined8 *)(*plVar6 + 0xe30));
      fVar9 = (float)UnityEngine_UIElements_TextElement__MeasureTextSize(fVar9,plVar6,uVar2,0,0,0);
    }
    if (0x7f800000 < (uint)ABS(fVar9)) {
      return 0;
    }
    iVar5 = *(int *)(param_3 + 0x158);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar9 = fVar9 + (float)(iVar5 << 1);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar5 = -0x80000000;
      if ((float)(int)fVar9 != INFINITY) {
        iVar5 = (int)fVar9;
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
    }
    else {
      iVar5 = -0x80000000;
      if ((float)(int)fVar9 != INFINITY) {
        iVar5 = (int)fVar9;
      }
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar7 = -0x80000000;
    if ((float)(int)param_2 != INFINITY) {
      iVar7 = (int)param_2;
    }
  }
  uVar2 = *(undefined8 *)(param_3 + 0x170);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_043c2bdc:
    uVar8 = 0;
  }
  else {
    plVar6 = *(long **)(param_3 + 0x170);
    if (plVar6 == (long *)0x0) goto LAB_043c2cf0;
    iVar1 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (iVar1 == iVar5) {
      plVar6 = *(long **)(param_3 + 0x170);
      if (plVar6 == (long *)0x0) goto LAB_043c2cf0;
      iVar1 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar1 == iVar7) goto LAB_043c2bdc;
    }
    ChocDino_UIFX_UIToolkitTextSource__ReleaseTexture(param_3);
    uVar8 = 1;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x170);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((((uVar3 & 1) == 0) || (iVar5 < 1)) || (iVar7 < 1)) {
    return uVar8;
  }
  uVar2 = UnityEngine_RenderTexture__GetTemporary(iVar5,iVar7,0,7,1,0);
  *(undefined8 *)(param_3 + 0x170) = uVar2;
  thunk_FUN_03f5d7b8(param_3 + 0x170,uVar2);
  if (*(long *)(param_3 + 0x170) != 0) {
    UnityEngine_Object__SetName(*(long *)(param_3 + 0x170),DAT_09211640,0);
    uVar2 = *(undefined8 *)(param_3 + 400);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    if (*(long *)(param_3 + 400) != 0) {
      UnityEngine_UIElements_PanelSettings__set_targetTexture
                (*(long *)(param_3 + 400),*(undefined8 *)(param_3 + 0x170),0);
      lVar4 = *(long *)(param_3 + 400);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x71) = 1;
        *(ulong *)(lVar4 + 0x54) = CONCAT44(iVar7,iVar5);
        return 1;
      }
    }
  }
LAB_043c2cf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

