// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$WriteFilters
// address: 0x4258408
// body: available
// range: 0x4258408-0x425851b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4258514 to 0x85dfc68 UnityEngine.Audio.AudioMixer$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4258518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__WriteFilters
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  if ((DAT_09516f2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181888);
    FUN_03f5c2a4(&DAT_092077b8);
    FUN_03f5c2a4(&DAT_092077b0);
    FUN_03f5c2a4(&DAT_09200dd0);
    FUN_03f5c2a4(&DAT_09200dd8);
    DAT_09516f2b = 1;
  }
  if (*(int *)(DAT_09181888 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    UnityEngine_Audio_AudioMixer__SetFloat(0x46abe000,*(long *)(param_5 + 0x20),DAT_092077b8,0);
    if (*(long *)(param_5 + 0x20) != 0) {
      UnityEngine_Audio_AudioMixer__SetFloat(0x41200000,*(long *)(param_5 + 0x20),DAT_092077b0,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        UnityEngine_Audio_AudioMixer__SetFloat(param_3,*(long *)(param_5 + 0x20),DAT_09200dd8,0);
        if (*(long *)(param_5 + 0x20) != 0) {
          UnityEngine_Audio_AudioMixer__SetFloat(param_4,*(long *)(param_5 + 0x20),DAT_09200dd0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

