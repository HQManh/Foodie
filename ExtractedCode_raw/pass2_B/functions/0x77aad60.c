// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$ChangeNameFxSelected
// address: 0x77aad60
// body: available
// range: 0x77aad60-0x77aaeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77aaea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aaeac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aaeb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__ChangeNameFxSelected(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_09522e56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a39e0);
    FUN_03f5c2a4(&DAT_091a39e8);
    FUN_03f5c2a4(&DAT_091a39f0);
    FUN_03f5c2a4(&DAT_091ae940);
    DAT_09522e56 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar1 = *(long **)(param_1 + 0x100);
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x20) = param_2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x178))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x180));
      if (((*(long *)(param_1 + 0x100) != 0) &&
          (lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x48), lVar3 != 0)) &&
         (*(long *)(param_1 + 0xe8) != 0)) {
        TMPro_TMP_InputField__set_textComponent
                  (*(long *)(param_1 + 0xe8),*(undefined8 *)(lVar3 + 0x20),0);
        if (*(long *)(param_1 + 0x178) != 0) {
          FUN_057e185c(&local_48,*(long *)(param_1 + 0x178),DAT_091ae940);
          while( true ) {
            uVar2 = FUN_071bd28c(&local_48,DAT_091a39e8);
            if ((uVar2 & 1) == 0) {
              FUN_071bd288(&local_48,DAT_091a39e0);
              _GAME_Profile_PopupEditProfileCtrl__UpdateBtnSaveStatus(param_1);
              return;
            }
            if (local_38 == (long *)0x0) break;
            if (*(long *)(param_1 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*local_38 + 0x198))
                      (local_38,(int)local_38[4] == *(int *)(*(long *)(param_1 + 0x198) + 0x20),
                       *(undefined8 *)(*local_38 + 0x1a0));
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

