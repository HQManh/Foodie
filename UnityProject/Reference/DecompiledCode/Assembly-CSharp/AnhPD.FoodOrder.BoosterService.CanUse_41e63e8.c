// rea decompile_all
// name: AnhPD.FoodOrder.BoosterService$$CanUse
// address: 0x41e63e8
// body: available
// range: 0x41e63e8-0x41e650b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e6494 to 0x42364c4 AnhPD.FoodOrder.GridIngController$$HasAnyDirtyPlate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e64b8 to 0x41e6940 AnhPD.FoodOrder.BoosterService$$CanAutoMakeOrder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e64dc to 0x41e650c AnhPD.FoodOrder.BoosterService$$AnyPickableBeltItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e6508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong AnhPD_FoodOrder_BoosterService__CanUse(long param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09516b06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b06 = 1;
  }
  *param_3 = 1;
  if (param_2 < 4) {
    if (param_2 == 2) {
      uVar2 = AnhPD_FoodOrder_BoosterService__AnyPickableBeltItem(param_1,1);
      return uVar2;
    }
    if (param_2 == 3) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
          uVar2 = AnhPD_FoodOrder_GridIngController__HasAnyDirtyPlate(lVar3,0);
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (param_2 == 4) {
      iVar1 = AnhPD_FoodOrder_BoosterService__DeepestBeltRow(param_1);
      return (ulong)(1 < iVar1);
    }
    if (param_2 == 9) {
      uVar2 = AnhPD_FoodOrder_BoosterService__CanAutoMakeOrder(param_1);
      return uVar2;
    }
  }
  *param_3 = 0;
  return 0;
}

