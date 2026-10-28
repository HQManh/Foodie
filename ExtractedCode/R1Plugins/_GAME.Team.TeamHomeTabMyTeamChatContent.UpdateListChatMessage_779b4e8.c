// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent$$UpdateListChatMessage
// address: 0x779b4e8
// body: available
// range: 0x779b4e8-0x779bae3 inclusive
// range: 0x779bae8-0x779baeb inclusive
// range: 0x779baf0-0x779baf3 inclusive
// range: 0x779baf8-0x779bafb inclusive
// range: 0x779bb00-0x779bb03 inclusive
// range: 0x779bb08-0x779bb0b inclusive
// range: 0x779bb10-0x779bb13 inclusive
// range: 0x779bb18-0x779bb1b inclusive
// range: 0x779bb20-0x779bb23 inclusive
// range: 0x779bb28-0x779bb2b inclusive
// range: 0x779bb30-0x779bb33 inclusive
// range: 0x779bb38-0x779bb3b inclusive
// range: 0x779bb40-0x779bb43 inclusive
// range: 0x779bb48-0x779bb4b inclusive
// range: 0x779bc28-0x779bc6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779bae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779baf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779baf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779bb38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent__UpdateListChatMessage(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined4 local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09522df3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091a4718);
    FUN_03f5c2a4(&DAT_091a4720);
    FUN_03f5c2a4(&DAT_091a4728);
    FUN_03f5c2a4(&DAT_091ae708);
    FUN_03f5c2a4(&DAT_091b0bc0);
    FUN_03f5c2a4(&DAT_091aea40);
    FUN_03f5c2a4(&DAT_091afd18);
    FUN_03f5c2a4(&DAT_091b0c00);
    FUN_03f5c2a4(&DAT_091d4c00);
    FUN_03f5c2a4(&DAT_091d4c20);
    FUN_03f5c2a4(&DAT_091d4c58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bb260);
    FUN_03f5c2a4(&DAT_091bb220);
    FUN_03f5c2a4(&DAT_091bb350);
    FUN_03f5c2a4(&DAT_091bb230);
    FUN_03f5c2a4(&DAT_091bb270);
    FUN_03f5c2a4(&DAT_091bb360);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522df3 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_0918b978 + 0xb8) == 0) ||
     (lVar2 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x58), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a8,lVar2,DAT_091b0c00);
  local_80 = local_a8;
  local_a8 = 0;
  uStack_78 = puStack_a0;
  local_70 = local_98;
  puStack_a0 = &local_80;
LAB_0779b6a8:
  do {
    uVar3 = FUN_071bd28c(&local_80,DAT_091a4720);
    lVar5 = local_70;
    lVar2 = local_a8;
    if ((uVar3 & 1) == 0) {
      FUN_071bd288(puStack_a0,DAT_091a4718);
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar2);
    }
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(local_70 + 0x28) != 0) {
      lVar2 = *(long *)(param_1 + 0xe8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar2 + 0x18) < 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = FUN_04c35338(uVar9,uVar10,DAT_091d4c20);
      }
      else {
        lVar2 = FUN_061a18e8(lVar2,DAT_091bb260);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_NotiChatItemUICtrl__SetChatMessage(lVar2,lVar5);
      lVar5 = DAT_091aea40;
      lVar4 = *(long *)(param_1 + 0xe0);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar2;
            thunk_FUN_03f5d7b8(plVar7,lVar2);
          }
          else {
            FUN_057e0c68(lVar4,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar5 = DAT_091b0bc0;
          lVar4 = *(long *)(param_1 + 0x98);
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar2;
                thunk_FUN_03f5d7b8(plVar7,lVar2);
              }
              else {
                FUN_057e0c68(lVar4,lVar2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0779b6a8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(local_70 + 0x18);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_String__Equals(lVar2,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 200);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar2 + 0x18) < 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar7 = (long *)FUN_04c35338(uVar9,uVar10,DAT_091d4c58);
      }
      else {
        plVar7 = (long *)FUN_061a18e8(lVar2,DAT_091bb350);
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 400));
      lVar2 = DAT_091afd18;
      lVar5 = *(long *)(param_1 + 0xc0);
      if (lVar5 != 0) {
        lVar4 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = (long)plVar7;
            thunk_FUN_03f5d7b8(plVar8,plVar7);
          }
          else {
            FUN_057e0c68(lVar5,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = DAT_091b0bc0;
          lVar5 = *(long *)(param_1 + 0x98);
          if (lVar5 != 0) {
            lVar4 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = (long)plVar7;
                thunk_FUN_03f5d7b8(plVar8,plVar7);
              }
              else {
                FUN_057e0c68(lVar5,plVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0779b6a8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar2 + 0x18) < 1) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar7 = (long *)FUN_04c35338(uVar9,uVar10,DAT_091d4c00);
    }
    else {
      plVar7 = (long *)FUN_061a18e8(lVar2,DAT_091bb220);
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 400));
    lVar2 = DAT_091ae708;
    lVar5 = *(long *)(param_1 + 0xa0);
    if (lVar5 == 0) {
LAB_0779bb18:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0779bb18;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = (long)plVar7;
      thunk_FUN_03f5d7b8(plVar8,plVar7);
    }
    else {
      FUN_057e0c68(lVar5,plVar7,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = DAT_091b0bc0;
    lVar5 = *(long *)(param_1 + 0x98);
    if (lVar5 == 0) {
LAB_0779bb28:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0779bb28;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = (long)plVar7;
      thunk_FUN_03f5d7b8(plVar8,plVar7);
    }
    else {
      FUN_057e0c68(lVar5,plVar7,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

