// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy$$ConvertSpawnDataToStack
// address: 0x415a6b4
// body: available
// range: 0x415a6b4-0x415aa07 inclusive
// range: 0x415aa0c-0x415aa0f inclusive
// range: 0x415aa14-0x415aa17 inclusive
// range: 0x415aa1c-0x415aa1f inclusive
// range: 0x415aa24-0x415aa27 inclusive
// range: 0x415aa2c-0x415aa2f inclusive
// range: 0x415aaa0-0x415ab2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415aa04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415aa0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415aa14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415aa1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415aa24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415aa2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415ab24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415ab28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_SandwichOrderStrategy__ConvertSpawnDataToStack(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095164fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091b05e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a568);
    FUN_03f5c2a4(&DAT_0918a578);
    FUN_03f5c2a4(&DAT_091bb388);
    FUN_03f5c2a4(&DAT_091bb390);
    FUN_03f5c2a4(&DAT_0917e940);
    DAT_095164fa = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar4,DAT_091b0558);
  if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = AnhPD_FoodOrder_SandwichOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((param_2 == 0) || ((uVar6 & 1) != 0)) {
    uVar8 = thunk_FUN_03f9944c(DAT_0917e940);
    FUN_061a1268(uVar8,DAT_091bb388);
  }
  else {
    lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar7,DAT_091b0558);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar6 = 0;
      uVar9 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = *(long *)(param_2 + uVar6 * 8 + 0x20);
        if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x30), lVar11 != 0)) {
          FUN_057e185c(&local_b0,lVar11,DAT_091ac248);
          local_70 = local_a0;
          puStack_78 = puStack_a8;
          local_80 = local_b0;
          local_b0 = 0;
          puStack_a8 = &local_80;
          while (uVar9 = FUN_071bd28c(&local_80,DAT_091a28a8), (uVar9 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = CakeOrder_InGame_OrderRecipeCodec__TryDecode
                              (*(undefined8 *)(local_70 + 0x10),&local_90,0);
            lVar11 = local_88;
            if ((uVar9 & 1) != 0) {
              if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (0 < (int)*(ulong *)(local_88 + 0x18)) {
                uVar9 = 0;
                uVar10 = *(ulong *)(local_88 + 0x18) & 0xffffffff;
                lVar1 = local_88 + 0x20;
                do {
                  if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar2 = *(int *)(lVar7 + 0x18);
                  uVar3 = *(undefined4 *)(lVar1 + uVar9 * 4);
                  *(undefined4 *)(lVar7 + 0x18) = 0;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (0 < iVar2) {
                    System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
                  }
                  uVar10 = local_90;
                  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar10 = AnhPD_FoodOrder_SandwichPieceTable__TryGetFormOf
                                     (uVar10 & 0xffffffff,uVar3,&local_98,0);
                  uVar8 = local_98;
                  if ((uVar10 & 1) == 0) {
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    AnhPD_FoodOrder_RecipeConfigSO__CollectSpawnIdsOfPiece(lVar5,uVar3,lVar7,0);
                  }
                  else {
                    if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    AnhPD_FoodOrder_SandwichOrderStrategy__CollectLeaves(lVar5,uVar8,uVar3,lVar7);
                  }
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_057e0e78(lVar4,lVar7,DAT_091b0578);
                  uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)(int)*(uint *)(lVar11 + 0x18));
              }
            }
          }
          FUN_071bd288(&local_80,DAT_091a28a0);
          uVar9 = (ulong)*(uint *)(param_2 + 0x18);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar9);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e2674(lVar4,DAT_091b05e0);
    uVar8 = thunk_FUN_03f9944c(DAT_0917e940);
    FUN_061a13c8(uVar8,lVar4,DAT_091bb390);
  }
  return uVar8;
}

