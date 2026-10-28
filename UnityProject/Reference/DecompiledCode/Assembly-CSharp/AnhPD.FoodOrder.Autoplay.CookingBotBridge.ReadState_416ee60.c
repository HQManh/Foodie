// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$ReadState
// address: 0x416ee60
// body: available
// range: 0x416ee60-0x416ef67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416ef64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_Autoplay_CookingBotBridge__ReadState(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((DAT_095165d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181eb8);
    DAT_095165d6 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09181eb8);
  CookingGraph_BotGameState___ctor(lVar3,0);
  bVar1 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__IsPlayable(param_1);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x1c) = bVar1 & 1;
    uVar5 = UnityEngine_Time__get_time(0);
    *(undefined4 *)(lVar3 + 0x18) = uVar5;
    uVar5 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__RemainingCustomerCount(param_1);
    *(undefined4 *)(lVar3 + 0x6c) = uVar5;
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__ExpirePendingCommitments(param_1);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddQueues(param_1,lVar3);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPickupables(param_1,lVar3);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddGrid(param_1,lVar3);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddSaveMeBag(param_1,lVar3);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddCommitted(param_1,lVar3);
    AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddCustomerOrders(param_1,lVar3);
    iVar2 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__Fingerprint(lVar3);
    if (iVar2 == *(int *)(param_1 + 0x68)) {
      lVar4 = *(long *)(param_1 + 0x60);
    }
    else {
      *(int *)(param_1 + 0x68) = iVar2;
      lVar4 = *(long *)(param_1 + 0x60) + 1;
      *(long *)(param_1 + 0x60) = lVar4;
    }
    *(long *)(lVar3 + 0x10) = lVar4;
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

