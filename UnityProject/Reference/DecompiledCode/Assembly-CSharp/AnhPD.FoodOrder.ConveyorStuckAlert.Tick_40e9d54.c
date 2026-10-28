// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$Tick
// address: 0x40e9d54
// body: available
// range: 0x40e9d54-0x40e9edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e9ec0 to 0x40eaf60 AnhPD.FoodOrder.ConveyorStuckAlert$$DriveFlash (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e9ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorStuckAlert__Tick(float param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_095160a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160a4 = 1;
  }
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040e9ed8;
    lVar5 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    if (lVar5 != 0) {
      param_1 = *(float *)(param_2 + 0x18) - param_1;
      *(float *)(param_2 + 0x18) = param_1;
      if (0.0 < param_1) {
LAB_040e9ea8:
        AnhPD_FoodOrder_ConveyorStuckAlert__DriveFlash(param_2,lVar5);
        return;
      }
      *(undefined4 *)(param_2 + 0x18) = 0x3ecccccd;
      AnhPD_FoodOrder_ConveyorStuckAlert__StopFlash(param_2);
      if (param_3 != 0) {
        AnhPD_FoodOrder_ConveyorGrid__PruneOrphanChains(param_3,0);
        iVar1 = AnhPD_FoodOrder_ConveyorStuckAlert__Classify(param_2,param_3,lVar5);
        *(bool *)(param_2 + 0x1c) = iVar1 == 1;
        *(bool *)(param_2 + 0x1d) = iVar1 == 2;
        AnhPD_FoodOrder_LevelInfo__SetBeltStuck(lVar5,iVar1 == 1,0);
        AnhPD_FoodOrder_LevelInfo__SetBeltDeadlocked(lVar5,*(undefined1 *)(param_2 + 0x1d),0);
        uVar2 = AnhPD_FoodOrder_ConveyorStuckAlert__HasAnyMove(param_2,param_3);
        AnhPD_FoodOrder_LevelInfo__SetBeltHasMove(lVar5,uVar2 & 1,0);
        if (*(long *)(param_2 + 0x28) != 0) {
          AnhPD_FoodOrder_ConveyorLockoutCheck__Collect
                    (*(long *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0x30));
          AnhPD_FoodOrder_ConveyorStuckAlert__RefreshLastMoveHint(param_2,param_3);
          goto LAB_040e9ea8;
        }
      }
LAB_040e9ed8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

