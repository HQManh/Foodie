// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$TakePendingForFx
// address: 0x40fab2c
// body: available
// range: 0x40fab2c-0x40fad8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fad78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fad7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fad80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fad84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fad88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fad8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientSpawnerController__TakePendingForFx
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined4 *param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516126 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2708);
    FUN_03f5c2a4(&DAT_091a2710);
    FUN_03f5c2a4(&DAT_091a2718);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091abe28);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_09516126 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_88 = 0;
  if (*(long *)(param_4 + 0x198) != 0) {
    FUN_057e185c(&local_a0,*(long *)(param_4 + 0x198),DAT_091abe28);
    local_70 = local_90;
    puStack_78 = puStack_98;
    local_80 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_80;
    while (uVar2 = FUN_071bd28c(&local_80,DAT_091a2710), lVar4 = local_70, (uVar2 & 1) != 0) {
      local_88 = local_88 & 0xffffffff;
      if ((param_7 & 1) == 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = AnhPD_FoodOrder_ConveyorIngredientSource__TakePendingSingle
                          (*(long *)(local_70 + 0x10),param_5,&local_88,0);
      }
      else {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = AnhPD_FoodOrder_ConveyorIngredientSource__TakePendingFromBundle
                          (*(long *)(local_70 + 0x10),param_5,(long)&local_88 + 4,&local_88,0);
      }
      if (lVar3 != 0) {
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceLedger__BeltOut(lVar3,2,0);
        if (local_88._4_4_ != 0) {
          if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_ConveyorGrid__DissolveChain(*(long *)(param_4 + 0x1a0),local_88._4_4_,0);
        }
        iVar1 = *(int *)(param_4 + 0xb4);
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        uVar5 = AnhPD_FoodOrder_IngredientSpawnerController__CellPosition(param_4,lVar4,iVar1 + -1);
        uVar2 = local_88;
        *param_6 = uVar5;
        param_6[1] = param_2;
        param_6[2] = param_3;
        if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_IngredientSpawnerController__BuildKeyAt
                  (uVar5,param_2,param_3,uVar2 & 0xffffffff);
        AnhPD_FoodOrder_IngredientSpawnerController__UnlockWithKey();
        FUN_071bd288(&local_80,DAT_091a2708);
        return lVar3;
      }
    }
    FUN_071bd288(&local_80,DAT_091a2708);
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 != 0) {
      uVar5 = UnityEngine_Transform__get_position(lVar4,0);
      *param_6 = uVar5;
      param_6[1] = param_2;
      param_6[2] = param_3;
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

