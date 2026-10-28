// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$CheckForNull
// address: 0x74c5ce8
// body: available
// range: 0x74c5ce8-0x74c5da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c5da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Runtime_Serialization_Formatters_Binary_ObjectWriter__CheckForNull
               (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  if (param_5 != 0) goto LAB_074c5cf4;
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x1c) != 2) {
      if (param_3 == 0) goto LAB_074c5da4;
      if (((*(char *)(param_3 + 0x3a) == '\0') && (*(char *)(param_3 + 0x3b) == '\0')) &&
         (*(char *)(param_3 + 0x3c) == '\0')) {
        if (param_2 == 0) goto LAB_074c5da4;
        if ((*(char *)(param_2 + 0x28) == '\0') && ((*(byte *)(lVar1 + 0x10) & 1) == 0))
        goto LAB_074c5cf4;
      }
    }
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x3a) != '\0') {
        lVar1 = *(long *)(param_1 + 0x40);
        if (*(int *)(param_4 + 0x40) == 1) {
          if (lVar1 == 0) goto LAB_074c5da4;
          *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + 1;
        }
        else {
          if (lVar1 == 0) goto LAB_074c5da4;
          *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + 1;
          System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull();
        }
LAB_074c5cf4:
        return param_5 == 0;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteNullMember
                  (*(long *)(param_1 + 0x40),param_3);
        goto LAB_074c5cf4;
      }
    }
  }
LAB_074c5da4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

