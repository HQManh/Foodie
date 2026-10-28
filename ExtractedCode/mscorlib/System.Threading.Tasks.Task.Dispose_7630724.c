// rea decompile_all
// name: System.Threading.Tasks.Task$$Dispose
// address: 0x7630724
// body: available
// range: 0x7630724-0x763080b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7630808 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__Dispose(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((param_2 & 1) != 0) {
    uVar1 = System_Threading_Tasks_Task__get_Options(param_1);
    if ((uVar1 >> 0xe & 1) != 0) {
      return;
    }
    uVar2 = System_Threading_Tasks_Task__get_IsCompleted(param_1);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_091fb068);
      System_InvalidOperationException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091daea0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    thunk_FUN_03f6a5cc();
    lVar5 = *(long *)(param_1 + 0x48);
    thunk_FUN_03f6a5cc();
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x18);
      lVar5 = *plVar6;
      thunk_FUN_03f6a5cc();
      if (lVar5 != 0) {
        thunk_FUN_03f6a5cc();
        *plVar6 = 0;
        thunk_FUN_03f5d7b8(plVar6,0);
        uVar2 = System_Threading_ManualResetEventSlim__get_IsSet(lVar5,0);
        if ((uVar2 & 1) == 0) {
          System_Threading_ManualResetEventSlim__Set(lVar5,0);
        }
        System_Threading_ManualResetEventSlim__Dispose(lVar5,0);
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_03f6a5cc();
  thunk_FUN_03f6a5cc();
  *(uint *)(param_1 + 0x38) = uVar1 | 0x40000;
  return;
}

