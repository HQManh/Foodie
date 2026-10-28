// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$LogEventActivatePass
// address: 0x780f978
// body: available
// range: 0x780f978-0x780fc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780fc18 to 0x77dd954 _GAME.BaseGame.TrackingManager$$FirebaseLogEvent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x780fc1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780fc20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780fc2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__LogEventActivatePass(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09523252 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09223ec8);
    FUN_03f5c2a4(&DAT_09220e08);
    FUN_03f5c2a4(&DAT_0921aa18);
    FUN_03f5c2a4(&DAT_0921e6b0);
    DAT_09523252 = 1;
  }
  if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
    lVar6 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x18);
    if (lVar6 < 1) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Math__Max(0,((lVar2 - lVar6) + 0x24ea00) / 0xe10,0);
    }
    plVar4 = (long *)FUN_03f5c394(DAT_09180358,3);
    uVar5 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
    lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar6,DAT_0921e6b0,uVar5,0);
    if (plVar4 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_0780fc24;
      if ((int)plVar4[3] == 0) goto LAB_0780fc20;
      plVar4[4] = lVar6;
      thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
      if (**(long **)(DAT_09183d58 + 0xb8) == 0) goto LAB_0780fc1c;
      iVar1 = *(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x24);
      lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar6,DAT_09220e08,(long)iVar1,0);
      if ((lVar6 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_0780fc24:
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
        plVar4[5] = lVar6;
        thunk_FUN_03f5d7b8(plVar4 + 5,lVar6);
        lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar6,DAT_09223ec8,uVar3,0);
        if ((lVar6 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_0780fc24;
        if (2 < *(uint *)(plVar4 + 3)) {
          plVar4[6] = lVar6;
          thunk_FUN_03f5d7b8(plVar4 + 6,lVar6);
          _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_0921aa18,plVar4,0);
          return;
        }
      }
LAB_0780fc20:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0780fc1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

