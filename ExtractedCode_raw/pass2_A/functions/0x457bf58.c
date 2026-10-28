// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$Start
// address: 0x457bf58
// body: available
// range: 0x457bf58-0x457c047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457c040 to 0x457c140 EssentialSystemR1.OnlineTimeCheck$$RestartFetchGlobalTime (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x457c044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__Start(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0951890d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d55a8);
    FUN_03f5c2a4(&DAT_091fbc58);
    DAT_0951890d = 1;
  }
  uVar1 = UnityEngine_PlayerPrefs__HasKey(DAT_091fbc58,0);
  if ((uVar1 & 1) != 0) {
    EssentialSystemR1_OnlineTimeCheck__TryLoadLastPausedTime(param_1);
  }
  if (DAT_095173ff == '\0') {
    FUN_03f5c2a4(&DAT_091886f0);
    DAT_095173ff = '\x01';
  }
  lVar3 = **(long **)(DAT_091886f0 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,param_1,DAT_091d55a8,0);
  if (lVar3 != 0) {
    EssentialSystemR1_NetworkCheck__add_OnConnected(lVar3,uVar2);
    EssentialSystemR1_OnlineTimeCheck__RestartFetchGlobalTime(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

