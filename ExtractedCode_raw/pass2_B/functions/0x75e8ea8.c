// rea decompile_all
// name: System.DefaultBinder$$FindMostDerivedNewSlotMeth
// address: 0x75e8ea8
// body: available
// range: 0x75e8ea8-0x75e8ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e8f9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8ff0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DefaultBinder__FindMostDerivedNewSlotMeth(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_09521eea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    DAT_09521eea = 1;
  }
  if (param_2 < 1) {
    uVar4 = 0;
  }
  else {
    if (param_1 == 0) {
LAB_075e8fa0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = 0;
    iVar6 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0x18) <= (uint)lVar5) {
LAB_075e8f9c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2 = *(long **)(param_1 + 0x20 + lVar5 * 8);
      if (plVar2 == (long *)0x0) goto LAB_075e8fa0;
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183868);
      }
      iVar1 = System_DefaultBinder__GetHierarchyDepth(uVar3);
      if (iVar1 == iVar6) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_091fb838);
        uVar4 = System_Environment__GetResourceString(uVar4,0);
        thunk_FUN_03fc39d4(&DAT_09181088);
        uVar3 = thunk_FUN_03f9944c();
        System_Reflection_AmbiguousMatchException___ctor(uVar3,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c8270);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar4);
      }
      if (iVar6 < iVar1) {
        if (*(uint *)(param_1 + 0x18) <= (uint)lVar5) goto LAB_075e8f9c;
        uVar4 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
        iVar6 = iVar1;
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != (int)lVar5);
  }
  return uVar4;
}

