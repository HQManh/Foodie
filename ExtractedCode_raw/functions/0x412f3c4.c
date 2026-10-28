// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$GetIdPieceOffer
// address: 0x412f3c4
// body: available
// range: 0x412f3c4-0x412f5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412f5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SeafoodOrderStrategy__GetIdPieceOffer(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_09516326 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189150);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09516326 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_2,0);
  if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a7b8);
  }
  uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__TryGetDish(uVar2,(long)&local_28 + 4,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = AnhPD_FoodOrder_SeafoodOrderStrategy__get_Config();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    lVar4 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = AnhPD_FoodOrder_SeafoodOrderStrategy__get_Config();
      if (lVar4 == 0) goto LAB_0412f5dc;
      lVar4 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(lVar4,param_2,0);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        uVar3 = AnhPD_FoodOrder_RcPieceConfig__get_Offers(lVar4,0);
        lVar4 = 0;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__TryGetPiece(param_2,&local_28,0);
          lVar4 = 0;
          if ((uVar3 & 1) != 0) {
            lVar4 = thunk_FUN_03f9944c(DAT_09189150);
            AnhPD_FoodOrder_PieceOffer___ctor(lVar4,0);
            uVar3 = local_28;
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__One(&local_58,uVar3 & 0xffffffff,0);
            if (lVar4 == 0) goto LAB_0412f5dc;
            *(undefined1 *)(lVar4 + 0x28) = 1;
            *(undefined8 *)(lVar4 + 0x18) = uStack_50;
            *(undefined8 *)(lVar4 + 0x10) = local_58;
            *(undefined8 *)(lVar4 + 0x20) = local_48;
            *(undefined4 *)(lVar4 + 0x2c) = 1;
          }
        }
      }
    }
  }
  else {
    uVar1 = local_28._4_4_;
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__TryDecode(uVar1,param_2,&local_40,0);
    lVar4 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_03f9944c(DAT_09189150);
      AnhPD_FoodOrder_PieceOffer___ctor(lVar4,0);
      if (lVar4 == 0) {
LAB_0412f5dc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar4 + 0x28) = 1;
      *(undefined8 *)(lVar4 + 0x18) = uStack_38;
      *(undefined8 *)(lVar4 + 0x10) = local_40;
      *(undefined8 *)(lVar4 + 0x20) = local_30;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
    }
  }
  return lVar4;
}

