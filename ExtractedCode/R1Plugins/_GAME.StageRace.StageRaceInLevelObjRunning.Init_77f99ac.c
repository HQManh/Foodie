// rea decompile_all
// name: _GAME.StageRace.StageRaceInLevelObjRunning$$Init
// address: 0x77f99ac
// body: available
// range: 0x77f99ac-0x77f9b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f9b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f9b5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceInLevelObjRunning__Init(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_44;
  
  if ((DAT_09523150 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d9f50);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_0920d8a8);
    DAT_09523150 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = FUN_03f5c394(DAT_091805f8,1);
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b158);
  }
  lVar3 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar3 != 0) {
    local_44 = *(int *)(lVar3 + 0x20) + 1;
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x20) = uVar2;
        thunk_FUN_03f5d7b8();
        _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar4,DAT_0920d8a8,lVar1,0);
        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar4,param_1,DAT_091d9f50,0);
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_TimerManager__AddCallbackTick(uVar4,param_2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

