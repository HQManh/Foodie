// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$SpawnDirtyPlateAt
// address: 0x4235c84
// body: available
// range: 0x4235c84-0x4235f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4235f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__SpawnDirtyPlateAt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_54;
  undefined8 local_48;
  
  if ((DAT_09516de5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213cb0);
    FUN_03f5c2a4(&DAT_09226da8);
    DAT_09516de5 = 1;
  }
  local_48 = 0;
  uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_5,0);
    if ((uVar1 & 1) != 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
        plVar2 = (long *)AnhPD_FoodOrder_MessyController__SpawnDragItemPrefab
                                   (param_1,param_2,param_3,**(long **)(DAT_091881a0 + 0xb8),param_5
                                    ,0,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar1 = UnityEngine_Object__op_Implicit(plVar2,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        piVar6 = (int *)(param_4 + 0x40);
        if (*piVar6 < 1) {
          if (param_5 == 0) goto LAB_04235f1c;
          piVar6 = (int *)(param_5 + 0x94);
        }
        if (plVar2 != (long *)0x0) {
          lVar3 = *(long *)(param_4 + 0xc0);
          *(int *)((long)plVar2 + 0x94) = *piVar6;
          if (lVar3 != 0) {
            uVar1 = AnhPD_FoodOrder_IngCellFinder__TryGetDirtyPlateCell(lVar3,plVar2,&local_48);
            if ((uVar1 & 1) == 0) {
              uVar7 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
              local_54 = *(undefined4 *)((long)plVar2 + 0x94);
              uVar5 = FUN_03f5c42c(DAT_09535420,&local_54);
              uVar7 = System_String__Format(DAT_09213cb0,uVar7,uVar5,0);
              uVar7 = System_String__Concat(uVar7,DAT_09226da8,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar7,param_4,0);
              if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
                AnhPD_FoodOrder_MessyController__DespawnItem
                          (**(long **)(DAT_091881a0 + 0xb8),plVar2,0);
                return;
              }
            }
            else {
              lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(plVar2,0);
              lVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(plVar2,0);
              if ((lVar4 != 0) && (UnityEngine_Transform__get_position(lVar4,0), lVar3 != 0)) {
                UnityEngine_Transform__set_position(param_1,param_2,lVar3,0);
                AnhPD_FoodOrder_DragItem__RegisterCell(plVar2,local_48,1,0);
                AnhPD_FoodOrder_GridIngController__RefreshCellDishes(param_4);
                return;
              }
            }
          }
        }
      }
LAB_04235f1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

