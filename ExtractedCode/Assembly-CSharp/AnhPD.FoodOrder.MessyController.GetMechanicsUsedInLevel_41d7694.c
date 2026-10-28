// rea decompile_all
// name: AnhPD.FoodOrder.MessyController$$GetMechanicsUsedInLevel
// address: 0x41d7694
// body: available
// range: 0x41d7694-0x41d79b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d79a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d79a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d79ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d79b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_MessyController__GetMechanicsUsedInLevel(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516a87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f38);
    FUN_03f5c2a4(&DAT_091a3f40);
    FUN_03f5c2a4(&DAT_091a3f48);
    FUN_03f5c2a4(&DAT_091ad630);
    FUN_03f5c2a4(&DAT_091af5f0);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c3e8);
    FUN_03f5c2a4(&DAT_09187a78);
    FUN_03f5c2a4(&DAT_0918ac40);
    FUN_03f5c2a4(&DAT_091bee20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_092214a0);
    DAT_09516a87 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_2 + 0x110) != 0) {
    lVar2 = AnhPD_FoodOrder_LevelInfo__GetDishInfosInLevelOrders(*(long *)(param_2 + 0x110),0);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_03f9944c(DAT_0917c3e8);
      FUN_057e0400(lVar3,DAT_091ad628);
      FUN_057e185c(&local_98,lVar2,DAT_091af5f0);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
      while (uVar4 = FUN_071bd28c(&local_80,DAT_091a3f40), lVar2 = local_70, (uVar4 & 1) != 0) {
        if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
        if (*(int *)(DAT_09187a78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = CakeOrder_Localization_LocTables__Map(uVar12,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = System_Int32__ToString(lVar2 + 0x10,0);
        uVar6 = System_String__Concat(DAT_092214a0,uVar5,0);
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar10 = *(undefined8 *)(lVar2 + 0x38);
        uVar13 = *(undefined8 *)(lVar2 + 0x28);
        uVar7 = AnhPD_FoodOrder_RecipeConfigSO__DishLocId(*(undefined4 *)(lVar2 + 0x10),0);
        uVar8 = thunk_FUN_03f9944c(DAT_0918ac40);
        CakeOrder_UI_SimpleRewardItemInfo___ctor
                  (uVar8,uVar6,uVar5,uVar10,uVar13,0,DAT_09226038,uVar12,uVar7,0);
        lVar2 = DAT_091ad630;
        if (lVar3 == 0) {
LAB_041d79a4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_041d79a4;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_03f5d7b8(puVar9,uVar8);
        }
        else {
          FUN_057e0c68(lVar3,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      FUN_071bd288(&local_80,DAT_091a3f38);
    }
    if (*(long *)(param_2 + 0x110) != 0) {
      uVar12 = AnhPD_FoodOrder_LevelInfo__GetAppliedGridEffects(*(long *)(param_2 + 0x110),0);
      if (*(long *)(param_2 + 0x110) != 0) {
        uVar10 = AnhPD_FoodOrder_LevelInfo__GetAppliedSlotStatuses(*(long *)(param_2 + 0x110),0);
        uVar5 = DAT_091bee20;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        FUN_066ef798(param_1,lVar3,uVar12,uVar10,uVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

