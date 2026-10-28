// rea decompile_all
// name: Newtonsoft.Json.Linq.JProperty$$InsertItem
// address: 0x76e4450
// body: available
// range: 0x76e4450-0x76e456f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e44c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e456c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JProperty__InsertItem
          (long param_1,undefined8 param_2,long *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_3 != (long *)0x0) &&
     (iVar1 = (**(code **)(*param_3 + 0x228))(param_3,*(undefined8 *)(*param_3 + 0x230)), iVar1 == 5
     )) {
    return 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(*(long *)(param_1 + 0x58) + 0x10) == 0) {
    Newtonsoft_Json_Linq_JContainer__InsertItem(param_1,0,param_3,0,param_5 & 1);
    return 1;
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_09172140);
  FUN_039afb80(DAT_095354b8);
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09226238);
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,uVar3,0);
  thunk_FUN_03fc39d4(&DAT_09187348);
  uVar3 = thunk_FUN_03f9944c();
  Newtonsoft_Json_JsonException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d1350);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

