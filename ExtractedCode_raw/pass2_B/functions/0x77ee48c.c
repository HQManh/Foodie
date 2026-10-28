// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureManager$$ResetDataNewSeason
// address: 0x77ee48c
// body: available
// range: 0x77ee48c-0x77ee7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ee7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ee7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ee7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureManager__ResetDataNewSeason(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  
  if ((DAT_095230d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a47a8);
    FUN_03f5c2a4(&DAT_091a47b0);
    FUN_03f5c2a4(&DAT_091a47b8);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091b0cf0);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_091ba510);
    FUN_03f5c2a4(&DAT_0917e760);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0920be30);
    DAT_095230d0 = 1;
  }
  puStack_38 = (undefined8 *)0x0;
  local_40 = 0;
  local_30 = 0;
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(DAT_0920be30,0);
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = **(long **)(DAT_0918b978 + 0xb8);
  if (lVar6 != 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar6 == 0) goto LAB_077ee7d8;
    }
    if (*(long *)(lVar6 + 0x38) != 0) {
      lVar6 = **(long **)(DAT_0918b998 + 0xb8);
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
      lVar5 = DAT_0918b998;
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x14) = uVar2;
        lVar6 = **(long **)(lVar5 + 0xb8);
        uVar3 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeekUtc(0);
        if (*(int *)(DAT_09185080 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09185080);
        }
        uVar3 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar3,0);
        lVar5 = DAT_0918b998;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x18) = uVar3;
          lVar6 = **(long **)(lVar5 + 0xb8);
          uVar3 = thunk_FUN_03f9944c(DAT_0917bd08);
          FUN_0571b84c(uVar3,DAT_091ab3e0);
          if (lVar6 != 0) {
            puVar8 = (undefined8 *)(lVar6 + 0x20);
            *puVar8 = uVar3;
            thunk_FUN_03f5d7b8(puVar8,uVar3);
            lVar6 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
            if (lVar6 != 0) {
              FUN_057e185c(&local_58,lVar6,DAT_091b0cf0);
              puStack_38 = puStack_50;
              local_40 = local_58;
              local_30 = local_48;
              local_58 = 0;
              puStack_50 = &local_40;
              while (uVar4 = FUN_071bd28c(&local_40,DAT_091a47b0), lVar6 = DAT_091ab3e8,
                    (uVar4 & 1) != 0) {
                if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar5 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x20);
                if (lVar5 == 0) {
LAB_077ee7d0:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_077ee7d0;
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined1 *)(lVar7 + (int)uVar1 + 0x20) = 0;
                }
                else {
                  FUN_0571c0e8(lVar5,0,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
              }
              FUN_071bd288(&local_40,DAT_091a47a8);
              lVar6 = **(long **)(DAT_0918b998 + 0xb8);
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x28) = 0;
                *(undefined4 *)(lVar6 + 0x30) = 0;
                _GAME_TeamTreasure_TeamTreasureDbModel__AddSaveAction();
                if (*(int *)(DAT_0917e760 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                FUN_060df854(DAT_091ba510);
                return;
              }
            }
          }
        }
      }
LAB_077ee7d8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

