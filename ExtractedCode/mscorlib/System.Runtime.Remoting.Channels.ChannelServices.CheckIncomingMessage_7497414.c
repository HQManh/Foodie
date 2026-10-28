// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$CheckIncomingMessage
// address: 0x7497414
// body: available
// range: 0x7497414-0x74976b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7497698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74976a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74976b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Channels_ChannelServices__CheckIncomingMessage(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_09521333 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09189ec8);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a260);
    FUN_03f5c2a4(&DAT_0918a9d0);
    FUN_03f5c2a4(&DAT_09208c18);
    DAT_09521333 = 1;
  }
  lVar7 = DAT_091860a8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)thunk_FUN_03f99350(param_1,DAT_091860a8);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1,lVar7);
  }
  lVar7 = *plVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091860a8) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_0749750c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091860a8,7);
LAB_0749750c:
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ed8);
  }
  plVar4 = (long *)System_Runtime_Remoting_RemotingServices__GetIdentityForUri(uVar3,0);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(DAT_0918a9d0 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) ==
        DAT_0918a9d0)) {
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_RemotingServices__SetMessageTargetIdentity(param_1,plVar4,0);
      return 0;
    }
  }
  lVar7 = *plVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091860a8) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_074975e8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091860a8,7);
LAB_074975e8:
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  uVar3 = System_String__Concat(DAT_09208c18,uVar3,0);
  uVar5 = thunk_FUN_03f9944c(DAT_09189ec8);
  System_Runtime_Remoting_RemotingException___ctor(uVar5,uVar3,0);
  uVar6 = thunk_FUN_03f9944c(DAT_0918a260);
  uVar3 = DAT_091860a0;
  lVar7 = thunk_FUN_03f99350(param_1,DAT_091860a0);
  if (lVar7 != 0) {
    System_Runtime_Remoting_Messaging_ReturnMessage___ctor(uVar6,uVar5,lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_1,uVar3);
}

