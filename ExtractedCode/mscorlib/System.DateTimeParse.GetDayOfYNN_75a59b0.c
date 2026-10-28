// rea decompile_all
// name: System.DateTimeParse$$GetDayOfYNN
// address: 0x75a59b0
// body: available
// range: 0x75a59b0-0x75a5af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a5af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__GetDayOfYNN(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  int local_34;
  
  if ((DAT_09521c49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    DAT_09521c49 = 1;
  }
  local_34 = 0;
  if (-1 < *(char *)(param_1 + 0x24)) {
    uVar2 = System_DateTimeRawInfo__GetNumber(param_2,0,0);
    uVar3 = System_DateTimeRawInfo__GetNumber(param_2,1,0);
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
    uVar4 = System_DateTimeParse__GetYearMonthDayOrder(auVar7._0_8_,uVar5,&local_34);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    if (((uVar4 & 1) == 0) || (local_34 != 3)) {
      uVar6 = uVar2;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
    else {
      uVar6 = uVar3;
      uVar3 = uVar2;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
    uVar4 = System_DateTimeParse__SetDateYMD(param_1,uVar1,uVar6,uVar3);
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x80;
      return 1;
    }
  }
  System_DateTimeResult__SetBadDateTimeFailure(param_1,0);
  return 0;
}

