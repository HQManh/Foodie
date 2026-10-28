// rea decompile_all
// name: CookingGraph.CookingLevelSession$$Restart
// address: 0x4489b28
// body: available
// range: 0x4489b28-0x4489c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4489bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4489c3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSession__Restart(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_09518107 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8450);
    DAT_09518107 = 1;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (param_2 != 0) {
      if ((*(long *)(param_2 + 0x180) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_2 + 0x180) + 0x40), lVar3 == 0)) {
LAB_04489bc0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar3 + 0x13) == '\0') {
        if (*(long *)(param_1 + 0x20) != 0) {
          CookingGraph_Execution_CookingFlightCoordinator__Dispose(*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_053ebbdc(*(long *)(param_1 + 0x30),DAT_091a8450);
            CookingGraph_CookingLevelSession__Bind(param_1,param_2);
            *(undefined1 *)(param_1 + 0x28) = 0;
            return;
          }
        }
        goto LAB_04489bc0;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar1 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_092054c8);
    System_ArgumentException___ctor(uVar1,uVar2,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar1 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_091ff228);
    System_ObjectDisposedException___ctor(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c6678);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

