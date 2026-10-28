// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadServiceWellKnown
// address: 0x7484c08
// body: available
// range: 0x7484c08-0x7484deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7484d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7484de8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadServiceWellKnown(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_48;
  
  lVar2 = param_1;
  if ((DAT_0952127d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d068);
    FUN_03f5c2a4(&DAT_0920d1f8);
    FUN_03f5c2a4(&DAT_0920d1e8);
    FUN_03f5c2a4(&DAT_0921f8a0);
    FUN_03f5c2a4(&DAT_09220250);
    lVar2 = FUN_03f5c2a4(&DAT_09224510);
    DAT_0952127d = 1;
  }
  local_48 = 0;
  uVar3 = System_Runtime_Remoting_ConfigHandler__GetNotNull(lVar2,param_2,DAT_09220250);
  uVar4 = System_Runtime_Remoting_ConfigHandler__GetNotNull(uVar3,param_2,DAT_0921f8a0);
  local_48 = System_Runtime_Remoting_ConfigHandler__GetNotNull(uVar4,param_2,DAT_09224510);
  uVar5 = System_Runtime_Remoting_ConfigHandler__ExtractAssembly(local_48,&local_48);
  uVar6 = System_String__op_Equality(uVar4,DAT_0920d1e8,0);
  if ((uVar6 & 1) == 0) {
    uVar6 = System_String__op_Equality(uVar4,DAT_0920d1f8,0);
    if ((uVar6 & 1) == 0) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_09225768);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091f76c0);
      uVar3 = System_String__Concat(uVar3,uVar4,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09189ec8);
      uVar4 = thunk_FUN_03f9944c();
      System_Runtime_Remoting_RemotingException___ctor(uVar4,uVar3);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c5c90);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  uVar1 = local_48;
  plVar8 = *(long **)(param_1 + 0x10);
  uVar7 = thunk_FUN_03f9944c(DAT_0918d068);
  System_Runtime_Remoting_WellKnownServiceTypeEntry___ctor(uVar7,uVar1,uVar5,uVar3,uVar4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x308))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x310));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

