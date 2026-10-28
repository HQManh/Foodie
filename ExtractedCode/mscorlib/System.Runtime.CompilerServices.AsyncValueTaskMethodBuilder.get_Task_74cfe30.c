// rea decompile_all
// name: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder$$get_Task
// address: 0x74cfe30
// body: available
// range: 0x74cfe30-0x74cfedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cfeac to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder__get_Task(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined5 uStack_25;
  
  if ((DAT_09521510 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09521510 = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x19) = 1;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task(param_1);
    local_30 = 0;
    local_28 = 0;
    local_26 = 0;
    uStack_25 = 0;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentNullException(0x26,0);
    }
    local_30 = uVar2;
    thunk_FUN_03f5d7b8(&local_30,uVar2);
    local_26 = 1;
  }
  else {
    local_30 = 0;
    local_26 = 0;
    uStack_25 = 0;
  }
  auVar1._8_2_ = 0;
  auVar1._0_8_ = local_30;
  auVar1[10] = local_26;
  auVar1._11_5_ = uStack_25;
  return auVar1;
}

