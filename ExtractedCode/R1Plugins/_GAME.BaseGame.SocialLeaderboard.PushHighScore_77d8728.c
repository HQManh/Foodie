// rea decompile_all
// name: _GAME.BaseGame.SocialLeaderboard$$PushHighScore
// address: 0x77d8728
// body: available
// range: 0x77d8728-0x77d88d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d88c0 to 0x86af208 UnityEngine.Social$$ReportScore (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77d88d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SocialLeaderboard__PushHighScore(int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((DAT_09522ff8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09185fc0);
    FUN_03f5c2a4(&DAT_091f0180);
    FUN_03f5c2a4(&DAT_09194998);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522ff8 = 1;
  }
  uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(DAT_091f5700,0);
  if (((uVar2 & 1) == 0) && (lVar3 = UnityEngine_Social__get_localUser(0), lVar3 != 0)) {
    plVar4 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185fc0) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_077d8810;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185fc0,0);
LAB_077d8810:
    uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09194998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = DAT_091f5700;
      puVar5 = *(undefined8 **)(DAT_09194998 + 0xb8);
      lVar3 = puVar5[1];
      if (lVar3 == 0) {
        if (*(int *)(DAT_09194998 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar5 = *(undefined8 **)(DAT_09194998 + 0xb8);
        }
        uVar7 = *puVar5;
        lVar3 = thunk_FUN_03f9944c(DAT_09174570);
        FUN_070a4758(lVar3,uVar7,DAT_091f0180,0);
        plVar4 = (long *)(*(long *)(DAT_09194998 + 0xb8) + 8);
        *plVar4 = lVar3;
        thunk_FUN_03f5d7b8(plVar4,lVar3);
      }
      UnityEngine_Social__ReportScore((long)param_1,uVar1,lVar3,0);
      return;
    }
  }
  return;
}

