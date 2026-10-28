// rea decompile_all
// name: System.Globalization.TimeSpanParse.TimeSpanRawInfo$$FullMatch
// address: 0x752af7c
// body: available
// range: 0x752af7c-0x752b2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752b2d0 to 0x75469d4 FUN_075469d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullMatch(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  if (*(int *)(param_1 + 8) != 6) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) != 5) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  lVar2 = System_Globalization_TimeSpanFormat_FormatLiterals__get_Start(param_2,0);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (lVar2 == 0) {
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    uVar3 = System_String__GetRawStringData(lVar2,0);
    iVar7 = *(int *)(lVar2 + 0x10);
  }
  if (DAT_095218ea == '\0') {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_095218ea = '\x01';
  }
  iVar6 = (int)uVar1;
  if ((iVar6 == iVar7) &&
     ((iVar6 == 0 || (uVar4 = FUN_074367c0(uVar5,uVar1,uVar3,iVar7,DAT_091d2f78), (uVar4 & 1) != 0))
     )) {
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    lVar2 = System_Globalization_TimeSpanFormat_FormatLiterals__get_DayHourSep(param_2,0);
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (lVar2 == 0) {
      uVar3 = 0;
      iVar7 = 0;
    }
    else {
      uVar3 = System_String__GetRawStringData(lVar2,0);
      iVar7 = *(int *)(lVar2 + 0x10);
    }
    if (DAT_095218ea == '\0') {
      FUN_03f5c2a4(&DAT_091d2f78);
      FUN_03f5c2a4(&DAT_091b9810);
      DAT_095218ea = '\x01';
    }
    iVar6 = (int)uVar1;
    if ((iVar6 == iVar7) &&
       ((iVar6 == 0 ||
        (uVar4 = FUN_074367c0(uVar5,uVar1,uVar3,iVar7,DAT_091d2f78), (uVar4 & 1) != 0)))) {
      uVar5 = *(undefined8 *)(param_1 + 0x138);
      uVar1 = *(undefined8 *)(param_1 + 0x140);
      lVar2 = System_Globalization_TimeSpanFormat_FormatLiterals__get_HourMinuteSep(param_2,0);
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
      }
      if (lVar2 == 0) {
        uVar3 = 0;
        iVar7 = 0;
      }
      else {
        uVar3 = System_String__GetRawStringData(lVar2,0);
        iVar7 = *(int *)(lVar2 + 0x10);
      }
      if (DAT_095218ea == '\0') {
        FUN_03f5c2a4(&DAT_091d2f78);
        FUN_03f5c2a4(&DAT_091b9810);
        DAT_095218ea = '\x01';
      }
      iVar6 = (int)uVar1;
      if ((iVar6 == iVar7) &&
         ((iVar6 == 0 ||
          (uVar4 = FUN_074367c0(uVar5,uVar1,uVar3,iVar7,DAT_091d2f78), (uVar4 & 1) != 0)))) {
        uVar5 = *(undefined8 *)(param_1 + 0x148);
        uVar1 = *(undefined8 *)(param_1 + 0x150);
        lVar2 = System_Globalization_TimeSpanFormat_FormatLiterals__get_MinuteSecondSep(param_2,0);
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar2 == 0) {
          uVar3 = 0;
          iVar7 = 0;
        }
        else {
          uVar3 = System_String__GetRawStringData(lVar2,0);
          iVar7 = *(int *)(lVar2 + 0x10);
        }
        if (DAT_095218ea == '\0') {
          FUN_03f5c2a4(&DAT_091d2f78);
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_095218ea = '\x01';
        }
        iVar6 = (int)uVar1;
        if ((iVar6 == iVar7) &&
           ((iVar6 == 0 ||
            (uVar4 = FUN_074367c0(uVar5,uVar1,uVar3,iVar7,DAT_091d2f78), (uVar4 & 1) != 0)))) {
          uVar5 = *(undefined8 *)(param_1 + 0x158);
          uVar1 = *(undefined8 *)(param_1 + 0x160);
          uVar3 = System_Globalization_TimeSpanFormat_FormatLiterals__get_SecondFractionSep
                            (param_2,0);
          auVar8 = FUN_07546978(uVar3,0);
          uVar4 = FUN_075469d4(uVar5,uVar1,auVar8._0_8_,auVar8._8_8_,0);
          if ((uVar4 & 1) != 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x168);
            uVar1 = *(undefined8 *)(param_1 + 0x170);
            uVar3 = System_Globalization_TimeSpanFormat_FormatLiterals__get_End(param_2,0);
            auVar8 = FUN_07546978(uVar3,0);
            uVar5 = FUN_075469d4(uVar5,uVar1,auVar8._0_8_,auVar8._8_8_,0);
            return uVar5;
          }
        }
      }
    }
  }
  return 0;
}

