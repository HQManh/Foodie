// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationFlexibleResult$$ShelfGainOfResult
// address: 0x4102b5c
// body: available
// range: 0x4102b5c-0x4102e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4102d2c to 0x4100030 AnhPD.FoodOrder.CookingStation$$ShelfGainOfResult (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4102e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4102e3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_CookingStationFlexibleResult__ShelfGainOfResult(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0951617b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189150);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951617b = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  lVar5 = 0;
  if ((uVar1 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04102e38;
    lVar5 = AnhPD_FoodOrder_MessyController__get_ServeShelf(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  lVar6 = 0;
  if ((uVar1 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04102e38;
    lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (lVar6 == 0) {
    return 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
  plVar2 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar6,uVar4,0);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
        DAT_09184728)) {
      lVar6 = param_1[0xb];
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)param_2 * 8 + 0x20);
        if (lVar6 != 0) {
          uVar3 = AnhPD_FoodOrder_StationInteractGroup__GetInteractId(lVar6,0);
          (**(code **)(*plVar2 + 0x2c8))
                    (&local_78,plVar2,DAT_091f5700,uVar3,*(undefined8 *)(*plVar2 + 0x2d0));
          uStack_58 = uStack_70;
          local_60 = local_78;
          local_50 = local_68;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_60,0);
          if ((uVar1 & 1) != 0) {
            return 0;
          }
          lVar6 = thunk_FUN_03f9944c(DAT_09189150);
          AnhPD_FoodOrder_PieceOffer___ctor(lVar6,0);
          if (lVar6 != 0) {
            *(undefined1 *)(lVar6 + 0x28) = 1;
            *(undefined8 *)(lVar6 + 0x18) = uStack_58;
            *(undefined8 *)(lVar6 + 0x10) = local_60;
            *(undefined8 *)(lVar6 + 0x20) = local_50;
            *(undefined4 *)(lVar6 + 0x2c) = 0;
            uVar4 = AnhPD_FoodOrder_FlexibleId__BaseOf(uVar4,0);
            if (lVar5 != 0) {
              uVar4 = AnhPD_FoodOrder_ServeShelfController__ScoreGainForOffer(lVar5,lVar6,uVar4,0);
              return uVar4;
            }
          }
        }
      }
LAB_04102e38:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  uVar4 = AnhPD_FoodOrder_CookingStation__ShelfGainOfResult(param_1,param_2);
  return uVar4;
}

