// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$Endpoints
// address: 0x40d93f4
// body: available
// range: 0x40d93f4-0x40d959f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d9598 to 0x40d904c AnhPD.FoodOrder.ConveyorChainRopeView$$AddAnchor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40d959c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorChainRopeView__Endpoints
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,long param_7,long param_8,undefined4 *param_9,
               undefined4 *param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = param_2;
  uVar5 = param_3;
  if ((DAT_09516027 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516027 = 1;
  }
  if (param_7 != 0) {
    uVar2 = *(undefined8 *)(param_7 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) != 0) {
      if (param_8 == 0) goto LAB_040d959c;
      uVar2 = *(undefined8 *)(param_8 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(param_7 + 0x24) == *(int *)(param_8 + 0x24)) {
          AnhPD_FoodOrder_ConveyorChainRopeView__SideAnchorPair(param_7,param_8,param_9,param_10);
        }
        else {
          AnhPD_FoodOrder_IngredientConveyorItem__NearestAnchorPair
                    (*(undefined8 *)(param_7 + 0x10),*(undefined8 *)(param_8 + 0x10),param_9,
                     param_10,0);
        }
        AnhPD_FoodOrder_ConveyorChainRopeView__AddAnchor
                  (*param_9,param_9[1],param_9[2],param_1,param_2,param_3,param_4,param_5);
        AnhPD_FoodOrder_ConveyorChainRopeView__AddAnchor
                  (*param_10,param_10[1],param_10[2],param_1,param_2,param_3,param_4,param_5);
        return;
      }
    }
    if (param_6 != 0) {
      uVar3 = AnhPD_FoodOrder_ConveyorGrid__CellCenter
                        (param_6,*(undefined4 *)(param_7 + 0x20),*(undefined4 *)(param_7 + 0x24));
      *param_9 = uVar3;
      param_9[1] = uVar4;
      param_9[2] = uVar5;
      if (param_8 != 0) {
        uVar3 = AnhPD_FoodOrder_ConveyorGrid__CellCenter
                          (param_6,*(undefined4 *)(param_8 + 0x20),*(undefined4 *)(param_8 + 0x24));
        *param_10 = uVar3;
        param_10[1] = uVar4;
        param_10[2] = uVar5;
        return;
      }
    }
  }
LAB_040d959c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

