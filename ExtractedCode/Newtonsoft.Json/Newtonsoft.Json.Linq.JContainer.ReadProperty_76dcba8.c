// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$ReadProperty
// address: 0x76dcba8
// body: available
// range: 0x76dcba8-0x76dcd7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dcd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dcd18 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dcd7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JContainer__ReadProperty
               (long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_095227bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187230);
    DAT_095227bc = 1;
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x18);
  }
  if (((param_1 != (long *)0x0) &&
      (plVar1 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250)),
      plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170)),
     param_4 != (long *)0x0)) {
    if ((*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
        DAT_09187220)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    lVar3 = Newtonsoft_Json_Linq_JObject__Property(param_4,uVar2,4);
    if (lVar3 != 0) {
      if (iVar7 == 1) {
        return 0;
      }
      if (iVar7 == 2) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_0920b048);
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar5,uVar2,0);
        uVar2 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar2,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d1248);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar5);
      }
    }
    lVar4 = thunk_FUN_03f9944c(DAT_09187230);
    Newtonsoft_Json_Linq_JProperty___ctor(lVar4,uVar2);
    if (lVar4 != 0) {
      Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar4,param_3,param_2);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x6e8))(param_4,lVar4,*(undefined8 *)(*param_4 + 0x6f0));
      }
      else {
        Newtonsoft_Json_Linq_JToken__Replace(lVar3,lVar4);
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

