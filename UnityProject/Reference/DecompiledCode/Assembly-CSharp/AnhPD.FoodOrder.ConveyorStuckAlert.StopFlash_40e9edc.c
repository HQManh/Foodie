// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$StopFlash
// address: 0x40e9edc
// body: available
// range: 0x40e9edc-0x40ea007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ea000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorStuckAlert__StopFlash(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_095160a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3308);
    FUN_03f5c2a4(&DAT_091a3310);
    FUN_03f5c2a4(&DAT_091a3318);
    FUN_03f5c2a4(&DAT_091ad988);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160a8 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x38),DAT_091ad988);
    while (uVar2 = FUN_071bd28c(&local_48,DAT_091a3310), lVar1 = local_38, (uVar2 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_IngredientConveyorItem__ResetRejectFlash(lVar1);
        AnhPD_FoodOrder_IngredientConveyorItem__SetDeadFlash(lVar1,0);
      }
    }
    FUN_071bd288(&local_48,DAT_091a3308);
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  return;
}

