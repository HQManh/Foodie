// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$TrySplitBundleAtFront
// address: 0x40f84c4
// body: available
// range: 0x40f84c4-0x40f87af inclusive
// range: 0x40f87dc-0x40f8ac3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f87a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f87ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f8ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_IngredientSpawnerController__TrySplitBundleAtFront(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_80;
  long *plStack_78;
  undefined1 local_6c [4];
  long local_68;
  
  if ((DAT_0951611b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd60);
    FUN_03f5c2a4(&DAT_09182bc8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b360);
    FUN_03f5c2a4(&DAT_0917b4f8);
    FUN_03f5c2a4(&DAT_09180158);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091adb18);
    FUN_03f5c2a4(&DAT_091adae0);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_0951611b = 1;
  }
  local_68 = 0;
  local_6c[0] = 0;
  if (*(long *)(param_1 + 0x1a0) == 0) {
LAB_040f8ac0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = AnhPD_FoodOrder_ConveyorGrid__FrontSlotAt(*(long *)(param_1 + 0x1a0),param_2,0);
  if (lVar5 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(lVar5 + 0x10);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(plVar10,0);
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) goto LAB_040f8ac0;
    if (((*(long *)(lVar5 + 0x30) == 0) && (*(int *)(lVar5 + 0x28) < 2)) &&
       (*(long *)(lVar5 + 0x18) != 0)) {
      if (plVar10 == (long *)0x0) goto LAB_040f8ac0;
      iVar1 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      if (((iVar1 == 0) && (plVar10[0x15] == 0)) && ((int)plVar10[0x42] < 0)) {
        uVar11 = **(undefined8 **)(DAT_091881a0 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x1a0) != 0) {
            lVar7 = AnhPD_FoodOrder_ConveyorGrid__SlotAt
                              (*(long *)(param_1 + 0x1a0),param_2,*(undefined4 *)(lVar5 + 0x2c),0);
            if (lVar7 != 0) {
              return 0;
            }
            if ((**(long **)(DAT_091881a0 + 0xb8) != 0) && (lVar7 = plVar10[0x12], lVar7 != 0)) {
              lVar12 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
              uVar11 = FUN_039afee4(0,DAT_0917b360,lVar7);
              if ((int)uVar11 == 0) {
                return uVar11;
              }
              lVar8 = FUN_039b0dd4(0,DAT_0917b4f8,lVar7,0);
              if (lVar8 == 0) {
                return 0;
              }
              local_68 = FUN_039afee4(0,DAT_0917a5a0,lVar7);
              plStack_78 = &local_68;
              iVar1 = 0;
              local_80 = 0;
              while( true ) {
                if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar6 = FUN_039afee4(0,DAT_09185b10);
                if ((uVar6 & 1) == 0) break;
                if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = FUN_039afee4(0,DAT_0917ac50);
                if (lVar8 != 0) {
                  iVar1 = *(int *)(lVar8 + 0x18) + iVar1;
                }
              }
              FUN_039aeef4(&local_80);
              if (iVar1 < 2) {
                return 0;
              }
              lVar8 = FUN_039b0dd4(0,DAT_0917b4f8,lVar7,0);
              lVar9 = FUN_03f5c394(DAT_091805f8,1);
              if (((lVar8 != 0) && (lVar9 != 0)) &&
                 (FUN_039af17c(lVar9,0,*(undefined8 *)(lVar8 + 0x10)), lVar12 != 0)) {
                uVar6 = AnhPD_FoodOrder_LevelInfo__HasHomeForAll(lVar12,lVar9,local_6c,0,0);
                if ((uVar6 & 1) == 0) {
                  return 0;
                }
                iVar1 = *(int *)(lVar8 + 0x18);
                uVar2 = FUN_039afee4(0,DAT_0917b360,lVar7);
                lVar12 = thunk_FUN_03f9944c(DAT_0917c4d0);
                FUN_057e0478(lVar12,uVar2,DAT_091adae0);
                if (1 < iVar1) {
                  uVar11 = AnhPD_FoodOrder_IngredientState__WithAmount
                                     (lVar8,*(int *)(lVar8 + 0x18) + -1);
                  if (lVar12 == 0) goto LAB_040f8ac0;
                  FUN_039b0ea8(lVar12,uVar11,DAT_091adae8);
                }
                iVar3 = FUN_039afee4(0,DAT_0917b360,lVar7);
                if (1 < iVar3) {
                  iVar3 = 1;
                  do {
                    lVar9 = FUN_039b0dd4(0,DAT_0917b4f8,lVar7,iVar3);
                    if (lVar9 != 0) {
                      uVar11 = FUN_039b0dd4(0,DAT_0917b4f8,lVar7,iVar3);
                      if (lVar12 == 0) goto LAB_040f8ac0;
                      FUN_039b0ea8(lVar12,uVar11,DAT_091adae8);
                    }
                    iVar3 = iVar3 + 1;
                    iVar4 = FUN_039afee4(0,DAT_0917b360,lVar7);
                  } while (iVar3 < iVar4);
                }
                lVar7 = thunk_FUN_03f9944c(DAT_09182bc8);
                AnhPD_FoodOrder_ConveyorBundle___ctor(lVar7,0);
                lVar9 = FUN_03f5c394(DAT_09180158,1);
                if (1 < iVar1) {
                  lVar8 = AnhPD_FoodOrder_IngredientState__WithAmount(lVar8,1);
                }
                if (lVar9 != 0) {
                  FUN_039b0da0(lVar9,lVar8);
                  FUN_039af17c(lVar9,0,lVar8);
                  if (lVar7 != 0) {
                    *(long *)(lVar7 + 0x10) = lVar9;
                    thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),lVar9);
                    lVar8 = thunk_FUN_03f9944c(DAT_09182bc8);
                    AnhPD_FoodOrder_ConveyorBundle___ctor(lVar8,0);
                    if ((lVar12 != 0) && (uVar11 = FUN_057e28a4(lVar12,DAT_091adb18), lVar8 != 0)) {
                      *(undefined8 *)(lVar8 + 0x10) = uVar11;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x10),uVar11);
                      lVar9 = *(long *)(lVar5 + 0x18);
                      *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(lVar12 + 0x18);
                      if (lVar9 != 0) {
                        AnhPD_FoodOrder_ConveyorColumn__FlushPeeked(lVar9,0);
                        if (*(long *)(lVar5 + 0x18) != 0) {
                          lVar12 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10);
                          lVar5 = FUN_03f5c394(DAT_0917fd60,2);
                          if (lVar5 != 0) {
                            FUN_039b0da0(lVar5,lVar7);
                            FUN_039af17c(lVar5,0,lVar7);
                            FUN_039b0da0(lVar5,lVar8);
                            FUN_039af17c(lVar5,1,lVar8);
                            if (lVar12 != 0) {
                              AnhPD_FoodOrder_ConveyorIngredientSource__PushFrontBundles
                                        (lVar12,lVar5,0);
                              if (*(long *)(param_1 + 0x1a0) != 0) {
                                AnhPD_FoodOrder_ConveyorGrid__ReleaseFor
                                          (*(long *)(param_1 + 0x1a0),plVar10,0);
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_040f8ac0;
        }
      }
    }
  }
  return 0;
}

