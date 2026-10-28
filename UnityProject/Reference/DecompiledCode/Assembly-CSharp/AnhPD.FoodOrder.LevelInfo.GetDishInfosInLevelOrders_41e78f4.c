// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$GetDishInfosInLevelOrders
// address: 0x41e78f4
// body: available
// range: 0x41e78f4-0x41e7bc3 inclusive
// range: 0x41e7bc8-0x41e7bcb inclusive
// range: 0x41e7bd0-0x41e7bd3 inclusive
// range: 0x41e7bd8-0x41e7bdb inclusive
// range: 0x41e7be0-0x41e7be3 inclusive
// range: 0x41e7be8-0x41e7beb inclusive
// range: 0x41e7c60-0x41e7c87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e7bc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7bd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7be0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7c84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__GetDishInfosInLevelOrders(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516b50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091af5e8);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091af5e0);
    FUN_03f5c2a4(&DAT_0917ca10);
    DAT_09516b50 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917ca10);
  FUN_057e0400(lVar4,DAT_091af5e0);
  lVar5 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar5,DAT_091a8298);
  lVar6 = AnhPD_FoodOrder_LevelInfo__get_InitData();
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0)) &&
     (0 < (int)*(ulong *)(lVar6 + 0x18))) {
    uVar13 = 0;
    uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
        FUN_057e185c(&local_98,lVar9,DAT_091ac248);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar8 = FUN_071bd28c(&local_80,DAT_091a28a8), lVar9 = local_70, (uVar8 & 1) != 0) {
          if ((local_70 != 0) &&
             (uVar8 = System_String__IsNullOrEmpty(*(undefined8 *)(local_70 + 0x10),0),
             (uVar8 & 1) == 0)) {
            lVar9 = AnhPD_FoodOrder_LevelInfo__ConvertOrderData
                              (param_1,*(undefined8 *)(lVar9 + 0x10));
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
              uVar8 = 0;
              uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              puVar12 = (undefined8 *)(lVar9 + 0x28);
              do {
                if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                iVar3 = AnhPD_FoodOrder_RecipeConfigSO__GetDishKind
                                  (*(long *)(param_1 + 0x38),*puVar12,0);
                if (iVar3 != 0) {
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar10 = FUN_053d8048(lVar5,iVar3,DAT_091a82b0);
                  if ((uVar10 & 1) != 0) {
                    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar7 = AnhPD_FoodOrder_RecipeConfigSO__GetDishInfo
                                      (*(long *)(param_1 + 0x38),iVar3,0);
                    lVar2 = DAT_091af5e8;
                    if (lVar7 != 0) {
                      if (lVar4 == 0) {
LAB_041e7bd8:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar11 = *(long *)(lVar4 + 0x10);
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_041e7bd8;
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                        thunk_FUN_03f5d7b8();
                      }
                      else {
                        FUN_057e0c68(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                }
                uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                uVar8 = uVar8 + 1;
                puVar12 = puVar12 + 9;
              } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
          }
        }
        FUN_071bd288(&local_80,DAT_091a28a0);
      }
      uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  return lVar4;
}

