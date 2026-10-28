// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$EnsureSnapshot
// address: 0x40bfbf0
// body: available
// range: 0x40bfbf0-0x40bfd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bfd14 to 0x40d694c AnhPD.FoodOrder.ShelfSnapshot$$Ensure (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bfd18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__EnsureSnapshot(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09515f92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178f88);
    FUN_03f5c2a4(&DAT_09178f90);
    FUN_03f5c2a4(&DAT_091d8bd0);
    FUN_03f5c2a4(&DAT_091d8bd8);
    DAT_09515f92 = 1;
  }
  plVar4 = (long *)(param_1 + 0xd0);
  if (*plVar4 == 0) {
    uVar1 = thunk_FUN_03f9944c(DAT_09178f88);
    FUN_0531b680(uVar1,param_1,DAT_091d8bd0,0);
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    thunk_FUN_03f5d7b8(plVar4,uVar1);
  }
  plVar5 = (long *)(param_1 + 0xd8);
  if (*plVar5 == 0) {
    uVar1 = thunk_FUN_03f9944c(DAT_09178f90);
    FUN_05324070(uVar1,param_1,DAT_091d8bd8,0);
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    thunk_FUN_03f5d7b8(plVar5,uVar1);
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = AnhPD_FoodOrder_ServeShelfController__get_Info();
  uVar2 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle();
  if (lVar6 != 0) {
    AnhPD_FoodOrder_ShelfSnapshot__Ensure(lVar6,uVar3,uVar1,uVar2,*plVar4,*plVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

