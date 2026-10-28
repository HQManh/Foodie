// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderGrid$$SetStationCount
// address: 0x41186e8
// body: available
// range: 0x41186e8-0x41187fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41187f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41187f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderGrid__SetStationCount
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  if ((DAT_09516248 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4550);
    FUN_03f5c2a4(&DAT_091a4558);
    FUN_03f5c2a4(&DAT_091a4560);
    FUN_03f5c2a4(&DAT_091b0518);
    DAT_09516248 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_58,*(long *)(param_1 + 0x38),DAT_091b0518);
  do {
    uVar2 = FUN_071bd28c(&local_58,DAT_091a4558);
    plVar1 = local_48;
    if ((uVar2 & 1) == 0) goto LAB_041187c8;
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = AnhPD_FoodOrder_StationHolder__IsContainStationId(local_48,param_2);
  } while ((uVar2 & 1) == 0);
  lVar3 = *plVar1;
  (**(code **)(lVar3 + 0x1a8))(plVar1,param_2,param_3,*(undefined8 *)(lVar3 + 0x1b0));
LAB_041187c8:
  FUN_071bd288(&local_58,DAT_091a4550);
  AnhPD_FoodOrder_StationHolderGrid__Layout(param_1);
  return;
}

