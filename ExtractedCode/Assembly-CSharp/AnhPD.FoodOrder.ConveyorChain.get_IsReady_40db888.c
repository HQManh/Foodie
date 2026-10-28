// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChain$$get_IsReady
// address: 0x40db888
// body: available
// range: 0x40db888-0x40db987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40db980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40db984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ConveyorChain__get_IsReady(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((DAT_09516037 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe98);
    DAT_09516037 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar2 + 0x18) < *(int *)(param_1 + 0x14)) {
    uVar1 = 0;
  }
  else {
    FUN_057e185c(&local_38,lVar2,DAT_091abe78);
    do {
      uVar1 = FUN_071bd28c(&local_38,DAT_091a2728);
      if ((uVar1 & 1) == 0) break;
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(int *)(local_28 + 0x24) == 0);
    uVar1 = uVar1 ^ 1;
    FUN_071bd288(&local_38,DAT_091a2720);
  }
  return uVar1 & 1;
}

