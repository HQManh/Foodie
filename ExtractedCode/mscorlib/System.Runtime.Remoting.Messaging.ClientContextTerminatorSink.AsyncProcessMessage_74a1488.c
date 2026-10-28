// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink$$AsyncProcessMessage
// address: 0x74a1488
// body: available
// range: 0x74a1488-0x74a16ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a16a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_ClientContextTerminatorSink__AsyncProcessMessage
          (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09521382 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825c0);
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_09521382 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_074a16a8;
  uVar1 = System_Runtime_Remoting_Contexts_Context__get_HasDynamicSinks();
  lVar2 = param_3;
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Runtime_Remoting_Contexts_Context__get_HasGlobalDynamicSinks();
    if ((uVar1 & 1) != 0) goto LAB_074a1518;
  }
  else {
LAB_074a1518:
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(1,param_2,1,1);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_074a16a8;
    System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks
              (*(long *)(param_1 + 0x10),1,param_2,1,1);
    if (param_3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = thunk_FUN_03f9944c(DAT_091825c0);
      System_Runtime_Remoting_Messaging_ClientContextReplySink___ctor(lVar2,uVar6,param_3);
    }
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
  if ((lVar3 != 0) && (plVar7 = *(long **)(lVar3 + 0x18), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09186090) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_074a160c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186090,1);
LAB_074a160c:
    uVar6 = (*(code *)*puVar4)(plVar7,param_2,lVar2,puVar4[1]);
    if (lVar2 != 0) {
      return uVar6;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = System_Runtime_Remoting_Contexts_Context__get_HasDynamicSinks();
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Runtime_Remoting_Contexts_Context__get_HasGlobalDynamicSinks();
        if ((uVar1 & 1) == 0) {
          return uVar6;
        }
      }
      if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_Contexts_Context__NotifyGlobalDynamicSinks(0,param_2,1,1);
      if (*(long *)(param_1 + 0x10) != 0) {
        System_Runtime_Remoting_Contexts_Context__NotifyDynamicSinks
                  (*(long *)(param_1 + 0x10),0,param_2,1,1);
        return uVar6;
      }
    }
  }
LAB_074a16a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

