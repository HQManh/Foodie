// rea decompile_all
// name: _GAME.DreamyStreak.PopupDreamyStreakCheat$$SetUp
// address: 0x7809000
// body: available
// range: 0x7809000-0x780917f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7809178 to 0x77414e4 _GAME.Utils.HelperButton$$AddOnClickListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x780917c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_PopupDreamyStreakCheat__SetUp(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0952320c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d6140);
    FUN_03f5c2a4(&DAT_091d6148);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0952320c = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = _GAME_GameManager__get_IsCheatMode(0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive(lVar3,uVar1 & 1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x100);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
      UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6140,0);
      if (lVar3 != 0) {
        UnityEngine_Events_UnityEvent__RemoveListener(lVar3,uVar2,0);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6140,0);
        _GAME_Utils_HelperButton__AddOnClickListener(uVar4,uVar2,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x100);
          uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
          UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6148,0);
          if (lVar3 != 0) {
            UnityEngine_Events_UnityEvent__RemoveListener(lVar3,uVar2,0);
            uVar4 = *(undefined8 *)(param_1 + 0x28);
            uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6148,0);
            _GAME_Utils_HelperButton__AddOnClickListener(uVar4,uVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

