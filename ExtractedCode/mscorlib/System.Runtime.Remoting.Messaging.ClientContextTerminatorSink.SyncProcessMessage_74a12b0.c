// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink$$SyncProcessMessage
// address: 0x74a12b0
// body: available
// range: 0x74a12b0-0x74a1487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a1388 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a1484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_ClientContextTerminatorSink__SyncProcessMessage
          (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09521381 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_09521381 = 1;
  }
  if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(1,param_2,1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks
              (*(long *)(param_1 + 0x10),1,param_2,1,0);
    lVar1 = thunk_FUN_03f99350(param_2,DAT_09185858);
    uVar3 = DAT_09185858;
    if (lVar1 == 0) {
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
      if ((lVar1 == 0) || (plVar6 = *(long **)(lVar1 + 0x18), plVar6 == (long *)0x0))
      goto LAB_074a1484;
      lVar1 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09186090) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_074a141c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186090,0);
LAB_074a141c:
      uVar3 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
    }
    else {
      if (param_2 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = thunk_FUN_03f99350(param_2,DAT_09185858);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_2,uVar3);
        }
      }
      uVar3 = System_Runtime_Remoting_Activation_ActivationServices__RemoteActivate(lVar1);
    }
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(0,param_2,1,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks
                (*(long *)(param_1 + 0x10),0,param_2,1,0);
      return uVar3;
    }
  }
LAB_074a1484:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

