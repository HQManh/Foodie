// rea decompile_all
// name: _GAME.StageRace.StageRaceManager$$LogEventFinishRace
// address: 0x77f7b3c
// body: available
// range: 0x77f7b3c-0x77f7f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f7f78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f7f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f7f88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceManager__LogEventFinishRace(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_54 = param_1;
  if ((DAT_0952313f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09221500);
    FUN_03f5c2a4(&DAT_09220e08);
    FUN_03f5c2a4(&DAT_0921aae8);
    FUN_03f5c2a4(&DAT_09221548);
    FUN_03f5c2a4(&DAT_092231a0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092231b0);
    FUN_03f5c2a4(&DAT_09207158);
    DAT_0952313f = 1;
  }
  uVar2 = System_Int32__ToString(&local_54,0);
  uVar2 = System_String__Concat(DAT_09207158,uVar2,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar2,0);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b158);
  }
  lVar6 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x28);
    plVar4 = (long *)FUN_03f5c394(DAT_09180358,5);
    uVar2 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
    lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar6,DAT_0921e6b0,uVar2,0);
    if (plVar4 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_077f7f80;
      if ((int)plVar4[3] == 0) goto LAB_077f7f78;
      plVar4[4] = lVar6;
      thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
      lVar6 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_077f7f7c;
      local_58 = *(undefined4 *)(lVar6 + 0x20);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_58);
      uVar2 = System_String__Format(DAT_09221500,uVar2,0);
      lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar6,DAT_092231a0,uVar2,0);
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_077f7f80;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto LAB_077f7f78;
      plVar4[5] = lVar6;
      thunk_FUN_03f5d7b8(plVar4 + 5,lVar6);
      lVar6 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_077f7f7c;
      iVar1 = *(int *)(lVar6 + 0x34);
      lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar6,DAT_09220e08,(long)iVar1,0);
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_077f7f80:
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar6;
        thunk_FUN_03f5d7b8(plVar4 + 6,lVar6);
        lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar6,DAT_0921aae8,lVar3 - lVar7,0);
        if ((lVar6 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
        goto LAB_077f7f80;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar6;
          thunk_FUN_03f5d7b8(plVar4 + 7,lVar6);
          local_5c = local_54;
          uVar2 = FUN_03f5c42c(DAT_09535420,&local_5c);
          uVar2 = System_String__Format(DAT_09226038,uVar2,0);
          lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar3,DAT_09221548,uVar2,0);
          if ((lVar3 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_077f7f80;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar3;
            thunk_FUN_03f5d7b8(plVar4 + 8,lVar3);
            _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_092231b0,plVar4,0);
            return;
          }
        }
      }
LAB_077f7f78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_077f7f7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

