// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$CheckReturnMessage
// address: 0x74976b4
// body: available
// range: 0x74976b4-0x7497877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7497850 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Channels_ChannelServices__CheckReturnMessage
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09521334 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09188238);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_0920cc10);
    DAT_09521334 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_2,DAT_091860b0);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091860b0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07497798;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091860b0,0);
LAB_07497798:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 != 0) {
      if (*(int *)(DAT_09182498 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Runtime_Remoting_RemotingConfiguration__CustomErrorsEnabled(1,0);
      if ((uVar6 & 1) != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_091842a0);
        System_Exception___ctor(uVar4,DAT_0920cc10,0);
        param_2 = thunk_FUN_03f9944c(DAT_09188238);
        uVar1 = DAT_091860a0;
        if (param_1 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_03f99350(param_1,DAT_091860a0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_1,uVar1);
          }
        }
        System_Runtime_Remoting_Messaging_MethodResponse___ctor(param_2,uVar4,lVar5);
      }
    }
  }
  return param_2;
}

