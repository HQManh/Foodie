// rea decompile_all
// name: ChocDino.UIFX.CameraSource$$CreateTexture
// address: 0x43e2da4
// body: available
// range: 0x43e2da4-0x43e314f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e314c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
ChocDino_UIFX_CameraSource__CreateTexture
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  if ((DAT_09517d46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182320);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517d46 = 1;
  }
  uVar9 = *(undefined8 *)(param_5 + 0xd8);
  iVar11 = **(int **)(DAT_09182320 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar5 & 1) == 0) {
    iVar10 = 0;
    iVar8 = 0;
LAB_043e2f84:
    uVar2 = 1;
  }
  else {
    lVar6 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar6 == 0) goto LAB_043e314c;
    UnityEngine_RectTransform__get_rect(lVar6,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar8 = -0x80000000;
    if ((float)(int)param_3 != INFINITY) {
      iVar8 = (int)param_3;
    }
    lVar6 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar6 == 0) goto LAB_043e314c;
    UnityEngine_RectTransform__get_rect(lVar6,0);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar10 = -0x80000000;
    if ((float)(int)param_4 != INFINITY) {
      iVar10 = (int)param_4;
    }
    if (*(long *)(param_5 + 0xd8) == 0) goto LAB_043e314c;
    uVar5 = UnityEngine_Camera__get_allowHDR(*(long *)(param_5 + 0xd8),0);
    lVar6 = 4;
    if ((uVar5 & 1) == 0) {
      lVar6 = 0;
    }
    if (*(long *)(param_5 + 0xd8) == 0) goto LAB_043e314c;
    iVar11 = *(int *)(*(long *)(DAT_09182320 + 0xb8) + lVar6);
    uVar5 = UnityEngine_Camera__get_allowMSAA(*(long *)(param_5 + 0xd8),0);
    if ((uVar5 & 1) == 0) goto LAB_043e2f84;
    uVar2 = UnityEngine_QualitySettings__get_antiAliasing(0);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  plVar12 = (long *)(param_5 + 0xe0);
  lVar6 = *plVar12;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar5 & 1) == 0) {
LAB_043e3054:
    uVar13 = 0;
  }
  else {
    plVar7 = (long *)*plVar12;
    if (plVar7 == (long *)0x0) goto LAB_043e314c;
    iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (iVar3 == iVar8) {
      plVar7 = (long *)*plVar12;
      if (plVar7 == (long *)0x0) goto LAB_043e314c;
      iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      if (iVar3 == iVar10) {
        if (*plVar12 == 0) goto LAB_043e314c;
        uVar4 = UnityEngine_RenderTexture__get_antiAliasing(*plVar12,0);
        if (uVar4 == uVar2) {
          if (*plVar12 == 0) goto LAB_043e314c;
          iVar3 = UnityEngine_RenderTexture__get_format(*plVar12,0);
          if (iVar3 == iVar11) {
            uVar9 = *(undefined8 *)(param_5 + 0xe8);
            uVar14 = *(undefined8 *)(param_5 + 0xd8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar9,uVar14,0);
            if ((uVar5 & 1) == 0) goto LAB_043e3054;
          }
        }
      }
    }
    ChocDino_UIFX_CameraSource__ReleaseTexture(param_5);
    uVar13 = 1;
  }
  uVar9 = *(undefined8 *)(param_5 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *plVar12;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
    if ((((uVar5 & 1) == 0) && (0 < iVar8)) && (0 < iVar10)) {
      if (*(long *)(param_5 + 0xd8) != 0) {
        bVar1 = UnityEngine_Camera__get_allowDynamicResolution(*(long *)(param_5 + 0xd8),0);
        uVar9 = UnityEngine_RenderTexture__GetTemporary
                          (iVar8,iVar10,0x18,iVar11,2,uVar2,0,0,bVar1 & 1,0);
        *(undefined8 *)(param_5 + 0xe0) = uVar9;
        thunk_FUN_03f5d7b8(plVar12,uVar9);
        plVar7 = (long *)(param_5 + 0xe8);
        *plVar7 = *(long *)(param_5 + 0xd8);
        thunk_FUN_03f5d7b8(plVar7);
        if (*plVar7 != 0) {
          UnityEngine_Camera__set_targetTexture(*plVar7,*plVar12,0);
          return 1;
        }
      }
LAB_043e314c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return uVar13;
}

