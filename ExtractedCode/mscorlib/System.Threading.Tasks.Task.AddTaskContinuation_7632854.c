// rea decompile_all
// name: System.Threading.Tasks.Task$$AddTaskContinuation
// address: 0x7632854
// body: available
// range: 0x7632854-0x76328e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint System_Threading_Tasks_Task__AddTaskContinuation(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long local_48 [3];
  
  uVar2 = System_Threading_Tasks_Task__get_IsCompleted();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    thunk_FUN_03f6a5cc();
    if (lVar3 == 0) {
      thunk_FUN_03f6a5cc();
      local_48[1] = 0;
      local_48[0] = 0;
      local_48[2] = param_2;
      FUN_03f9560c((long *)(param_1 + 0x40),local_48 + 2,local_48 + 1,local_48);
      if (local_48[0] == 0) {
        uVar1 = 1;
        goto LAB_076328c8;
      }
    }
    uVar1 = System_Threading_Tasks_Task__AddTaskContinuationComplex(param_1,param_2,param_3 & 1);
  }
  else {
    uVar1 = 0;
  }
LAB_076328c8:
  return uVar1 & 1;
}

