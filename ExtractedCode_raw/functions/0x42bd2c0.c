// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$ResizeGrid
// address: 0x42bd2c0
// body: available
// range: 0x42bd2c0-0x42bd597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bd56c to 0x42bd598 CakeOrder.UI.UIPopupListRewardClaimed$$PlaceInCenteredRows (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42bd594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__ResizeGrid(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_095172fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    DAT_095172fc = 1;
  }
  if (param_2 < *(int *)(param_1 + 0xd8)) {
    iVar5 = param_2;
    if (param_2 < 2) {
      iVar5 = 1;
    }
  }
  else {
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = (int)SQRT((float)param_2);
    iVar6 = iVar1;
    if (*(int *)(param_1 + 0xdc) <= iVar1) {
      iVar6 = *(int *)(param_1 + 0xdc);
    }
    iVar5 = *(int *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xd8) <= iVar1) {
      iVar5 = iVar6;
    }
  }
  iVar6 = 1;
  if (1 < param_2) {
    iVar6 = 2;
  }
  iVar1 = 3;
  if (param_2 < 5) {
    iVar1 = iVar6;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    iVar5 = iVar1;
  }
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  fVar8 = (float)param_2 / (float)iVar5;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar6 = (int)fVar8;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  lVar7 = *(long *)(param_1 + 0xc0);
  if ((float)(int)fVar8 == INFINITY) {
    iVar6 = 1;
  }
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
    fVar8 = *(float *)(lVar7 + 0x68);
    fVar9 = *(float *)(lVar7 + 0x70);
    iVar1 = UnityEngine_RectOffset__get_left(*(long *)(lVar7 + 0x20),0);
    if ((*(long *)(param_1 + 0xc0) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20), lVar7 != 0)) {
      iVar2 = UnityEngine_RectOffset__get_right(lVar7,0);
      lVar7 = *(long *)(param_1 + 0xc0);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
        fVar10 = *(float *)(lVar7 + 0x6c);
        fVar11 = *(float *)(lVar7 + 0x74);
        iVar3 = UnityEngine_RectOffset__get_top(*(long *)(lVar7 + 0x20),0);
        if ((*(long *)(param_1 + 0xc0) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20), lVar7 != 0)) {
          iVar4 = UnityEngine_RectOffset__get_bottom(lVar7,0);
          if (*(long *)(param_1 + 0xc0) != 0) {
            UnityEngine_UI_GridLayoutGroup__set_constraintCount(*(long *)(param_1 + 0xc0),iVar5,0);
            if (*(long *)(param_1 + 0xc0) != 0) {
              lVar7 = FUN_04a6a14c(*(long *)(param_1 + 0xc0),DAT_091c5430);
              CakeOrder_UI_UIPopupListRewardClaimed__CaptureBaseHeights(param_1,lVar7);
              if (lVar7 != 0) {
                fVar8 = fVar8 * (float)iVar5 + fVar9 * (float)(iVar5 + -1) + (float)iVar1 +
                        (float)iVar2;
                fVar9 = fVar10 * (float)iVar6 + fVar11 * (float)(iVar6 + -1) + (float)iVar3 +
                        (float)iVar4;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar8,lVar7,0,0);
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar9,lVar7,1,0);
                CakeOrder_UI_UIPopupListRewardClaimed__GrowFramesWithGrid(fVar9,param_1);
                if (*(char *)(param_1 + 0xe0) != '\0') {
                  CakeOrder_UI_UIPopupListRewardClaimed__PlaceInCenteredRows
                            (fVar8,param_1,param_2,iVar5);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

