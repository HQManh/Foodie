// rea decompile_all
// name: CakeOrder.BaseUI.UIScaleDownToFitParent$$Apply
// address: 0x42d9d7c
// body: available
// range: 0x42d9d7c-0x42d9d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIScaleDownToFitParent__Apply
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_58;
  
  if ((DAT_095173f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09187e98);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095173f0 = 1;
  }
  uStack_58 = 0;
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Application__get_isPlaying(0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = (**(code **)(*param_4 + 0x1c8))(param_4,*(undefined8 *)(*param_4 + 0x1d0)),
     (uVar1 & 1) == 0)) {
    return;
  }
  lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
  if (lVar2 == 0) goto LAB_042d9cc8;
  plVar3 = (long *)UnityEngine_Transform__GetParent(lVar2,0);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (*plVar3 != DAT_09189c98) {
    return;
  }
  CakeOrder_BaseUI_UIScaleDownToFitParent__CaptureBase(param_4);
  UnityEngine_RectTransform__get_rect(plVar3,0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_2 = param_2 + *(float *)((long)param_4 + 0x2c);
  fVar4 = (float)CakeOrder_BaseUI_UIScaleDownToFitParent__ReadCeilingY(param_4,plVar3);
  fVar5 = *(float *)(param_4 + 5);
  fVar9 = 0.0;
  fVar4 = fVar4 - fVar5;
  fVar8 = fVar4 - param_2;
  fVar7 = 1.0;
  if ((**(float **)(DAT_09187e98 + 0xb8) < fVar8) &&
     (uVar1 = CakeOrder_BaseUI_UIScaleDownToFitParent__ReadLocalExtent
                        (param_4,(long)&uStack_58 + 4,&uStack_58), fVar7 = 1.0, (uVar1 & 1) != 0)) {
    fVar9 = (float)uStack_58;
    param_3 = uStack_58._4_4_;
    fVar7 = 1.0;
    if (((char)param_4[6] != '\0') && (fVar7 = 1.0, fVar8 < uStack_58._4_4_ - (float)uStack_58)) {
      fVar8 = fVar8 / (uStack_58._4_4_ - (float)uStack_58);
      fVar5 = 1.0;
      if (fVar8 <= 1.0) {
        fVar5 = fVar8;
      }
      fVar7 = *(float *)((long)param_4 + 0x34);
      if (*(float *)((long)param_4 + 0x34) <= fVar8) {
        fVar7 = fVar5;
      }
    }
    lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
    if (lVar2 == 0) goto LAB_042d9cc8;
    UnityEngine_Transform__get_localPosition(lVar2,0);
    fVar8 = fVar5;
    lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
    if (lVar2 == 0) goto LAB_042d9cc8;
    UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    param_3 = param_3 * fVar7;
    fVar5 = fVar5 - (fVar8 - *(float *)((long)param_4 + 0x44));
    fVar6 = fVar9 * fVar7 + fVar5;
    fVar8 = param_3 + fVar5;
    fVar9 = param_2 - fVar6;
    if (param_2 <= fVar6) {
      fVar9 = 0.0;
    }
    fVar5 = fVar8 + fVar9;
    if (fVar4 < fVar5) {
      fVar9 = fVar4 - fVar8;
    }
  }
  fVar4 = *(float *)(param_4 + 8);
  fVar8 = *(float *)((long)param_4 + 0x44);
  lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
  if (lVar2 != 0) {
    fVar9 = fVar9 + fVar8;
    fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    fVar6 = fVar6 - fVar4;
    fVar8 = 0.0001;
    if (0.0001 < fVar6 * fVar6 + (fVar5 - fVar9) * (fVar5 - fVar9)) {
      lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
      if (lVar2 == 0) goto LAB_042d9cc8;
      UnityEngine_RectTransform__set_anchoredPosition(fVar4,lVar2,0);
      fVar8 = fVar9;
    }
    lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
    if (lVar2 != 0) {
      fVar9 = (float)UnityEngine_Transform__get_localScale(lVar2,0);
      if ((param_3 + -1.0) * (param_3 + -1.0) +
          (fVar9 - fVar7) * (fVar9 - fVar7) + (fVar8 - fVar7) * (fVar8 - fVar7) <= 1e-06) {
        return;
      }
      lVar2 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_4);
      if (lVar2 != 0) {
        UnityEngine_Transform__set_localScale(fVar7,fVar7,0x3f800000,lVar2,0);
        return;
      }
    }
  }
LAB_042d9cc8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

