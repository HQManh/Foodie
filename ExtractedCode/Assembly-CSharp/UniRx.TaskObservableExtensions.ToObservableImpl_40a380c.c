// rea decompile_all
// name: UniRx.TaskObservableExtensions$$ToObservableImpl
// address: 0x40a380c
// body: available
// range: 0x40a380c-0x40a3a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a3964 to 0x4c42e7c FUN_04c42e7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a3978 to 0x40a3aa0 UniRx.TaskObservableExtensions$$ToObservableSlow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a3a0c to 0x4c47258 FUN_04c47258 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a3a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_TaskObservableExtensions__ToObservableImpl(long param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09515e13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d5238);
    FUN_03f5c2a4(&DAT_091d52b0);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_0918b8d8);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09515e13 = 1;
  }
  if (param_1 == 0) {
LAB_040a3a20:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = System_Threading_Tasks_Task__get_IsCompleted(param_1,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = UniRx_TaskObservableExtensions__ToObservableSlow(param_1,param_2);
    return uVar4;
  }
  if (param_2 == 0) {
    if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = *(long *)(*(long *)(DAT_0918a698 + 0xb8) + 8);
  }
  iVar2 = System_Threading_Tasks_Task__get_Status(param_1,0);
  if (iVar2 == 7) {
    lVar5 = System_Threading_Tasks_Task__get_Exception(param_1,0);
    if (lVar5 == 0) goto LAB_040a3a20;
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188b78);
    }
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 != 5) {
        return 0;
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515ed7 == '\0') {
        FUN_03f5c2a4(&DAT_0918c670);
        DAT_09515ed7 = '\x01';
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = **(undefined1 **)(DAT_0918c670 + 0xb8);
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188b78);
      }
      uVar4 = FUN_04c42e7c(uVar1,param_2,DAT_091d5238);
      return uVar4;
    }
    uVar4 = thunk_FUN_03f9944c(DAT_0918b8d8);
    System_Threading_Tasks_TaskCanceledException___ctor(uVar4,param_1,0);
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  uVar4 = FUN_04c47258(uVar4,param_2,DAT_091d52b0);
  return uVar4;
}

