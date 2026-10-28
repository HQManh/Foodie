// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$TryAutoMergeToPlate
// address: 0x40c091c
// body: available
// range: 0x40c091c-0x40c0b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c0b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ServeShelfController__TryAutoMergeToPlate
          (long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  if ((DAT_09515f69 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f69 = 1;
  }
  local_38 = 0;
  local_3c = 0;
  local_48 = 0;
  local_4c = 0;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    return 0;
  }
  if (((param_4 & 1) != 0) ||
     (uVar1 = AnhPD_FoodOrder_ServeShelfController__get_IsInteractBlocked(0), (uVar1 & 1) == 0)) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar1 & 1) != 0) {
      if (param_2 == 0) {
LAB_040c0b50:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(param_2 + 0xe9) == '\0') &&
         (((param_3 & 1) == 0 ||
          (uVar1 = AnhPD_FoodOrder_DragItem__get_IsLandedInCell(param_2,0), (uVar1 & 1) != 0)))) {
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c0b50;
        uVar1 = AnhPD_FoodOrder_ShelfMergeQueue__IsInFlight(*(long *)(param_1 + 0xa0),param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar1 & 1) != 0) {
            lVar2 = AnhPD_FoodOrder_ServeShelfController__get_Info();
            if (lVar2 == 0) {
              return 0;
            }
            uVar3 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(lVar2,param_2,0);
            uVar1 = AnhPD_FoodOrder_ServeShelfController__TryPickMergeTarget
                              (param_1,uVar3,*(undefined8 *)(param_2 + 0x78),lVar2,&local_38,
                               &local_3c,&local_4c);
            if (((uVar1 & 1) != 0) &&
               ((*(long *)(param_2 + 0xa0) != 0 ||
                (uVar1 = AnhPD_FoodOrder_ServeShelfController__CanHandOverNow(param_1,local_38),
                (uVar1 & 1) != 0)))) {
              uVar3 = local_38;
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
              if ((uVar1 & 1) == 0) {
                local_38 = AnhPD_FoodOrder_ServeShelfController__CreatePlate(param_1,local_3c);
              }
              uVar3 = local_38;
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
              if ((uVar1 & 1) != 0) {
                AnhPD_FoodOrder_ServeShelfController__TryResolveMerge
                          (param_1,local_38,*(undefined8 *)(param_2 + 0x78),lVar2,&local_48);
                AnhPD_FoodOrder_ServeShelfController__Reserve(param_1,local_38,param_2,local_48);
                lVar2 = AnhPD_FoodOrder_DragItem__PlayWindUp(param_2,0);
                if (lVar2 == 0) {
                  AnhPD_FoodOrder_ServeShelfController__PumpLaunches(param_1,local_38);
                }
                else {
                  AnhPD_FoodOrder_ServeShelfController__SchedulePump
                            (*(undefined4 *)(param_1 + 0x28),param_1);
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

