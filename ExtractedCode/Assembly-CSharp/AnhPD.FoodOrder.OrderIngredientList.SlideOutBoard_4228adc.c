// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SlideOutBoard
// address: 0x4228adc
// body: available
// range: 0x4228adc-0x4228cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4228cb8 to 0x422e940 AnhPD.FoodOrder.OrderIngredientList$$SlideBoardOut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4228cd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4228cd8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_OrderIngredientList__SlideOutBoard(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_09516da9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af758);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516da9 = 1;
  }
  if (((*(char *)(param_1 + 0xe0) != '\0') && (-1 < param_2)) &&
     (*(char *)(param_1 + 0x11c) == '\0')) {
    if (*(long *)(param_1 + 0x78) == 0) {
LAB_04228cd0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (param_2 < *(int *)(*(long *)(param_1 + 0x78) + 0x18)) {
      lVar3 = *(long *)(param_1 + 0x70);
      if (lVar3 == 0) goto LAB_04228cd0;
      if (param_2 < *(int *)(lVar3 + 0x18)) {
        lVar3 = FUN_057e0998(lVar3,param_2,DAT_091ae388);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar4 & 1) != 0) {
          if ((lVar3 != 0) && (lVar5 = UnityEngine_Component__get_gameObject(lVar3,0), lVar5 != 0))
          {
            uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            lVar5 = AnhPD_FoodOrder_OrderIngredientList__ShownTopDown(param_1);
            plVar6 = (long *)UnityEngine_Component__get_transform(lVar3,0);
            if ((plVar6 != (long *)0x0) && (*plVar6 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar6);
            }
            if (lVar5 != 0) {
              iVar1 = FUN_057e1a08(lVar5,plVar6,DAT_091af758);
              if (iVar1 < 0) {
                return 0;
              }
              AnhPD_FoodOrder_OrderIngredientList__FreeBoards(param_1);
              lVar3 = FUN_039af8ec(DAT_091b48d0);
              if (lVar3 != 0) {
                CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
                          (lVar3,*(undefined8 *)(param_1 + 0x38),3,0);
                uVar2 = AnhPD_FoodOrder_OrderIngredientList__get_UsesSlots(param_1);
                uVar2 = AnhPD_FoodOrder_OrderIngredientList__ExitsUp(param_1,lVar5,iVar1,uVar2 & 1);
                uVar7 = AnhPD_FoodOrder_OrderIngredientList__SlideBoardOut(param_1,plVar6,uVar2 & 1)
                ;
                return uVar7;
              }
            }
          }
          goto LAB_04228cd0;
        }
      }
    }
  }
  return 0;
}

