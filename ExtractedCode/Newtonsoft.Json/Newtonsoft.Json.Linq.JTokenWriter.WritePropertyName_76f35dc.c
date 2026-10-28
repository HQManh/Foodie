// rea decompile_all
// name: Newtonsoft.Json.Linq.JTokenWriter$$WritePropertyName
// address: 0x76f35dc
// body: available
// range: 0x76f35dc-0x76f36a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f36a0 to 0x767f52c Newtonsoft.Json.JsonWriter$$WritePropertyName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JTokenWriter__WritePropertyName(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_095228c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187230);
    DAT_095228c1 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) ==
        DAT_09187220)) {
      Newtonsoft_Json_Linq_JObject__Remove(plVar1,param_2,0);
    }
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09187230);
  Newtonsoft_Json_Linq_JProperty___ctor(uVar2,param_2,0);
  Newtonsoft_Json_Linq_JTokenWriter__AddParent(param_1,uVar2);
  Newtonsoft_Json_JsonWriter__WritePropertyName(param_1,param_2,0);
  return;
}

