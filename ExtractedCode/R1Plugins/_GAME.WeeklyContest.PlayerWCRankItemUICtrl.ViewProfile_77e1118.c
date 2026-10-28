// rea decompile_all
// name: _GAME.WeeklyContest.PlayerWCRankItemUICtrl$$ViewProfile
// address: 0x77e1118
// body: available
// range: 0x77e1118-0x77e1217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e11d8 to 0x77ba9a0 _GAME.Profile.ProfilePopupRouterFacade$$OpenSelf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_PlayerWCRankItemUICtrl__ViewProfile(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0952305c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    DAT_0952305c = 1;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x20) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x10);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_String__op_Equality(uVar3,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      if ((uVar1 & 1) != 0) {
        _GAME_Profile_ProfilePopupRouterFacade__OpenSelf(0);
        return;
      }
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 == 0) {
        return;
      }
    }
    uStack_48 = *(undefined8 *)(lVar2 + 0x30);
    local_50 = *(undefined8 *)(lVar2 + 0x28);
    uStack_38 = *(undefined8 *)(lVar2 + 0x40);
    uStack_40 = *(undefined8 *)(lVar2 + 0x38);
    _GAME_Profile_ProfilePopupRouterFacade__Open(3,*(undefined8 *)(lVar2 + 0x10),&local_50,0);
  }
  return;
}

