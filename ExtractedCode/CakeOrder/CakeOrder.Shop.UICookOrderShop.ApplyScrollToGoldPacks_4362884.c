// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$ApplyScrollToGoldPacks
// address: 0x4362884
// body: available
// range: 0x4362884-0x4362c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4362c04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4362c08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4362c10 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__ApplyScrollToGoldPacks(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s3;
  float fVar13;
  long local_68;
  
  if ((DAT_0951785f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5930);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dc018);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_0951785f = 1;
  }
  local_68 = 0;
  UnityEngine_Canvas__ForceUpdateCanvases(0);
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x138) + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(DAT_09187680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar6,0);
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(lVar5,0);
    if (*(long *)(param_1 + 0x138) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
      lVar3 = *(long *)(param_1 + 0x138);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_04362c04;
        plVar7 = (long *)UnityEngine_Component__get_transform(lVar3,0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar7);
        }
      }
      else {
        if (lVar3 == 0) goto LAB_04362c04;
        plVar7 = *(long **)(lVar3 + 0x40);
      }
      lVar3 = CakeOrder_Shop_UICookOrderShop__GetGoldPackSectionTop(param_1);
      lVar4 = FUN_03f5c394(DAT_091807f8,4);
      if ((lVar3 != 0) && (UnityEngine_RectTransform__GetWorldCorners(lVar3,lVar4,0), lVar4 != 0)) {
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
LAB_04362c08:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar5 != 0) {
          fVar9 = *(float *)(lVar4 + 0x30);
          UnityEngine_Transform__InverseTransformPoint
                    (*(undefined4 *)(lVar4 + 0x2c),fVar9,*(undefined4 *)(lVar4 + 0x34),lVar5,0);
          if (plVar7 != (long *)0x0) {
            UnityEngine_RectTransform__GetWorldCorners(plVar7,lVar4,0);
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              fVar10 = *(float *)(lVar4 + 0x30);
              UnityEngine_Transform__InverseTransformPoint
                        (*(undefined4 *)(lVar4 + 0x2c),fVar10,*(undefined4 *)(lVar4 + 0x34),lVar5,0)
              ;
              fVar11 = fVar10;
              UnityEngine_RectTransform__get_rect(lVar5,0);
              fVar13 = in_s3;
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_RectTransform__get_rect(plVar7,0);
              fVar12 = 0.0;
              if (0.0 <= in_s3 - fVar13) {
                fVar12 = in_s3 - fVar13;
              }
              uVar2 = FUN_04a6b048(lVar5,&local_68,DAT_091c5930);
              fVar13 = 0.0;
              if ((uVar2 & 1) != 0) {
                if ((local_68 == 0) || (*(long *)(local_68 + 0x20) == 0)) goto LAB_04362c04;
                iVar1 = UnityEngine_RectOffset__get_top(*(long *)(local_68 + 0x20),0);
                fVar13 = (float)iVar1;
              }
              UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
              fVar13 = ((fVar10 - fVar9) + fVar11) - fVar13;
              if (fVar13 <= fVar12) {
                fVar12 = fVar13;
              }
              fVar9 = 0.0;
              if (0.0 <= fVar13) {
                fVar9 = fVar12;
              }
              if (*(long *)(param_1 + 0x1c0) != 0) {
                DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x1c0),0,0);
              }
              UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
              if (1.0 <= ABS(fVar12 - fVar9)) {
                plVar7 = *(long **)(param_1 + 0x138);
                if (plVar7 == (long *)0x0) goto LAB_04362c04;
                (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
                if ((param_2 & 1) == 0) {
                  uVar8 = UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
                  UnityEngine_RectTransform__set_anchoredPosition(uVar8,fVar9,lVar5,0);
                }
                else {
                  uVar6 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY(fVar9,0x3ee66666,lVar5,0,0);
                  uVar6 = FUN_04d95e8c(uVar6,9,DAT_091dbe90);
                  uVar6 = FUN_04d9656c(uVar6,1,DAT_091dc018);
                  *(undefined8 *)(param_1 + 0x1c0) = uVar6;
                  thunk_FUN_03f5d7b8(param_1 + 0x1c0,uVar6);
                }
              }
              return;
            }
            goto LAB_04362c08;
          }
        }
      }
    }
  }
LAB_04362c04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

