// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$PopulateSpecialTokenHashTable
// address: 0x75059b0
// body: available
// range: 0x75059b0-0x7506277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7506250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7506274 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo__PopulateSpecialTokenHashTable
               (long param_1,undefined8 param_2,undefined1 *param_3)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if ((DAT_095216a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_09183578);
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09227008);
    FUN_03f5c2a4(&DAT_0921dd60);
    FUN_03f5c2a4(&DAT_09227098);
    FUN_03f5c2a4(&DAT_09227068);
    FUN_03f5c2a4(&DAT_092270b0);
    FUN_03f5c2a4(&DAT_09227040);
    FUN_03f5c2a4(&DAT_09227088);
    FUN_03f5c2a4(&DAT_092270a0);
    FUN_03f5c2a4(&DAT_09223100);
    FUN_03f5c2a4(&DAT_0921e0c0);
    FUN_03f5c2a4(&DAT_09226ff8);
    FUN_03f5c2a4(&DAT_0921b1b8);
    FUN_03f5c2a4(&DAT_09227030);
    FUN_03f5c2a4(&DAT_09227080);
    FUN_03f5c2a4(&DAT_091f7f68);
    FUN_03f5c2a4(&DAT_09227038);
    FUN_03f5c2a4(&DAT_09226fc0);
    FUN_03f5c2a4(&DAT_091f83f0);
    FUN_03f5c2a4(&DAT_09225e88);
    FUN_03f5c2a4(&DAT_09226fb8);
    FUN_03f5c2a4(&DAT_09226ff0);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095216a4 = 1;
  }
  lVar3 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
  if (lVar3 != 0) {
    uVar4 = System_String__Equals(lVar3,DAT_09223100,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = System_Globalization_DateTimeFormatInfo__get_AMDesignator(param_1);
      uVar5 = System_String__Concat(DAT_091f8f68,uVar5,0);
      System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,0x403,0);
      uVar5 = System_Globalization_DateTimeFormatInfo__get_PMDesignator(param_1);
      uVar5 = System_String__Concat(DAT_091f8f68,uVar5,0);
      System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,0x504,1);
    }
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09226ff0,0x800,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227068,0x800,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227038,0x900,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227098,0x900,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09226ff8,0xa00,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_092270a0,0xa00,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227030,0xb00,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227008,0xb00,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09226fc0,0xc00,0);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227040,0xd00,0);
    if (*(char *)(*(long *)(DAT_09181358 + 0xb8) + 4) == '\0') {
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 == (long *)0x0) goto LAB_07506250;
      iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar2 == 3) {
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09226fb8,2,1);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_091f7f68,0xf,0);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_091f83f0,0xf,0);
      }
    }
    lVar3 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
    if (lVar3 != 0) {
      uVar4 = System_String__Equals(lVar3,DAT_0921e0c0,0);
      if ((uVar4 & 1) != 0) {
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227088,0xb00,0);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_09227080,0xc00,0);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,DAT_092270b0,0xd00,0);
      }
      lVar3 = thunk_FUN_03f9944c(DAT_09183578);
      System_Globalization_DateTimeFormatInfoScanner___ctor();
      if (lVar3 != 0) {
        lVar3 = System_Globalization_DateTimeFormatInfoScanner__GetDateWordsOfDTFI(lVar3,param_1);
        if (*(int *)(param_1 + 0x144) == -1) {
          System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
        }
        if ((lVar3 != 0) && (uVar9 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar9)) {
          lVar11 = 0;
          lVar8 = lVar3 + 0x20;
          do {
            uVar10 = (uint)lVar11;
            if (uVar9 <= uVar10) goto LAB_07506274;
            lVar7 = *(long *)(lVar8 + lVar11 * 8);
            if (lVar7 == 0) goto LAB_07506250;
            sVar1 = System_String__get_Chars(lVar7,0,0);
            uVar9 = *(uint *)(lVar3 + 0x18);
            if (sVar1 == -0x1fff) {
              if (uVar9 <= uVar10) goto LAB_07506274;
              lVar7 = *(long *)(lVar8 + lVar11 * 8);
              if (lVar7 == 0) goto LAB_07506250;
              uVar5 = System_String__Substring(lVar7,1,0);
              System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,0xf,0);
              lVar7 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_1);
              if ((lVar7 == 0) || (lVar7 = System_String__Trim(lVar7,0,0), lVar7 == 0))
              goto LAB_07506250;
              uVar4 = System_String__Equals(lVar7,uVar5,0);
              if ((uVar4 & 1) != 0) {
                *param_3 = 1;
              }
            }
            else if (sVar1 == -0x2000) {
              if (uVar9 <= uVar10) goto LAB_07506274;
              lVar7 = *(long *)(lVar8 + lVar11 * 8);
              if (lVar7 == 0) goto LAB_07506250;
              uVar5 = System_String__Substring(lVar7,1,0);
              System_Globalization_DateTimeFormatInfo__AddMonthNames(param_1,param_2,uVar5);
            }
            else {
              if (uVar9 <= uVar10) goto LAB_07506274;
              System_Globalization_DateTimeFormatInfo__InsertHash
                        (param_1,param_2,*(undefined8 *)(lVar8 + lVar11 * 8),10,0);
              lVar7 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
              if (lVar7 == 0) goto LAB_07506250;
              uVar4 = System_String__Equals(lVar7,DAT_0921b1b8,0);
              if ((uVar4 & 1) != 0) {
                if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_07506274;
                uVar5 = System_String__Concat(DAT_091f8f68,*(undefined8 *)(lVar8 + lVar11 * 8),0);
                System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,10,0);
              }
            }
            uVar9 = *(uint *)(lVar3 + 0x18);
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < (int)uVar9);
        }
        lVar3 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
        if (lVar3 != 0) {
          uVar4 = System_String__Equals(lVar3,DAT_0921dd60,0);
          if ((uVar4 & 1) == 0) {
            lVar3 = System_Globalization_DateTimeFormatInfo__get_CultureName(param_1);
            if (lVar3 != 0) {
              uVar4 = System_String__Equals(lVar3,DAT_09225e88,0);
              if ((uVar4 & 1) == 0) {
                return;
              }
              if (*(int *)(DAT_09183570 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = System_Globalization_DateTimeFormatInfo__GetTaiwanCalendarDTFI();
              if ((lVar3 != 0) && (plVar6 = *(long **)(lVar3 + 0x78), plVar6 != (long *)0x0)) {
                iVar2 = 1;
                do {
                  lVar8 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
                  if (lVar8 == 0) break;
                  if (*(int *)(lVar8 + 0x18) < iVar2) {
                    return;
                  }
                  lVar8 = System_Globalization_DateTimeFormatInfo__GetEraName(lVar3,iVar2);
                  if (lVar8 == 0) break;
                  if (0 < *(int *)(lVar8 + 0x10)) {
                    uVar5 = System_Globalization_DateTimeFormatInfo__GetEraName(lVar3,iVar2);
                    System_Globalization_DateTimeFormatInfo__InsertHash
                              (param_1,param_2,uVar5,0xe,iVar2);
                  }
                  plVar6 = *(long **)(lVar3 + 0x78);
                  iVar2 = iVar2 + 1;
                } while (plVar6 != (long *)0x0);
              }
            }
          }
          else {
            iVar2 = 0;
            do {
              uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedDayName(param_1,iVar2);
              uVar5 = System_String__Concat(DAT_091f7f68,uVar5,DAT_091f83f0,0);
              System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,7,iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar2 != 7);
            uVar5 = *(undefined8 *)(param_1 + 0x78);
            if (*(int *)(DAT_09183570 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Globalization_DateTimeFormatInfo__IsJapaneseCalendar(uVar5);
            if ((uVar4 & 1) != 0) {
              return;
            }
            if (*(int *)(DAT_09183570 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = System_Globalization_DateTimeFormatInfo__GetJapaneseCalendarDTFI();
            if ((lVar3 != 0) && (plVar6 = *(long **)(lVar3 + 0x78), plVar6 != (long *)0x0)) {
              uVar9 = 0;
              do {
                lVar8 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
                if (lVar8 == 0) break;
                iVar2 = uVar9 + 1;
                if (*(int *)(lVar8 + 0x18) < iVar2) {
                  return;
                }
                uVar5 = System_Globalization_DateTimeFormatInfo__GetEraName(lVar3,iVar2);
                System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,0xd,iVar2)
                ;
                uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedEraName(lVar3,iVar2);
                System_Globalization_DateTimeFormatInfo__InsertHash(param_1,param_2,uVar5,0xd,iVar2)
                ;
                lVar8 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedEnglishEraNames
                                  (lVar3);
                if (lVar8 == 0) break;
                if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_07506274:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                System_Globalization_DateTimeFormatInfo__InsertHash
                          (param_1,param_2,*(undefined8 *)(lVar8 + (long)(int)uVar9 * 8 + 0x20),0xd,
                           iVar2);
                plVar6 = *(long **)(lVar3 + 0x78);
                uVar9 = uVar9 + 1;
              } while (plVar6 != (long *)0x0);
            }
          }
        }
      }
    }
  }
LAB_07506250:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

