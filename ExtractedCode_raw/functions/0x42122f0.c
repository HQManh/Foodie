// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$LoadCustomer
// address: 0x42122f0
// body: available
// range: 0x42122f0-0x4212393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421238c to 0x4212290 AnhPD.FoodOrder.CustomerSpawner$$SpawnCustomerWithOrders (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4212390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__LoadCustomer
               (undefined4 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_09516c85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183118);
    DAT_09516c85 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09183118);
  CakeOrder_InGame_CustomerSpawnData___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_2 + 0x40);
    *(undefined4 *)(lVar1 + 0x28) = param_3;
    *(undefined4 *)(lVar1 + 0x24) = param_1;
    if (lVar3 != 0) {
      uVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),lVar1,*(undefined8 *)(lVar3 + 0x28));
      AnhPD_FoodOrder_CustomerSpawner__SpawnCustomerWithOrders(param_2,lVar1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

