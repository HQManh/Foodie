// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakManager$$ResetData
// address: 0x7806ebc
// body: available
// range: 0x7806ebc-0x780723f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7807230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7807238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780723c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_DreamyStreakManager__ResetData(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_095231f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d60);
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091a2a98);
    FUN_03f5c2a4(&DAT_091a2aa0);
    FUN_03f5c2a4(&DAT_091a2aa8);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ac730);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_091ba388);
    FUN_03f5c2a4(&DAT_0917e708);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_095231f3 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09183d70 + 0xb8) == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_09183d60);
    _GAME_DreamyStreak_DreamyStreakDbModel___ctor();
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    **(undefined8 **)(DAT_09183d70 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183d70 + 0xb8),uVar2);
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_BaseGame_TimerManager__GetStartOfCurrentWeek(1,0);
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183d70);
  }
  lVar6 = **(long **)(DAT_09183d70 + 0xb8);
  if (*(int *)(DAT_09185080 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar2,0);
  lVar5 = DAT_09183d70;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = lVar3 + 0x93a80;
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      uVar2 = thunk_FUN_03f9944c(DAT_0917bd08);
      FUN_0571b84c(uVar2,DAT_091ab3e0);
      *(undefined8 *)(lVar6 + 0x30) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar2);
      if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = _GAME_DreamyStreak_SODreamyStreakConfig__get_ListLevel(0);
      if (lVar6 != 0) {
        FUN_057e185c(&local_78,lVar6,DAT_091ac730);
        local_50 = local_68;
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_78 = 0;
        puStack_70 = &local_60;
        while (uVar4 = FUN_071bd28c(&local_60,DAT_091a2aa0), (uVar4 & 1) != 0) {
          if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = DAT_091ab3e8;
          if (**(long **)(DAT_09183d70 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(**(long **)(DAT_09183d70 + 0xb8) + 0x30);
          if (lVar5 == 0) {
LAB_0780722c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar3 == 0) goto LAB_0780722c;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined1 *)(lVar3 + (int)uVar1 + 0x20) = 0;
          }
          else {
            FUN_0571c0e8(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_60,DAT_091a2a98);
        if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09183d70 + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(DAT_09183d70 + 0xb8) + 0x38) = 0;
          _GAME_DreamyStreak_DreamyStreakDbModel__AddSaveAction();
          if (*(int *)(DAT_0917e708 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_060df854(DAT_091ba388);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

