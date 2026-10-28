// rea decompile_all
// name: System.Threading.SemaphoreSlim$$RemoveAsyncWaiter
// address: 0x761f874
// body: available
// range: 0x761f874-0x761f95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761f958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Threading_SemaphoreSlim__RemoveAsyncWaiter(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 0x30);
  if (*plVar3 == param_2) {
    if (param_2 == 0) goto LAB_0761f958;
    bVar1 = true;
  }
  else {
    if (param_2 == 0) {
LAB_0761f958:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar1 = *(long *)(param_2 + 0x58) != 0;
  }
  plVar2 = (long *)(param_2 + 0x60);
  if (*plVar2 != 0) {
    *(undefined8 *)(*plVar2 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    thunk_FUN_03f5d7b8();
  }
  plVar4 = (long *)(param_2 + 0x58);
  if (*plVar4 != 0) {
    *(long *)(*plVar4 + 0x60) = *plVar2;
    thunk_FUN_03f5d7b8();
  }
  if (*plVar3 == param_2) {
    *plVar3 = *plVar2;
    thunk_FUN_03f5d7b8(plVar3);
  }
  plVar3 = (long *)(param_1 + 0x38);
  if (*plVar3 == param_2) {
    *plVar3 = *plVar4;
    thunk_FUN_03f5d7b8(plVar3);
  }
  *plVar4 = 0;
  thunk_FUN_03f5d7b8(plVar4,0);
  *plVar2 = 0;
  thunk_FUN_03f5d7b8(plVar2,0);
  return bVar1;
}

