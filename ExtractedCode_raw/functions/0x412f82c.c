// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$TryGetOrderPieces
// address: 0x412f82c
// body: available
// range: 0x412f82c-0x412f9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412f9d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412f9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_SeafoodOrderStrategy__TryGetOrderPieces
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_40;
  long local_38;
  
  if ((DAT_09516329 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09516329 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uVar9 = puVar6[1];
  uVar8 = *puVar6;
  param_3[2] = puVar6[2];
  param_3[1] = uVar9;
  *param_3 = uVar8;
  uVar3 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_2,&local_40,0);
  lVar2 = local_38;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(local_38 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(uint *)(lVar2 + (long)(int)uVar7 * 4 + 0x20);
        iVar5 = *(int *)(DAT_09189158 + 0xe4);
        if (0x19 < uVar1) goto LAB_0412f998;
        if (iVar5 == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_60,param_3,uVar1,1,0);
        uVar7 = uVar7 + 1;
        param_3[1] = uStack_58;
        *param_3 = local_60;
        param_3[2] = local_50;
        uVar1 = *(uint *)(lVar2 + 0x18);
      } while ((int)uVar7 < (int)uVar1);
    }
    uVar3 = local_40;
    uStack_58 = param_3[1];
    local_60 = *param_3;
    local_50 = param_3[2];
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    uVar3 = CakeOrder_InGame_Seafood_SeafoodPieceTable__IsComplete(uVar3 & 0xffffffff,&local_80,0);
    if ((uVar3 & 1) == 0) {
      iVar5 = *(int *)(DAT_09189158 + 0xe4);
LAB_0412f998:
      if (iVar5 == 0) {
        FUN_03f5c424();
      }
      puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uVar4 = 0;
      uVar9 = puVar6[1];
      uVar8 = *puVar6;
      param_3[2] = puVar6[2];
      param_3[1] = uVar9;
      *param_3 = uVar8;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

