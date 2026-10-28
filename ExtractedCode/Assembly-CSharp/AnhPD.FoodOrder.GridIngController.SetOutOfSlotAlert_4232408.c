// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$SetOutOfSlotAlert
// address: 0x4232408
// body: available
// range: 0x4232408-0x423253b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42324d0 to 0x421f9c8 AnhPD.FoodOrder.GameplayUI$$ShowAlert (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4232534 to 0x421fa88 AnhPD.FoodOrder.GameplayUI$$HideAlert (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4232538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(long param_1,byte param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  bVar1 = param_2 & 1;
  if ((DAT_09516dda & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184b88);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516dda = 1;
  }
  if (*(byte *)(param_1 + 0xf4) != bVar1) {
    uVar4 = **(undefined8 **)(DAT_09184b88 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    lVar3 = DAT_09184b88;
    if ((uVar2 & 1) != 0) {
      *(byte *)(param_1 + 0xf4) = bVar1;
      lVar3 = **(long **)(lVar3 + 0xb8);
      if ((param_2 & 1) == 0) {
        if (lVar3 != 0) {
          AnhPD_FoodOrder_GameplayUI__HideAlert(lVar3,2,param_3,0);
          return;
        }
      }
      else if (lVar3 != 0) {
        AnhPD_FoodOrder_GameplayUI__ShowAlert(lVar3,2,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  *(byte *)(param_1 + 0xf4) = bVar1;
  if ((param_3 != 0) && ((param_2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x042324fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}

