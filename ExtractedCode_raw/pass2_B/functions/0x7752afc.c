// rea decompile_all
// name: _GAME.GameUI.DropItemController$$ShowBag
// address: 0x7752afc
// body: available
// range: 0x7752afc-0x7752c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7752c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _GAME_GameUI_DropItemController__ShowBag(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09522bc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_09522bc0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
      _GAME_GameUI_DropItemController__CancelHideBagDelay(param_1);
      if (*(long *)(param_1 + 0xe8) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0xe8),0,0);
      }
      lVar2 = *(long *)(param_1 + 0xe0);
      if (lVar2 != 0) {
        DG_Tweening_TweenExtensions__Kill(lVar2,0,0);
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        UnityEngine_Animator__set_updateMode(*(long *)(param_1 + 0xc0),2,0);
        if (*(long *)(param_1 + 0xc0) != 0) {
          uVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xc0),0);
          if (*(long *)(param_1 + 0xd0) != 0) {
            UnityEngine_Transform__get_position(*(long *)(param_1 + 0xd0),0);
            uVar3 = DG_Tweening_ShortcutExtensions__DOMove(uVar3,0,0);
            uVar3 = FUN_04d9656c(uVar3,1,DAT_091dc028);
            *(undefined8 *)(param_1 + 0xe0) = uVar3;
            thunk_FUN_03f5d7b8((long *)(param_1 + 0xe0),uVar3);
            return *(undefined4 *)(param_1 + 0xf0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0xffffffff;
}

