// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$OnLeave
// address: 0x4218d4c
// body: available
// range: 0x4218d4c-0x4218e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4218e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader__OnLeave(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_28;
  
  if ((DAT_09516ce3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6fa8);
    DAT_09516ce3 = 1;
  }
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),param_2);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),param_3);
  uVar2 = AnhPD_FoodOrder_CustomerLoader__TryGetCurrentCustomer(param_1,&local_28);
  lVar1 = local_28;
  if ((uVar2 & 1) == 0) {
    AnhPD_FoodOrder_CustomerLoader__FlushSpawnCoin(param_1);
    AnhPD_FoodOrder_CustomerLoader__FlushLeaveCallback(param_1);
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091c6fa8,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    AnhPD_FoodOrder_Customer__ContinueHappy(lVar1,uVar3,0);
    AnhPD_FoodOrder_CustomerLoader__FlushSpawnCoin(param_1);
  }
  return;
}

