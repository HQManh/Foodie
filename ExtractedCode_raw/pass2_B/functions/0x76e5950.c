// rea decompile_all
// name: Newtonsoft.Json.Linq.JPropertyDescriptor$$SetValue
// address: 0x76e5950
// body: available
// range: 0x76e5950-0x76e5a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e5a6c to 0x76e0d90 Newtonsoft.Json.Linq.JObject$$set_Item (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JPropertyDescriptor__SetValue(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_09522817 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187278);
    DAT_09522817 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
      DAT_09187220) {
    return;
  }
  if (param_3 != (long *)0x0) {
    if ((*(byte *)(DAT_09187250 + 0x130) <= *(byte *)(*param_3 + 0x130)) &&
       (plVar1 = param_3,
       *(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09187250 + 0x130) * 8 + -8) ==
       DAT_09187250)) goto LAB_076e5a44;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09187278);
  Newtonsoft_Json_Linq_JValue___ctor(plVar1,param_3,0);
LAB_076e5a44:
  uVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  Newtonsoft_Json_Linq_JObject__set_Item(param_2,uVar2,plVar1);
  return;
}

