// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerManager$$LogEventWinStreak
// address: 0x7800ad0
// body: available
// range: 0x7800ad0-0x7800ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7800cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7800cc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7800ccc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_DreamyTowerManager__LogEventWinStreak(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_34;
  
  if ((DAT_095231b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_0921b978);
    FUN_03f5c2a4(&DAT_0921aa48);
    DAT_095231b2 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180358,2);
  uVar2 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
  lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar3,DAT_0921e6b0,uVar2,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
LAB_07800cc4:
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar1 + 4,lVar3);
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09183d80 + 0xb8) == 0) goto LAB_07800cbc;
      local_34 = *(undefined4 *)(**(long **)(DAT_09183d80 + 0xb8) + 0x20);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
      uVar2 = System_String__Format(DAT_09226038,uVar2,0);
      lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar3,DAT_0921b978,uVar2,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07800cc4;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar3;
        thunk_FUN_03f5d7b8(plVar1 + 5,lVar3);
        _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_0921aa48,plVar1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07800cbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

