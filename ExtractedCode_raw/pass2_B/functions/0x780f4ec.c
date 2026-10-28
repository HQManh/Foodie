// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$LogEventPassStage
// address: 0x780f4ec
// body: available
// range: 0x780f4ec-0x780f81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780f808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780f80c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780f818 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__LogEventPassStage(int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int local_34;
  
  if ((DAT_09523254 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ac718);
    FUN_03f5c2a4(&DAT_091ac720);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921aa28);
    FUN_03f5c2a4(&DAT_0921dab0);
    FUN_03f5c2a4(&DAT_092231c8);
    FUN_03f5c2a4(&DAT_092231a0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_0921e758);
    DAT_09523254 = 1;
  }
  if (param_1 < 0) {
    return;
  }
  lVar2 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= param_1) {
      return;
    }
    plVar3 = (long *)FUN_03f5c394(DAT_09180358,4);
    local_34 = param_1;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar4 = System_String__Format(DAT_092231c8,uVar4,0);
    lVar2 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(lVar2,DAT_092231a0,uVar4,0);
    if (plVar3 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0780f810:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar3 + 4,lVar2);
        uVar4 = _GAME_BaseGame_TrackingManager__get_LevelLog(0);
        lVar2 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar2,DAT_0921e6b0,uVar4,0);
        if ((lVar2 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0780f810;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar2;
          thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
          lVar2 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
          if ((lVar2 == 0) || (lVar2 = FUN_057e0998(lVar2,param_1,DAT_091ac720), lVar2 == 0))
          goto LAB_0780f808;
          iVar1 = *(int *)(lVar2 + 0x14);
          lVar2 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar2,DAT_0921e758,(long)iVar1,0);
          if ((lVar2 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_0780f810;
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar2;
            thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
            lVar2 = **(long **)(DAT_09183d58 + 0xb8);
            if (lVar2 == 0) goto LAB_0780f808;
            if (*(int *)(DAT_09535400 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Boolean__ToString(lVar2 + 0x20,0);
            lVar2 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(lVar2,DAT_0921dab0,uVar4,0);
            if ((lVar2 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_0780f810;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
              plVar3[7] = lVar2;
              thunk_FUN_03f5d7b8(plVar3 + 7,lVar2);
              _GAME_BaseGame_TrackingManager__FirebaseLogEvent(DAT_0921aa28,plVar3,0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0780f808:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

