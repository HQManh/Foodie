// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$SpawnPending
// address: 0x40dc7f4
// body: available
// range: 0x40dc7f4-0x40dcc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dcbf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__SpawnPending
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_09516041 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c20);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091abe48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516041 = 1;
  }
  uVar14 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar14,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_4 + 0x10) + 0x1d8) == '\0') {
      return;
    }
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 != 0) {
      iVar13 = 0;
      do {
        if (*(int *)(lVar6 + 0x18) <= iVar13) {
          return;
        }
        lVar6 = FUN_057e0998(lVar6,iVar13,DAT_091abe48);
        if (lVar6 != 0) {
          if (*(long *)(param_4 + 0x10) == 0) break;
          uVar5 = AnhPD_FoodOrder_IngredientSpawnerController__CanColumnSpawnNow
                            (*(long *)(param_4 + 0x10),lVar6,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_4 + 0x10) == 0) break;
            lVar7 = AnhPD_FoodOrder_IngredientSpawnerController__PeekBundle
                              (*(long *)(param_4 + 0x10),lVar6,0);
            if (lVar7 != 0) {
              iVar4 = *(int *)(lVar7 + 0x20);
              iVar3 = *(int *)(lVar7 + 0x24);
              if (iVar4 < 2) {
                iVar4 = 1;
              }
              if (iVar3 < 2) {
                iVar3 = 1;
              }
              if (*(long *)(param_4 + 0x18) == 0) break;
              if (*(int *)(*(long *)(param_4 + 0x18) + 0x18) < iVar4 + iVar13) {
                if (*(long *)(param_4 + 0x10) == 0) break;
                AnhPD_FoodOrder_IngredientSpawnerController__DemoteBundleWidth
                          (*(long *)(param_4 + 0x10),lVar6,0);
              }
              else {
                uVar5 = AnhPD_FoodOrder_ConveyorGrid__WaitsForDataOrder
                                  (param_4,iVar13,*(undefined4 *)(lVar7 + 0x3c),iVar4);
                if ((uVar5 & 1) == 0) {
                  iVar2 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_4);
                  if (iVar2 < iVar3) {
                    iVar3 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_4);
                  }
                  lVar7 = thunk_FUN_03f9944c(DAT_09182c20);
                  System_Object___ctor(lVar7,0);
                  if (lVar7 == 0) break;
                  *(int *)(lVar7 + 0x20) = iVar13;
                  *(int *)(lVar7 + 0x28) = iVar4;
                  *(int *)(lVar7 + 0x2c) = iVar3;
                  iVar2 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_4);
                  iVar2 = AnhPD_FoodOrder_ConveyorGrid__HighestEntryRow(param_4,lVar7,iVar2 - iVar3)
                  ;
                  if (iVar2 < 0) {
                    if (*(long *)(param_4 + 0x10) == 0) break;
                    AnhPD_FoodOrder_IngredientSpawnerController__NotifyColumnFilled
                              (*(long *)(param_4 + 0x10),lVar6,0);
                  }
                  else {
                    lVar8 = *(long *)(param_4 + 0x10);
                    *(int *)(lVar7 + 0x24) = iVar2;
                    if (lVar8 == 0) break;
                    lVar8 = AnhPD_FoodOrder_IngredientSpawnerController__TakeBundle(lVar8,lVar6,0);
                    if (lVar8 != 0) {
                      if (*(long *)(param_4 + 0x10) == 0) break;
                      lVar9 = AnhPD_FoodOrder_IngredientSpawnerController__CreateSlotItem
                                        (*(long *)(param_4 + 0x10),lVar6,iVar13,lVar8,iVar4,iVar3,0)
                      ;
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09188ad0);
                      }
                      uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
                      if ((uVar5 & 1) == 0) {
                        iVar4 = 1;
                        *(undefined4 *)(lVar8 + 0x20) = 1;
                        if (*(long *)(lVar8 + 0x10) != 0) {
                          iVar4 = *(int *)(*(long *)(lVar8 + 0x10) + 0x18);
                        }
                        lVar7 = *(long *)(param_4 + 0x10);
                        if (iVar4 < 2) {
                          iVar4 = 1;
                        }
                        *(int *)(lVar8 + 0x24) = iVar4;
                        if (lVar7 == 0) break;
                        AnhPD_FoodOrder_IngredientSpawnerController__PushFrontBundle
                                  (lVar7,lVar6,lVar8,0);
                      }
                      else {
                        *(long *)(lVar7 + 0x10) = lVar9;
                        thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),lVar9);
                        *(long *)(lVar7 + 0x18) = lVar6;
                        thunk_FUN_03f5d7b8((long *)(lVar7 + 0x18),lVar6);
                        uVar14 = AnhPD_FoodOrder_ConveyorGrid__JoinChain(param_4,lVar8,lVar7);
                        *(undefined8 *)(lVar7 + 0x30) = uVar14;
                        thunk_FUN_03f5d7b8();
                        if (lVar9 == 0) break;
                        AnhPD_FoodOrder_IngredientConveyorItem__AttachSlot(lVar9,lVar7,0);
                        lVar8 = DAT_091abe60;
                        lVar10 = *(long *)(param_4 + 0x20);
                        if (lVar10 == 0) break;
                        lVar11 = *(long *)(lVar10 + 0x10);
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar11 == 0) break;
                        uVar1 = *(uint *)(lVar10 + 0x18);
                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                          plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar12 = lVar7;
                          thunk_FUN_03f5d7b8(plVar12,lVar7);
                        }
                        else {
                          FUN_057e0c68(lVar10,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_4,lVar7,1);
                        if (*(long *)(param_4 + 0x10) == 0) break;
                        AnhPD_FoodOrder_IngredientSpawnerController__NotifyColumnSpawned
                                  (*(long *)(param_4 + 0x10),lVar6,0);
                        iVar4 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_4);
                        lVar6 = UnityEngine_Component__get_transform(lVar9,0);
                        fVar15 = (float)AnhPD_FoodOrder_ConveyorGrid__CellCenter(param_4,lVar7);
                        fVar17 = param_2;
                        fVar18 = param_3;
                        fVar16 = (float)AnhPD_FoodOrder_ConveyorGrid__RowDownAt
                                                  (param_4,*(undefined4 *)(lVar7 + 0x20),
                                                   *(undefined4 *)(lVar7 + 0x24));
                        if (lVar6 == 0) break;
                        fVar19 = (float)((iVar4 - *(int *)(lVar7 + 0x24)) + 1);
                        param_3 = param_3 + fVar18 * fVar19;
                        param_2 = param_2 + fVar17 * fVar19;
                        UnityEngine_Transform__set_position
                                  (fVar15 + fVar16 * fVar19,param_2,param_3,lVar6,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar6 = *(long *)(param_4 + 0x18);
        iVar13 = iVar13 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

