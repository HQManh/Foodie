// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent$$ClearListChat
// address: 0x779abb0
// body: available
// range: 0x779abb0-0x779b2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779b28c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b29c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779b2b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent__ClearListChat(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_118;
  undefined8 *puStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09522df2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3920);
    FUN_03f5c2a4(&DAT_091a3a70);
    FUN_03f5c2a4(&DAT_091a41d8);
    FUN_03f5c2a4(&DAT_091a41f0);
    FUN_03f5c2a4(&DAT_091a38f0);
    FUN_03f5c2a4(&DAT_091a3928);
    FUN_03f5c2a4(&DAT_091a3a78);
    FUN_03f5c2a4(&DAT_091a38f8);
    FUN_03f5c2a4(&DAT_091a41e0);
    FUN_03f5c2a4(&DAT_091a41f8);
    FUN_03f5c2a4(&DAT_091a4200);
    FUN_03f5c2a4(&DAT_091a41e8);
    FUN_03f5c2a4(&DAT_091a3930);
    FUN_03f5c2a4(&DAT_091a3900);
    FUN_03f5c2a4(&DAT_091a3a80);
    FUN_03f5c2a4(&DAT_091aea48);
    FUN_03f5c2a4(&DAT_091ae710);
    FUN_03f5c2a4(&DAT_091afd40);
    FUN_03f5c2a4(&DAT_091b0bc8);
    FUN_03f5c2a4(&DAT_091ae778);
    FUN_03f5c2a4(&DAT_091afd20);
    FUN_03f5c2a4(&DAT_091ae718);
    FUN_03f5c2a4(&DAT_091afd48);
    FUN_03f5c2a4(&DAT_091afd28);
    FUN_03f5c2a4(&DAT_091ae780);
    FUN_03f5c2a4(&DAT_091aea50);
    FUN_03f5c2a4(&DAT_091bb268);
    FUN_03f5c2a4(&DAT_091bb228);
    FUN_03f5c2a4(&DAT_091bb248);
    FUN_03f5c2a4(&DAT_091bb358);
    FUN_03f5c2a4(&DAT_091bb378);
    DAT_09522df2 = 1;
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
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_100 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x58),0,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    UnityEngine_Transform__SetParent(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),0);
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_057e185c(&local_118,*(long *)(param_1 + 0xa0),DAT_091ae718);
        local_70 = local_108;
        puStack_78 = puStack_110;
        local_80 = local_118;
        local_118 = 0;
        puStack_110 = &local_80;
        while (uVar2 = FUN_071bd28c(&local_80,DAT_091a38f8), lVar4 = local_70, (uVar2 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = UnityEngine_Component__get_gameObject(local_70,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(lVar3,0,0);
          lVar3 = UnityEngine_Component__get_transform(lVar4,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x38),0);
          if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_061a19e4(*(long *)(param_1 + 0xa8),lVar4,DAT_091bb228);
        }
        FUN_071bd288(&local_80,DAT_091a38f0);
        lVar4 = *(long *)(param_1 + 0xa0);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
          if (*(long *)(param_1 + 0xb0) != 0) {
            FUN_057e185c(&local_118,*(long *)(param_1 + 0xb0),DAT_091ae780);
            local_90 = local_108;
            puStack_98 = puStack_110;
            local_a0 = local_118;
            local_118 = 0;
            puStack_110 = &local_a0;
            while (uVar2 = FUN_071bd28c(&local_a0,DAT_091a3928), lVar4 = local_90, (uVar2 & 1) != 0)
            {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar3 = UnityEngine_Component__get_gameObject(local_90,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              UnityEngine_GameObject__SetActive(lVar3,0,0);
              lVar3 = UnityEngine_Component__get_transform(lVar4,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x38),0);
              if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_061a19e4(*(long *)(param_1 + 0xb8),lVar4,DAT_091bb248);
            }
            FUN_071bd288(&local_a0,DAT_091a3920);
            lVar4 = *(long *)(param_1 + 0xb0);
            if (lVar4 != 0) {
              iVar1 = *(int *)(lVar4 + 0x18);
              *(undefined4 *)(lVar4 + 0x18) = 0;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (0 < iVar1) {
                System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
              }
              if (*(long *)(param_1 + 0xc0) != 0) {
                FUN_057e185c(&local_118,*(long *)(param_1 + 0xc0),DAT_091afd28);
                local_b0 = local_108;
                puStack_b8 = puStack_110;
                local_c0 = local_118;
                local_118 = 0;
                puStack_110 = &local_c0;
                while (uVar2 = FUN_071bd28c(&local_c0,DAT_091a41e0), lVar4 = local_b0,
                      (uVar2 & 1) != 0) {
                  if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar3 = UnityEngine_Component__get_gameObject(local_b0,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_GameObject__SetActive(lVar3,0,0);
                  lVar3 = UnityEngine_Component__get_transform(lVar4,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x38),0);
                  if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_061a19e4(*(long *)(param_1 + 200),lVar4,DAT_091bb358);
                }
                FUN_071bd288(&local_c0,DAT_091a41d8);
                lVar4 = *(long *)(param_1 + 0xc0);
                if (lVar4 != 0) {
                  iVar1 = *(int *)(lVar4 + 0x18);
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (0 < iVar1) {
                    System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                  }
                  if (*(long *)(param_1 + 0xd0) != 0) {
                    FUN_057e185c(&local_118,*(long *)(param_1 + 0xd0),DAT_091afd48);
                    local_d0 = local_108;
                    puStack_d8 = puStack_110;
                    local_e0 = local_118;
                    local_118 = 0;
                    puStack_110 = &local_e0;
                    while (uVar2 = FUN_071bd28c(&local_e0,DAT_091a41f8), lVar4 = local_d0,
                          (uVar2 & 1) != 0) {
                      if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar3 = UnityEngine_Component__get_gameObject(local_d0,0);
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      UnityEngine_GameObject__SetActive(lVar3,0,0);
                      lVar3 = UnityEngine_Component__get_transform(lVar4,0);
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x38),0);
                      if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      FUN_061a19e4(*(long *)(param_1 + 0xd8),lVar4,DAT_091bb378);
                    }
                    FUN_071bd288(&local_e0,DAT_091a41f0);
                    lVar4 = *(long *)(param_1 + 0xd0);
                    if (lVar4 != 0) {
                      iVar1 = *(int *)(lVar4 + 0x18);
                      *(undefined4 *)(lVar4 + 0x18) = 0;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (0 < iVar1) {
                        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                      }
                      if (*(long *)(param_1 + 0xe0) != 0) {
                        FUN_057e185c(&local_118,*(long *)(param_1 + 0xe0),DAT_091aea50);
                        local_f0 = local_108;
                        puStack_f8 = puStack_110;
                        local_100 = local_118;
                        local_118 = 0;
                        puStack_110 = &local_100;
                        while (uVar2 = FUN_071bd28c(&local_100,DAT_091a3a78), lVar4 = local_f0,
                              (uVar2 & 1) != 0) {
                          if (local_f0 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          lVar3 = UnityEngine_Component__get_gameObject(local_f0,0);
                          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          UnityEngine_GameObject__SetActive(lVar3,0,0);
                          lVar3 = UnityEngine_Component__get_transform(lVar4,0);
                          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x38),0);
                          if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          FUN_061a19e4(*(long *)(param_1 + 0xe8),lVar4,DAT_091bb268);
                        }
                        FUN_071bd288(&local_100,DAT_091a3a70);
                        lVar4 = *(long *)(param_1 + 0xe0);
                        if (lVar4 != 0) {
                          iVar1 = *(int *)(lVar4 + 0x18);
                          *(undefined4 *)(lVar4 + 0x18) = 0;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (0 < iVar1) {
                            System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                          }
                          return;
                        }
                      }
                    }
                  }
                }
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

