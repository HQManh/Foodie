// rea decompile_all
// name: System.Exception$$get_Message
// address: 0x75eeda0
// body: available
// range: 0x75eeda0-0x75eee93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75eee7c to 0x75fb354 System.Environment$$GetResourceString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eee80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eee84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eee90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Exception__get_Message(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_09521f1f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09201bd8);
    DAT_09521f1f = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  plVar4 = (long *)(param_1 + 0x10);
  if (*plVar4 == 0) {
    uVar1 = System_Exception__GetClassName(param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    thunk_FUN_03f5d7b8(plVar4,uVar1);
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar4;
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
      System_Environment__GetResourceString(DAT_09201bd8,plVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

