// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$ResolvePartDestinationInUi
// address: 0x42c9374
// body: available
// range: 0x42c9374-0x42c95eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c95e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CakeOrder_UI_UIListUpgradeBuildingOptionCards__ResolvePartDestinationInUi
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_58;
  
  if ((DAT_0951735c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    DAT_0951735c = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x130);
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(param_5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_4 + 0x118);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_4 + 0x128);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          if (param_5 != 0) {
            uVar6 = UnityEngine_Transform__get_position(param_5,0);
            if (*(long *)(param_4 + 0x128) != 0) {
              lVar3 = CakeOrder_Home_HomeRestaurantsBuildingControl__get_ViewCamera
                                (*(long *)(param_4 + 0x128),0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar2 & 1) == 0) {
                if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                  (uVar6,param_2,param_3,0,0);
              }
              else {
                if (lVar3 == 0) goto LAB_042c95e8;
                uVar6 = UnityEngine_Camera__WorldToScreenPoint(uVar6,param_2,param_3,lVar3,0);
              }
              if ((*(long *)(param_4 + 0x118) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_4 + 0x118) + 0x20), lVar3 != 0)) {
                iVar1 = UnityEngine_Canvas__get_renderMode(lVar3,0);
                if (iVar1 == 0) {
                  uVar4 = 0;
                }
                else {
                  if ((*(long *)(param_4 + 0x118) == 0) ||
                     (lVar3 = *(long *)(*(long *)(param_4 + 0x118) + 0x20), lVar3 == 0))
                  goto LAB_042c95e8;
                  uVar4 = UnityEngine_Canvas__get_worldCamera(lVar3,0);
                }
                uVar5 = *(undefined8 *)(param_4 + 0x130);
                if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                                  (uVar6,param_2,uVar5,uVar4,&local_58,0);
                if ((uVar2 & 1) == 0) {
                  return param_1;
                }
                if (*(long *)(param_4 + 0x130) != 0) {
                  uVar6 = UnityEngine_Transform__TransformPoint
                                    ((undefined4)local_58,local_58._4_4_,0,
                                     *(long *)(param_4 + 0x130),0);
                  return uVar6;
                }
              }
            }
          }
LAB_042c95e8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
  return param_1;
}

