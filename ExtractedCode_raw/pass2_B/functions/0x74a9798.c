// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink$$AsyncProcessMessage
// address: 0x74a9798
// body: available
// range: 0x74a9798-0x74a995f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a9958 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a995c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_ServerObjectTerminatorSink__AsyncProcessMessage
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_095213d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a9d0);
    FUN_03f5c2a4(&DAT_0918a9e0);
    DAT_095213d8 = 1;
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a9d0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
        DAT_0918a9d0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
    uVar2 = System_Runtime_Remoting_Identity__get_HasServerDynamicSinks(plVar1,0);
    lVar3 = param_3;
    if (((uVar2 & 1) != 0) &&
       (System_Runtime_Remoting_Identity__NotifyServerDynamicSinks(plVar1,1,param_2,0,1,0),
       param_3 != 0)) {
      lVar3 = thunk_FUN_03f9944c(DAT_0918a9e0);
      System_Runtime_Remoting_Messaging_ServerObjectReplySink___ctor(lVar3,plVar1,param_3);
    }
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186090) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_074a9908;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186090,1);
LAB_074a9908:
      uVar5 = (*(code *)*puVar4)(plVar8,param_2,lVar3,puVar4[1]);
      if (lVar3 == 0) {
        System_Runtime_Remoting_Identity__NotifyServerDynamicSinks(plVar1,0,param_2,1,1,0);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

