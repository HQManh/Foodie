// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$Load
// address: 0x76e0e10
// body: available
// range: 0x76e0e10-0x76e0fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e0f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e0fe0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JObject__Load(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  if ((DAT_095227e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095227e2 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_092215e0,0);
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
      if ((uVar2 & 1) == 0) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_09201928);
        goto LAB_076e0fb8;
      }
    }
    Newtonsoft_Json_JsonReader__MoveToContent(param_1,0);
    iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar1 != 1) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_1);
      local_24 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      uVar5 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar5 = FUN_03f5c42c(uVar5,&local_24);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09201930);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
LAB_076e0fb8:
      uVar4 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar4,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d12b0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09187220);
    Newtonsoft_Json_Linq_JObject___ctor();
    if (lVar3 != 0) {
      uVar4 = thunk_FUN_03f99350(param_1,DAT_09185f18);
      Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar3,uVar4,param_2);
      Newtonsoft_Json_Linq_JContainer__ReadTokenFrom(lVar3,param_1,param_2);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

