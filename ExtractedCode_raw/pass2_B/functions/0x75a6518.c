// rea decompile_all
// name: System.DateTimeParse$$ProcessHebrewTerminalState
// address: 0x75a6518
// body: available
// range: 0x75a6518-0x75a68cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a68c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
System_DateTimeParse__ProcessHebrewTerminalState
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if ((DAT_09521c50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_0920ec70);
    DAT_09521c50 = 1;
  }
  if (param_1 < 0x22) {
    if (param_1 < 0x1f) {
      if (param_1 - 0x17U < 2) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_DateTimeParse__GetDefaultYear(param_3,param_4);
        if (param_6 == 0) {
LAB_075a68c8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                          (param_6,param_3,param_5 + 0xc,1,0);
        if ((uVar2 & 1) == 0) {
LAB_075a6884:
          System_DateTimeResult__SetFailure(param_3,7,DAT_0920ec70,0);
          return 0;
        }
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095216cd == '\0') {
          FUN_03f5c2a4(&DAT_09184c68);
          DAT_095216cd = '\x01';
        }
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(char **)(DAT_09184c68 + 0xb8) != '\0') goto LAB_075a6878;
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_DateTimeParse__GetHebrewDayOfNM(param_3,param_5,param_6);
      }
      else {
        if (param_1 != 0x19) goto LAB_075a68a4;
        uVar1 = System_DateTimeRawInfo__GetNumber(param_5,1,0);
        *(undefined4 *)(param_5 + 0x10) = uVar1;
        if (param_6 == 0) goto LAB_075a68c8;
        uVar2 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                          (param_6,(undefined4 *)(param_5 + 0x10),param_5 + 0xc,1,0);
        if ((uVar2 & 1) == 0) goto LAB_075a6884;
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_DateTimeParse__GetDayOfMNN(param_3,param_5,param_6);
      }
    }
    else if (param_1 == 0x1f) {
      if (param_6 == 0) goto LAB_075a68c8;
      uVar2 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                        (param_6,param_5 + 0x10,param_5 + 0xc,1,0);
      if ((uVar2 & 1) == 0) goto LAB_075a6884;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeParse__GetDayOfYMN(param_3,param_5);
    }
    else {
      if (param_1 != 0x21) goto LAB_075a68a4;
      if (param_6 == 0) goto LAB_075a68c8;
      uVar2 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                        (param_6,param_5 + 0x10,param_5 + 0xc,1,0);
      if ((uVar2 & 1) == 0) goto LAB_075a6884;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeParse__GetDayOfYM(param_3,param_5);
    }
  }
  else if (param_1 < 0x24) {
    if (param_1 == 0x22) {
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeParse__GetTimeOfN(param_3,param_5);
    }
    else {
      if (param_1 != 0x23) {
LAB_075a68a4:
        System_DateTimeResult__SetBadDateTimeFailure(param_3,0);
        return 0;
      }
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeParse__GetTimeOfNN(param_3,param_5);
    }
  }
  else {
    if (param_1 != 0x24) {
      if (param_1 != 0x26) goto LAB_075a68a4;
      if (*(int *)(param_5 + 0x10) < 1000) {
        *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 5000;
      }
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTimeParse__GetDayOfNNY(param_3,param_5,param_6);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (param_6 == 0) goto LAB_075a68c8;
      uVar2 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                        (param_6,param_3,param_5 + 0xc,1,0);
      if ((uVar2 & 1) == 0) goto LAB_075a6884;
      goto LAB_075a6878;
    }
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTimeParse__GetTimeOfNNN(param_3,param_5);
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
LAB_075a6878:
  *(undefined4 *)(param_5 + 8) = 0;
  return 1;
}

