// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$CreateTokenHashTable
// address: 0x7504e20
// body: available
// range: 0x7504e20-0x7505697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75055c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7505694 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__CreateTokenHashTable(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  char local_34 [4];
  
  if ((DAT_095216a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_09180998);
    FUN_03f5c2a4(&DAT_09227008);
    FUN_03f5c2a4(&DAT_0921e160);
    FUN_03f5c2a4(&DAT_09213988);
    FUN_03f5c2a4(&DAT_09227088);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_0921e0c0);
    FUN_03f5c2a4(&DAT_0920e2a8);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_09227030);
    FUN_03f5c2a4(&DAT_092030f8);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095216a3 = 1;
  }
  local_34[0] = '\0';
  if (*(long *)(param_1 + 0x158) != 0) {
    return *(long *)(param_1 + 0x158);
  }
  lVar3 = FUN_03f5c394(DAT_09180998,199);
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09184c68);
  }
  if (DAT_095216cd == '\0') {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_095216cd = '\x01';
  }
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
    lVar4 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
    if (lVar4 == 0) goto LAB_075055c8;
    System_String__Equals(lVar4,DAT_0921e0c0,0);
  }
  lVar4 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_1);
  if (lVar4 == 0) goto LAB_075055c8;
  uVar5 = System_String__Trim(lVar4,0);
  uVar6 = System_String__op_Inequality(DAT_091f86d8,uVar5,0);
  if ((uVar6 & 1) != 0) {
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,DAT_091f86d8,0xf,0);
  }
  uVar6 = System_String__op_Inequality(DAT_091f8f68,uVar5,0);
  if ((uVar6 & 1) != 0) {
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,DAT_091f8f68,0xf,0);
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
  if ((((**(char **)(DAT_09184c68 + 0xb8) == '\0') &&
       (uVar6 = System_String__op_Inequality(DAT_09227088,uVar5,0), (uVar6 & 1) != 0)) &&
      (uVar6 = System_String__op_Inequality(DAT_09227030,uVar5,0), (uVar6 & 1) != 0)) &&
     (uVar6 = System_String__op_Inequality(DAT_09227008,uVar5,0), (uVar6 & 1) != 0)) {
    uVar5 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_1);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x700,0);
  }
  uVar5 = System_Globalization_DateTimeFormatInfo__get_AMDesignator(param_1);
  System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x403,0);
  uVar5 = System_Globalization_DateTimeFormatInfo__get_PMDesignator(param_1);
  System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x504,1);
  local_34[0] = '\0';
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
  if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
    System_Globalization_DateTimeFormatInfo__PopulateSpecialTokenHashTable(param_1,lVar3,local_34);
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
  if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
    lVar4 = System_Globalization_DateTimeFormatInfo__get_LanguageName(param_1);
    if (lVar4 == 0) goto LAB_075055c8;
    uVar6 = System_String__Equals(lVar4,DAT_0921e160,0);
    if ((uVar6 & 1) == 0) goto LAB_07505204;
    uVar5 = 0xf;
  }
  else {
LAB_07505204:
    uVar5 = 0xf00;
  }
  System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,DAT_091f8a38,uVar5,0);
  if (local_34[0] == '\0') {
    uVar5 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_1);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x600,0);
  }
  System_Globalization_DateTimeFormatInfo__AddMonthNames(param_1,lVar3,0);
  iVar8 = 1;
  do {
    uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedMonthName(param_1,iVar8);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,5,iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xe);
  if (*(uint *)(param_1 + 0x144) == 0xffffffff) {
    uVar6 = System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
    if ((uVar6 & 1) != 0) goto LAB_075052b0;
  }
  else if ((*(uint *)(param_1 + 0x144) & 1) != 0) {
LAB_075052b0:
    iVar8 = 1;
    do {
      uVar5 = System_Globalization_DateTimeFormatInfo__internalGetMonthName(param_1,iVar8,1,0);
      System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,5,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  uVar2 = *(uint *)(param_1 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar8 = 1;
    do {
      uVar5 = System_Globalization_DateTimeFormatInfo__internalGetMonthName(param_1,iVar8,2,0);
      System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,5,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  iVar8 = 0;
  do {
    uVar5 = System_Globalization_DateTimeFormatInfo__GetDayName(param_1,iVar8);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,7,iVar8);
    uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedDayName(param_1,iVar8);
    System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,7,iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  plVar7 = *(long **)(param_1 + 0x78);
  if ((plVar7 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar8 = 1;
      do {
        uVar5 = System_Globalization_DateTimeFormatInfo__GetEraName(param_1,iVar8);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,9,iVar8);
        uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedEraName(param_1,iVar8);
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,9,iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(int *)(lVar4 + 0x18));
    }
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
    if (lVar4 != 0) {
      uVar5 = System_Globalization_DateTimeFormatInfo__get_AMDesignator();
      System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x403,0);
      lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
      if (lVar4 != 0) {
        uVar5 = System_Globalization_DateTimeFormatInfo__get_PMDesignator();
        iVar8 = 1;
        System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,0x504,1);
        do {
          if (*(int *)(DAT_09183570 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
          if (lVar4 == 0) goto LAB_075055c8;
          uVar5 = System_Globalization_DateTimeFormatInfo__GetMonthName(lVar4,iVar8);
          System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,5,iVar8);
          lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
          if (lVar4 == 0) goto LAB_075055c8;
          uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedMonthName(lVar4,iVar8);
          System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,5,iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0xd);
        iVar8 = 0;
        do {
          if (*(int *)(DAT_09183570 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
          if (lVar4 == 0) goto LAB_075055c8;
          uVar5 = System_Globalization_DateTimeFormatInfo__GetDayName(lVar4,iVar8);
          System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,7,iVar8);
          lVar4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo();
          if (lVar4 == 0) goto LAB_075055c8;
          uVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedDayName(lVar4,iVar8);
          System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,uVar5,7,iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 != 7);
        lVar4 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedEnglishEraNames(param_1);
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              System_Globalization_DateTimeFormatInfo__InsertHash
                        (param_1,lVar3,DAT_0920e2a8,0xe00,0);
              System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,DAT_092030f8,8,0);
              System_Globalization_DateTimeFormatInfo__InsertHash(param_1,lVar3,DAT_09213988,8,0);
              System_Globalization_DateTimeFormatInfo__InsertHash
                        (param_1,lVar3,DAT_091f9400,0x600,0);
              System_Globalization_DateTimeFormatInfo__InsertHash
                        (param_1,lVar3,DAT_091f9f58,0x700,0);
              *(long *)(param_1 + 0x158) = lVar3;
              thunk_FUN_03f5d7b8(param_1 + 0x158,lVar3);
              return lVar3;
            }
            lVar4 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedEnglishEraNames(param_1)
            ;
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar1 = uVar6 * 8;
            uVar6 = uVar6 + 1;
            System_Globalization_DateTimeFormatInfo__InsertHash
                      (param_1,lVar3,*(undefined8 *)(lVar4 + lVar1 + 0x20),9,uVar6 & 0xffffffff);
            lVar4 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedEnglishEraNames(param_1)
            ;
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_075055c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

