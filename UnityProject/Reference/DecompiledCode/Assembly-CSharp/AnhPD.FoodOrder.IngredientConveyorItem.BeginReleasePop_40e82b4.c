// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$BeginReleasePop
// address: 0x40e82b4
// body: available
// range: 0x40e82b4-0x40e8343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e833c to 0x40ed6fc AnhPD.FoodOrder.IngredientConveyorItem$$RefreshTapableVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e8340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__BeginReleasePop(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_095160c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160c6 = 1;
  }
  lVar2 = DAT_09188ad0;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  iVar1 = *(int *)(lVar2 + 0xe4);
  *(undefined1 *)(param_1 + 0xd1) = 1;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x50),0,0);
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapableVisual(param_1);
  return;
}

