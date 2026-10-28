// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$ReadFrom
// address: 0x76ef854
// body: available
// range: 0x76ef854-0x76efb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ef9b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ef9e8 to 0x76d83d4 Newtonsoft.Json.Linq.JConstructor$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76efa30 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76efa48 to 0x76e0e10 Newtonsoft.Json.Linq.JObject$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76efa64 to 0x76d4c2c Newtonsoft.Json.Linq.JArray$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76efb14 to 0x76e48e4 Newtonsoft.Json.Linq.JProperty$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JToken__ReadFrom(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_24;
  
  if ((DAT_09522895 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_09522895 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_092215e0,0);
  if (param_1 == (long *)0x0) goto LAB_076ef9b8;
  iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (iVar1 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_076ef9ec;
    uVar4 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
    if ((uVar4 & 1) != 0) goto LAB_076ef924;
LAB_076ef9fc:
    uVar5 = thunk_FUN_03fc39d4(&DAT_09201948);
    goto LAB_076efa08;
  }
  iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (((param_2 != 0) && (iVar1 == 5)) && (*(int *)(param_2 + 0x10) == 0)) {
LAB_076ef9ec:
    uVar4 = Newtonsoft_Json_JsonReader__ReadAndMoveToContent(param_1,0);
    if ((uVar4 & 1) == 0) goto LAB_076ef9fc;
  }
LAB_076ef924:
  uVar5 = thunk_FUN_03f99350(param_1,DAT_09185f18);
  uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (3 < (int)uVar2) {
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) == 0) {
        if (uVar2 == 0xb) {
          lVar3 = Newtonsoft_Json_Linq_JValue__CreateNull(0);
        }
        else {
          if (uVar2 != 0xc) goto LAB_076efa88;
          lVar3 = Newtonsoft_Json_Linq_JValue__CreateUndefined(0);
        }
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        lVar3 = thunk_FUN_03f9944c(DAT_09187278);
        Newtonsoft_Json_Linq_JValue___ctor(lVar3,uVar6,0);
      }
    }
    else {
LAB_076efa88:
      if (uVar2 == 4) {
        lVar3 = Newtonsoft_Json_Linq_JProperty__Load(param_1,param_2);
        return lVar3;
      }
      if (uVar2 != 5) goto LAB_076efb18;
      plVar7 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (plVar7 == (long *)0x0) goto LAB_076ef9b8;
      uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      lVar3 = Newtonsoft_Json_Linq_JValue__CreateComment(uVar6,0);
    }
    if (lVar3 != 0) {
      Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar3,uVar5,param_2);
      return lVar3;
    }
LAB_076ef9b8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (uVar2 == 1) {
    lVar3 = Newtonsoft_Json_Linq_JObject__Load(param_1,param_2);
    return lVar3;
  }
  if (uVar2 == 2) {
    lVar3 = Newtonsoft_Json_Linq_JArray__Load(param_1,param_2,0);
    return lVar3;
  }
  if (uVar2 == 3) {
    lVar3 = Newtonsoft_Json_Linq_JConstructor__Load(param_1,param_2);
    return lVar3;
  }
LAB_076efb18:
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_1);
  local_24 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
  uVar6 = FUN_03f5c42c(uVar6,&local_24);
  uVar8 = thunk_FUN_03fc39d4(&DAT_09201950);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar5,uVar6,0);
LAB_076efa08:
  uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d13e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

