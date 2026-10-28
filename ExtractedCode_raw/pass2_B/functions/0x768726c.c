// rea decompile_all
// name: Newtonsoft.Json.Utilities.CollectionUtils$$IsDictionaryType
// address: 0x768726c
// body: available
// range: 0x768726c-0x76873f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76873f0 to 0x76873f8 Newtonsoft.Json.Utilities.ReflectionUtils$$ImplementsGenericDefinition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76873f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Utilities_CollectionUtils__IsDictionaryType(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09522557 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09171d30);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_09522557 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_09224510,0);
  uVar3 = DAT_09171b90;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Type__GetTypeFromHandle(uVar3,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x2c0));
    uVar3 = DAT_09171ba8;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189d88);
      }
      uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition(param_1,uVar3);
      uVar3 = DAT_09171d30;
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189d88);
        }
        uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                          (param_1,uVar3);
        return uVar3;
      }
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

