// rea decompile_all
// name: Newtonsoft.Json.Converters.DataTableConverter$$GetColumnDataType
// address: 0x770523c
// body: available
// range: 0x770523c-0x7705407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7705300 to 0x75c5164 System.Type$$GetTypeFromHandle (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x770537c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705404 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_DataTableConverter__GetColumnDataType(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint local_24;
  
  if ((DAT_0952295c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171438);
    DAT_0952295c = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_0770537c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  lVar4 = DAT_09535468;
  if (0x11 < uVar2) {
LAB_07705380:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_24 = uVar2;
    uVar5 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar5 = FUN_03f5c42c(uVar5,&local_24);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09211bf0);
    uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar7,uVar5,0);
    uVar7 = Newtonsoft_Json_JsonSerializationException__Create(param_1,uVar7,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c7788);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar5);
  }
  uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar1 & 0x30780) != 0) {
    uVar7 = *(undefined8 *)(*param_1 + 0x260);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 600);
LAB_077052b4:
                    /* WARNING: Could not recover jumptable at 0x077052c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar7);
    return;
  }
  if ((uVar1 & 0x5800) == 0) {
    if (uVar2 != 2) goto LAB_07705380;
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
    iVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    lVar4 = DAT_09171438;
    if (iVar3 != 1) {
      param_1 = (long *)Newtonsoft_Json_Converters_DataTableConverter__GetColumnDataType(param_1);
      if (param_1 == (long *)0x0) goto LAB_0770537c;
      uVar7 = *(undefined8 *)(*param_1 + 0x920);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x918);
      goto LAB_077052b4;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = lVar4 + 0x20;
  }
  System_Type__GetTypeFromHandle(lVar4,0);
  return;
}

