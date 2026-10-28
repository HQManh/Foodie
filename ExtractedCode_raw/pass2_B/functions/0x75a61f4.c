// rea decompile_all
// name: System.DateTimeParse$$GetDateOfNNDS
// address: 0x75a61f4
// body: available
// range: 0x75a61f4-0x75a641f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a641c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__GetDateOfNNDS(undefined4 *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_38;
  
  if ((DAT_09521c4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091ff468);
    DAT_09521c4f = 1;
  }
  local_38 = 0;
  uVar1 = param_1[9] & 6;
  if ((param_1[9] & 1) == 0) {
    if (uVar1 != 2) goto LAB_075a63f8;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_3,0);
    uVar5 = auVar7._8_8_;
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835a8);
      uVar5 = extraout_x1;
    }
    uVar4 = System_DateTimeParse__GetYearMonthDayOrder(auVar7._0_8_,uVar5,(long)&local_38 + 4);
    if ((uVar4 & 1) == 0) {
      uVar5 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_3,0);
      System_DateTimeResult__SetFailure(param_1,3,DAT_091ff468,uVar5,0);
      return 0;
    }
    if (local_38._4_4_ == 0) {
      uVar2 = System_DateTimeRawInfo__GetNumber(param_2,0,0);
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835a8);
      }
      uVar4 = System_DateTimeParse__TryAdjustYear(param_1,uVar2,&local_38);
      if ((uVar4 & 1) == 0) goto LAB_075a63f8;
      uVar2 = param_1[1];
      uVar6 = (undefined4)local_38;
      goto LAB_075a6338;
    }
    uVar2 = System_DateTimeRawInfo__GetNumber(param_2,1,0);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835a8);
    }
    uVar4 = System_DateTimeParse__TryAdjustYear(param_1,uVar2,&local_38);
    if ((uVar4 & 1) == 0) goto LAB_075a63f8;
    uVar2 = param_1[1];
    uVar5 = 0;
    uVar6 = (undefined4)local_38;
  }
  else {
    if (uVar1 != 0) goto LAB_075a63f8;
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_DateTimeParse__TryAdjustYear(param_1,uVar2,param_1);
    if ((uVar4 & 1) == 0) goto LAB_075a63f8;
    uVar6 = *param_1;
    uVar2 = System_DateTimeRawInfo__GetNumber(param_2,0,0);
LAB_075a6338:
    uVar5 = 1;
  }
  uVar3 = System_DateTimeRawInfo__GetNumber(param_2,uVar5,0);
  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835a8);
  }
  uVar4 = System_DateTimeParse__SetDateYMD(param_1,uVar6,uVar2,uVar3);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
LAB_075a63f8:
  System_DateTimeResult__SetBadDateTimeFailure(param_1,0);
  return 0;
}

