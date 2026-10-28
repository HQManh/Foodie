// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$TryRotateUsableToFront
// address: 0x40f8274
// body: available
// range: 0x40f8274-0x40f83db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f83d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngredientSpawnerController__TryRotateUsableToFront
               (long param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((DAT_0951611d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951611d = 1;
  }
  lVar2 = *(long *)(param_1 + 0x1a0);
  if (lVar2 != 0) {
    iVar4 = 1;
    do {
      iVar1 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(lVar2,0);
      if (iVar1 <= iVar4) goto LAB_040f83b8;
      if (*(long *)(param_1 + 0x1a0) == 0) break;
      lVar2 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(*(long *)(param_1 + 0x1a0),param_2,iVar4,0);
      if ((lVar2 != 0) && (iVar4 == *(int *)(lVar2 + 0x24))) {
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if (((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x30) == 0)) {
          if ((param_3 & 1) != 0) {
            uVar5 = *(undefined8 *)(lVar2 + 0x10);
            if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__IsCombine(uVar5);
            if ((uVar3 & 1) != 0) goto LAB_040f8348;
          }
          if (*(long *)(param_1 + 0x1b8) == 0) break;
          uVar3 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor
                            (*(long *)(param_1 + 0x1b8),*(undefined8 *)(lVar2 + 0x10),0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x1a0) == 0) break;
            uVar3 = AnhPD_FoodOrder_ConveyorGrid__TryRotateToFront
                              (*(long *)(param_1 + 0x1a0),lVar2,0);
            if ((uVar3 & 1) != 0) {
              if (*(long *)(lVar2 + 0x10) != 0) {
                AnhPD_FoodOrder_IngredientConveyorItem__ClearFreeze();
LAB_040f83b8:
                return iVar4 < iVar1;
              }
              break;
            }
          }
        }
      }
LAB_040f8348:
      lVar2 = *(long *)(param_1 + 0x1a0);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

