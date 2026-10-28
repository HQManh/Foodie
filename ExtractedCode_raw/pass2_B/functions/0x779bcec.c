// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent$$UpdateListLifeRequest
// address: 0x779bcec
// body: available
// range: 0x779bcec-0x779c1ab inclusive
// range: 0x779c1b0-0x779c1b3 inclusive
// range: 0x779c1b8-0x779c1bb inclusive
// range: 0x779c1c0-0x779c1c3 inclusive
// range: 0x779c1c8-0x779c1cb inclusive
// range: 0x779c1d0-0x779c1d3 inclusive
// range: 0x779c1d8-0x779c1db inclusive
// range: 0x779c1e0-0x779c1e3 inclusive
// range: 0x779c1e8-0x779c1eb inclusive
// range: 0x779c1f0-0x779c1f3 inclusive
// range: 0x779c2b8-0x779c2f3 inclusive
// range: 0x779c2fc-0x779c307 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779c1a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c2fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c304 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent__UpdateListLifeRequest(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined4 local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09522df4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091a4748);
    FUN_03f5c2a4(&DAT_091a4750);
    FUN_03f5c2a4(&DAT_091a4758);
    FUN_03f5c2a4(&DAT_091afd38);
    FUN_03f5c2a4(&DAT_091b0bc0);
    FUN_03f5c2a4(&DAT_091ae770);
    FUN_03f5c2a4(&DAT_091b0c70);
    FUN_03f5c2a4(&DAT_091d4c08);
    FUN_03f5c2a4(&DAT_091d4c60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091bb370);
    FUN_03f5c2a4(&DAT_091bb240);
    FUN_03f5c2a4(&DAT_091bb380);
    FUN_03f5c2a4(&DAT_091bb250);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522df4 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_0918b978 + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x60), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_a8,lVar3,DAT_091b0c70);
    uStack_78 = puStack_a0;
    local_80 = local_a8;
    local_70 = local_98;
    puStack_a0 = &local_80;
    local_a8 = 0;
LAB_0779bea8:
    uVar2 = FUN_071bd28c(&local_80,DAT_091a4750);
    lVar5 = local_70;
    lVar3 = local_a8;
    if ((uVar2 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(local_70 + 0x18);
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
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = System_String__Equals(lVar3,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0xd8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar3 + 0x18) < 1) {
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)FUN_04c35338(uVar8,uVar9,DAT_091d4c60);
        }
        else {
          plVar4 = (long *)FUN_061a18e8(lVar3,DAT_091bb370);
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar4 + 0x188))(plVar4,lVar5,*(undefined8 *)(*plVar4 + 400));
        lVar3 = DAT_091afd38;
        lVar5 = *(long *)(param_1 + 0xd0);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = (long)plVar4;
              thunk_FUN_03f5d7b8(plVar7,plVar4);
            }
            else {
              FUN_057e0c68(lVar5,plVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            lVar3 = DAT_091b0bc0;
            lVar5 = *(long *)(param_1 + 0x98);
            if (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = (long)plVar4;
                  thunk_FUN_03f5d7b8(plVar7,plVar4);
                }
                else {
                  FUN_057e0c68(lVar5,plVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0779bea8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(param_1 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar3 + 0x18) < 1) {
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)FUN_04c35338(uVar8,uVar9,DAT_091d4c08);
      }
      else {
        plVar4 = (long *)FUN_061a18e8(lVar3,DAT_091bb240);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,lVar5,*(undefined8 *)(*plVar4 + 400));
      lVar3 = DAT_091ae770;
      lVar5 = *(long *)(param_1 + 0xb0);
      if (lVar5 == 0) {
LAB_0779c1c0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0779c1c0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar7,plVar4);
      }
      else {
        FUN_057e0c68(lVar5,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar3 = DAT_091b0bc0;
      lVar5 = *(long *)(param_1 + 0x98);
      if (lVar5 == 0) {
LAB_0779c1d0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0779c1d0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar7,plVar4);
      }
      else {
        FUN_057e0c68(lVar5,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto LAB_0779bea8;
    }
    FUN_071bd288(puStack_a0,DAT_091a4748);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar3);
    }
  }
  return;
}

