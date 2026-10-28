// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains
// address: 0x76e1abc
// body: available
// range: 0x76e1abc-0x76e1b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e1b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Linq_JObject__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<System_String,Newtonsoft_Json_Linq_JToken>>_Contains
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if ((DAT_095227e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_091a9848);
    DAT_095227e9 = 1;
  }
  lVar2 = Newtonsoft_Json_Linq_JObject__Property(param_1,param_2,4);
  bVar1 = false;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar1 = *(long *)(*(long *)(lVar2 + 0x58) + 0x10) == param_3;
  }
  return bVar1;
}

