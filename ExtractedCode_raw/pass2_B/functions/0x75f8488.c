// rea decompile_all
// name: System.RuntimeType$$get_ContainsGenericParameters
// address: 0x75f8488
// body: available
// range: 0x75f8488-0x75f858f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f8588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f858c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_RuntimeType__get_ContainsGenericParameters(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    if ((uVar2 & 1) != 0) {
      lVar4 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
      if (lVar4 == 0) goto LAB_075f8588;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5 = *(long **)(lVar4 + 0x20 + lVar6 * 8);
          if (plVar5 == (long *)0x0) goto LAB_075f8588;
          uVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          if ((uVar2 & 1) != 0) goto LAB_075f84ac;
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
    }
    uVar2 = System_Type__get_HasElementType(param_1,0);
    if ((uVar2 & 1) != 0) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x075f8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        return uVar3;
      }
LAB_075f8588:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = 0;
  }
  else {
LAB_075f84ac:
    uVar3 = 1;
  }
  return uVar3;
}

