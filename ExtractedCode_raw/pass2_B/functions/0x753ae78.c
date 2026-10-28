// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$ToDateTime
// address: 0x753ae78
// body: available
// range: 0x753ae78-0x753b0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753b0b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_UmAlQuraCalendar__ToDateTime
          (long *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_68;
  int local_64;
  undefined8 local_58;
  
  if ((DAT_095218cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218cb = 1;
  }
  if (param_4 - 0x1eU < 0xffffffe3) {
    iVar1 = (**(code **)(*param_1 + 0x218))
                      (param_1,param_2,param_3,param_9,*(undefined8 *)(*param_1 + 0x220));
    if ((param_4 < 1) || (iVar1 < param_4)) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_CurrentCulture(0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_09200238);
      uVar3 = System_Environment__GetResourceString(uVar3,0);
      local_64 = iVar1;
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_64);
      local_68 = param_3;
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
      uVar2 = System_String__Format(uVar2,uVar3,uVar4,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0921a2a8);
      goto LAB_0753b094;
    }
  }
  else {
    if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Globalization_UmAlQuraCalendar__CheckYearMonthRange(param_2,param_3,param_9);
  }
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = System_Globalization_UmAlQuraCalendar__GetAbsoluteDateUmAlQura(param_2,param_3,param_4);
  if (-1 < lVar6) {
    lVar7 = System_Globalization_Calendar__TimeToTicks(param_5,param_6,param_7,param_8);
    local_58 = 0;
    System_DateTime___ctor(&local_58,lVar7 + lVar6 * 864000000000,0);
    return local_58;
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_09213858);
  uVar2 = System_Environment__GetResourceString(uVar2,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  uVar3 = 0;
LAB_0753b094:
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091dd9f8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar2);
}

