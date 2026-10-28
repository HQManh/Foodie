// rea decompile_all
// name: System.Type$$ImplementInterface
// address: 0x75cfed4
// body: available
// range: 0x75cfed4-0x75cfff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cffec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cfff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Type__ImplementInterface(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  while( true ) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 == (long *)0x0) break;
    lVar2 = (**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(*param_1 + 0x8d0));
    if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar2 + 0x18), 0 < (int)*(uint *)(lVar2 + 0x18)))
    {
      lVar6 = 0;
      lVar1 = lVar2 + 0x20;
      do {
        uVar5 = (uint)lVar6;
        if ((uint)uVar4 <= uVar5) {
LAB_075cffec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar7 == param_2) goto LAB_075cffd0;
        uVar4 = *(ulong *)(lVar2 + 0x18);
        uVar3 = (uint)uVar4;
        if (uVar3 <= uVar5) goto LAB_075cffec;
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar4 = *(ulong *)(lVar2 + 0x18);
          uVar3 = (uint)uVar4;
        }
        if (lVar7 != 0) {
          if (uVar3 <= uVar5) goto LAB_075cffec;
          lVar7 = *(long *)(lVar1 + lVar6 * 8);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = System_Type__ImplementInterface(lVar7,param_2);
          if ((uVar4 & 1) != 0) goto LAB_075cffd0;
          uVar4 = *(ulong *)(lVar2 + 0x18);
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar4);
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  }
LAB_075cffd0:
  return param_1 != (long *)0x0;
}

