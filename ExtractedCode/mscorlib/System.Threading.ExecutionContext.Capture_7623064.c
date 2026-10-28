// rea decompile_all
// name: System.Threading.ExecutionContext$$Capture
// address: 0x7623064
// body: available
// range: 0x7623064-0x762327f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762327c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_ExecutionContext__Capture(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_48;
  long local_38;
  
  if ((DAT_0952214c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    DAT_0952214c = 1;
  }
  local_38 = 0;
  local_48 = 0;
  lVar1 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar1 == 0) goto LAB_0762327c;
  local_38 = System_Threading_Thread__GetExecutionContextReader(lVar1,0);
  uVar2 = System_Threading_ExecutionContext_Reader__get_IsNull(&local_38,0);
  if ((uVar2 & 1) == 0) {
    if (local_38 == 0) goto LAB_0762327c;
    if ((*(uint *)(local_38 + 0x30) >> 1 & 1) != 0) {
      return 0;
    }
  }
  uVar2 = System_Threading_ExecutionContext_Reader__get_IsNull(&local_38,0);
  lVar5 = 0;
  lVar1 = 0;
  if ((uVar2 & 1) == 0) {
    if (((param_2 & 1) == 0) &&
       (lVar1 = System_Threading_ExecutionContext_Reader__get_SynchronizationContext(&local_38,0),
       lVar1 != 0)) {
      plVar3 = (long *)System_Threading_ExecutionContext_Reader__get_SynchronizationContext
                                 (&local_38,0);
      if (plVar3 == (long *)0x0) goto LAB_0762327c;
      lVar1 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    }
    else {
      lVar1 = 0;
    }
    local_48 = System_Threading_ExecutionContext_Reader__get_LogicalCallContext(&local_38,0);
    uVar2 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader__get_HasInfo(&local_48,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      local_48 = System_Threading_ExecutionContext_Reader__get_LogicalCallContext(&local_38,0);
      lVar5 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader__Clone(&local_48,0);
    }
  }
  uVar2 = System_Threading_ExecutionContext_Reader__get_IsNull(&local_38,0);
  lVar6 = 0;
  lVar7 = 0;
  if ((uVar2 & 1) == 0) {
    if (local_38 == 0) goto LAB_0762327c;
    lVar7 = *(long *)(local_38 + 0x38);
    lVar6 = *(long *)(local_38 + 0x40);
  }
  if (((param_2 >> 1 & 1) == 0) || (lVar1 != 0)) {
LAB_076231f8:
    lVar4 = thunk_FUN_03f9944c(DAT_09184350);
    System_Object___ctor(lVar4,0);
    if (lVar4 == 0) {
LAB_0762327c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(long *)(lVar4 + 0x10) = lVar1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),lVar1);
    *(long *)(lVar4 + 0x20) = lVar5;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x20),lVar5);
    *(long *)(lVar4 + 0x38) = lVar7;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x38),lVar7);
    *(long *)(lVar4 + 0x40) = lVar6;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x40),lVar6);
    *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 1;
  }
  else {
    if (lVar5 == 0) {
      if (lVar7 != 0 || lVar6 != 0) goto LAB_076231f8;
    }
    else {
      uVar2 = System_Runtime_Remoting_Messaging_LogicalCallContext__get_HasInfo(lVar5,0);
      if ((((uVar2 & 1) != 0) || (lVar7 != 0)) || (lVar6 != 0)) goto LAB_076231f8;
    }
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09184350 + 0xb8);
  }
  return lVar4;
}

