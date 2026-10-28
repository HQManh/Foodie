// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$GetId
// address: 0x74c3d58
// body: available
// range: 0x74c3d58-0x74c3e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c3e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_095214a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186f80);
    DAT_095214a0 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__InitFullDeserialization(param_1);
  }
  if ((long)param_2 < 1) {
    if ((param_2 != 0xffffffffffffffff) && (*(char *)(param_1 + 0xa1) == '\0')) {
      return -param_2;
    }
    plVar4 = (long *)(param_1 + 0xa8);
    lVar2 = *plVar4;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_09186f80);
      System_Runtime_Serialization_Formatters_Binary_IntSizedArray___ctor(lVar2,0);
      *plVar4 = lVar2;
      thunk_FUN_03f5d7b8(plVar4,lVar2);
      lVar2 = *plVar4;
      if (lVar2 == 0) goto LAB_074c3e48;
    }
    iVar1 = System_Runtime_Serialization_Formatters_Binary_IntSizedArray__get_Item
                      (lVar2,param_2 & 0xffffffff,0);
    if (iVar1 == 0) {
      if (*plVar4 == 0) {
LAB_074c3e48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = param_2 & 0xffffffff;
      param_2 = param_2 + 0x7fffffff;
      System_Runtime_Serialization_Formatters_Binary_IntSizedArray__set_Item
                (*plVar4,uVar3,param_2 & 0xffffffff,0);
    }
    else {
      param_2 = (ulong)iVar1;
    }
  }
  return param_2;
}

