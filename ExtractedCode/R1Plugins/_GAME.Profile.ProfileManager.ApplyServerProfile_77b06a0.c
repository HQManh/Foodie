// rea decompile_all
// name: _GAME.Profile.ProfileManager$$ApplyServerProfile
// address: 0x77b06a0
// body: available
// range: 0x77b06a0-0x77b0c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b0c1c to 0x77b0c24 _GAME.Profile.ProfileManager$$SaveLevelMain (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b0c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__ApplyServerProfile(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((DAT_09522e7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d4d0);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_092140f0);
    FUN_03f5c2a4(&DAT_091f9fc8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522e7e = 1;
  }
  if (param_1 == 0) goto LAB_077b0c20;
  uVar3 = System_String__Concat
                    (DAT_092140f0,*(undefined8 *)(param_1 + 0x10),DAT_091f9fc8,
                     *(undefined8 *)(param_1 + 0x18),0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar3,0);
  uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x18),0);
  lVar5 = DAT_091896c0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0c20;
    *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_03f5d7b8();
    lVar5 = DAT_091896c0;
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0c20;
    *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc0) = 1;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar5 = DAT_091896c0;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(lVar5 + 0x20) = uVar4;
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    if (*(long *)(lVar5 + 0x38) != 0) {
      uVar4 = FUN_05797528(*(long *)(lVar5 + 0x38),uVar4 >> 0x20,DAT_091adcb0);
      lVar5 = DAT_091896c0;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = DAT_091adc88;
        lVar5 = DAT_091896c0;
        lVar9 = **(long **)(DAT_091896c0 + 0xb8);
        if ((lVar9 == 0) || (lVar6 = *(long *)(lVar9 + 0x38), lVar6 == 0)) goto LAB_077b0c20;
        lVar8 = *(long *)(lVar6 + 0x10);
        uVar1 = *(undefined4 *)(lVar9 + 0x24);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_077b0c20;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_057971a8(lVar6,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          lVar5 = DAT_091896c0;
        }
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = DAT_091896c0;
      }
      lVar7 = **(long **)(lVar5 + 0xb8);
      if ((lVar7 != 0) && (lVar5 = (*(long **)(lVar5 + 0xb8))[1], lVar5 != 0)) {
        FUN_06ed2f2c(lVar5,*(undefined4 *)(lVar7 + 0x24),1,DAT_0919d4d0);
        lVar5 = **(long **)(DAT_091896c0 + 0xb8);
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x40) != 0)) {
          uVar4 = FUN_05797528(*(long *)(lVar5 + 0x40),*(undefined4 *)(lVar5 + 0x28),DAT_091adcb0);
          lVar5 = DAT_091896c0;
          if ((uVar4 & 1) == 0) {
            if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = DAT_091adc88;
            lVar5 = DAT_091896c0;
            lVar9 = **(long **)(DAT_091896c0 + 0xb8);
            if ((lVar9 == 0) || (lVar6 = *(long *)(lVar9 + 0x40), lVar6 == 0)) goto LAB_077b0c20;
            lVar8 = *(long *)(lVar6 + 0x10);
            uVar1 = *(undefined4 *)(lVar9 + 0x28);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_077b0c20;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
            }
            else {
              FUN_057971a8(lVar6,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              lVar5 = DAT_091896c0;
            }
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = DAT_091896c0;
          }
          lVar7 = **(long **)(lVar5 + 0xb8);
          if ((lVar7 != 0) && (lVar5 = (*(long **)(lVar5 + 0xb8))[2], lVar5 != 0)) {
            FUN_06ed2f2c(lVar5,*(undefined4 *)(lVar7 + 0x28),1,DAT_0919d4d0);
            uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x48),0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar5 = **(long **)(DAT_091896c0 + 0xb8);
              uVar3 = _GAME_BaseGame_WebService__NormalizeCountryCode
                                (*(undefined8 *)(param_1 + 0x48),0);
              if (lVar5 == 0) goto LAB_077b0c20;
              puVar10 = (undefined8 *)(lVar5 + 0x48);
              *puVar10 = uVar3;
              thunk_FUN_03f5d7b8(puVar10,uVar3);
            }
            if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = **(long **)(DAT_091896c0 + 0xb8);
            if (lVar5 != 0) {
              uVar3 = *(undefined8 *)(param_1 + 0x50);
              lVar7 = DAT_091f5700;
              if (*(long *)(param_1 + 0x60) != 0) {
                lVar7 = *(long *)(param_1 + 0x60);
              }
              uVar1 = *(undefined4 *)(param_1 + 0x58);
              *(long *)(lVar5 + 0x60) = lVar7;
              *(undefined8 *)(lVar5 + 0x50) = uVar3;
              *(undefined4 *)(lVar5 + 0x58) = uVar1;
              thunk_FUN_03f5d7b8();
              lVar5 = DAT_091896c0;
              if (0 < *(long *)(param_1 + 0x68)) {
                if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = DAT_091896c0;
                if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0c20;
                *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x68) =
                     *(undefined8 *)(param_1 + 0x68);
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar5 = DAT_091896c0;
              }
              lVar5 = **(long **)(lVar5 + 0xb8);
              if (lVar5 != 0) {
                uVar12 = *(undefined8 *)(param_1 + 0x80);
                uVar3 = *(undefined8 *)(param_1 + 0x70);
                lVar7 = *(long *)(param_1 + 0xa0);
                *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(param_1 + 0x88);
                *(undefined8 *)(lVar5 + 0x80) = uVar12;
                uVar12 = *(undefined8 *)(param_1 + 0x90);
                *(undefined8 *)(lVar5 + 0x70) = uVar3;
                *(undefined8 *)(lVar5 + 0x90) = uVar12;
                if (lVar7 == 0) {
                  lVar7 = thunk_FUN_03f9944c(DAT_091764a0);
                  FUN_06ee539c(lVar7,DAT_0919d948);
                }
                *(long *)(lVar5 + 0xa0) = lVar7;
                thunk_FUN_03f5d7b8((long *)(lVar5 + 0xa0),lVar7);
                if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = *(long *)(param_1 + 0xa8);
                lVar7 = **(long **)(DAT_091896c0 + 0xb8);
                if (lVar5 == 0) {
                  lVar5 = thunk_FUN_03f9944c(DAT_091764a0);
                  FUN_06ee539c(lVar5,DAT_0919d948);
                }
                if (lVar7 != 0) {
                  plVar11 = (long *)(lVar7 + 0xa8);
                  *plVar11 = lVar5;
                  thunk_FUN_03f5d7b8(plVar11,lVar5);
                  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = *(long *)(param_1 + 0xb8);
                  lVar7 = **(long **)(DAT_091896c0 + 0xb8);
                  if (lVar5 == 0) {
                    lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
                    FUN_057e0400(lVar5,DAT_091b0558);
                  }
                  if (lVar7 != 0) {
                    plVar11 = (long *)(lVar7 + 0xb8);
                    *plVar11 = lVar5;
                    thunk_FUN_03f5d7b8(plVar11,lVar5);
                    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    _GAME_Profile_ProfileManager__SyncToCore();
                    _GAME_Profile_ProfileManager__SaveLevelMain();
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
LAB_077b0c20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

