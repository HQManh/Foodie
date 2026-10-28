// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$ReleaseHome
// address: 0x41ecd50
// body: available
// range: 0x41ecd50-0x41ece43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ecdb8 to 0x41ece44 AnhPD.FoodOrder.LevelInfo$$ClearInbound (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ece0c to 0x40c4ac8 AnhPD.FoodOrder.ServeShelfController$$CancelPromise (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ece3c to 0x41db550 AnhPD.FoodOrder.AreaService$$ReleasePendingCell (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ece40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelInfo__ReleaseHome
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09516b36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b36 = 1;
  }
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      AnhPD_FoodOrder_AreaService__ReleasePendingCell(*(long *)(param_1 + 0x40),param_2,0);
      return;
    }
LAB_041ece40:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (param_3 == 2) {
    uVar1 = AnhPD_FoodOrder_LevelInfo__get_Shelf();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = AnhPD_FoodOrder_LevelInfo__get_Shelf();
      if (lVar3 != 0) {
        AnhPD_FoodOrder_ServeShelfController__CancelPromise(lVar3,param_2,0);
        return;
      }
      goto LAB_041ece40;
    }
  }
  else if (param_3 == 1) {
    AnhPD_FoodOrder_LevelInfo__ClearInbound(param_1,param_4,param_2);
    return;
  }
  return;
}

