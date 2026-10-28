// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$ConvertSpawnDataToStack
// address: 0x4141954
// body: available
// range: 0x4141954-0x4141bfb inclusive
// range: 0x4141c00-0x4141c03 inclusive
// range: 0x4141c08-0x4141c0b inclusive
// range: 0x4141c58-0x4141c9f inclusive
// range: 0x4141ca4-0x4141cab inclusive
// range: 0x4141d04-0x4141d7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4141bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141c00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141c08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141ca8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141d6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141d74 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04141bf0) */
/* WARNING: Removing unreachable block (ram,0x04141bf4) */
/* WARNING: Removing unreachable block (ram,0x04141ca4) */
/* WARNING: Removing unreachable block (ram,0x04141c84) */
/* WARNING: Removing unreachable block (ram,0x04141d68) */
/* WARNING: Removing unreachable block (ram,0x04141d70) */

undefined8
AnhPD_FoodOrder_CafeOrderStrategy__ConvertSpawnDataToStack(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_095163cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a2588);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a2590);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091a2598);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091ab9e8);
    FUN_03f5c2a4(&DAT_091b05e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091bb390);
    FUN_03f5c2a4(&DAT_0917e940);
    DAT_095163cc = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar2,DAT_091b0558);
  lVar3 = AnhPD_FoodOrder_CafeOrderStrategy__get_Config();
  lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar4,DAT_091b0558);
  if (param_2 != 0) {
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(param_2 + uVar9 * 8 + 0x20);
        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
          FUN_057e185c(&local_b8,lVar8,DAT_091ac248);
          local_70 = local_a8;
          puStack_78 = puStack_b0;
          local_80 = local_b8;
          while (uVar7 = FUN_071bd28c(&local_80,DAT_091a28a8), (uVar7 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = AnhPD_FoodOrder_CafeOrderStrategy__DecodePieces
                              (*(undefined8 *)(local_70 + 0x10));
            if (lVar8 != 0) {
              FUN_0579a6a8(&local_b8,lVar8,DAT_091ab9e8);
              local_a0 = local_b8;
              local_b8 = 0;
              puStack_98 = puStack_b0;
              local_90 = local_a8;
              puStack_b0 = &local_a0;
              while (uVar5 = FUN_071aef5c(&local_a0,DAT_091a2590), uVar7 = local_90,
                    (uVar5 & 1) != 0) {
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                iVar1 = *(int *)(lVar4 + 0x18);
                *(undefined4 *)(lVar4 + 0x18) = 0;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (0 < iVar1) {
                  System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                }
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                AnhPD_FoodOrder_RecipeConfigSO__CollectSpawnIdsOfPiece
                          (lVar3,uVar7 & 0xffffffff,lVar4,0);
                if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e0e78(lVar2,lVar4,DAT_091b0578);
              }
              FUN_071aef58(&local_a0,DAT_091a2588);
            }
          }
          FUN_071bd288(&local_80,DAT_091a28a0);
        }
        uVar7 = (ulong)*(uint *)(param_2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if (lVar2 != 0) {
      FUN_057e2674(lVar2,DAT_091b05e0);
      uVar6 = thunk_FUN_03f9944c(DAT_0917e940);
      FUN_061a13c8(uVar6,lVar2,DAT_091bb390);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

