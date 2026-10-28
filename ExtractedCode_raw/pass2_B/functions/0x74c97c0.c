// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.SizedArray$$set_Item
// address: 0x74c97c0
// body: available
// range: 0x74c97c0-0x74c98cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c98b8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c98bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c98c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c98cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_SizedArray__set_Item
               (long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  if ((int)param_2 < 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) goto LAB_074c98c0;
    uVar3 = -param_2;
    if ((int)plVar5[3] + -1 < (int)uVar3) {
      System_Runtime_Serialization_Formatters_Binary_SizedArray__IncreaseCapacity(param_1,param_2);
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_074c98c0;
    }
    if ((param_3 != 0) &&
       (lVar1 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar1 == 0)) {
LAB_074c98c4:
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if (uVar3 < *(uint *)(plVar5 + 3)) {
      plVar5 = plVar5 + (long)(int)uVar3 + 4;
      *plVar5 = param_3;
      goto LAB_074c98a8;
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) {
LAB_074c98c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((int)plVar4[3] + -1 < (int)param_2) {
      System_Runtime_Serialization_Formatters_Binary_SizedArray__IncreaseCapacity(param_1,param_2);
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_074c98c0;
    }
    uVar3 = *(uint *)(plVar4 + 3);
    if (param_2 < uVar3) {
      if (param_3 != 0) {
        lVar1 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar1 == 0) goto LAB_074c98c4;
        uVar3 = *(uint *)(plVar4 + 3);
      }
      if (param_2 < uVar3) {
        plVar5 = plVar4 + (ulong)param_2 + 4;
        plVar4[(ulong)param_2 + 4] = param_3;
LAB_074c98a8:
        thunk_FUN_03f5d7b8(plVar5,param_3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

