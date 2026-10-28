// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$RotateFrontForPromote
// address: 0x40e3b34
// body: available
// range: 0x40e3b34-0x40e3cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e3cb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ConveyorIngredientSource__RotateFrontForPromote(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_09516076 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abdc0);
    FUN_03f5c2a4(&DAT_091abdc8);
    FUN_03f5c2a4(&DAT_091abd80);
    FUN_03f5c2a4(&DAT_091abde0);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_091b8b58);
    FUN_03f5c2a4(&DAT_091b8b80);
    FUN_03f5c2a4(&DAT_0917e328);
    DAT_09516076 = 1;
  }
  if (0 < param_2) {
    plVar2 = (long *)(param_1 + 0x10);
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (param_2 + 1 <= *(int *)(lVar3 + 0x20))) {
      lVar1 = thunk_FUN_03f9944c(DAT_0917bee0);
      FUN_057e053c(lVar1,lVar3,DAT_091abd80);
      if ((lVar1 != 0) && (lVar3 = FUN_057e0998(lVar1,param_2,DAT_091abde0), lVar3 != 0)) {
        *(undefined4 *)(lVar3 + 0x3c) = 0xffffffff;
        FUN_057e251c(lVar1,param_2,DAT_091abdc8);
        FUN_057e1b20(lVar1,0,lVar3,DAT_091abdc0);
        lVar3 = thunk_FUN_03f9944c(DAT_0917e328);
        FUN_05e2cb6c(lVar3,lVar1,DAT_091b8b58);
        *plVar2 = lVar3;
        thunk_FUN_03f5d7b8(plVar2,lVar3);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

