// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$TryRotateToFront
// address: 0x40e01cc
// body: available
// range: 0x40e01cc-0x40e06d3 inclusive
// range: 0x40e0710-0x40e074f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e06b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e06d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e074c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ConveyorGrid__TryRotateToFront(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_0951605c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe70);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951605c = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_90 = 0;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x24) < 1) {
      return 0;
    }
    AnhPD_FoodOrder_ConveyorGrid__BuildColumnGroup
              (param_1,*(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
               *(undefined8 *)(param_1 + 0x50));
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      iVar10 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar10) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar10,0);
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_05797d74(&local_b8,*(long *)(param_1 + 0x50),DAT_091adcc0);
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        puStack_b0 = &local_80;
        local_70 = local_a8;
        local_b8 = 0;
        while (uVar4 = FUN_071ad7a4(&local_80,DAT_091a34d8), uVar3 = local_70, (uVar4 & 1) != 0) {
          if (0 < *(int *)(param_2 + 0x24)) {
            iVar10 = 0;
            do {
              lVar6 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(param_1,uVar3 & 0xffffffff,iVar10);
              if ((lVar6 == 0) || (lVar6 == param_2)) {
LAB_040e0490:
                FUN_071ad7a0(&local_80,DAT_091a34d0);
                return 0;
              }
              uVar9 = *(undefined8 *)(lVar6 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
              if ((uVar4 & 1) == 0) goto LAB_040e0490;
              if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(char *)(*(long *)(lVar6 + 0x10) + 0xd1) != '\0') goto LAB_040e0490;
              if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = FUN_057e1004(*(long *)(param_1 + 0x58),lVar6,DAT_091abe70);
              lVar2 = DAT_091abe60;
              if ((uVar4 & 1) == 0) {
                lVar5 = *(long *)(param_1 + 0x58);
                if (lVar5 == 0) {
LAB_040e06bc:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_040e06bc;
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar8 = lVar6;
                  thunk_FUN_03f5d7b8(plVar8,lVar6);
                }
                else {
                  FUN_057e0c68(lVar5,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_2 + 0x24));
          }
        }
        FUN_071ad7a0(&local_80,DAT_091a34d0);
        lVar6 = *(long *)(param_1 + 0x58);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) == 0) {
            return 0;
          }
          iVar10 = *(int *)(param_2 + 0x2c);
          FUN_057e185c(&local_b8,lVar6,DAT_091abe78);
          puStack_98 = puStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          local_b8 = 0;
          puStack_b0 = &local_a0;
          while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728), (uVar3 & 1) != 0) {
            AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,local_90,0);
          }
          FUN_071bd288(&local_a0,DAT_091a2720);
          AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,param_2,0);
          if (*(long *)(param_1 + 0x58) != 0) {
            FUN_057e185c(&local_b8,*(long *)(param_1 + 0x58),DAT_091abe78);
            local_90 = local_a8;
            puStack_98 = puStack_b0;
            local_a0 = local_b8;
            local_b8 = 0;
            puStack_b0 = &local_a0;
            while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728), (uVar3 & 1) != 0) {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(int *)(local_90 + 0x24) = *(int *)(local_90 + 0x24) + iVar10;
            }
            FUN_071bd288(&local_a0,DAT_091a2720);
            *(undefined4 *)(param_2 + 0x24) = 0;
            if (*(long *)(param_1 + 0x58) != 0) {
              FUN_057e185c(&local_b8,*(long *)(param_1 + 0x58),DAT_091abe78);
              local_90 = local_a8;
              puStack_98 = puStack_b0;
              local_a0 = local_b8;
              local_b8 = 0;
              puStack_b0 = &local_a0;
              while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728), (uVar3 & 1) != 0) {
                AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,local_90,1);
              }
              FUN_071bd288(&local_a0,DAT_091a2720);
              AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,param_2,1);
              if (*(long *)(param_1 + 0x58) != 0) {
                FUN_057e185c(&local_b8,*(long *)(param_1 + 0x58),DAT_091abe78);
                local_90 = local_a8;
                puStack_98 = puStack_b0;
                local_a0 = local_b8;
                local_b8 = 0;
                puStack_b0 = &local_a0;
                while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728), (uVar3 & 1) != 0) {
                  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(local_90 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
                            (*(long *)(local_90 + 0x10),
                             *(int *)(*(long *)(param_1 + 0x10) + 0xc4) + *(int *)(local_90 + 0x24),
                             0);
                }
                FUN_039b0a2c(&local_b8);
                if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_2 + 0x10) != 0)) {
                  AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
                            (*(long *)(param_2 + 0x10),
                             *(int *)(*(long *)(param_1 + 0x10) + 0xc4) + *(int *)(param_2 + 0x24),0
                            );
                  AnhPD_FoodOrder_ConveyorGrid__RebuildOccupancy(param_1);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

