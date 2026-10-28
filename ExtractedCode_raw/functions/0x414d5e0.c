// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$ConvertSpawnDataToStack
// address: 0x414d5e0
// body: available
// range: 0x414d5e0-0x414d957 inclusive
// range: 0x414d95c-0x414d95f inclusive
// range: 0x414d964-0x414d967 inclusive
// range: 0x414d96c-0x414d96f inclusive
// range: 0x414d974-0x414d977 inclusive
// range: 0x414d97c-0x414d97f inclusive
// range: 0x414d984-0x414d987 inclusive
// range: 0x414d98c-0x414d98f inclusive
// range: 0x414da14-0x414da9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414d954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d95c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d98c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414da98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414da9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_IceCreamOrderStrategy__ConvertSpawnDataToStack(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516459 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_09186a58);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091b05e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bb388);
    FUN_03f5c2a4(&DAT_091bb390);
    FUN_03f5c2a4(&DAT_0917e940);
    DAT_09516459 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar5,DAT_091b0558);
  if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = AnhPD_FoodOrder_IceCreamOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((param_2 == 0) || ((uVar7 & 1) != 0)) {
    uVar9 = thunk_FUN_03f9944c(DAT_0917e940);
    FUN_061a1268(uVar9,DAT_091bb388);
  }
  else {
    lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar8,DAT_091b0558);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar7 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar12 = *(long *)(param_2 + uVar7 * 8 + 0x20);
        if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x30), lVar12 != 0)) {
          FUN_057e185c(&local_b0,lVar12,DAT_091ac248);
          local_70 = local_a0;
          puStack_78 = puStack_a8;
          local_80 = local_b0;
          local_b0 = 0;
          puStack_a8 = &local_80;
          while (uVar10 = FUN_071bd28c(&local_80,DAT_091a28a8), (uVar10 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar10 = CakeOrder_InGame_OrderRecipeCodec__TryDecode
                               (*(undefined8 *)(local_70 + 0x10),&local_90,0);
            lVar12 = local_88;
            if ((uVar10 & 1) != 0) {
              if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (0 < (int)*(ulong *)(local_88 + 0x18)) {
                iVar4 = (int)local_90;
                uVar10 = 0;
                uVar11 = *(ulong *)(local_88 + 0x18) & 0xffffffff;
                lVar1 = local_88 + 0x20;
                do {
                  if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar2 = *(int *)(lVar8 + 0x18);
                  uVar3 = *(undefined4 *)(lVar1 + uVar10 * 4);
                  *(undefined4 *)(lVar8 + 0x18) = 0;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (0 < iVar2) {
                    System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar2,0);
                  }
                  if (iVar4 == 4) {
                    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar11 = AnhPD_FoodOrder_IceCreamPieceTable__IsFlavor(uVar3);
                    if ((uVar11 & 1) == 0) goto LAB_0414d8e8;
                    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar11 = AnhPD_FoodOrder_IceCreamPieceTable__TryGetRefinedOf(uVar3,&local_98);
                    if ((uVar11 & 1) == 0) goto LAB_0414d8e8;
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar11 = AnhPD_FoodOrder_RecipeConfigSO__TryGetInputsOf
                                       (lVar6,local_98,uVar3,lVar8,0);
                    if ((uVar11 & 1) == 0) goto LAB_0414d8ec;
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_057e0e78(lVar5,lVar8,DAT_091b0578);
                  }
                  else {
LAB_0414d8e8:
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
LAB_0414d8ec:
                    AnhPD_FoodOrder_RecipeConfigSO__CollectSpawnIdsOfPiece(lVar6,uVar3,lVar8,0);
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_057e0e78(lVar5,lVar8,DAT_091b0578);
                  }
                  uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
                  uVar10 = uVar10 + 1;
                } while ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18));
              }
            }
          }
          FUN_071bd288(&local_80,DAT_091a28a0);
          uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar10);
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e2674(lVar5,DAT_091b05e0);
    uVar9 = thunk_FUN_03f9944c(DAT_0917e940);
    FUN_061a13c8(uVar9,lVar5,DAT_091bb390);
  }
  return uVar9;
}

