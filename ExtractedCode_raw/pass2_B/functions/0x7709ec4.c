// rea decompile_all
// name: Newtonsoft.Json.Converters.RegexConverter$$ReadRegexString
// address: 0x7709ec4
// body: available
// range: 0x7709ec4-0x770a01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770a010 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770a014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770a01c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_RegexConverter__ReadRegexString(undefined8 param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09522979 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189db0);
    DAT_09522979 = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      if (0 < (int)plVar4[2]) {
        sVar1 = System_String__get_Chars(plVar4,0,0);
        if (sVar1 == 0x2f) {
          iVar2 = System_String__LastIndexOf(plVar4,0x2f,0);
          if (0 < iVar2) {
            uVar5 = System_String__Substring(plVar4,1,iVar2 + -1,0);
            uVar6 = System_String__Substring(plVar4,iVar2 + 1,0);
            uVar3 = Newtonsoft_Json_Utilities_MiscellaneousUtils__GetRegexOptions(uVar6,0);
            uVar6 = thunk_FUN_03f9944c(DAT_09189db0);
            System_Text_RegularExpressions_Regex___ctor(uVar6,uVar5,uVar3,0);
            return uVar6;
          }
        }
      }
      uVar5 = thunk_FUN_03fc39d4(&DAT_0920b8a8);
      uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d7270);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

