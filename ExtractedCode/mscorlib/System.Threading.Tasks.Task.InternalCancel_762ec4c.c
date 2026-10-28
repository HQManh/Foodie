// rea decompile_all
// name: System.Threading.Tasks.Task$$InternalCancel
// address: 0x762ec4c
// body: available
// range: 0x762ec4c-0x762ed6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762ed6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0762ed58) */

undefined8 System_Threading_Tasks_Task__InternalCancel(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_03f6a5cc();
  if (((uVar1 >> 0x10 & 1) == 0) || (plVar5 = *(long **)(param_1 + 0x28), plVar5 == (long *)0x0)) {
    uVar6 = 0;
    uVar7 = 0;
LAB_0762ece4:
    if (((uVar7 & 1) != 0) || ((param_2 & 1) == 0)) goto LAB_0762ecec;
LAB_0762ed40:
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x1a0));
    uVar7 = uVar3 & 0xffffffff;
    uVar2 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uVar6 = 0;
    if (((uVar2 & 1) != 0) && (((uVar3 & 1) == 0 && ((param_2 & 1) != 0)))) {
      uVar6 = System_Threading_Tasks_Task__AtomicStateUpdate(param_1,0x400000,0x420000);
      uVar6 = uVar6 & 0xffffffff;
    }
    if ((uVar6 & 1) == 0) goto LAB_0762ece4;
LAB_0762ecec:
    System_Threading_Tasks_Task__RecordInternalCancellationRequest(param_1);
    if ((uVar7 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        thunk_FUN_03f6a5cc();
        if ((uVar1 >> 0x10 & 1) != 0) goto LAB_0762ed40;
        uVar4 = 0x1630000;
        goto LAB_0762ed04;
      }
    }
    else {
      uVar4 = 0x420000;
LAB_0762ed04:
      uVar3 = System_Threading_Tasks_Task__AtomicStateUpdate(param_1,0x400000,uVar4);
      if ((uVar3 & 1) == 0) goto LAB_0762ed40;
    }
    System_Threading_Tasks_Task__CancellationCleanupLogic(param_1);
    uVar4 = 1;
  }
  return uVar4;
}

