// rea decompile_all
// name: CakeOrder.InGame.UI.UIFollowBeltBottomRow$$AlignToBelt
// address: 0x42b5918
// body: available
// range: 0x42b5918-0x42b5ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b5ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UI_UIFollowBeltBottomRow__AlignToBelt
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_48;
  
  if ((DAT_095172cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095172cc = 1;
  }
  local_48 = 0;
  if (*(long *)(param_5 + 0x30) == 0) {
LAB_042b5ae4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_5 + 0x30),0);
  if ((plVar2 != (long *)0x0) && (*plVar2 == DAT_09189c98)) {
    lVar6 = *(long *)(param_5 + 0x40);
    if ((lVar6 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar6,0), lVar3 == 0))
    goto LAB_042b5ae4;
    uVar7 = UnityEngine_Transform__get_position(lVar3,0);
    uVar7 = UnityEngine_Camera__WorldToScreenPoint(uVar7,param_1,0,lVar6,0);
    uVar4 = CakeOrder_InGame_UI_UIFollowBeltBottomRow__get_UICamera(param_5);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ca0);
    }
    uVar5 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (uVar7,param_1,plVar2,uVar4,&local_48,0);
    if ((uVar5 & 1) != 0) {
      UnityEngine_RectTransform__get_rect(plVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (0.0 < param_4) {
        fVar1 = local_48._4_4_;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(param_5 + 0x30) != 0) {
          uVar7 = UnityEngine_RectTransform__get_anchorMin(*(long *)(param_5 + 0x30),0);
          if (*(long *)(param_5 + 0x30) != 0) {
            uVar8 = UnityEngine_RectTransform__get_anchorMax(*(long *)(param_5 + 0x30),0);
            if (*(long *)(param_5 + 0x30) != 0) {
              param_4 = (fVar1 - param_1) / param_4;
              UnityEngine_RectTransform__set_anchorMin(uVar7,param_4,*(long *)(param_5 + 0x30),0);
              if (*(long *)(param_5 + 0x30) != 0) {
                UnityEngine_RectTransform__set_anchorMax(uVar8,param_4,*(long *)(param_5 + 0x30),0);
                return;
              }
            }
          }
        }
        goto LAB_042b5ae4;
      }
    }
  }
  return;
}

