// rea decompile_all
// name: System.Collections.ArrayList$$Contains
// address: 0x755a31c
// body: available
// range: 0x755a31c-0x755a3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755a3e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755a3e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Collections_ArrayList__Contains(ulong param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if (param_2 == 0) {
    if (0 < iVar5) {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        plVar2 = (long *)(lVar4 + 0x20);
        while (iVar5 = iVar5 + -1, uVar3 = param_1, iVar1 != 0) {
          param_1 = (ulong)(*plVar2 == 0);
          if (*plVar2 == 0) {
            return 1;
          }
          iVar1 = iVar1 + -1;
          plVar2 = plVar2 + 1;
          if (iVar5 == 0) {
            return param_1;
          }
        }
LAB_0755a3e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(uVar3);
      }
LAB_0755a3e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else if (0 < iVar5) {
    uVar6 = 0;
    uVar3 = param_1;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_0755a3e4;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0755a3e0;
      plVar2 = *(long **)(lVar4 + uVar6 * 8 + 0x20);
      uVar3 = 0;
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x140));
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        iVar5 = *(int *)(param_1 + 0x18);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar5);
  }
  return 0;
}

