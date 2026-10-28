// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$SpawnFlyer
// address: 0x41e2a20
// body: available
// range: 0x41e2a20-0x41e2b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e2b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e2b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_AutoCompleteOrderFx__SpawnFlyer
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 local_34 [4];
  
  if ((DAT_09516aea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09217c18);
    DAT_09516aea = 1;
  }
  local_34[0] = 0;
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_34[0] = AnhPD_FoodOrder_PieceLedger__From(2,DAT_09217c18,0,0);
  if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    lVar1 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x138);
    if (lVar1 != 0) {
      uVar2 = AnhPD_FoodOrder_SpawnService__SpawnAndGetDragItem
                        (param_1,param_2,param_3,lVar1,param_5,0,0,0,0,in_x6,in_x7,0,local_34);
      AnhPD_FoodOrder_PieceLedger_Scope__Dispose(local_34,0);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_AutoCompleteOrderFx__PrepareFlyer(uVar2);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

