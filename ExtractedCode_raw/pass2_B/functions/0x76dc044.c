// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$ValidateToken
// address: 0x76dc044
// body: available
// range: 0x76dc044-0x76dc163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dc0c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dc160 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer__ValidateToken(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_095227b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_092201d0);
    DAT_095227b3 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092201d0,0);
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    if (iVar1 != 4) {
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar3 = System_Object__GetType(param_2,0);
    uVar4 = System_Object__GetType(param_1,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fd5e0);
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar2,uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar3,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d1290);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

