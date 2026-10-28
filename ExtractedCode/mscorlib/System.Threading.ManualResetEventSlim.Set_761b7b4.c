// rea decompile_all
// name: System.Threading.ManualResetEventSlim$$Set
// address: 0x761b7b4
// body: available
// range: 0x761b7b4-0x761b8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761b8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761b8ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761b8f4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761b8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761b8f0) */
/* WARNING: Removing unreachable block (ram,0x0761b8e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_ManualResetEventSlim__Set(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char local_2c [4];
  undefined8 local_28;
  
  local_28 = 0;
  local_2c[0] = '\0';
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Threading_ManualResetEventSlim__UpdateStateAtomically(param_1,0x80000000,0x80000000);
  iVar1 = System_Threading_ManualResetEventSlim__get_Waiters(param_1);
  if (0 < iVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f6a5cc();
    local_2c[0] = '\0';
    local_28 = uVar3;
    System_Threading_Monitor__Enter(uVar3,local_2c,0);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f6a5cc();
    System_Threading_Monitor__PulseAll(uVar3,0);
    if (local_2c[0] != '\0') {
      System_Threading_Monitor__Exit(local_28,0);
    }
  }
  lVar4 = *(long *)(param_1 + 0x18);
  thunk_FUN_03f6a5cc();
  if ((lVar4 != 0) && ((param_2 & 1) == 0)) {
    local_2c[0] = '\0';
    System_Threading_Monitor__Enter(lVar4,local_2c,0);
    lVar2 = *(long *)(param_1 + 0x18);
    thunk_FUN_03f6a5cc();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      thunk_FUN_03f6a5cc();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Threading_EventWaitHandle__Set(lVar2);
    }
    if (local_2c[0] != '\0') {
      System_Threading_Monitor__Exit(lVar4,0);
    }
  }
  return;
}

