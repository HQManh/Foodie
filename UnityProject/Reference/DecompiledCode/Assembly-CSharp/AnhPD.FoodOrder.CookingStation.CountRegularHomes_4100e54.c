// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$CountRegularHomes
// address: 0x4100e54
// body: available
// range: 0x4100e54-0x4100f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4100f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_CookingStation__CountRegularHomes(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09516169 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516169 = 1;
  }
  if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    lVar4 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    uVar3 = (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
    if (lVar4 != 0) {
      iVar1 = AnhPD_FoodOrder_LevelInfo__CountCellAvailable(lVar4,uVar3,param_3,0);
      if (param_3 - iVar1 != 0 && iVar1 <= param_3) {
        iVar2 = AnhPD_FoodOrder_LevelInfo__CountStationRoomFor(lVar4,uVar3,param_3 - iVar1,0);
        iVar1 = iVar2 + iVar1;
      }
      if ((iVar1 < param_3) &&
         (iVar2 = (**(code **)(*param_1 + 0x238))(param_1,param_2,*(undefined8 *)(*param_1 + 0x240))
         , 0 < iVar2)) {
        iVar1 = iVar1 + 1;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

