// rea decompile_all
// name: System.Reflection.EventInfo$$RemoveEventHandler
// address: 0x74deb10
// body: available
// range: 0x74deb10-0x74dec43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dec2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dec30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dec34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dec40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_EventInfo__RemoveEventHandler(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0952158c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952158c = 1;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x288))(param_1,0,*(undefined8 *)(*param_1 + 0x290));
  if (plVar1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fe1d0);
    System_InvalidOperationException___ctor(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091cb8a0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((param_3 != 0) &&
     (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = param_3;
    thunk_FUN_03f5d7b8(plVar2 + 4,param_3);
                    /* WARNING: Could not recover jumptable at 0x074debe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x368))(plVar1,param_2,0,0,plVar2,0,*(undefined8 *)(*plVar1 + 0x370));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

