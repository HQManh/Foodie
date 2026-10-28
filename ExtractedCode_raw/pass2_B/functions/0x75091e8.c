// rea decompile_all
// name: System.Globalization.TimeSpanFormat$$FormatStandard
// address: 0x75091e8
// body: available
// range: 0x75091e8-0x75096c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75096bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75096c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_TimeSpanFormat__FormatStandard
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  uint local_64;
  
  if ((DAT_095216bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_0918bd68);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095216bc = 1;
  }
  local_64 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar4 = System_Text_StringBuilderCache__Acquire(0x10,0);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  iVar7 = (int)(param_1 / 864000000000);
  iVar1 = -iVar7;
  if (-1 < param_1) {
    iVar1 = iVar7;
  }
  lVar10 = -(param_1 % 864000000000);
  if (-1 < param_1) {
    lVar10 = param_1 % 864000000000;
  }
  uVar13 = (uint)(lVar10 % 10000000);
  local_64 = uVar13;
  if ((param_2 & 1) == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    local_80 = 0;
    System_Globalization_TimeSpanFormat_FormatLiterals__Init(&local_90,param_3,param_4,param_5 == 2)
    ;
  }
  else {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 < 0) {
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = (undefined8 *)(*(long *)(DAT_0918bd68 + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
    }
    uStack_88 = puVar8[1];
    local_90 = *puVar8;
    local_78 = puVar8[3];
    local_80 = puVar8[2];
    local_70 = puVar8[4];
  }
  if (uVar13 == 0) {
    uVar12 = 0;
  }
  else {
    lVar9 = System_Globalization_TimeSpanParse__Pow10(7 - (int)local_78);
    uVar12 = 0;
    if (lVar9 != 0) {
      uVar12 = (lVar10 % 10000000) / lVar9;
    }
    local_64 = (uint)uVar12;
  }
  uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_Start(&local_90);
  if (lVar4 == 0) {
LAB_075096bc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar7 = (int)(SUB168(SEXT816(lVar10) * SEXT816(0x1ca213d840baf7d5),8) >> 0x1a) -
          (SUB164(SEXT816(lVar10) * SEXT816(0x1ca213d840baf7d5),0xc) >> 0x1f);
  sVar2 = (short)iVar7;
  uVar13 = iVar7 + ((uint)(sVar2 * -0x7777) >> 0x10);
  System_Text_StringBuilder__Append(lVar4,uVar5,0);
  if ((param_5 == 2) || (iVar1 != 0)) {
    System_Text_StringBuilder__Append(lVar4,iVar1,0);
    uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_DayHourSep(&local_90);
    System_Text_StringBuilder__Append(lVar4,uVar5,0);
  }
  uVar3 = uStack_88._4_4_;
  if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Globalization_TimeSpanFormat__AppendNonNegativeInt32
            (lVar4,((int)(lVar10 / 36000000000) + (int)(lVar10 >> 0x3f)) -
                   (SUB164(SEXT816(lVar10) * SEXT816(0x3d157fab34c210b5),0xc) >> 0x1f),uVar3);
  uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_HourMinuteSep(&local_90);
  System_Text_StringBuilder__Append(lVar4,uVar5,0);
  System_Globalization_TimeSpanFormat__AppendNonNegativeInt32
            (lVar4,(int)(short)(sVar2 + ((short)((uint)(int)(short)uVar13 >> 5) +
                                        (short)((uVar13 & 0x8000) >> 0xf)) * -0x3c),
             local_80 & 0xffffffff);
  uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_MinuteSecondSep(&local_90);
  System_Text_StringBuilder__Append(lVar4,uVar5,0);
  System_Globalization_TimeSpanFormat__AppendNonNegativeInt32
            (lVar4,(int)(lVar10 / 10000000) % 0x3c,local_80._4_4_);
  if ((param_5 == 1) && ((param_2 & 1) == 0)) {
    uVar11 = (ulong)((int)local_78 - 1);
    local_64 = (uint)uVar12;
    if (0 < (int)local_78) {
      lVar10 = uVar11 * 8 + 0x20;
      do {
        local_64 = (uint)uVar12;
        uVar13 = (uint)uVar11;
        if ((int)local_64 % 10 != 0) {
          uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_SecondFractionSep
                            (&local_90);
          System_Text_StringBuilder__Append(lVar4,uVar5,0);
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
          if (lVar9 == 0) goto LAB_075096bc;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar5 = *(undefined8 *)(lVar9 + lVar10);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar5 = System_Int32__ToString(&local_64,uVar5,uVar6,0);
          System_Text_StringBuilder__Append(lVar4,uVar5,0);
          break;
        }
        lVar10 = lVar10 + -8;
        uVar11 = (ulong)(uVar13 - 1);
        uVar12 = (ulong)(uint)((int)local_64 / 10);
        local_64 = (int)local_64 / 10;
      } while (1 < (int)(uVar13 + 1));
    }
  }
  else if ((param_5 == 2) || ((uint)uVar12 != 0)) {
    uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_SecondFractionSep(&local_90);
    System_Text_StringBuilder__Append(lVar4,uVar5,0);
    uVar11 = local_78;
    if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Globalization_TimeSpanFormat__AppendNonNegativeInt32
              (lVar4,uVar12 & 0xffffffff,uVar11 & 0xffffffff);
  }
  uVar5 = System_Globalization_TimeSpanFormat_FormatLiterals__get_End(&local_90);
  System_Text_StringBuilder__Append(lVar4,uVar5,0);
  return lVar4;
}

