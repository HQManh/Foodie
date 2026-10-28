// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$AddExtra
// address: 0x40cca2c
// body: available
// range: 0x40cca2c-0x40cca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cca9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__AddExtra(long param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09515fc7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b43d0);
    DAT_09515fc7 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
    uStack_48 = param_2[1];
    local_50 = *param_2;
    uStack_38 = param_2[3];
    uStack_40 = param_2[2];
    uStack_28 = param_2[5];
    local_30 = param_2[4];
    AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Add(param_1,&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

