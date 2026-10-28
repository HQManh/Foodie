// rea decompile_all
// name: System.DateTimeFormat$$GetRealFormat
// address: 0x75a0064
// body: available
// range: 0x75a0064-0x75a038b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a011c to 0x7502d88 System.Globalization.DateTimeFormatInfo$$get_SortableDateTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a0150 to 0x7502c0c System.Globalization.DateTimeFormatInfo$$get_RFC1123Pattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a01bc to 0x7502b64 System.Globalization.DateTimeFormatInfo$$get_MonthDayPattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a01e8 to 0x75029a0 System.Globalization.DateTimeFormatInfo$$get_FullDateTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a0230 to 0x7502c4c System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a024c to 0x7503100 System.Globalization.DateTimeFormatInfo$$get_YearMonthPattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a0268 to 0x7502a28 System.Globalization.DateTimeFormatInfo$$get_LongDatePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a0284 to 0x7502e50 System.Globalization.DateTimeFormatInfo$$get_GeneralLongTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a02a0 to 0x7502a74 System.Globalization.DateTimeFormatInfo$$get_LongTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a02bc to 0x75030c0 System.Globalization.DateTimeFormatInfo$$get_UniversalSortableDateTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a02d8 to 0x7502dc8 System.Globalization.DateTimeFormatInfo$$get_GeneralShortTimePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal 
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeFormat__GetRealFormat(ushort *param_1,int param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09521c23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09225d58);
    DAT_09521c23 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *param_1;
  if (uVar1 < 0x56) {
    if (uVar1 < 0x4f) {
      if (0x46 < uVar1) {
        if (uVar1 == 0x47) {
          if (param_3 != 0) {
            uVar2 = System_Globalization_DateTimeFormatInfo__get_GeneralLongTimePattern(param_3,0);
            return uVar2;
          }
          goto LAB_075a0344;
        }
        if (uVar1 != 0x4d) goto LAB_075a0348;
LAB_075a01a4:
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_MonthDayPattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 == 0x44) {
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_LongDatePattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 != 0x46) goto LAB_075a0348;
    }
    else {
      if (uVar1 < 0x54) {
        if (uVar1 == 0x4f) {
          return DAT_09225d58;
        }
        if (uVar1 != 0x52) {
LAB_075a0348:
          thunk_FUN_03fc39d4(&DAT_09184908);
          uVar2 = thunk_FUN_03f9944c();
          uVar3 = thunk_FUN_03fc39d4(&DAT_09204ca0);
          System_FormatException___ctor(uVar2,uVar3);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091c79f0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,uVar3);
        }
LAB_075a0138:
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_RFC1123Pattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 == 0x54) {
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_LongTimePattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 != 0x55) goto LAB_075a0348;
    }
    if (param_3 != 0) {
      uVar2 = System_Globalization_DateTimeFormatInfo__get_FullDateTimePattern(param_3,0);
      return uVar2;
    }
  }
  else {
    if (uVar1 < 0x6f) {
      if (0x65 < uVar1) {
        if (uVar1 == 0x66) {
          if (param_3 != 0) {
            uVar2 = System_Globalization_DateTimeFormatInfo__get_LongDatePattern(param_3,0);
            uVar3 = System_Globalization_DateTimeFormatInfo__get_ShortTimePattern(param_3,0);
            uVar2 = System_String__Concat(uVar2,DAT_091f5a98,uVar3,0);
            return uVar2;
          }
          goto LAB_075a0344;
        }
        if (uVar1 == 0x67) {
          if (param_3 != 0) {
            uVar2 = System_Globalization_DateTimeFormatInfo__get_GeneralShortTimePattern(param_3,0);
            return uVar2;
          }
          goto LAB_075a0344;
        }
        if (uVar1 != 0x6d) goto LAB_075a0348;
        goto LAB_075a01a4;
      }
      if (uVar1 != 0x59) {
        if (uVar1 != 100) goto LAB_075a0348;
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
    }
    else {
      if (uVar1 < 0x74) {
        if (uVar1 == 0x6f) {
          return DAT_09225d58;
        }
        if (uVar1 != 0x72) {
          if (uVar1 != 0x73) goto LAB_075a0348;
          if (param_3 != 0) {
            uVar2 = System_Globalization_DateTimeFormatInfo__get_SortableDateTimePattern(param_3,0);
            return uVar2;
          }
          goto LAB_075a0344;
        }
        goto LAB_075a0138;
      }
      if (uVar1 == 0x74) {
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_ShortTimePattern(param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 == 0x75) {
        if (param_3 != 0) {
          uVar2 = System_Globalization_DateTimeFormatInfo__get_UniversalSortableDateTimePattern
                            (param_3,0);
          return uVar2;
        }
        goto LAB_075a0344;
      }
      if (uVar1 != 0x79) goto LAB_075a0348;
    }
    if (param_3 != 0) {
      uVar2 = System_Globalization_DateTimeFormatInfo__get_YearMonthPattern(param_3,0);
      return uVar2;
    }
  }
LAB_075a0344:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

