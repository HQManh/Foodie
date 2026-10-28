// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$BuildColumns
// address: 0x40f3504
// body: available
// range: 0x40f3504-0x40f36af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f36a8 to 0x40f394c AnhPD.FoodOrder.IngredientSpawnerController$$LayoutColumns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f36ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__BuildColumns(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_095160fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182be8);
    FUN_03f5c2a4(&DAT_091abe10);
    DAT_095160fc = 1;
  }
  AnhPD_FoodOrder_IngredientSpawnerController__ClearColumns(param_1);
  if (param_2 < 2) {
    param_2 = 1;
  }
  do {
    lVar7 = *(long *)(param_1 + 0x198);
    uVar2 = thunk_FUN_03f9944c(DAT_09182be8);
    AnhPD_FoodOrder_ConveyorColumn___ctor(uVar2,0);
    lVar8 = DAT_091abe10;
    if (lVar7 == 0) goto LAB_040f36ac;
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_040f36ac;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    else {
      FUN_057e0c68(lVar7,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x1a0) + 0x10);
    *plVar4 = param_1;
    thunk_FUN_03f5d7b8(plVar4,param_1);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      AnhPD_FoodOrder_ConveyorGrid__SetColumns
                (*(long *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x198),0);
      lVar8 = *(long *)(param_1 + 0x1a8);
      uVar2 = AnhPD_FoodOrder_IngredientSpawnerController__get_Root(param_1);
      uVar5 = AnhPD_FoodOrder_IngredientSpawnerController__get_Root(param_1);
      if (lVar8 != 0) {
        AnhPD_FoodOrder_ConveyorChainRopeView__Setup
                  (*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),
                   *(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),
                   *(undefined4 *)(param_1 + 0x178),lVar8,uVar2,uVar5,
                   *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x180),
                   *(undefined4 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),0,
                   *(undefined4 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xf0));
        AnhPD_FoodOrder_IngredientSpawnerController__LayoutColumns(param_1);
        return;
      }
    }
  }
LAB_040f36ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

