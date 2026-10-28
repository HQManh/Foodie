// rea decompile_all
// name: Newtonsoft.Json.Converters.DataTableConverter$$ReadJson
// address: 0x7704a2c
// body: available
// range: 0x7704a2c-0x7704d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7704cac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704d08 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704d10 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Converters_DataTableConverter__ReadJson
                 (undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_34;
  
  if ((DAT_0952295a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171438);
    FUN_03f5c2a4(&DAT_091832d8);
    DAT_0952295a = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_07704d00;
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  uVar2 = DAT_09171438;
  if (iVar1 == 0xb) {
    return (long *)0x0;
  }
  if (param_4 == (long *)0x0) {
LAB_07704ae0:
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(param_3,uVar2,0);
    if ((uVar3 & 1) == 0) {
      param_4 = (long *)System_Activator__CreateInstance(param_3,0);
      if (param_4 != (long *)0x0) {
        if ((*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_091832d8 + 0x130)) ||
           (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_091832d8 + 0x130) * 8 + -8)
            != DAT_091832d8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_4);
        }
      }
    }
    else {
      param_4 = (long *)thunk_FUN_03f9944c(DAT_091832d8);
      System_Data_DataTable___ctor(param_4,0);
    }
  }
  else if ((*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_091832d8 + 0x130)) ||
          (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_091832d8 + 0x130) * 8 + -8) !=
           DAT_091832d8)) goto LAB_07704ae0;
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 4) {
    plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (param_4 == (long *)0x0) {
LAB_07704d00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4);
    }
    System_Data_DataTable__set_TableName(param_4,plVar4,0);
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 0xb) {
      return param_4;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 2) {
    while( true ) {
      Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar1 == 0xe) break;
      Newtonsoft_Json_Converters_DataTableConverter__CreateRow(param_2,param_4,param_5);
    }
    return param_4;
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_2);
  local_34 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  uVar5 = thunk_FUN_03fc39d4(&DAT_09187478);
  uVar5 = FUN_03f5c42c(uVar5,&local_34);
  uVar6 = thunk_FUN_03fc39d4(&DAT_09211be8);
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar2,uVar5,0);
  uVar2 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar2,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c7790);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar5);
}

