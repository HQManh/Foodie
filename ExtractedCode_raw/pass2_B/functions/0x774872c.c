// rea decompile_all
// name: _GAME.Localize.LocalizeHelper$$SetTextLocalizedByKey
// address: 0x774872c
// body: available
// range: 0x774872c-0x7748833 inclusive
// range: 0x774885c-0x7748877 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7748830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09522b3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4850);
    FUN_03f5c2a4(&DAT_091a4858);
    FUN_03f5c2a4(&DAT_091a4860);
    FUN_03f5c2a4(&DAT_091b0dd8);
    FUN_03f5c2a4(&DAT_091b0de0);
    DAT_09522b3d = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (uVar1 = System_String__IsNullOrEmpty(param_2,0), (uVar1 & 1) == 0)) &&
     (uVar1 = _GAME_Localize_LocalizeManager__get_Initialized(), (uVar1 & 1) != 0)) {
    uVar2 = _GAME_Localize_LocalizeManager__GetTextByLanguageByKey(param_2,param_3);
    uVar1 = System_String__IsNullOrEmpty(uVar2,0);
    if ((uVar1 & 1) == 0) {
      FUN_057e185c(&local_48,param_1,DAT_091b0dd8);
      local_58 = 0;
      puStack_50 = &local_48;
      while (uVar1 = FUN_071bd28c(&local_48,DAT_091a4858), (uVar1 & 1) != 0) {
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        TMPro_TMP_Text__SetText(local_38,uVar2,0);
      }
      FUN_039b7e40(&local_58);
    }
  }
  return;
}

