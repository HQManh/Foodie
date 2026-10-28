// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$TryPickReadyOrder
// address: 0x41dfa98
// body: available
// range: 0x41dfa98-0x41dfbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dfbb4 to 0x41fce64 AnhPD.FoodOrder.ServeService$$TryReserveOrder (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41dfbd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_AutoCompleteOrderFx__TryPickReadyOrder
          (long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09516ad4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516ad4 = 1;
  }
  lVar5 = DAT_09189158;
  *param_3 = 0xffffffff;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar5 = DAT_09189158;
  }
  puVar4 = *(undefined8 **)(lVar5 + 0xb8);
  uVar6 = puVar4[1];
  uVar3 = *puVar4;
  param_4[2] = puVar4[2];
  param_4[1] = uVar6;
  *param_4 = uVar3;
  uVar2 = AnhPD_FoodOrder_AutoCompleteOrderFx__CollectCompletableOrders
                    (param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    uVar1 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar5 + 0x18),0);
    uVar1 = FUN_05796eb0(lVar5,uVar1,DAT_091add20);
    *param_3 = uVar1;
    uVar2 = AnhPD_FoodOrder_AutoCompleteOrderFx__OrderPieces(param_1,param_2,uVar1,param_4);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = AnhPD_FoodOrder_ServeService__TryReserveOrder
                        (*(long *)(param_1 + 0x28),param_1,param_2,*param_3,param_1 + 0x38,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

