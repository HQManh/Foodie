// rea decompile_all
// name: System.Globalization.HijriCalendar$$ToDateTime
// address: 0x753466c
// body: available
// range: 0x753466c-0x7534837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7534834 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_HijriCalendar__ToDateTime
          (long *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  int local_54;
  undefined8 local_48;
  
  iVar1 = (**(code **)(*param_1 + 0x218))();
  if ((param_4 < 1) || (iVar1 < param_4)) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09200238);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    local_54 = iVar1;
    uVar7 = FUN_03f5c42c(DAT_09535420,&local_54);
    local_58 = param_3;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_58);
    uVar6 = System_String__Format(uVar5,uVar6,uVar7,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921a2a8);
  }
  else {
    lVar2 = System_Globalization_HijriCalendar__GetAbsoluteDateHijri
                      (param_1,param_2,param_3,param_4);
    if (-1 < lVar2) {
      lVar3 = System_Globalization_Calendar__TimeToTicks(param_5,param_6,param_7,param_8);
      local_48 = 0;
      System_DateTime___ctor(&local_48,lVar3 + lVar2 * 864000000000,0);
      return local_48;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09213858);
    uVar6 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = 0;
  }
  System_ArgumentOutOfRangeException___ctor(uVar7,uVar5,uVar6,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ce8c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
}

