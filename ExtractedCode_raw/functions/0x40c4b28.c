// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$TryKeepPromise
// address: 0x40c4b28
// body: available
// range: 0x40c4b28-0x40c4d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c4d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ServeShelfController__TryKeepPromise(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  if ((DAT_09515f82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afe38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_092211c8);
    DAT_09515f82 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0xe9) != '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar1 = AnhPD_FoodOrder_ShelfMergeQueue__IsInFlight(*(long *)(param_1 + 0xa0),param_2,0);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar2 = AnhPD_FoodOrder_ShelfMergeQueue__FindPromise
                          (*(long *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0x78),0);
        if (lVar2 == 0) {
          return 0;
        }
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        uVar1 = AnhPD_FoodOrder_ServeShelfController__CanPlateStillTake(param_1,uVar4);
        if ((uVar1 & 1) == 0) {
          AnhPD_FoodOrder_ServeShelfController__AbortRemaining(param_1,uVar4);
          AnhPD_FoodOrder_ServeShelfController__FlushDropBacks(param_1);
          return 0;
        }
        AnhPD_FoodOrder_ShelfMergeQueue__Bind(lVar2,param_2,0);
        if (*(long *)(param_1 + 0x90) != 0) {
          local_24 = FUN_057e1a08(*(long *)(param_1 + 0x90),uVar4,DAT_091afe38);
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
          uVar3 = System_String__Format(DAT_092211c8,uVar3,0);
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189140);
          }
          AnhPD_FoodOrder_PieceLedger__Step(param_2,uVar3,0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
            lVar2 = AnhPD_FoodOrder_DragItem__PlayWindUp(param_2,0);
            if (lVar2 == 0) {
              AnhPD_FoodOrder_ServeShelfController__PumpLaunches(param_1,uVar4);
            }
            else {
              AnhPD_FoodOrder_ServeShelfController__SchedulePump
                        (*(undefined4 *)(param_1 + 0x28),param_1,uVar4);
            }
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

