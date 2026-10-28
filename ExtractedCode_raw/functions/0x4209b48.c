// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineQuery$$GetActiveCustomerTransform
// address: 0x4209b48
// body: available
// range: 0x4209b48-0x4209c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4209c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4209c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4209c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4209c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_CustomerLineQuery__GetActiveCustomerTransform(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((DAT_09516c28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acac8);
    DAT_09516c28 = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_38,*(long *)(param_1 + 0x10),DAT_091acac8);
  do {
    uVar1 = FUN_071bd28c(&local_38,DAT_091a2c68);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      goto LAB_04209c14;
    }
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while (*(int *)(*(long *)(local_28 + 0x38) + 0x10) == 0);
  if (*(long *)(local_28 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(undefined8 *)(*(long *)(local_28 + 0x20) + 0x98);
LAB_04209c14:
  FUN_071bd288(&local_38,DAT_091a2c60);
  return uVar2;
}

