// rea decompile_all
// name: System.Type$$IsAssignableFrom
// address: 0x75cfc88
// body: available
// range: 0x75cfc88-0x75cfe0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cfd68 to 0x75cfed4 System.Type$$ImplementInterface (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75cfe08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cfe0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Type__IsAssignableFrom(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  if (param_2 == (long *)0x0) {
LAB_075cfdf0:
    uVar2 = 0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 != param_2) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if (plVar3 == (long *)0x0) {
LAB_075cfe08:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = System_Type__IsRuntimeImplemented();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x075cfd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x2c0));
        return uVar4;
      }
      uVar4 = (**(code **)(*param_2 + 0x2a8))(param_2,param_1,*(undefined8 *)(*param_2 + 0x2b0));
      if ((uVar4 & 1) == 0) {
        uVar4 = System_Type__get_IsInterface(param_1);
        if ((uVar4 & 1) != 0) {
          uVar4 = System_Type__ImplementInterface(param_2,param_1);
          return uVar4;
        }
        uVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
        if ((uVar4 & 1) == 0) goto LAB_075cfdf0;
        lVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
        if (lVar5 == 0) goto LAB_075cfe08;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          lVar6 = 0;
          do {
            if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar3 = *(long **)(lVar5 + 0x20 + lVar6 * 8);
            if (plVar3 == (long *)0x0) goto LAB_075cfe08;
            uVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x2c0));
            if ((uVar2 & 1) == 0) break;
            uVar1 = *(uint *)(lVar5 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar1);
          goto LAB_075cfdf4;
        }
      }
    }
    uVar2 = 1;
  }
LAB_075cfdf4:
  return (ulong)(uVar2 & 1);
}

