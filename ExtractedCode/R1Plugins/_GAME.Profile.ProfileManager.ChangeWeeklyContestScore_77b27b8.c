// rea decompile_all
// name: _GAME.Profile.ProfileManager$$ChangeWeeklyContestScore
// address: 0x77b27b8
// body: available
// range: 0x77b27b8-0x77b2973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b2958 to 0x77b01e0 _GAME.Profile.ProfileManager$$SaveRankScore (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b2970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__ChangeWeeklyContestScore
               (undefined4 param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_09522ea0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d988);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919d9a0);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091896c0);
    DAT_09522ea0 = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
    plVar4 = (long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xa8);
    if (*plVar4 == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_091764a0);
      FUN_06ee539c(lVar2,DAT_0919d948);
      *plVar4 = lVar2;
      thunk_FUN_03f5d7b8(plVar4,lVar2);
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xa8), lVar2 != 0)) {
      uVar3 = FUN_06ee7b14(lVar2,param_1,param_2,DAT_0919d988);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xa8), lVar2 == 0))
        goto LAB_077b2970;
        iVar1 = FUN_06ee60a4(lVar2,param_1,DAT_0919d9a0);
        FUN_06ee612c(lVar2,param_1,iVar1 + param_2,DAT_0919d9a8);
      }
      if ((param_3 & 1) != 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__SaveRankScore();
        return;
      }
      return;
    }
  }
LAB_077b2970:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

