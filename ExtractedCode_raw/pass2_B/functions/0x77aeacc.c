// rea decompile_all
// name: _GAME.Profile.ProfileManager$$ResetData
// address: 0x77aeacc
// body: available
// range: 0x77aeacc-0x77aeeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77aeeac to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77aeeb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__ResetData(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_09522e76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091896b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba480);
    FUN_03f5c2a4(&DAT_0917e740);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522e76 = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
    _GAME_Profile_ProfileDbModel___ctor();
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    **(undefined8 **)(DAT_091896c0 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091896c0 + 0xb8),uVar2);
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
    *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10) = DAT_091f5700;
    thunk_FUN_03f5d7b8();
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18) = DAT_091f5700;
      thunk_FUN_03f5d7b8();
      lVar6 = **(long **)(DAT_091896c0 + 0xb8);
      uVar1 = _GAME_Profile_ProfileManager__RandomUnlockedAvatar();
      lVar4 = DAT_091896c0;
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x20) = uVar1;
        lVar4 = **(long **)(lVar4 + 0xb8);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x2c) = 0;
          *(undefined8 *)(lVar4 + 0x24) = 0;
          uVar2 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(uVar2,DAT_091adc70);
          *(undefined8 *)(lVar4 + 0x38) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar2);
          lVar4 = **(long **)(DAT_091896c0 + 0xb8);
          uVar2 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(uVar2,DAT_091adc70);
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)(lVar4 + 0x40);
            *puVar5 = uVar2;
            thunk_FUN_03f5d7b8(puVar5,uVar2);
            if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
              *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x48) = DAT_091f5700;
              thunk_FUN_03f5d7b8();
              lVar4 = **(long **)(DAT_091896c0 + 0xb8);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x60) = DAT_091f5700;
                *(undefined8 *)(lVar4 + 0x50) = 0xffffffffffffffff;
                *(undefined4 *)(lVar4 + 0x58) = 0xffffffff;
                thunk_FUN_03f5d7b8();
                lVar4 = _GAME_Bridge_CookOrderBridge__get_FirstOpenUnixSeconds(0);
                lVar6 = **(long **)(DAT_091896c0 + 0xb8);
                if (lVar4 < 1) {
                  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar4 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
                }
                lVar3 = DAT_091896c0;
                if (lVar6 != 0) {
                  *(long *)(lVar6 + 0x68) = lVar4;
                  if (*(int *)(lVar3 + 0xe4) == 0) {
                    FUN_03f5c424(lVar3);
                    lVar3 = DAT_091896c0;
                  }
                  uVar2 = DAT_091764a0;
                  lVar4 = **(long **)(lVar3 + 0xb8);
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x94) = 0;
                    *(undefined8 *)(lVar4 + 0x8c) = 0;
                    *(undefined8 *)(lVar4 + 0x78) = 0;
                    *(undefined8 *)(lVar4 + 0x70) = 0;
                    *(undefined8 *)(lVar4 + 0x88) = 0;
                    *(undefined8 *)(lVar4 + 0x80) = 0;
                    uVar2 = thunk_FUN_03f9944c(uVar2);
                    FUN_06ee539c(uVar2,DAT_0919d948);
                    *(undefined8 *)(lVar4 + 0xa0) = uVar2;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0xa0),uVar2);
                    lVar4 = **(long **)(DAT_091896c0 + 0xb8);
                    uVar2 = thunk_FUN_03f9944c(DAT_091764a0);
                    FUN_06ee539c(uVar2,DAT_0919d948);
                    if (lVar4 != 0) {
                      puVar5 = (undefined8 *)(lVar4 + 0xa8);
                      *puVar5 = uVar2;
                      thunk_FUN_03f5d7b8(puVar5,uVar2);
                      lVar4 = **(long **)(DAT_091896c0 + 0xb8);
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0xb0) = DAT_091f5700;
                        *(undefined1 *)(lVar4 + 0xc0) = 0;
                        thunk_FUN_03f5d7b8();
                        lVar4 = **(long **)(DAT_091896c0 + 0xb8);
                        uVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
                        FUN_057e0400(uVar2,DAT_091b0558);
                        if (lVar4 != 0) {
                          puVar5 = (undefined8 *)(lVar4 + 0xb8);
                          *puVar5 = uVar2;
                          thunk_FUN_03f5d7b8(puVar5,uVar2);
                          if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
                            *(undefined2 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
                            _GAME_Profile_ProfileDbModel__AddSaveAction();
                            if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            FUN_060df854(DAT_091ba480);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

