// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$ConvertSpawnDataToStack
// address: 0x4137790
// body: available
// range: 0x4137790-0x4137a9b inclusive
// range: 0x4137aa0-0x4137aa3 inclusive
// range: 0x4137aec-0x4137b33 inclusive
// range: 0x4137b38-0x4137b3f inclusive
// range: 0x4137b9c-0x4137c13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4137a98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137b3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137c04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137c0c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4137c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04137a90) */
/* WARNING: Removing unreachable block (ram,0x04137a94) */
/* WARNING: Removing unreachable block (ram,0x04137b38) */
/* WARNING: Removing unreachable block (ram,0x04137b18) */
/* WARNING: Removing unreachable block (ram,0x04137c00) */
/* WARNING: Removing unreachable block (ram,0x04137c08) */

undefined8
AnhPD_FoodOrder_BurgerOrderStrategy__ConvertSpawnDataToStack(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09516364 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820b0);
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a23f8);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a2400);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091a2408);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ab620);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091b05e0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091bb390);
    FUN_03f5c2a4(&DAT_0917e940);
    DAT_09516364 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar2,DAT_091b0558);
  if ((**(long **)(DAT_091881a0 + 0xb8) != 0) && (param_2 != 0)) {
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      lVar7 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0);
      uVar9 = 0;
      uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(param_2 + uVar9 * 8 + 0x20);
        if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) {
          FUN_057e185c(&local_c0,lVar5,DAT_091ac248);
          local_70 = local_b0;
          puStack_78 = puStack_b8;
          local_80 = local_c0;
          while (uVar4 = FUN_071bd28c(&local_80,DAT_091a28a8), (uVar4 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = *(undefined8 *)(local_70 + 0x10);
            if (*(int *)(DAT_091820b0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = AnhPD_FoodOrder_BurgerOrderStrategy__DecodePieces(uVar8);
            if (lVar5 != 0) {
              FUN_0579a6a8(&local_c0,lVar5,DAT_091ab620);
              local_a0 = local_c0;
              local_c0 = 0;
              puStack_98 = puStack_b8;
              local_90 = local_b0;
              puStack_b8 = &local_a0;
LAB_041379c8:
              uVar3 = FUN_071aef5c(&local_a0,DAT_091a2400);
              uVar4 = local_90;
              if ((uVar3 & 1) != 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetRawOfPiece
                                  (lVar7,local_90 & 0xffffffff,&local_a8,0);
                if (((uVar3 & 1) != 0) ||
                   (uVar4 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece
                                      (lVar7,uVar4 & 0xffffffff,&local_a8,0), (uVar4 & 1) != 0)) {
                  lVar5 = DAT_091b0570;
                  if (lVar2 != 0) {
                    lVar6 = *(long *)(lVar2 + 0x10);
                    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar1 = *(uint *)(lVar2 + 0x18);
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = local_a8;
                        thunk_FUN_03f5d7b8();
                      }
                      else {
                        FUN_057e0c68(lVar2,local_a8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_041379c8;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_041379c8;
              }
              FUN_071aef58(&local_a0,DAT_091a23f8);
            }
          }
          FUN_071bd288(&local_80,DAT_091a28a0);
        }
        uVar4 = (ulong)*(uint *)(param_2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if (lVar2 != 0) {
      FUN_057e2674(lVar2,DAT_091b05e0);
      uVar8 = thunk_FUN_03f9944c(DAT_0917e940);
      FUN_061a13c8(uVar8,lVar2,DAT_091bb390);
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

