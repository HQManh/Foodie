// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetAllDateTimePatterns
// address: 0x75038d4
// body: available
// range: 0x75038d4-0x7503ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7503b0c to 0x7503cd0 System.Globalization.DateTimeFormatInfo$$get_AllShortDatePatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503b20 to 0x7503ea0 System.Globalization.DateTimeFormatInfo$$get_AllYearMonthPatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503b34 to 0x7503d44 System.Globalization.DateTimeFormatInfo$$get_AllLongDatePatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503b60 to 0x7503e2c System.Globalization.DateTimeFormatInfo$$get_AllLongTimePatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503be8 to 0x7503db8 System.Globalization.DateTimeFormatInfo$$get_AllShortTimePatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503c40 to 0x750379c System.Globalization.DateTimeFormatInfo$$GetCombinedPatterns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7503c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7503c48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7503ccc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__GetAllDateTimePatterns
               (undefined8 param_1,ushort param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ushort local_24 [2];
  
  if ((DAT_09521695 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09225d58);
    FUN_03f5c2a4(&DAT_0921a328);
    FUN_03f5c2a4(&DAT_09225d40);
    DAT_09521695 = 1;
  }
  if (0x55 < param_2) {
    if (param_2 < 0x6f) {
      if (param_2 < 0x66) {
        if (param_2 == 0x59) {
LAB_07503b10:
          lVar1 = System_Globalization_DateTimeFormatInfo__get_AllYearMonthPatterns(param_1);
          return lVar1;
        }
        if (param_2 == 100) {
          lVar1 = System_Globalization_DateTimeFormatInfo__get_AllShortDatePatterns(param_1);
          return lVar1;
        }
LAB_07503c4c:
        local_24[0] = param_2;
        uVar2 = FUN_03f5c42c(DAT_09535460,local_24);
        uVar3 = thunk_FUN_03fc39d4(&DAT_09202d90);
        uVar2 = SR__Format(uVar3,uVar2,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0921ba70);
        System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c7a18);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar2);
      }
      if (param_2 == 0x66) {
        uVar2 = System_Globalization_DateTimeFormatInfo__get_AllLongDatePatterns(param_1);
      }
      else {
        if (param_2 != 0x67) {
          if (param_2 != 0x6d) goto LAB_07503c4c;
          goto LAB_07503a5c;
        }
        uVar2 = System_Globalization_DateTimeFormatInfo__get_AllShortDatePatterns(param_1);
      }
      uVar3 = System_Globalization_DateTimeFormatInfo__get_AllShortTimePatterns(param_1);
      goto LAB_07503c00;
    }
    if (0x73 < param_2) {
      if (param_2 == 0x74) {
        lVar1 = System_Globalization_DateTimeFormatInfo__get_AllShortTimePatterns(param_1);
        return lVar1;
      }
      if (param_2 != 0x75) {
        if (param_2 == 0x79) goto LAB_07503b10;
        goto LAB_07503c4c;
      }
      lVar1 = FUN_03f5c394(DAT_091805f8,1);
      if ((DAT_0952168f & 1) == 0) {
        FUN_03f5c2a4(&DAT_09225d38);
        DAT_0952168f = 1;
      }
      if (lVar1 != 0) {
        puVar5 = &DAT_09225d38;
LAB_07503ba8:
        FUN_039af17c(lVar1,0,*puVar5);
        return lVar1;
      }
      goto LAB_07503c44;
    }
    if (param_2 == 0x6f) goto LAB_07503aac;
    if (param_2 != 0x72) {
      if (param_2 != 0x73) goto LAB_07503c4c;
      lVar1 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar1 != 0) {
        puVar5 = &DAT_09225d40;
        goto LAB_07503ba8;
      }
      goto LAB_07503c44;
    }
LAB_075039dc:
    lVar1 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar1 == 0) {
LAB_07503c44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_07503c48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    puVar5 = &DAT_0921a328;
LAB_07503ad8:
    uVar2 = *puVar5;
LAB_07503adc:
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    return lVar1;
  }
  if (param_2 < 0x4f) {
    if (param_2 < 0x47) {
      if (param_2 == 0x44) {
        lVar1 = System_Globalization_DateTimeFormatInfo__get_AllLongDatePatterns(param_1);
        return lVar1;
      }
      if (param_2 != 0x46) goto LAB_07503c4c;
      goto LAB_07503aa0;
    }
    if (param_2 != 0x47) {
      if (param_2 != 0x4d) goto LAB_07503c4c;
LAB_07503a5c:
      lVar1 = FUN_03f5c394(DAT_091805f8,1);
      uVar2 = System_Globalization_DateTimeFormatInfo__get_MonthDayPattern(param_1);
      if (lVar1 == 0) goto LAB_07503c44;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_07503c48;
      goto LAB_07503adc;
    }
    uVar2 = System_Globalization_DateTimeFormatInfo__get_AllShortDatePatterns(param_1);
  }
  else {
    if (param_2 < 0x54) {
      if (param_2 != 0x4f) {
        if (param_2 != 0x52) goto LAB_07503c4c;
        goto LAB_075039dc;
      }
LAB_07503aac:
      lVar1 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar1 == 0) goto LAB_07503c44;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_07503c48;
      puVar5 = &DAT_09225d58;
      goto LAB_07503ad8;
    }
    if (param_2 == 0x54) {
      lVar1 = System_Globalization_DateTimeFormatInfo__get_AllLongTimePatterns(param_1);
      return lVar1;
    }
    if (param_2 != 0x55) goto LAB_07503c4c;
LAB_07503aa0:
    uVar2 = System_Globalization_DateTimeFormatInfo__get_AllLongDatePatterns(param_1);
  }
  uVar3 = System_Globalization_DateTimeFormatInfo__get_AllLongTimePatterns(param_1);
LAB_07503c00:
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183570);
  }
  lVar1 = System_Globalization_DateTimeFormatInfo__GetCombinedPatterns(uVar2,uVar3,DAT_091f5a98);
  return lVar1;
}

