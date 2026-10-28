// rea decompile_all
// name: System.Runtime.Remoting.Contexts.CrossContextChannel$$SyncProcessMessage
// address: 0x7494444
// body: available
// range: 0x7494444-0x74946af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749468c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7494698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749469c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74946a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74946a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74946a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74946ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0749469c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Runtime_Remoting_Contexts_CrossContextChannel__SyncProcessMessage
          (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long local_38;
  
  if ((DAT_09521328 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a9d0);
    DAT_09521328 = 1;
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
  if (plVar1 == (long *)0x0) {
    System_Threading_Thread__get_CurrentContext();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a9d0 + 0x130)) ||
     (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
      DAT_0918a9d0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar1);
  }
  local_38 = 0;
  lVar2 = System_Threading_Thread__get_CurrentContext(0);
  lVar7 = plVar1[0xc];
  if (lVar2 != lVar7) {
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = thunk_FUN_03f6ae30(lVar7,0);
  }
  if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(1,param_2,0,0);
  lVar2 = System_Threading_Thread__get_CurrentContext(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks(lVar2,1,param_2,0,0);
  if (plVar1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)System_Runtime_Remoting_Contexts_Context__GetServerContextSinkChain();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_09186090) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_074945f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09186090,0);
LAB_074945f8:
  uVar4 = (*(code *)*puVar3)(plVar1,param_2,puVar3[1]);
  System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(0,param_2,0,0);
  lVar2 = System_Threading_Thread__get_CurrentContext(0);
  if (lVar2 != 0) {
    System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks(lVar2,0,param_2,0,0);
    if (local_38 != 0) {
      if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f6ae30(local_38,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

