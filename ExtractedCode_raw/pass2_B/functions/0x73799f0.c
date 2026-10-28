// rea decompile_all
// name: MaxSdkCallbacks.Banner$$add_OnAdClickedEvent
// address: 0x73799f0
// body: available
// range: 0x73799f0-0x7379aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7379ad0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7379adc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7379ae8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkCallbacks_Banner__add_OnAdClickedEvent(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_09520993 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e58);
    FUN_03f5c2a4(&DAT_09192768);
    FUN_03f5c2a4(&DAT_09209828);
    DAT_09520993 = 1;
  }
  MaxSdkCallbacks__LogSubscribedToEvent(DAT_09209828);
  lVar3 = System_Delegate__Combine(*(undefined8 *)(*(long *)(DAT_09192768 + 0xb8) + 0x10),param_1,0)
  ;
  uVar1 = DAT_09174e58;
  if (lVar3 == 0) {
    lVar4 = 0;
    plVar5 = (long *)(*(long *)(DAT_09192768 + 0xb8) + 0x10);
    *plVar5 = 0;
  }
  else {
    lVar4 = thunk_FUN_03f99350(lVar3,DAT_09174e58);
    uVar2 = DAT_09174e58;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar1);
    }
    plVar5 = (long *)(*(long *)(DAT_09192768 + 0xb8) + 0x10);
    *plVar5 = lVar4;
    lVar4 = thunk_FUN_03f99350(lVar3,uVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar2);
    }
  }
  thunk_FUN_03f5d7b8(plVar5,lVar4);
  return;
}

