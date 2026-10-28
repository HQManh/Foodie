// rea decompile_all
// name: System.Threading.SpinLock$$ExitSlowPath
// address: 0x76212a0
// body: available
// range: 0x76212a0-0x76213af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762131c to 0x7627ba0 System.Threading.Interlocked$$Exchange (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7621338 to 0x7629ebc System.Threading.Interlocked$$Decrement (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76213ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_SpinLock__ExitSlowPath(uint *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09522131 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_09522131 = 1;
  }
  uVar1 = *param_1;
  thunk_FUN_03f6a5cc();
  if ((int)uVar1 < 0) {
    if ((param_2 & 1) != 0) {
      thunk_FUN_03f6a5cc();
      System_Threading_Interlocked__Decrement(param_1,0);
      return;
    }
    uVar1 = *param_1;
    thunk_FUN_03f6a5cc();
    thunk_FUN_03f6a5cc();
    *param_1 = uVar1 & 0xfffffffe;
  }
  else {
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_SpinLock__get_IsHeldByCurrentThread(param_1);
    if ((uVar2 & 1) == 0) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920f1e0);
      uVar3 = System_Environment__GetResourceString(uVar3,0);
      thunk_FUN_03fc39d4(&DAT_0918b6d0);
      uVar4 = thunk_FUN_03f9944c();
      System_Threading_SynchronizationLockException___ctor(uVar4,uVar3);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d9758);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    thunk_FUN_03f6a5cc();
    if ((param_2 & 1) != 0) {
      System_Threading_Interlocked__Exchange(param_1,0,0);
      return;
    }
    *param_1 = 0;
  }
  return;
}

