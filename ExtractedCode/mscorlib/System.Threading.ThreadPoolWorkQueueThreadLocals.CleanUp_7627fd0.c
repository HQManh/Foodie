// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueueThreadLocals$$CleanUp
// address: 0x7627fd0
// body: available
// range: 0x7627fd0-0x7628097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7628094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ThreadPoolWorkQueueThreadLocals__CleanUp(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  if ((DAT_09522185 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bae10);
    FUN_03f5c2a4(&DAT_0918bd00);
    DAT_09522185 = 1;
  }
  local_18 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0762804c:
    if (*(int *)(DAT_0918bd00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918bd00 + 0xb8) != 0) {
      FUN_0619a108(**(long **)(DAT_0918bd00 + 0xb8),*(undefined8 *)(param_1 + 0x18),DAT_091bae10);
      return;
    }
  }
  else {
    while( true ) {
      local_18 = 0;
      if (*(long *)(param_1 + 0x18) == 0) break;
      uVar1 = System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalPop
                        (*(long *)(param_1 + 0x18),&local_18);
      if ((uVar1 & 1) == 0) goto LAB_0762804c;
      if (*(long *)(param_1 + 0x10) == 0) break;
      System_Threading_ThreadPoolWorkQueue__Enqueue(*(long *)(param_1 + 0x10),local_18,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

