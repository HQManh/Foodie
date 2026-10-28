// rea decompile_all
// name: AnhPD.FoodOrder.SpawnBagSaveMe$$DropUnusableToStation
// address: 0x40fd510
// body: available
// range: 0x40fd510-0x40fd903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fd788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fd8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fd900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpawnBagSaveMe__DropUnusableToStation
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_58;
  
  if ((DAT_0951614f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174650);
    FUN_03f5c2a4(&DAT_091adb10);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091d9708);
    FUN_03f5c2a4(&DAT_09217df0);
    DAT_0951614f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_84[0] = 0;
  if (*(char *)(param_4 + 0x28) != '\0') {
    return;
  }
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(DAT_091b4c28 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_040fd788;
    uVar1 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract
                      (**(long **)(lVar2 + 0xb8),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if ((**(long **)(DAT_091881a0 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar2 != 0)) {
    lVar7 = *(long *)(lVar2 + 0x18);
    AnhPD_FoodOrder_SpawnBagSaveMe__GetMissingPieces(&local_a0);
    lVar3 = *(long *)(param_4 + 0x58);
    local_58 = 0;
    uStack_78 = puStack_98;
    local_80 = local_a0;
    local_70 = local_90;
    if (lVar3 != 0) {
      iVar6 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar6) {
          return;
        }
        lVar3 = FUN_057e0998(lVar3,iVar6,DAT_091adb28);
        if (lVar3 == 0) break;
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        if ((lVar7 == 0) ||
           (uVar1 = AnhPD_FoodOrder_LevelPieceBook__TakeWantedAsIs(lVar7,uVar4,&local_80,0),
           (uVar1 & 1) == 0)) {
          AnhPD_FoodOrder_SpawnBagSaveMe__get_MouthPosition(param_4);
          uVar1 = AnhPD_FoodOrder_LevelInfo__TryGetInteractableStation(lVar2,uVar4,&local_58,0);
          if (((uVar1 & 1) != 0) &&
             (uVar1 = AnhPD_FoodOrder_LevelInfo__WantsAutoFeed(lVar2,local_58,uVar4,0),
             (uVar1 & 1) != 0)) {
            if (iVar6 < 0) {
              return;
            }
            if (*(long *)(param_4 + 0x58) != 0) {
              lVar2 = FUN_057e0998(*(long *)(param_4 + 0x58),iVar6,DAT_091adb28);
              if (*(long *)(param_4 + 0x58) != 0) {
                FUN_057e251c(*(long *)(param_4 + 0x58),iVar6,DAT_091adb10);
                AnhPD_FoodOrder_SpawnBag__InvokeSpawnEffect(param_4);
                AnhPD_FoodOrder_SpawnBagSaveMe__ClearPreview(param_4);
                if (local_58 != 0) {
                  uVar4 = UnityEngine_Object__GetName(local_58,0);
                  uVar4 = System_String__Concat(DAT_09217df0,uVar4,0);
                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09189140);
                  }
                  local_84[0] = AnhPD_FoodOrder_PieceLedger__From(5,uVar4,0,0);
                  puStack_98 = local_84;
                  local_a0 = 0;
                  if (lVar2 != 0) {
                    uVar5 = *(undefined8 *)(lVar2 + 0x10);
                    lVar3 = **(long **)(DAT_091881a0 + 0xb8);
                    uVar8 = AnhPD_FoodOrder_SpawnBagSaveMe__get_MouthPosition(param_4);
                    lVar2 = local_58;
                    uVar4 = thunk_FUN_03f9944c(DAT_09174650);
                    FUN_070a8c30(uVar4,param_4,DAT_091d9708,0);
                    if (lVar3 != 0) {
                      AnhPD_FoodOrder_MessyController__SpawnToStation
                                (uVar8,param_2,param_3,lVar3,uVar5,lVar2,0,uVar4,0);
                      AnhPD_FoodOrder_PieceLedger_Scope__Dispose(local_84,0);
                      AnhPD_FoodOrder_SpawnBagSaveMe__ShowNext(param_4);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
            }
            break;
          }
        }
        lVar3 = *(long *)(param_4 + 0x58);
        iVar6 = iVar6 + 1;
      } while (lVar3 != 0);
    }
  }
LAB_040fd788:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

