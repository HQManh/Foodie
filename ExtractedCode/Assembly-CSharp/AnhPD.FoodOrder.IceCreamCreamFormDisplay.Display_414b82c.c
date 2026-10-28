// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCreamFormDisplay$$Display
// address: 0x414b82c
// body: available
// range: 0x414b82c-0x414b917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414b914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamCreamFormDisplay__Display(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516445 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516445 = 1;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  local_40 = param_2[2];
  AnhPD_FoodOrder_IceCreamPieceDisplay__Display(param_1,&local_50);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0x25,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = param_2[2];
    AnhPD_FoodOrder_IceCreamCreamFormDisplay_Form__Show
              (*(long *)(param_1 + 0x30),iVar1 < 1,&local_70);
    if (*(long *)(param_1 + 0x38) != 0) {
      uStack_88 = param_2[1];
      local_90 = *param_2;
      local_80 = param_2[2];
      AnhPD_FoodOrder_IceCreamCreamFormDisplay_Form__Show
                (*(long *)(param_1 + 0x38),0 < iVar1,&local_90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

