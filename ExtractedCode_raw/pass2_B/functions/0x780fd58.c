// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$LogEventClaimReward
// address: 0x780fd58
// body: available
// range: 0x780fd58-0x780ffcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780ffbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780ffc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780ffcc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__LogEventClaimReward(undefined4 param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_44;
  
  local_44 = param_1;
  if ((DAT_09523253 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921aa20);
    FUN_03f5c2a4(&DAT_09220e08);
    FUN_03f5c2a4(&DAT_092231a0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092231a8);
    FUN_03f5c2a4(&DAT_092231c0);
    DAT_09523253 = 1;
  }
  plVar3 = (long *)FUN_03f5c394(DAT_09180358,3);
  uVar7 = DAT_092231a0;
  puVar1 = &DAT_092231c0;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_092231a8;
  }
  uVar8 = *puVar1;
  uVar4 = System_Int32__ToString(&local_44,0);
  uVar4 = System_String__Concat(uVar8,uVar4,0);
  lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar5,uVar7,uVar4,0);
  if (plVar3 == (long *)0x0) {
LAB_0780ffc0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_0780ffc4:
    uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar5);
    uVar7 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
    lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar5,DAT_0921e6b0,uVar7,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_0780ffc4;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar5);
      if (**(long **)(DAT_09183d58 + 0xb8) == 0) goto LAB_0780ffc0;
      iVar2 = *(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x24);
      lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar5,DAT_09220e08,(long)iVar2,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_0780ffc4;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar3 + 6,lVar5);
        _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_0921aa20,plVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

