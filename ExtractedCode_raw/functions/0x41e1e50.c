// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$PickById
// address: 0x41e1e50
// body: available
// range: 0x41e1e50-0x41e1f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e1f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e1f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__PickById(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_09516ade & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f70);
    FUN_03f5c2a4(&DAT_091a4f78);
    FUN_03f5c2a4(&DAT_091a4f80);
    FUN_03f5c2a4(&DAT_091b20f0);
    DAT_09516ade = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,param_1,DAT_091b20f0);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  lVar2 = 0;
  while( true ) {
    do {
      lVar4 = lVar2;
      uVar3 = FUN_071bd28c(&local_50,DAT_091a4f78);
      lVar1 = local_40;
      if ((uVar3 & 1) == 0) {
        FUN_071bd288(&local_50,DAT_091a4f70);
        return lVar4;
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = lVar4;
    } while (((*(int *)(local_40 + 0x44) < 1) ||
             (uVar3 = System_String__op_Inequality(*(undefined8 *)(local_40 + 0x38),param_2,0),
             (uVar3 & 1) != 0)) || (lVar2 = lVar1, lVar4 == 0));
    if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x10) == 0) break;
    lVar2 = lVar4;
    if (*(int *)(*(long *)(lVar1 + 0x10) + 0x2c) < *(int *)(*(long *)(lVar4 + 0x10) + 0x2c)) {
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

