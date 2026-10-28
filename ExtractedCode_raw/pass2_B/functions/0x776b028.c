// rea decompile_all
// name: _GAME.Team.PopupFreeLivesCtrl$$Open
// address: 0x776b028
// body: available
// range: 0x776b028-0x776b17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776b160 to 0x774ae2c _GAME.GameUI.PopupBaseCtrl$$Open (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776b17c to 0x774b150 _GAME.GameUI.PopupBaseCtrl$$ForceCloseReset (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupFreeLivesCtrl__Open(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09522c82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d6248);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091ba348);
    FUN_03f5c2a4(&DAT_091ba360);
    FUN_03f5c2a4(&DAT_0917e700);
    DAT_09522c82 = 1;
  }
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart();
  if ((uVar2 & 1) != 0) {
    _GAME_Team_PopupFreeLivesCtrl__UpdateTotalLives(param_1);
    _GAME_Team_PopupFreeLivesCtrl__FetchLifeHelp(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x128);
    if (*(int *)(DAT_0917e700 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df6f8(uVar1,DAT_091ba360);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091d6248,0);
    uVar1 = FUN_060df21c(uVar3,1,param_1,DAT_091ba348);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    _GAME_GameUI_PopupBaseCtrl__Open(param_1,0);
    return;
  }
  _GAME_GameUI_PopupBaseCtrl__ForceCloseReset(param_1,0);
  return;
}

