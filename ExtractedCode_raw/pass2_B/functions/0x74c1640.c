// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$AddValue
// address: 0x74c1640
// body: available
// range: 0x74c1640-0x74c16e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1668 to 0x74b49ec System.Runtime.Serialization.SerializationInfo$$AddValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c16c0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c16d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c16d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c16e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__AddValue
               (long param_1,undefined8 param_2,long param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Position();
    if (uVar1 == 0xffffffff) {
      return;
    }
    plVar4 = (long *)*param_5;
    if (plVar4 != (long *)0x0) {
      if ((param_3 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if (uVar1 < *(uint *)(plVar4 + 3)) {
        plVar4[(long)(int)uVar1 + 4] = param_3;
        thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar1 + 4,param_3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else if (*param_4 != 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue(*param_4,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

