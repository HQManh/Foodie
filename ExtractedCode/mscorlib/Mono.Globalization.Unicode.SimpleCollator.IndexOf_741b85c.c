// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$IndexOf
// address: 0x741b85c
// body: available
// range: 0x741b85c-0x741bccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741b980 to 0x741bcd0 Mono.Globalization.Unicode.SimpleCollator$$IndexOfOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741b9f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741bccc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Globalization_Unicode_SimpleCollator__IndexOf
                (ulong param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                undefined1 *param_6,uint *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  long local_78;
  uint local_64;
  
  param_4 = param_4 & 0xffffffff;
  uVar7 = param_1;
  if ((DAT_09520f67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    uVar7 = FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f67 = 1;
  }
  if (param_3 == 0) {
LAB_0741b9f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar16 = *(int *)(param_3 + 0x10);
  uVar13 = *param_7;
  if (iVar16 < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    do {
      uVar5 = System_String__get_Chars(param_3,iVar15,0);
      if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ac28);
      }
      uVar7 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar5,uVar13);
      if ((uVar7 & 1) == 0) {
        iVar16 = *(int *)(param_3 + 0x10);
        break;
      }
      iVar16 = *(int *)(param_3 + 0x10);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar16);
  }
  if (iVar16 - iVar15 == 0) {
    uVar8 = Mono_Globalization_Unicode_SimpleCollator__IndexOfOrdinal(uVar7,param_3,0,0,iVar15);
    if (-1 < (int)uVar8) {
      uVar7 = Mono_Globalization_Unicode_SimpleCollator__IndexOfOrdinal
                        (uVar8,param_2,param_3,param_4,param_5);
      return uVar7;
    }
  }
  else {
    lVar9 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                      (param_1,param_3,iVar15,iVar16 - iVar15);
    puVar14 = param_6;
    if (lVar9 == 0) {
      if (param_6 != (undefined1 *)0x0) {
        System_String__get_Chars(param_3,iVar15,0);
        uVar5 = System_String__get_Chars(param_3,iVar15,0);
        uVar6 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar5,uVar13);
        uVar2 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar6);
        *param_6 = uVar2;
        uVar2 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar6);
        param_6[1] = uVar2;
        if ((uVar13 >> 1 & 1) == 0) {
          uVar2 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar6,0);
          param_6[2] = uVar2;
        }
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar6);
        param_6[3] = uVar2;
        if (0x3040 < (uVar6 & 0xffff)) {
          if (0xffc7 < (uVar6 + 0x62 & 0xffff)) {
            bVar1 = true;
            goto LAB_0741bc28;
          }
          uVar13 = uVar6 >> 8 & 0xff;
          if (uVar13 < 0x33) {
            if ((uVar6 & 0xffff) < 0x309d) {
              bVar1 = (uVar6 & 0xffff) < 0x3099;
            }
            else {
              if (uVar13 < 0x31) {
                bVar1 = (uVar6 & 0xffff) == 0x30fb;
              }
              else {
                bVar1 = (uVar6 >> 4 & 0xfff) < 0x32d || (uVar6 & 0xffff) == 0x32ff;
              }
              bVar1 = !bVar1;
            }
            goto LAB_0741bc28;
          }
        }
        bVar1 = false;
LAB_0741bc28:
        bVar12 = bVar1 ^ 1;
        local_78 = 0;
        bVar1 = true;
LAB_0741bc38:
        do {
          iVar15 = iVar15 + 1;
          if (*(int *)(param_3 + 0x10) <= iVar15) goto LAB_0741bb18;
          uVar5 = System_String__get_Chars(param_3,iVar15,0);
          cVar3 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar5);
          if (cVar3 != '\x01') goto LAB_0741bb18;
          cVar3 = puVar14[2];
          if (cVar3 == '\0') {
            cVar3 = '\x02';
            puVar14[2] = 2;
          }
          uVar5 = System_String__get_Chars(param_3,iVar15,0);
          cVar4 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar5,0);
          puVar14[2] = cVar4 + cVar3;
        } while( true );
      }
      uVar6 = 0xffffffff;
      bVar12 = 1;
      local_78 = 0;
      bVar1 = true;
    }
    else {
      local_78 = *(long *)(lVar9 + 0x20);
      bVar1 = local_78 == 0;
      if (!bVar1) {
        puVar14 = (undefined1 *)0x0;
      }
      if (puVar14 != (undefined1 *)0x0) {
        lVar11 = *(long *)(lVar9 + 0x28);
        if (lVar11 != 0) {
          uVar7 = 0;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar7) {
              uVar6 = 0xffffffff;
              bVar12 = 1;
              goto LAB_0741bc38;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            puVar14[uVar7] = *(undefined1 *)(lVar11 + uVar7 + 0x20);
            uVar7 = uVar7 + 1;
            lVar11 = *(long *)(lVar9 + 0x28);
          } while (lVar11 != 0);
        }
        goto LAB_0741b9f0;
      }
      uVar6 = 0xffffffff;
      bVar12 = 1;
    }
LAB_0741bb18:
    do {
      uVar13 = (uint)param_4;
      if (bVar1) {
        local_64 = uVar13;
        do {
          uVar7 = (ulong)local_64;
          if ((int)(uVar13 + param_5) <= (int)local_64) goto LAB_0741bbfc;
          uVar10 = Mono_Globalization_Unicode_SimpleCollator__MatchesForward
                             (param_1,param_2,&local_64,uVar13 + param_5,uVar6,puVar14,bVar12,
                              param_7);
        } while ((uVar10 & 1) == 0);
      }
      else {
        uVar7 = Mono_Globalization_Unicode_SimpleCollator__IndexOf
                          (param_1,param_2,local_78,param_4,param_5,param_6,param_7);
        uVar7 = uVar7 & 0xffffffff;
      }
      iVar16 = (int)uVar7;
      if (iVar16 < 0) break;
      param_5 = (uVar13 - iVar16) + param_5;
      uVar10 = Mono_Globalization_Unicode_SimpleCollator__IsPrefix
                         (param_1,param_2,param_3,uVar7,param_5,0,param_7);
      if ((uVar10 & 1) != 0) {
        return uVar7;
      }
      lVar9 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                        (param_1,param_2,uVar7,param_5);
      if (lVar9 == 0) {
        uVar13 = iVar16 + 1;
        iVar15 = -1;
      }
      else {
        if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0741b9f0;
        iVar15 = *(int *)(*(long *)(lVar9 + 0x18) + 0x18);
        uVar13 = iVar16 + iVar15;
        iVar15 = -iVar15;
      }
      param_5 = param_5 + iVar15;
      param_4 = (ulong)uVar13;
    } while (0 < param_5);
LAB_0741bbfc:
    param_4 = 0xffffffff;
  }
  return param_4;
}

