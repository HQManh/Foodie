// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakManager$$LogEventWinStreak
// address: 0x78081b4
// body: available
// range: 0x78081b4-0x78084a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7808494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7808498 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78084a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_DreamyStreakManager__LogEventWinStreak(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_34;
  
  if ((DAT_09523206 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921aa38);
    FUN_03f5c2a4(&DAT_09220e08);
    FUN_03f5c2a4(&DAT_092235d0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092233f8);
    FUN_03f5c2a4(&DAT_09223408);
    DAT_09523206 = 1;
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180358,4);
  uVar3 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
  lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar4,DAT_0921e6b0,uVar3,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_0780849c:
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar4;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09183d70 + 0xb8) == 0) goto LAB_07808494;
      uVar3 = _GAME_DreamyStreak_DreamyStreakManager__GetStreakString
                        (*(undefined4 *)(**(long **)(DAT_09183d70 + 0xb8) + 0x20));
      lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar4,DAT_092235d0,uVar3,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
      goto LAB_0780849c;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
        plVar2[5] = lVar4;
        thunk_FUN_03f5d7b8(plVar2 + 5,lVar4);
        lVar4 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel();
        if (lVar4 == 0) goto LAB_07808494;
        local_34 = *(undefined4 *)(lVar4 + 0x10);
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
        uVar3 = System_String__Format(DAT_09223408,uVar3,0);
        lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar4,DAT_092233f8,uVar3,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
        goto LAB_0780849c;
        if (2 < *(uint *)(plVar2 + 3)) {
          plVar2[6] = lVar4;
          thunk_FUN_03f5d7b8(plVar2 + 6,lVar4);
          if (**(long **)(DAT_09183d70 + 0xb8) == 0) goto LAB_07808494;
          iVar1 = *(int *)(**(long **)(DAT_09183d70 + 0xb8) + 0x28);
          lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar4,DAT_09220e08,(long)iVar1,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
          goto LAB_0780849c;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
            plVar2[7] = lVar4;
            thunk_FUN_03f5d7b8(plVar2 + 7,lVar4);
            _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_0921aa38,plVar2,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07808494:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

