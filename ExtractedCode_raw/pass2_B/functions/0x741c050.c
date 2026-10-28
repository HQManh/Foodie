// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$LastIndexOf
// address: 0x741c050
// body: available
// range: 0x741c050-0x741c557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741c178 to 0x741c558 Mono.Globalization.Unicode.SimpleCollator$$LastIndexOfOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741c1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741c554 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Globalization_Unicode_SimpleCollator__LastIndexOf
                (ulong param_1,long param_2,long param_3,uint param_4,int param_5,
                undefined1 *param_6,uint *param_7)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  undefined1 *puVar17;
  long local_88;
  uint local_64;
  
  uVar9 = param_1;
  if ((DAT_09520f68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    uVar9 = FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f68 = 1;
  }
  if (param_3 == 0) {
LAB_0741c1f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar12 = *(int *)(param_3 + 0x10);
  uVar1 = *param_7;
  if (iVar12 < 1) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    do {
      uVar6 = System_String__get_Chars(param_3,iVar14,0);
      if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ac28);
      }
      uVar9 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar6,uVar1);
      if ((uVar9 & 1) == 0) {
        iVar12 = *(int *)(param_3 + 0x10);
        break;
      }
      iVar12 = *(int *)(param_3 + 0x10);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar12);
  }
  if (iVar12 - iVar14 == 0) {
    uVar10 = Mono_Globalization_Unicode_SimpleCollator__IndexOfOrdinal(uVar9,param_3,0,0,iVar14);
    uVar15 = param_4;
    if (-1 < (int)uVar10) {
      uVar9 = Mono_Globalization_Unicode_SimpleCollator__LastIndexOfOrdinal
                        (uVar10,param_2,param_3,param_4,param_5);
      return uVar9;
    }
    goto LAB_0741c510;
  }
  lVar11 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                     (param_1,param_3,iVar14,iVar12 - iVar14);
  puVar17 = param_6;
  uVar15 = param_4;
  if (lVar11 == 0) {
    if (param_6 == (undefined1 *)0x0) {
      local_88 = 0;
      uVar7 = 0xffffffff;
      bVar16 = 1;
      bVar2 = true;
    }
    else {
      uVar6 = System_String__get_Chars(param_3,iVar14,0);
      uVar7 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar6,uVar1);
      uVar3 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar7);
      *param_6 = uVar3;
      uVar3 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar7);
      param_6[1] = uVar3;
      if ((uVar1 >> 1 & 1) == 0) {
        uVar3 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar7,0);
        param_6[2] = uVar3;
      }
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar7);
      param_6[3] = uVar3;
      if ((uVar7 & 0xffff) < 0x3041) {
LAB_0741c2e8:
        bVar2 = false;
      }
      else if ((uVar7 + 0x62 & 0xffff) < 0xffc8) {
        uVar8 = uVar7 >> 8 & 0xff;
        if (0x32 < uVar8) goto LAB_0741c2e8;
        if ((uVar7 & 0xffff) < 0x309d) {
          bVar2 = (uVar7 & 0xffff) < 0x3099;
        }
        else {
          if (uVar8 < 0x31) {
            bVar2 = (uVar7 & 0xffff) == 0x30fb;
          }
          else {
            bVar2 = (uVar7 >> 4 & 0xfff) < 0x32d || (uVar7 & 0xffff) == 0x32ff;
          }
          bVar2 = !bVar2;
        }
      }
      else {
        bVar2 = true;
      }
      bVar16 = bVar2 ^ 1;
      local_88 = 0;
      bVar2 = true;
LAB_0741c320:
      iVar14 = iVar14 + 1;
      if (iVar14 < *(int *)(param_3 + 0x10)) {
        do {
          uVar6 = System_String__get_Chars(param_3,iVar14,0);
          cVar4 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar6);
          if (cVar4 != '\x01') break;
          cVar4 = puVar17[2];
          if (cVar4 == '\0') {
            cVar4 = '\x02';
            puVar17[2] = 2;
          }
          uVar6 = System_String__get_Chars(param_3,iVar14,0);
          cVar5 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar6,0);
          iVar14 = iVar14 + 1;
          puVar17[2] = cVar5 + cVar4;
        } while (iVar14 < *(int *)(param_3 + 0x10));
      }
    }
  }
  else {
    local_88 = *(long *)(lVar11 + 0x20);
    bVar2 = local_88 == 0;
    if (!bVar2) {
      puVar17 = (undefined1 *)0x0;
    }
    if (puVar17 != (undefined1 *)0x0) {
      lVar13 = *(long *)(lVar11 + 0x28);
      if (lVar13 != 0) {
        uVar9 = 0;
        do {
          if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
            uVar7 = 0xffffffff;
            bVar16 = 1;
            goto LAB_0741c320;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          puVar17[uVar9] = *(undefined1 *)(lVar13 + uVar9 + 0x20);
          uVar9 = uVar9 + 1;
          lVar13 = *(long *)(lVar11 + 0x28);
        } while (lVar13 != 0);
      }
      goto LAB_0741c1f0;
    }
    uVar7 = 0xffffffff;
    bVar16 = 1;
  }
  do {
    if (bVar2) {
      local_64 = uVar15;
      do {
        uVar8 = local_64;
        if ((int)local_64 <= (int)(uVar15 - param_5)) {
          uVar8 = 0xffffffff;
          break;
        }
        uVar9 = Mono_Globalization_Unicode_SimpleCollator__MatchesBackward
                          (param_1,param_2,&local_64,uVar15 - param_5,param_4,uVar7,puVar17,bVar16,
                           param_7);
      } while ((uVar9 & 1) == 0);
    }
    else {
      uVar8 = Mono_Globalization_Unicode_SimpleCollator__LastIndexOf
                        (param_1,param_2,local_88,uVar15,param_5,param_6,param_7);
    }
    if ((int)uVar8 < 0) break;
    uVar9 = Mono_Globalization_Unicode_SimpleCollator__IsPrefix
                      (param_1,param_2,param_3,uVar8,(param_4 - uVar8) + 1,0,param_7);
    if ((uVar9 & 1) != 0) {
      uVar15 = uVar8;
      if ((int)param_4 <= (int)uVar8) goto LAB_0741c510;
      if (param_2 != 0) goto LAB_0741c4c8;
      goto LAB_0741c1f0;
    }
    lVar11 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                       (param_1,param_2,uVar8,(param_4 - uVar8) + 1);
    if (lVar11 == 0) {
      iVar14 = -1;
      iVar12 = -1;
    }
    else {
      if (*(long *)(lVar11 + 0x18) == 0) goto LAB_0741c1f0;
      iVar12 = *(int *)(*(long *)(lVar11 + 0x18) + 0x18);
      iVar14 = -iVar12;
      iVar12 = -iVar12;
    }
    param_5 = (uVar8 - uVar15) + param_5 + iVar12;
    uVar15 = uVar8 + iVar14;
  } while (0 < param_5);
  uVar15 = 0xffffffff;
LAB_0741c510:
  return (ulong)uVar15;
LAB_0741c4c8:
  do {
    uVar6 = System_String__get_Chars(param_2,uVar8,0);
    if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ac28);
    }
    uVar9 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar6,uVar1);
    uVar15 = uVar8;
  } while (((uVar9 & 1) != 0) && (uVar8 = uVar8 + 1, uVar15 = param_4, param_4 != uVar8));
  goto LAB_0741c510;
}

