// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$CollectCandidates
// address: 0x41de6a4
// body: available
// range: 0x41de6a4-0x41defd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41def90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41def94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41def98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41def9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41defbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__CollectCandidates
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516ae1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_0918e6c0);
    FUN_03f5c2a4(&DAT_091a33c8);
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a33d0);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091a33d8);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091b20e8);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091adb00);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_091b20d0);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_0917d198);
    FUN_03f5c2a4(&DAT_09189150);
    DAT_09516ae1 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917d198);
  FUN_057e0400(lVar2,DAT_091b20d0);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (lVar3 == 0) {
      return lVar2;
    }
    AnhPD_FoodOrder_LevelPieceBook__CollectOrphanPlates(lVar3,*(undefined8 *)(param_1 + 0x88),0);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_057e185c(&local_d8,*(long *)(param_1 + 0x88),DAT_091afe30);
      local_70 = local_c8;
      puStack_78 = puStack_d0;
      local_80 = local_d8;
      local_d8 = 0;
      puStack_d0 = &local_80;
LAB_041de874:
      uVar4 = FUN_071bd28c(&local_80,DAT_091a4258);
      lVar9 = local_70;
      if ((uVar4 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer
                          (*(long *)(param_1 + 0x10),*(undefined8 *)(local_70 + 0xa8),0);
        if (lVar5 != 0) {
          plVar6 = *(long **)(lVar9 + 0xa8);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(param_1 + 0x10);
          uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar7,uVar7);
          }
          uVar7 = AnhPD_FoodOrder_LevelInfo__SequenceOf(lVar10,uVar7,0);
          uVar4 = AnhPD_FoodOrder_LevelInfo__SequenceFits(lVar10,param_2,uVar7,param_3,0);
          if ((uVar4 & 1) != 0) {
            lVar10 = thunk_FUN_03f9944c(DAT_0918e6c0);
            AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate___ctor(lVar10,0);
            lVar8 = thunk_FUN_03f9944c(DAT_09189150);
            System_Object___ctor(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = *(undefined8 *)(lVar5 + 0x20);
            uVar12 = *(undefined8 *)(lVar5 + 0x18);
            uVar11 = *(undefined8 *)(lVar5 + 0x10);
            *(undefined1 *)(lVar8 + 0x28) = 1;
            *(undefined8 *)(lVar8 + 0x20) = uVar7;
            *(undefined8 *)(lVar8 + 0x18) = uVar12;
            *(undefined8 *)(lVar8 + 0x10) = uVar11;
            *(undefined4 *)(lVar8 + 0x2c) = 0xffffffff;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(long *)(lVar10 + 0x10) = lVar8;
            thunk_FUN_03f5d7b8((long *)(lVar10 + 0x10),lVar8);
            *(long *)(lVar10 + 0x18) = lVar9;
            thunk_FUN_03f5d7b8((long *)(lVar10 + 0x18),lVar9);
            *(undefined4 *)(lVar10 + 0x44) = 1;
            lVar9 = DAT_091b20e8;
            if (lVar2 != 0) {
              lVar5 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar2 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar10;
                  thunk_FUN_03f5d7b8(plVar6,lVar10);
                }
                else {
                  FUN_057e0c68(lVar2,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_041de874;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        goto LAB_041de874;
      }
      FUN_071bd288(&local_80,DAT_091a4250);
      AnhPD_FoodOrder_LevelPieceBook__CollectGridTakeables(lVar3,*(undefined8 *)(param_1 + 0x90),0);
      if (*(long *)(param_1 + 0x90) != 0) {
        FUN_057e185c(&local_d8,*(long *)(param_1 + 0x90),DAT_091ac6b0);
        local_90 = local_c8;
        puStack_98 = puStack_d0;
        local_a0 = local_d8;
        local_d8 = 0;
        puStack_d0 = &local_a0;
        while (uVar4 = FUN_071bd28c(&local_a0,DAT_091a2a58), lVar9 = local_90, (uVar4 & 1) != 0) {
          lVar5 = thunk_FUN_03f9944c(DAT_0918e6c0);
          AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate___ctor(lVar5,0);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(*(long *)(param_1 + 0x10),lVar9,0);
          if (lVar10 == 0) {
            if (*(int *)(DAT_09181918 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar10 = AnhPD_FoodOrder_AutoCompleteOrderFx__NoPieces(2);
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(long *)(lVar5 + 0x10) = lVar10;
          thunk_FUN_03f5d7b8();
          *(long *)(lVar5 + 0x20) = lVar9;
          thunk_FUN_03f5d7b8((long *)(lVar5 + 0x20),lVar9);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar9 + 0x78);
          thunk_FUN_03f5d7b8();
          *(undefined4 *)(lVar5 + 0x44) = 1;
          lVar9 = DAT_091b20e8;
          if (lVar2 == 0) {
LAB_041def98:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(lVar2 + 0x10);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_041def98;
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar5;
            thunk_FUN_03f5d7b8(plVar6,lVar5);
          }
          else {
            FUN_057e0c68(lVar2,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_a0,DAT_091a2a50);
        lVar9 = thunk_FUN_03f9944c(DAT_0917c4d0);
        FUN_057e0400(lVar9,DAT_091adad8);
        AnhPD_FoodOrder_LevelPieceBook__CollectBelt(lVar3,lVar9,0,0);
        if (lVar9 != 0) {
          FUN_057e185c(&local_d8,lVar9,DAT_091adb00);
          local_b0 = local_c8;
          puStack_b8 = puStack_d0;
          local_c0 = local_d8;
          local_d8 = 0;
          puStack_d0 = &local_c0;
          while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a33d0), lVar9 = local_b0, (uVar4 & 1) != 0) {
            lVar5 = thunk_FUN_03f9944c(DAT_0918e6c0);
            AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate___ctor(lVar5,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__OfferForId
                              (param_1,*(undefined8 *)(lVar9 + 0x10));
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar5 + 0x10) = uVar7;
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar9 + 0x10);
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar9 + 0x10);
            thunk_FUN_03f5d7b8();
            *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(lVar9 + 0x18);
            lVar9 = DAT_091b20e8;
            if (lVar2 == 0) {
LAB_041def90:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_041def90;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar5;
              thunk_FUN_03f5d7b8(plVar6,lVar5);
            }
            else {
              FUN_057e0c68(lVar2,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_071bd288(&local_c0,DAT_091a33c8);
          lVar9 = thunk_FUN_03f9944c(DAT_0917c4d0);
          FUN_057e0400(lVar9,DAT_091adad8);
          AnhPD_FoodOrder_LevelPieceBook__CollectQueued(lVar3,lVar9,0);
          if (lVar9 != 0) {
            FUN_057e185c(&local_d8,lVar9,DAT_091adb00);
            local_b0 = local_c8;
            puStack_b8 = puStack_d0;
            local_c0 = local_d8;
            local_d8 = 0;
            puStack_d0 = &local_c0;
            while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a33d0), (uVar4 & 1) != 0) {
              AnhPD_FoodOrder_AutoCompleteOrderFx__AddPendingCandidate(param_1,lVar2,local_b0,3,0);
            }
            FUN_071bd288(&local_c0,DAT_091a33c8);
            lVar9 = thunk_FUN_03f9944c(DAT_0917c4d0);
            FUN_057e0400(lVar9,DAT_091adad8);
            AnhPD_FoodOrder_LevelPieceBook__CollectBelt(lVar3,lVar9,1,0);
            if (lVar9 != 0) {
              FUN_057e185c(&local_d8,lVar9,DAT_091adb00);
              local_b0 = local_c8;
              puStack_b8 = puStack_d0;
              local_c0 = local_d8;
              local_d8 = 0;
              puStack_d0 = &local_c0;
              while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a33d0), lVar9 = local_b0,
                    (uVar4 & 1) != 0) {
                lVar5 = thunk_FUN_03f9944c(DAT_0918e6c0);
                AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate___ctor(lVar5,0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__OfferForId
                                  (param_1,*(undefined8 *)(lVar9 + 0x10));
                if (*(int *)(DAT_09181918 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__Reprioritised(uVar7,4);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(undefined8 *)(lVar5 + 0x10) = uVar7;
                thunk_FUN_03f5d7b8();
                *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar9 + 0x10);
                thunk_FUN_03f5d7b8();
                *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar9 + 0x10);
                thunk_FUN_03f5d7b8();
                *(undefined1 *)(lVar5 + 0x40) = 1;
                *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(lVar9 + 0x18);
                lVar9 = DAT_091b20e8;
                if (lVar2 == 0) {
LAB_041def94:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = *(long *)(lVar2 + 0x10);
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_041def94;
                uVar1 = *(uint *)(lVar2 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar5;
                  thunk_FUN_03f5d7b8(plVar6,lVar5);
                }
                else {
                  FUN_057e0c68(lVar2,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              FUN_071bd288(&local_c0,DAT_091a33c8);
              lVar9 = thunk_FUN_03f9944c(DAT_0917c4d0);
              FUN_057e0400(lVar9,DAT_091adad8);
              AnhPD_FoodOrder_LevelPieceBook__CollectQueuedHard(lVar3,lVar9,0);
              if (lVar9 != 0) {
                FUN_057e185c(&local_d8,lVar9,DAT_091adb00);
                local_b0 = local_c8;
                puStack_b8 = puStack_d0;
                local_c0 = local_d8;
                local_d8 = 0;
                puStack_d0 = &local_c0;
                while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a33d0), (uVar4 & 1) != 0) {
                  AnhPD_FoodOrder_AutoCompleteOrderFx__AddPendingCandidate
                            (param_1,lVar2,local_b0,5,1);
                }
                FUN_071bd288(&local_c0,DAT_091a33c8);
                return lVar2;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

