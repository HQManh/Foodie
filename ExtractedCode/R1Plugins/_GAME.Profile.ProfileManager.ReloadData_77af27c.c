// rea decompile_all
// name: _GAME.Profile.ProfileManager$$ReloadData
// address: 0x77af27c
// body: available
// range: 0x77af27c-0x77afb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77afb8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77afb90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77afb94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__ReloadData(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09522e77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091748f0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919d4d0);
    FUN_03f5c2a4(&DAT_0919d4a0);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091763b8);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091d6898);
    FUN_03f5c2a4(&DAT_091d68b0);
    FUN_03f5c2a4(&DAT_091d68b8);
    FUN_03f5c2a4(&DAT_091d68c0);
    FUN_03f5c2a4(&DAT_091d68d0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba438);
    FUN_03f5c2a4(&DAT_091ba448);
    FUN_03f5c2a4(&DAT_0917e730);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522e77 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  uVar2 = _GAME_Profile_ProfileDbModel__Load();
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091896c0);
  }
  **(undefined8 **)(DAT_091896c0 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091896c0 + 0xb8),uVar2);
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__ResetData();
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
    puVar5 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x48);
    uVar2 = _GAME_BaseGame_WebService__NormalizeCountryCode(*puVar5,0);
    *puVar5 = uVar2;
    thunk_FUN_03f5d7b8(puVar5,uVar2);
    _GAME_Profile_ProfileManager__CopyCoreProfileOnce();
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty
                        (*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = **(long **)(DAT_091896c0 + 0xb8);
        uVar2 = UnityEngine_SystemInfo__GetDeviceName(0);
        if (lVar6 == 0) goto LAB_077afb94;
        puVar5 = (undefined8 *)(lVar6 + 0x18);
        *puVar5 = uVar2;
        thunk_FUN_03f5d7b8(puVar5,uVar2);
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
        plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xa0);
        if (*plVar7 == 0) {
          lVar6 = thunk_FUN_03f9944c(DAT_091764a0);
          FUN_06ee539c(lVar6,DAT_0919d948);
          *plVar7 = lVar6;
          thunk_FUN_03f5d7b8(plVar7,lVar6);
        }
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
          plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xa8);
          if (*plVar7 == 0) {
            lVar6 = thunk_FUN_03f9944c(DAT_091764a0);
            FUN_06ee539c(lVar6,DAT_0919d948);
            *plVar7 = lVar6;
            thunk_FUN_03f5d7b8(plVar7,lVar6);
          }
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
            plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xb0);
            if (*plVar7 == 0) {
              *plVar7 = DAT_091f5700;
              thunk_FUN_03f5d7b8(plVar7);
            }
            if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
              plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xb8);
              if (*plVar7 == 0) {
                lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
                FUN_057e0400(lVar6,DAT_091b0558);
                *plVar7 = lVar6;
                thunk_FUN_03f5d7b8(plVar7,lVar6);
              }
              if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
                plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x38);
                if (*plVar7 == 0) {
                  lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
                  FUN_05796918(lVar6,DAT_091adc70);
                  *plVar7 = lVar6;
                  thunk_FUN_03f5d7b8(plVar7,lVar6);
                }
                uVar2 = thunk_FUN_03f9944c(DAT_091763b8);
                FUN_06ed078c(uVar2,DAT_0919d4a0);
                if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar5 = (undefined8 *)(*(long *)(DAT_091896c0 + 0xb8) + 8);
                *puVar5 = uVar2;
                thunk_FUN_03f5d7b8(puVar5,uVar2);
                if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
                   (lVar6 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x38), lVar6 != 0)) {
                  FUN_05797d74(&local_98,lVar6,DAT_091adcc0);
                  local_70 = local_88;
                  puStack_78 = puStack_90;
                  local_80 = local_98;
                  local_98 = 0;
                  puStack_90 = &local_80;
                  while (uVar4 = FUN_071ad7a4(&local_80,DAT_091a34d8), uVar3 = local_70,
                        (uVar4 & 1) != 0) {
                    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar6 = *(long *)(*(long *)(DAT_091896c0 + 0xb8) + 8);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_06ed2f2c(lVar6,uVar3 & 0xffffffff,1,DAT_0919d4d0);
                  }
                  FUN_071ad7a0(&local_80,DAT_091a34d0);
                  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
                    plVar7 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x40);
                    if (*plVar7 == 0) {
                      lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
                      FUN_05796918(lVar6,DAT_091adc70);
                      *plVar7 = lVar6;
                      thunk_FUN_03f5d7b8(plVar7,lVar6);
                    }
                    uVar2 = thunk_FUN_03f9944c(DAT_091763b8);
                    FUN_06ed078c(uVar2,DAT_0919d4a0);
                    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar5 = (undefined8 *)(*(long *)(DAT_091896c0 + 0xb8) + 0x10);
                    *puVar5 = uVar2;
                    thunk_FUN_03f5d7b8(puVar5,uVar2);
                    if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
                       (lVar6 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x40), lVar6 != 0)) {
                      FUN_05797d74(&local_98,lVar6,DAT_091adcc0);
                      local_70 = local_88;
                      puStack_78 = puStack_90;
                      local_80 = local_98;
                      local_98 = 0;
                      puStack_90 = &local_80;
                      while( true ) {
                        uVar4 = FUN_071ad7a4(&local_80,DAT_091a34d8);
                        uVar3 = local_70;
                        if ((uVar4 & 1) == 0) {
                          FUN_071ad7a0(&local_80,DAT_091a34d0);
                          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          _GAME_Profile_ProfileManager__RefreshLevelProgress();
                          _GAME_Profile_ProfileManager__CheckUnlockAvatarFrameByLevel();
                          uVar1 = *(undefined4 *)(*(long *)(DAT_091896c0 + 0xb8) + 0x18);
                          if (*(int *)(DAT_0917e730 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          FUN_060df6f8(uVar1,DAT_091ba448);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68d0,0);
                          uVar1 = FUN_060df21c(uVar2,0,0,DAT_091ba438);
                          uVar2 = DAT_091748f0;
                          *(undefined4 *)(*(long *)(DAT_091896c0 + 0xb8) + 0x18) = uVar1;
                          uVar2 = thunk_FUN_03f9944c(uVar2);
                          FUN_070a8c30(uVar2,0,DAT_091d68b8,0);
                          _GAME_Bridge_R1LevelWatcher__remove_OnLevelWin(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_091748f0);
                          FUN_070a8c30(uVar2,0,DAT_091d68b8,0);
                          _GAME_Bridge_R1LevelWatcher__add_OnLevelWin(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68c0,0);
                          _GAME_Bridge_R1LevelWatcher__remove_OnBackHome(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68c0,0);
                          _GAME_Bridge_R1LevelWatcher__add_OnBackHome(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68b0,0);
                          _GAME_Bridge_CookOrderBridge__remove_OnCoreProfileChanged(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68b0,0);
                          _GAME_Bridge_CookOrderBridge__add_OnCoreProfileChanged(uVar2,0);
                          _GAME_Bridge_CookOrderBridge__ListenCoreProfile(0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68c0,0);
                          _GAME_Bridge_CookOrderBridge__remove_OnRestaurantBuilt(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d68c0,0);
                          _GAME_Bridge_CookOrderBridge__add_OnRestaurantBuilt(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d6898,0);
                          _GAME_Bridge_CookOrderBridge__remove_OnRestaurantOpened(uVar2,0);
                          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                          System_Action___ctor(uVar2,0,DAT_091d6898,0);
                          _GAME_Bridge_CookOrderBridge__add_OnRestaurantOpened(uVar2,0);
                          _GAME_Bridge_CookOrderBridge__ListenRestaurantBuilt(0);
                          return;
                        }
                        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar6 = *(long *)(*(long *)(DAT_091896c0 + 0xb8) + 0x10);
                        if (lVar6 == 0) break;
                        FUN_06ed2f2c(lVar6,uVar3 & 0xffffffff,1,DAT_0919d4d0);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
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
LAB_077afb94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

