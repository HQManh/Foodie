// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropItemToTarget
// address: 0x774f1d0
// body: available
// range: 0x774f1d0-0x774f2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774f298 to 0x774f2f0 _GAME.GameUI.DropItemController$$CompleteWithoutFx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774f2ec to 0x774f364 _GAME.GameUI.DropItemController$$DropItemToTarget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropItemToTarget
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((DAT_09522b92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09206240);
    DAT_09522b92 = 1;
  }
  if (param_4 != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(param_5,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Equality(param_6,0,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = _GAME_GameUI_DropItemController__ConvertUIWorldPos(param_5);
        uVar4 = param_2;
        uVar5 = param_3;
        uVar3 = _GAME_GameUI_DropItemController__ConvertUIWorldPos(param_6);
        _GAME_GameUI_DropItemController__DropItemToTarget
                  (uVar2,param_2,param_3,uVar3,uVar4,uVar5,param_4,param_7);
        return;
      }
    }
  }
  _GAME_GameUI_DropItemController__CompleteWithoutFx(param_7,DAT_09206240);
  return;
}

