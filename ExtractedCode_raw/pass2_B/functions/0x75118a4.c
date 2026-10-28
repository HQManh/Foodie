// rea decompile_all
// name: System.TimeZoneInfo$$TZif_CreateTransitionTimeFromPosixRule
// address: 0x75118a4
// body: available
// range: 0x75118a4-0x7511af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7511aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7511af4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_CreateTransitionTimeFromPosixRule
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  ushort local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_095216e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b77f0);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216e8 = 1;
  }
  local_38 = 0;
  local_60 = 0;
  local_64 = 0;
  uVar3 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    sVar2 = System_String__get_Chars(param_2,0,0);
    if (sVar2 == 0x4d) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeZoneInfo__TZif_ParseMDateRule
                        (param_2,(long)&local_38 + 4,&local_38,(long)&local_60 + 4);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_091f7ee0);
        uVar4 = SR__Format(uVar4,param_2,0);
        thunk_FUN_03fc39d4(&DAT_09187130);
        uVar5 = thunk_FUN_03f9944c();
        System_InvalidTimeZoneException___ctor(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091db758);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_TimeZoneInfo__ParseTimeOfDay(param_3);
      uVar3 = local_38;
      uVar1 = local_60._4_4_;
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime
                (uVar4,local_38._4_4_,local_38 & 0xffffffff,1,local_60._4_4_);
      local_50 = (undefined1)(uVar3 >> 0x20);
      local_4f = (undefined1)uVar3;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      local_4e = 1;
      local_4c = uVar1;
      local_48 = 0;
      local_58 = uVar4;
    }
    else {
      sVar2 = System_String__get_Chars(param_2,0,0);
      if (sVar2 != 0x4a) goto LAB_0751190c;
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__TZif_ParseJulianDay(param_2,&local_60,&local_64);
      uVar4 = System_TimeZoneInfo__ParseTimeOfDay(param_3);
      uVar3 = local_60;
      uVar1 = local_64;
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime
                (uVar4,local_60 & 0xffffffff,1,local_64,0);
      local_50 = (undefined1)uVar3;
      local_4f = 1;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      local_4e = (ushort)(byte)uVar1;
      local_4c = 0;
      local_48 = 1;
      local_58 = uVar4;
    }
    FUN_05c40064(param_1,&local_58,DAT_091b77f0);
  }
  else {
LAB_0751190c:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

