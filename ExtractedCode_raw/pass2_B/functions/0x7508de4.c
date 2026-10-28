// rea decompile_all
// name: System.Globalization.TimeSpanFormat$$FormatToBuilder
// address: 0x7508de4
// body: available
// range: 0x7508de4-0x75090c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7508fd4 to 0x75096c4 System.Globalization.TimeSpanFormat$$FormatCustomized (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7509078 to 0x75091e8 System.Globalization.TimeSpanFormat$$FormatStandard (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75090c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75090c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_TimeSpanFormat__FormatToBuilder
               (long param_1,ushort *param_2,ulong param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  if ((DAT_095216bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918bd68);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09218730);
    DAT_095216bb = 1;
  }
  lVar2 = DAT_09218730;
  if ((int)param_3 == 0) {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (lVar2 == 0) {
      param_2 = (ushort *)0x0;
      uVar5 = 0;
      param_3 = 0;
      goto LAB_07508f78;
    }
    param_2 = (ushort *)System_String__GetRawStringData(lVar2,0);
    param_3 = (ulong)*(uint *)(lVar2 + 0x10);
    uVar5 = 0;
  }
  else {
    uVar5 = param_3 >> 0x20;
  }
  if ((int)param_3 != 1) {
LAB_07508f78:
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_DateTimeFormatInfo__GetInstance(param_4);
    if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd68);
    }
    System_Globalization_TimeSpanFormat__FormatCustomized
              (param_1,param_2,param_3 & 0xffffffff | uVar5 << 0x20,uVar3,0);
    return;
  }
  uVar1 = *param_2;
  if (uVar1 < 0x55) {
    if (uVar1 == 0x47) {
LAB_07508f14:
      if (*(int *)(DAT_09183570 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Globalization_DateTimeFormatInfo__GetInstance(param_4);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
        if (param_1 < 0) goto LAB_07508fe4;
LAB_07508f48:
        if (lVar2 == 0) {
LAB_075090c4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = System_Globalization_DateTimeFormatInfo__get_FullTimeSpanPositivePattern(lVar2);
      }
      else {
        if (-1 < param_1) goto LAB_07508f48;
LAB_07508fe4:
        if (lVar2 == 0) goto LAB_075090c4;
        uVar5 = System_Globalization_DateTimeFormatInfo__get_FullTimeSpanNegativePattern(lVar2);
      }
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
        if (uVar5 == 0) goto LAB_07509034;
LAB_07509004:
        param_2 = (ushort *)System_String__GetRawStringData(uVar5,0);
        uVar5 = (ulong)*(uint *)(uVar5 + 0x10);
      }
      else {
        if (uVar5 != 0) goto LAB_07509004;
LAB_07509034:
        param_2 = (ushort *)0x0;
      }
      uVar6 = 1;
      if (uVar1 != 0x67) {
        uVar6 = 2;
      }
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = 0;
      goto LAB_07509068;
    }
    if (uVar1 != 0x54) {
LAB_0750907c:
      thunk_FUN_03fc39d4(&DAT_09184908);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09204ca0);
      System_FormatException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091db6f0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
  }
  else if (uVar1 != 0x74) {
    if (uVar1 == 0x67) goto LAB_07508f14;
    if (uVar1 != 99) goto LAB_0750907c;
  }
  uVar5 = uVar5 << 0x20 | 1;
  if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = 1;
  uVar6 = 1;
LAB_07509068:
  System_Globalization_TimeSpanFormat__FormatStandard(param_1,uVar3,param_2,uVar5,uVar6);
  return;
}

