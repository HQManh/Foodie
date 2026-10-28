// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropRwItemToBag
// address: 0x774efd0
// body: available
// range: 0x774efd0-0x774f13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774f138 to 0x774e470 _GAME.GameUI.DropItemController$$ScheduleItemToBag (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774f13c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropRwItemToBag
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_09522b90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba678);
    DAT_09522b90 = 1;
  }
  lVar1 = *(long *)(DAT_091ba678 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar1,0,0);
  if ((param_4 == 0) || ((uVar2 & 1) != 0)) {
    return;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(param_5,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar1 != 0) {
      uVar4 = _GAME_GameUI_DropItemController__GetRandomSourcePosition(lVar1);
      uVar3 = _GAME_GameUI_DropItemController__CopyModel(param_4);
      goto LAB_0774f10c;
    }
  }
  else {
    uVar4 = _GAME_GameUI_DropItemController__ConvertUIWorldPos(param_5);
    uVar3 = _GAME_GameUI_DropItemController__CopyModel(param_4);
    if (lVar1 != 0) {
LAB_0774f10c:
      _GAME_GameUI_DropItemController__ScheduleItemToBag(uVar4,param_2,param_3,0,lVar1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

