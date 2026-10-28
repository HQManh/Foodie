// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetFields
// address: 0x769d3fc
// body: available
// range: 0x769d3fc-0x769d517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769d510 to 0x4ab7e4c FUN_04ab7e4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769d514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetFields(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_095225fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c95f8);
    FUN_03f5c2a4(&DAT_091ae728);
    FUN_03f5c2a4(&DAT_0917c728);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09223c28);
    DAT_095225fe = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_09223c28,0);
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x708))(param_1,param_2,*(undefined8 *)(*param_1 + 0x710));
    uVar2 = thunk_FUN_03f9944c(DAT_0917c728);
    FUN_057e053c(uVar2,uVar1,DAT_091ae728);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Utilities_ReflectionUtils__GetChildPrivateFields(uVar2,param_1,param_2);
    FUN_04ab7e4c(uVar2,DAT_091c95f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

