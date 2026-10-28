// rea decompile_all
// name: System.Threading.SemaphoreSlim$$Dispose
// address: 0x761fcdc
// body: available
// range: 0x761fcdc-0x761fd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761fd64 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x761fd74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_SemaphoreSlim__Dispose(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  thunk_FUN_03f6a5cc();
  if (lVar2 != 0) {
    plVar3 = (long *)*plVar1;
    thunk_FUN_03f6a5cc();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    thunk_FUN_03f6a5cc();
    *plVar1 = 0;
    thunk_FUN_03f5d7b8(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
  return;
}

