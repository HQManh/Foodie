// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$MatchesBackwardCore
// address: 0x741ce84
// body: available
// range: 0x741ce84-0x741d32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741d2e8 to 0x741cc50 Mono.Globalization.Unicode.SimpleCollator$$MatchesPrimitive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741d328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Globalization_Unicode_SimpleCollator__MatchesBackwardCore
                (undefined8 param_1,long param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,char *param_7,uint param_8,int param_9,long *param_10,
                uint *param_11)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  
  if ((DAT_09520f6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f6b = 1;
  }
  uVar8 = *param_11;
  pcVar13 = *(char **)(param_11 + 6);
  iVar12 = *param_3;
  if (param_9 != 0) {
    if (-1 < iVar12) {
      if (param_2 == 0) goto LAB_0741d328;
      cVar3 = '\0';
      iVar14 = iVar12;
      do {
        uVar5 = System_String__get_Chars(param_2,iVar14,0);
        if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918ac28);
        }
        uVar9 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar5,uVar8);
        if ((uVar9 & 1) == 0) {
          uVar5 = System_String__get_Chars(param_2,iVar14,0);
          uVar6 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar5,uVar8);
          cVar2 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar6);
          if (cVar2 != '\x01') {
            uVar7 = Mono_Globalization_Unicode_SimpleCollator__FilterExtender
                              (param_1,uVar6,param_9,uVar8);
            *pcVar13 = cVar2;
            cVar2 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar7);
            pcVar13[1] = cVar2;
            if ((uVar8 >> 1 & 1) == 0) {
              cVar2 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar7,param_9);
              pcVar13[2] = cVar2;
            }
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar7);
            pcVar13[3] = (char)uVar10;
            if ((param_9 != 3) && (cVar3 != '\0')) {
              cVar2 = cVar3 + '\x02';
              if (pcVar13[2] != '\0') {
                cVar2 = cVar3;
              }
              pcVar13[2] = cVar2;
            }
            lVar11 = *param_10;
            *param_3 = *param_3 + -1;
            if (lVar11 == 0) goto LAB_0741d2b0;
            goto LAB_0741d168;
          }
          cVar3 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar6,0);
        }
        bVar1 = 0 < iVar14;
        iVar14 = iVar14 + -1;
      } while (bVar1);
    }
    return 0;
  }
  lVar11 = Mono_Globalization_Unicode_SimpleCollator__GetTailContraction
                     (param_1,param_2,iVar12,param_4);
  *param_10 = lVar11;
  uVar10 = thunk_FUN_03f5d7b8(param_10,lVar11);
  lVar11 = *param_10;
  if (lVar11 == 0) {
    if (param_2 == 0) goto LAB_0741d328;
    uVar5 = System_String__get_Chars(param_2,*param_3,0);
    uVar7 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar5,uVar8);
    *param_3 = *param_3 + -1;
    cVar2 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar7);
    *pcVar13 = cVar2;
    cVar3 = *param_7;
    if (cVar3 == cVar2) {
      cVar4 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar7);
      pcVar13[1] = cVar4;
    }
    if ((uVar8 >> 1 & 1) == 0) {
      if (pcVar13[1] != param_7[1]) {
        return 0;
      }
      cVar4 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar7,0);
      pcVar13[2] = cVar4;
    }
    else if ((uVar8 >> 1 & 1) == 0) {
      return 0;
    }
    if (cVar3 != cVar2) {
      return 0;
    }
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar7);
    pcVar13[3] = (char)uVar10;
    if (*pcVar13 != '\x01') {
      param_11[10] = uVar7;
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0741d168:
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_0741d328;
    *param_3 = *param_3 - *(int *)(*(long *)(lVar11 + 0x18) + 0x18);
    if ((param_8 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar11 + 0x28) == 0) {
      lVar11 = *(long *)(lVar11 + 0x20);
      if (lVar11 != 0) {
        iVar12 = *(int *)(lVar11 + 0x10) + -1;
        uVar8 = Mono_Globalization_Unicode_SimpleCollator__LastIndexOfSortKey
                          (param_1,lVar11,iVar12,iVar12,*(int *)(lVar11 + 0x10),param_7,param_6,1,
                           param_11);
        return (ulong)(~uVar8 >> 0x1f);
      }
      goto LAB_0741d328;
    }
    lVar11 = 0;
    do {
      pcVar13[lVar11] = param_7[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    param_11[10] = 0xffffffff;
    *(char **)(param_11 + 0xc) = pcVar13;
    if (param_9 != 0) goto LAB_0741d2b0;
  }
  iVar12 = iVar12 + 1;
  if (iVar12 < param_5) {
    if (param_2 == 0) {
LAB_0741d328:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    do {
      uVar5 = System_String__get_Chars(param_2,iVar12,0);
      uVar10 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar5);
      if (((uint)uVar10 & 0xff) != 1) break;
      if ((uVar8 >> 1 & 1) == 0) {
        cVar3 = pcVar13[2];
        if (cVar3 == '\0') {
          cVar3 = '\x02';
          pcVar13[2] = '\x02';
        }
        uVar5 = System_String__get_Chars(param_2,iVar12,0);
        uVar10 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar5,0);
        pcVar13[2] = (char)uVar10 + cVar3;
      }
      iVar12 = iVar12 + 1;
    } while (param_5 != iVar12);
  }
LAB_0741d2b0:
  uVar9 = Mono_Globalization_Unicode_SimpleCollator__MatchesPrimitive
                    (uVar10,uVar8,pcVar13,uVar7,param_9,param_7,param_6,param_8 & 1);
  return uVar9;
}

