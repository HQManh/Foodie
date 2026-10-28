// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$SetHomeTabLock
// address: 0x775ec58
// body: available
// range: 0x775ec58-0x775ed67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775ed64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_CookOrderBridge__SetHomeTabLock(uint param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_38;
  ulong local_28;
  
  local_28 = param_2;
  if ((DAT_09522c1b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6ea0);
    FUN_03f5c2a4(&DAT_091b76a8);
    FUN_03f5c2a4(&DAT_091b76b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522c1b = 1;
  }
  lVar3 = _GAME_Bridge_CookOrderBridge__get_Home();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  auVar5 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((auVar5._0_8_ & 1) != 0) {
    if ((param_2 & 0xff) == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_05c30b30(&local_28,DAT_091b76b0);
      uVar4 = 5;
      if (iVar2 != 0) {
        uVar4 = 6;
      }
      local_38 = 0;
      auVar5 = FUN_05c30b18(&local_38,uVar4,DAT_091b6ea0);
      uVar1 = local_38;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar5._0_8_,auVar5._8_8_,uVar1);
    }
    CakeOrder_Home_HomeControllerCookOrder__SetTabLock(lVar3,param_1 & 1,uVar1,0);
  }
  return;
}

