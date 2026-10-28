// rea decompile_all
// name: Utilities.UIScrollSnap$$SnapToPanel
// address: 0x452e410
// body: available
// range: 0x452e410-0x452e75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452e67c to 0x648199c FUN_0648199c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452e758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452e75c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__SnapToPanel
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_0951862b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091be1a8);
    DAT_0951862b = 1;
  }
  if ((*(int *)(param_5 + 0x20) == 1) || (fVar8 = 0.0, *(int *)(param_5 + 0x24) == 0)) {
    fVar8 = param_3;
    lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x40) == 0)) goto LAB_0452e758;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x40),0);
    param_3 = fVar8;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar8 = fVar8 * 0.5;
    if (*(int *)(param_5 + 0x20) != 1) goto LAB_0452e4b4;
LAB_0452e4c4:
    lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x40) == 0)) goto LAB_0452e758;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x40),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = param_4 * 0.5;
  }
  else {
LAB_0452e4b4:
    fVar9 = 0.0;
    if (*(int *)(param_5 + 0x24) == 1) goto LAB_0452e4c4;
  }
  lVar2 = *(long *)(param_5 + 0xf0);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_5 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_5 + 0x104) * 8 + 0x20);
    if (lVar2 != 0) {
      fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      fVar8 = fVar8 - fVar4;
      fVar9 = fVar9 - param_2;
      if (*(int *)(param_5 + 0x20) == 0) {
        iVar1 = *(int *)(param_5 + 0x24);
        lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
        if (iVar1 == 0) {
          if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452e758;
          UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar2 + 0x20),0);
          fVar9 = param_2;
        }
        else {
          if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452e758;
          fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar2 + 0x20),0);
        }
      }
      iVar1 = *(int *)(param_5 + 0xc4);
      lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if (iVar1 < 0) {
        if (lVar2 == 0) goto LAB_0452e758;
        lVar3 = *(long *)(lVar2 + 0x20);
        lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452e758;
        fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar2 + 0x20),0);
        if (*(char *)(param_5 + 0x8d) == '\0') {
          fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
        }
        else {
          fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime();
        }
        if (lVar3 == 0) goto LAB_0452e758;
        fVar5 = fVar5 * *(float *)(param_5 + 0x80);
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar5) {
          fVar7 = fVar6;
        }
        param_3 = (fVar8 - fVar4) * fVar7;
        fVar9 = param_2 + (fVar9 - param_2) * fVar7;
        UnityEngine_RectTransform__set_anchoredPosition(fVar4 + param_3,lVar3,0);
      }
      else {
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452e758;
        UnityEngine_RectTransform__set_anchoredPosition(fVar8,*(long *)(lVar2 + 0x20),0);
        *(undefined4 *)(param_5 + 0xc4) = 0xffffffff;
      }
      iVar1 = *(int *)(param_5 + 0x100);
      if (iVar1 == *(int *)(param_5 + 0x104)) {
        if (*(long *)(param_5 + 0xe0) != 0) {
          FUN_0648199c(*(long *)(param_5 + 0xe0),iVar1,iVar1,DAT_091be1a8);
          return;
        }
      }
      else {
        fVar8 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter
                                 (param_5,*(int *)(param_5 + 0x104));
        if (DAT_09516ea4 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09516ea4 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) {
          UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x40),0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (SQRT(fVar8 * fVar8 + fVar9 * fVar9) < param_3 * *(float *)(param_5 + 0x88)) {
            if (*(long *)(param_5 + 0xe8) == 0) goto LAB_0452e758;
            FUN_0648199c(*(long *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0x104),
                         *(undefined4 *)(param_5 + 0x100),DAT_091be1a8);
            *(undefined4 *)(param_5 + 0x100) = *(undefined4 *)(param_5 + 0x104);
          }
          return;
        }
      }
    }
  }
LAB_0452e758:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

