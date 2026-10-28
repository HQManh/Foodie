// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$RecordFixup
// address: 0x74c16e4
// body: available
// range: 0x74c16e4-0x74c1787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1784 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__RecordFixup
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Position(param_1,param_3)
    ;
    if (uVar1 == 0xffffffff) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2 = *(long **)(param_1 + 0x20);
      if (plVar2 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x198);
        uVar3 = *(undefined8 *)(*plVar2 + 0x1a0);
        param_3 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        goto LAB_074c1760;
      }
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x1a8);
      uVar3 = *(undefined8 *)(*plVar2 + 0x1b0);
LAB_074c1760:
                    /* WARNING: Could not recover jumptable at 0x074c1770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,param_2,param_3,param_4,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

