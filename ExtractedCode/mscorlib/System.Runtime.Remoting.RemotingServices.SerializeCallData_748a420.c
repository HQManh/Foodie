// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$SerializeCallData
// address: 0x748a420
// body: available
// range: 0x748a420-0x748a5f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748a5e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748a5f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748a5f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0748a5ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_Runtime_Remoting_RemotingServices__SerializeCallData(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char local_3c [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_095212a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193b18);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095212a8 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_3c[0] = '\0';
  lVar1 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar1 != 0) {
    local_30 = System_Threading_Thread__GetExecutionContextReader(lVar1,0);
    local_28 = System_Threading_ExecutionContext_Reader__get_LogicalCallContext(&local_30,0);
    uVar2 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader__get_IsNull(&local_28,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = thunk_FUN_03f9944c(DAT_09193b18);
      System_Object___ctor(lVar1,0);
      if (lVar1 == 0) goto LAB_0748a5e8;
      *(long *)(lVar1 + 0x10) = param_1;
      thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
      uVar5 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader__Clone(&local_28,0);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8();
    }
    else {
      lVar1 = param_1;
      if (param_1 == 0) {
        return 0;
      }
    }
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(plVar3,0);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_3c[0] = '\0';
    local_38 = *(undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 8);
    System_Threading_Monitor__Enter(local_38,local_3c,0);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09189ed8 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Serialize(lVar4,plVar3,lVar1,0);
    if (local_3c[0] != '\0') {
      System_Threading_Monitor__Exit(local_38,0);
    }
    if (plVar3 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar3 + 0x418))(plVar3,*(undefined8 *)(*plVar3 + 0x420));
      return uVar5;
    }
  }
LAB_0748a5e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

