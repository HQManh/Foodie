// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$MarshalArgument
// address: 0x749fb74
// body: available
// range: 0x749fb74-0x749fc3b inclusive
// range: 0x749fc40-0x749fce3 inclusive
// range: 0x749fd38-0x749fd3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749fc38 to 0x7486ba0 System.Runtime.Remoting.RemotingServices$$IsTransparentProxy (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749fd38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Messaging_CADMessageBase__MarshalArgument
                 (undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_09521374 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09182188);
    FUN_03f5c2a4(&DAT_091821a8);
    FUN_03f5c2a4(&DAT_09187de0);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_09521374 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (uVar2 = System_Runtime_Remoting_Messaging_CADMessageBase__IsPossibleToIgnoreMarshal(param_2),
     (uVar2 & 1) == 0)) {
    if ((*(byte *)(DAT_09187de0 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) ==
        DAT_09187de0)) {
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
                    /* WARNING: Subroutine does not return */
      System_Runtime_Remoting_RemotingServices__IsTransparentProxy(param_2,0);
    }
    plVar3 = (long *)*param_3;
    if (plVar3 == (long *)0x0) {
      lVar4 = thunk_FUN_03f9944c(DAT_09181588);
      System_Collections_ArrayList___ctor(lVar4,0);
      *param_3 = lVar4;
      thunk_FUN_03f5d7b8(param_3,lVar4);
      plVar3 = (long *)*param_3;
      if (plVar3 == (long *)0x0) goto LAB_0749fd38;
    }
    (**(code **)(*plVar3 + 0x308))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x310));
    param_3 = (long *)*param_3;
    if (param_3 == (long *)0x0) {
LAB_0749fd38:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*param_3 + 0x298))(param_3,*(undefined8 *)(*param_3 + 0x2a0));
    param_2 = (long *)thunk_FUN_03f9944c(DAT_09182188);
    System_Object___ctor(param_2,0);
    *(int *)(param_2 + 2) = iVar1 + -1;
  }
  return param_2;
}

