// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$GetType
// address: 0x74b6d1c
// body: available
// range: 0x74b6d1c-0x74b6edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b6edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetType
                 (long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_38;
  
  if ((DAT_095214a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    DAT_095214a3 = 1;
  }
  local_38 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 == 0) {
LAB_074b6dc8:
    if (param_2 == 0) goto LAB_074b6edc;
  }
  else {
    if (param_3 == 0) goto LAB_074b6edc;
    if (((*(int *)(lVar2 + 0x10) != *(int *)(param_3 + 0x10)) ||
        (uVar3 = System_String__Equals(lVar2,param_3,0), (uVar3 & 1) == 0)) ||
       (lVar2 = *(long *)(param_1 + 0xb8), lVar2 == 0)) goto LAB_074b6dc8;
    if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x10), lVar6 == 0)) goto LAB_074b6edc;
    if ((*(int *)(lVar2 + 0x10) == *(int *)(lVar6 + 0x10)) &&
       (uVar3 = System_String__Equals(lVar2,lVar6,0), (uVar3 & 1) != 0)) {
      return *(long **)(param_1 + 200);
    }
  }
  local_38 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectReader__Bind
                               (param_1,*(undefined8 *)(param_2 + 0x10),param_3);
  if (local_38 == (long *)0x0) {
    uVar4 = System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo__GetAssembly(param_2);
    if (*(char *)(param_1 + 0x50) == '\0') {
      if (*(int *)(DAT_09184940 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_38 = (long *)System_Runtime_Serialization_FormatterServices__GetTypeFromAssembly
                                   (uVar4,param_3,0);
    }
    else {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetSimplyNamedTypeFromAssembly
                (uVar4,param_3,&local_38);
    }
    plVar1 = local_38;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Inequality(plVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (local_38 == (long *)0x0) {
LAB_074b6edc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*local_38 + 0x308))(local_38,*(undefined8 *)(*local_38 + 0x310));
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__CheckTypeForwardedTo
                (uVar4,uVar5,local_38);
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x10);
  thunk_FUN_03f5d7b8();
  *(long *)(param_1 + 0xc0) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xc0),param_3);
  *(long *)(param_1 + 200) = (long)local_38;
  thunk_FUN_03f5d7b8((long *)(param_1 + 200));
  return local_38;
}

