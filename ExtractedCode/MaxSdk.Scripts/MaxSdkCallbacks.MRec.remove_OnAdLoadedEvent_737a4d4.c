// rea decompile_all
// name: MaxSdkCallbacks.MRec$$remove_OnAdLoadedEvent
// address: 0x737a4d4
// body: available
// range: 0x737a4d4-0x737a5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737a5c4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737a5d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737a5dc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkCallbacks_MRec__remove_OnAdLoadedEvent(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0952099e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e58);
    FUN_03f5c2a4(&DAT_09192778);
    FUN_03f5c2a4(&DAT_09209a78);
    DAT_0952099e = 1;
  }
  MaxSdkCallbacks__LogUnsubscribedToEvent(DAT_09209a78);
  lVar2 = System_Delegate__Remove(**(undefined8 **)(DAT_09192778 + 0xb8),param_1,0);
  uVar4 = DAT_09174e58;
  if (lVar2 == 0) {
    lVar3 = 0;
    **(undefined8 **)(DAT_09192778 + 0xb8) = 0;
    uVar4 = *(undefined8 *)(DAT_09192778 + 0xb8);
  }
  else {
    lVar3 = thunk_FUN_03f99350(lVar2,DAT_09174e58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar4);
    }
    **(long **)(DAT_09192778 + 0xb8) = lVar3;
    uVar1 = DAT_09174e58;
    uVar4 = *(undefined8 *)(DAT_09192778 + 0xb8);
    lVar3 = thunk_FUN_03f99350(lVar2,DAT_09174e58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar1);
    }
  }
  thunk_FUN_03f5d7b8(uVar4,lVar3);
  return;
}

