// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseMemberEnd
// address: 0x74c2960
// body: available
// range: 0x74c2960-0x74c2a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c29b8 to 0x74c3c28 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseArrayMemberEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c29d8 to 0x74c2238 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseObjectEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c29f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c2a24 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseMemberEnd
               (long param_1,long param_2)

{
  long *plVar1;
  
  if ((DAT_0952149f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188e88);
    DAT_0952149f = 1;
  }
  if (param_2 == 0) {
LAB_074c29f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_2 + 0x1c) == 2) {
    if (*(int *)(param_2 + 0x20) == 2) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObjectEnd(param_1,param_2);
      return;
    }
    return;
  }
  if (*(int *)(param_2 + 0x1c) == 3) {
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseArrayMemberEnd
              (param_1,param_2);
    return;
  }
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c29f0;
  plVar1 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                             (*(long *)(param_1 + 0x88),0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != DAT_09188e88) goto LAB_074c2a24;
  }
  System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError(plVar1,param_2,plVar1);
LAB_074c2a24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0();
}

