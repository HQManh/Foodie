// rea decompile_all
// name: AnhPD.FoodOrder.SpawnBagSaveMe$$TryTakeUsable
// address: 0x40fc37c
// body: available
// range: 0x40fc37c-0x40fc66b inclusive
// range: 0x40fc670-0x40fc673 inclusive
// range: 0x40fc6bc-0x40fc743 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fc668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fc670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fc740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SpawnBagSaveMe__TryTakeUsable(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_64 [4];
  
  if ((DAT_09516143 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adb10);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09217df8);
    DAT_09516143 = 1;
  }
  local_64[0] = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 0;
  }
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(DAT_091b4c28 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_040fc740;
    uVar2 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract
                      (**(long **)(lVar3 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return 0;
      }
      lVar3 = FUN_057e0998(lVar3,iVar5,DAT_091adb28);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189140);
      }
      local_64[0] = AnhPD_FoodOrder_PieceLedger__Mute(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      lVar3 = **(long **)(DAT_091881a0 + 0xb8);
      AnhPD_FoodOrder_SpawnBagSaveMe__get_MouthPosition(param_1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = AnhPD_FoodOrder_MessyController__SpawnAndGetDragItem(lVar3,uVar4,0,0,0,0);
      AnhPD_FoodOrder_PieceLedger_Muted__Dispose(local_64,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = AnhPD_FoodOrder_SpawnBagSaveMe__get_SpawnedSortingOrder(param_1);
        if ((lVar3 == 0) ||
           (AnhPD_FoodOrder_DragItemBase__SetSortingOrder(lVar3,uVar1,0), param_2 == 0)) break;
        uVar2 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),lVar3,*(undefined8 *)(param_2 + 0x28));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x58) != 0) {
            FUN_057e251c(*(long *)(param_1 + 0x58),iVar5,DAT_091adb10);
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceLedger__Adopt(lVar3,5,DAT_09217df8,0);
            *param_3 = lVar3;
            thunk_FUN_03f5d7b8(param_3,lVar3);
            return 1;
          }
          break;
        }
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) break;
        AnhPD_FoodOrder_MessyController__DespawnItem(**(long **)(DAT_091881a0 + 0xb8),lVar3,0);
      }
      lVar3 = *(long *)(param_1 + 0x58);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_040fc740:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

