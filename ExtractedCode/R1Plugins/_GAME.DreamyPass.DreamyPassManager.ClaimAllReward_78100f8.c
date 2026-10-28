// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$ClaimAllReward
// address: 0x78100f8
// body: available
// range: 0x78100f8-0x78105cb inclusive
// range: 0x78105d0-0x78105d3 inclusive
// range: 0x78105d8-0x78105db inclusive
// range: 0x78105e0-0x78105e3 inclusive
// range: 0x7810670-0x781086b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78105c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78105d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78105d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78105e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781082c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781083c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7810840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07810584) */
/* WARNING: Removing unreachable block (ram,0x07810458) */
/* WARNING: Removing unreachable block (ram,0x0781084c) */
/* WARNING: Removing unreachable block (ram,0x07810838) */
/* WARNING: Removing unreachable block (ram,0x078106a8) */
/* WARNING: Removing unreachable block (ram,0x07810864) */

long _GAME_DreamyPass_DreamyPassManager__ClaimAllReward(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09523251 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee00);
    FUN_03f5c2a4(&DAT_0919ee08);
    FUN_03f5c2a4(&DAT_0919edf8);
    FUN_03f5c2a4(&DAT_0919ee10);
    FUN_03f5c2a4(&DAT_0919ee18);
    FUN_03f5c2a4(&DAT_0919ee20);
    FUN_03f5c2a4(&DAT_091768a0);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091a6480);
    FUN_03f5c2a4(&DAT_091a40b8);
    FUN_03f5c2a4(&DAT_091a2a80);
    FUN_03f5c2a4(&DAT_091a6488);
    FUN_03f5c2a4(&DAT_091a40c0);
    FUN_03f5c2a4(&DAT_091a2a88);
    FUN_03f5c2a4(&DAT_091a6490);
    FUN_03f5c2a4(&DAT_091a2a90);
    FUN_03f5c2a4(&DAT_091a40c8);
    FUN_03f5c2a4(&DAT_091a96b0);
    FUN_03f5c2a4(&DAT_091a96b8);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_091afa58);
    FUN_03f5c2a4(&DAT_091ac710);
    FUN_03f5c2a4(&DAT_091afa38);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ab410);
    FUN_03f5c2a4(&DAT_0917cae0);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_091ba358);
    FUN_03f5c2a4(&DAT_0917e700);
    DAT_09523251 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  lVar10 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar10 != 0) {
    uVar2 = _GAME_DreamyPass_SODreamyPassConfig__GetLevelByPoint(*(undefined4 *)(lVar10 + 0x24));
    uVar7 = DAT_091768a0;
    *(undefined4 *)(lVar10 + 0x40) = uVar2;
    lVar10 = thunk_FUN_03f9944c(uVar7);
    FUN_06f2c578(lVar10,DAT_0919edf8);
    lVar4 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
    if (lVar4 != 0) {
      FUN_057e185c(&local_d8,lVar4,DAT_091ac710);
      local_70 = local_c8;
      puStack_78 = puStack_d0;
      local_80 = local_d8;
      while (uVar5 = FUN_071bd28c(&local_80,DAT_091a2a88), lVar4 = local_70, (uVar5 & 1) != 0) {
        lVar9 = **(long **)(DAT_09183d58 + 0xb8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar9 + 0x40) + -1 < *(int *)(local_70 + 0x10)) break;
        if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = FUN_0571bde4(*(long *)(lVar9 + 0x30),*(int *)(local_70 + 0x10),DAT_091ab408);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e185c(&local_d8,*(long *)(lVar4 + 0x18),DAT_091afa58);
          local_90 = local_c8;
          puStack_98 = puStack_d0;
          local_a0 = local_d8;
          local_d8 = 0;
          puStack_d0 = &local_a0;
          while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a40c0), lVar9 = local_90, (uVar5 & 1) != 0) {
            if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = FUN_06f2ecf0(lVar10,*(undefined4 *)(local_90 + 0x10),
                                 *(undefined4 *)(local_90 + 0x14),DAT_0919ee08);
            if ((uVar5 & 1) == 0) {
              uVar2 = *(undefined4 *)(lVar9 + 0x10);
              iVar3 = FUN_06f2d280(lVar10,uVar2,DAT_0919ee18);
              FUN_06f2d308(lVar10,uVar2,*(int *)(lVar9 + 0x14) + iVar3,DAT_0919ee20);
            }
          }
          FUN_071bd288(&local_a0,DAT_091a40b8);
          if (**(long **)(DAT_09183d58 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x30);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_0571be38(lVar9,*(undefined4 *)(lVar4 + 0x10),1,DAT_091ab410);
          _GAME_DreamyPass_DreamyPassManager__LogEventClaimReward(*(undefined4 *)(lVar4 + 0x10),0);
        }
        lVar9 = **(long **)(DAT_09183d58 + 0xb8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar9 + 0x20) != '\0') {
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = FUN_0571bde4(*(long *)(lVar9 + 0x38),*(undefined4 *)(lVar4 + 0x10),DAT_091ab408);
          if ((uVar5 & 1) == 0) {
            if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_d8,*(long *)(lVar4 + 0x20),DAT_091afa58);
            local_90 = local_c8;
            puStack_98 = puStack_d0;
            local_a0 = local_d8;
            local_d8 = 0;
            puStack_d0 = &local_a0;
            while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a40c0), lVar9 = local_90, (uVar5 & 1) != 0)
            {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = FUN_06f2ecf0(lVar10,*(undefined4 *)(local_90 + 0x10),
                                   *(undefined4 *)(local_90 + 0x14),DAT_0919ee08);
              if ((uVar5 & 1) == 0) {
                uVar2 = *(undefined4 *)(lVar9 + 0x10);
                iVar3 = FUN_06f2d280(lVar10,uVar2,DAT_0919ee18);
                FUN_06f2d308(lVar10,uVar2,*(int *)(lVar9 + 0x14) + iVar3,DAT_0919ee20);
              }
            }
            FUN_071bd288(&local_a0,DAT_091a40b8);
            if (**(long **)(DAT_09183d58 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x38);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_0571be38(lVar9,*(undefined4 *)(lVar4 + 0x10),1,DAT_091ab410);
            _GAME_DreamyPass_DreamyPassManager__LogEventClaimReward(*(undefined4 *)(lVar4 + 0x10),1)
            ;
          }
        }
      }
      FUN_071bd288(&local_80,DAT_091a2a80);
      if (lVar10 != 0) {
        iVar3 = FUN_06f2cfb8(lVar10,DAT_0919ee10);
        if (0 < iVar3) {
          if (**(long **)(DAT_09183d58 + 0xb8) == 0) goto LAB_07810860;
          _GAME_DreamyPass_DreamyPassDbModel__AddSaveAction();
          if (*(int *)(DAT_0917e700 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_060df854(DAT_091ba358);
        }
        lVar4 = thunk_FUN_03f9944c(DAT_0917cae0);
        FUN_057e0400(lVar4,DAT_091afa38);
        FUN_06f2d6f4(&local_c0,lVar10,DAT_0919ee00);
        local_d8 = 0;
        puStack_d0 = &local_c0;
        while( true ) {
          uVar6 = FUN_0726063c(&local_c0,DAT_091a6488);
          uVar5 = local_b0;
          if ((uVar6 & 1) == 0) {
            FUN_07260744(&local_c0,DAT_091a6480);
            return lVar4;
          }
          uVar7 = thunk_FUN_03f9944c(DAT_0918a440);
          _GAME_GameItem_RwItemModel___ctor(uVar7,uVar5 & 0xffffffff,uVar5 >> 0x20,0);
          lVar10 = DAT_091afa48;
          if (lVar4 == 0) break;
          lVar9 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_03f5d7b8(puVar8,uVar7);
          }
          else {
            FUN_057e0c68(lVar4,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_07810860:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

