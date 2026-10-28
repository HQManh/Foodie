// rea decompile_all
// name: AnhPD.FoodOrder.TutorialManager$$OnOrderShown
// address: 0x41208f0
// body: available
// range: 0x41208f0-0x4120a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41209f8 to 0x4120a10 AnhPD.FoodOrder.TutorialManager$$TryPlayCustomerTut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4120a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialManager__OnOrderShown(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_0951628e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c130);
    DAT_0951628e = 1;
  }
  if (*(int *)(DAT_0918c130 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(char **)(DAT_0918c130 + 0xb8) != '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar1 & 1) != 0) {
      if (param_2 != 0) {
        lVar2 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(param_2,0);
        if (lVar2 == 0) {
          return;
        }
        lVar2 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(param_2,0);
        if (lVar2 != 0) {
          uVar1 = CakeOrder_InGame_CustomerSpawnData__get_IsShipper(lVar2,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = CakeOrder_InGame_CustomerSpawnData__get_IsBoss(lVar2,0);
            if ((uVar1 & 1) == 0) {
              return;
            }
            puVar4 = (undefined8 *)(param_1 + 0x30);
            uVar3 = 2;
          }
          else {
            puVar4 = (undefined8 *)(param_1 + 0x28);
            uVar3 = 1;
          }
          AnhPD_FoodOrder_TutorialManager__TryPlayCustomerTut(param_1,param_2,uVar3,*puVar4);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

