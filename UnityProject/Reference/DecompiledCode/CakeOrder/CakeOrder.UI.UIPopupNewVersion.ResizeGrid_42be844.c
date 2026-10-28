// rea decompile_all
// name: CakeOrder.UI.UIPopupNewVersion$$ResizeGrid
// address: 0x42be844
// body: available
// range: 0x42be844-0x42bebd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42beba8 to 0x866c2d0 UnityEngine.RectTransform$$SetSizeWithCurrentAnchors (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42bebd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupNewVersion__ResizeGrid(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 in_s3;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_09517306 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517306 = 1;
  }
  fVar11 = (float)param_2;
  if (param_2 < *(int *)(param_1 + 0x108)) {
    if (param_2 < 2) {
      param_2 = 1;
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
    iVar2 = (int)SQRT(fVar11);
    iVar7 = iVar2;
    if (*(int *)(param_1 + 0x10c) <= iVar2) {
      iVar7 = *(int *)(param_1 + 0x10c);
    }
    param_2 = *(int *)(param_1 + 0x108);
    if (*(int *)(param_1 + 0x108) <= iVar2) {
      param_2 = iVar7;
    }
  }
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  fVar11 = fVar11 / (float)param_2;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar7 = (int)fVar11;
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  if ((float)(int)fVar11 == INFINITY) {
    iVar7 = 1;
  }
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
    fVar11 = *(float *)(lVar8 + 0x68);
    fVar13 = *(float *)(lVar8 + 0x70);
    iVar2 = UnityEngine_RectOffset__get_left(*(long *)(lVar8 + 0x20),0);
    if ((*(long *)(param_1 + 0xf0) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 0x20), lVar8 != 0)) {
      iVar3 = UnityEngine_RectOffset__get_right(lVar8,0);
      lVar8 = *(long *)(param_1 + 0xf0);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        fVar14 = *(float *)(lVar8 + 0x6c);
        fVar15 = *(float *)(lVar8 + 0x74);
        iVar4 = UnityEngine_RectOffset__get_top(*(long *)(lVar8 + 0x20),0);
        if ((*(long *)(param_1 + 0xf0) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 0x20), lVar8 != 0)) {
          iVar5 = UnityEngine_RectOffset__get_bottom(lVar8,0);
          if (*(long *)(param_1 + 0xf0) != 0) {
            UnityEngine_UI_GridLayoutGroup__set_constraintCount(*(long *)(param_1 + 0xf0),param_2,0)
            ;
            if (*(long *)(param_1 + 0xf0) != 0) {
              lVar8 = FUN_04a6a14c(*(long *)(param_1 + 0xf0),DAT_091c5430);
              if (*(char *)(param_1 + 0x128) == '\0') {
                *(undefined1 *)(param_1 + 0x128) = 1;
                if (lVar8 == 0) goto LAB_042bebd4;
                UnityEngine_RectTransform__get_rect(lVar8,0);
                uVar10 = in_s3;
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar1 = DAT_09188ad0;
                uVar9 = *(undefined8 *)(param_1 + 0xe8);
                *(undefined4 *)(param_1 + 300) = in_s3;
                if (*(int *)(lVar1 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
                uVar12 = 0;
                if ((uVar6 & 1) != 0) {
                  if (*(long *)(param_1 + 0xe8) == 0) goto LAB_042bebd4;
                  UnityEngine_RectTransform__get_rect(*(long *)(param_1 + 0xe8),0);
                  uVar12 = uVar10;
                  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                }
                *(undefined4 *)(param_1 + 0x130) = uVar12;
              }
              else if (lVar8 == 0) goto LAB_042bebd4;
              fVar14 = fVar14 * (float)iVar7 + fVar15 * (float)(iVar7 + -1) + (float)iVar4 +
                       (float)iVar5;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                        (fVar11 * (float)param_2 + fVar13 * (float)(param_2 + -1) + (float)iVar2 +
                         (float)iVar3,lVar8,0,0);
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar14,lVar8,1,0);
              uVar9 = *(undefined8 *)(param_1 + 0xe8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
              if ((uVar6 & 1) == 0) {
                return;
              }
              if (*(long *)(param_1 + 0xe8) != 0) {
                fVar14 = fVar14 - *(float *)(param_1 + 300);
                fVar11 = 0.0;
                if (0.0 <= fVar14) {
                  fVar11 = fVar14;
                }
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                          (*(float *)(param_1 + 0x130) + fVar11,*(long *)(param_1 + 0xe8),1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_042bebd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

