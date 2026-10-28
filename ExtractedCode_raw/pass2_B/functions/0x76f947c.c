// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.PathFilter$$GetTokenIndex
// address: 0x76f947c
// body: available
// range: 0x76f947c-0x76f9733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f9570 to 0x76d5450 Newtonsoft.Json.Linq.JArray$$get_Item (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f9730 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_PathFilter__GetTokenIndex(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int local_24;
  
  if ((DAT_09522931 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187208);
    DAT_09522931 = 1;
  }
  local_24 = param_3;
  if (param_1 == (long *)0x0) {
LAB_076f9524:
    if ((param_2 == 0) || (*(char *)(param_2 + 0x20) == '\0')) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
    FUN_039b1d98(param_1);
    plVar5 = (long *)System_Object__GetType(param_1,0);
    FUN_039b1d98();
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uVar7 = thunk_FUN_03fc39d4(&DAT_09204a38);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar3,uVar4,uVar6,0);
  }
  else {
    lVar8 = *param_1;
    if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_09187200 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09187200 + 0x130) * 8 + -8) !=
        DAT_09187200)) {
      if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_09187208 + 0x130)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09187208 + 0x130) * 8 + -8) !=
          DAT_09187208)) goto LAB_076f9524;
      iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1,0);
      if (param_3 < iVar1) {
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
        uVar3 = (**(code **)(*param_1 + 0x248))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x250));
        return uVar3;
      }
      if (param_2 == 0) {
        return 0;
      }
      if (*(char *)(param_2 + 0x20) == '\0') {
        return 0;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      puVar2 = &DAT_09204a48;
    }
    else {
      iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1,0);
      if (param_3 < iVar1) {
        uVar3 = Newtonsoft_Json_Linq_JArray__get_Item(param_1,param_3,0);
        return uVar3;
      }
      if (param_2 == 0) {
        return 0;
      }
      if (*(char *)(param_2 + 0x20) == '\0') {
        return 0;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      puVar2 = &DAT_09204a40;
    }
    uVar6 = thunk_FUN_03fc39d4(puVar2);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar4,0);
  }
  thunk_FUN_03fc39d4(&DAT_09187348);
  uVar4 = thunk_FUN_03f9944c();
  Newtonsoft_Json_JsonException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d58c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

