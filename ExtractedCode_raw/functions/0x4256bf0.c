// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$PlayClip
// address: 0x4256bf0
// body: available
// range: 0x4256bf0-0x4256d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4256cac to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4256d28 to 0x4258edc CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$ScheduleReleaseCurrent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4256d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__PlayClip
               (undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  
  if ((DAT_09516f33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213b00);
    DAT_09516f33 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09213b00,0);
    return;
  }
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  if (*(char *)(param_2 + 0x60) != '\0') {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x40),0);
  if (*(long *)(param_2 + 0x18) != 0) {
    Utilities_CrossFadeLoopAudio__ChangeMusic(param_1,*(long *)(param_2 + 0x18),param_3,param_4,0);
    if (*(long *)(param_2 + 0x18) != 0) {
      Utilities_CrossFadeLoopAudio__GetTransitionDuration(*(long *)(param_2 + 0x18),param_4,0);
      CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__ScheduleReleaseCurrent(param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

