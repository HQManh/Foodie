// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$DeserializeCallData
// address: 0x748a644
// body: available
// range: 0x748a644-0x748a83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748a82c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748a830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748a834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748a83c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0748a76c) */
/* WARNING: Removing unreachable block (ram,0x0748a828) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Runtime_Remoting_RemotingServices__DeserializeCallData(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_095212a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193b18);
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095212a9 = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar1 = thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(uVar1,param_1,0);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_2c[0] = '\0';
    local_28 = *(undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x10);
    System_Threading_Monitor__Enter(local_28,local_2c,0);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Deserialize
                               (lVar2,uVar1,0);
    if (local_2c[0] != '\0') {
      System_Threading_Monitor__Exit(local_28,0);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(DAT_09193b18 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09193b18 + 0x130) * 8 + -8) ==
          DAT_09193b18)) {
        plVar5 = (long *)plVar3[3];
        if (plVar5 == (long *)0x0) {
LAB_0748a834:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar5 != DAT_09187ca0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        plVar3 = (long *)plVar3[2];
        uVar4 = System_Runtime_Remoting_Messaging_LogicalCallContext__get_HasInfo(plVar5,0);
        if ((uVar4 & 1) != 0) {
          lVar2 = System_Threading_Thread__get_CurrentThread(0);
          if (((lVar2 == 0) ||
              (lVar2 = System_Threading_Thread__GetMutableExecutionContext(lVar2,0), lVar2 == 0)) ||
             (lVar2 = System_Threading_ExecutionContext__get_LogicalCallContext(lVar2,0), lVar2 == 0
             )) goto LAB_0748a834;
          System_Runtime_Remoting_Messaging_LogicalCallContext__Merge(lVar2,plVar5,0);
        }
      }
    }
  }
  return plVar3;
}

