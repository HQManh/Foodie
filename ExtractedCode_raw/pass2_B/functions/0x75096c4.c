// rea decompile_all
// name: System.Globalization.TimeSpanFormat$$FormatCustomized
// address: 0x75096c4
// body: available
// range: 0x75096c4-0x7509d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7509d84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7509d88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7509d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_TimeSpanFormat__FormatCustomized
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  undefined2 local_6c [2];
  long local_68;
  
  if ((DAT_095216bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_091b97c0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918bd68);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095216bd = 1;
  }
  local_68 = 0;
  local_6c[0] = 0;
  lVar8 = param_5;
  if (param_5 == 0) {
    lVar8 = System_Text_StringBuilderCache__Acquire(0x10,0);
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_68 = 0;
  iVar13 = (int)(param_1 / 864000000000);
  iVar1 = -iVar13;
  if (-1 < param_1) {
    iVar1 = iVar13;
  }
  lVar9 = -(param_1 % 864000000000);
  if (-1 < param_1) {
    lVar9 = param_1 % 864000000000;
  }
  uVar15 = (uint)param_3;
  if (0 < (int)uVar15) {
    uVar18 = 0;
    iVar13 = (int)(SUB168(SEXT816(lVar9) * SEXT816(0x1ca213d840baf7d5),8) >> 0x1a) -
             (SUB164(SEXT816(lVar9) * SEXT816(0x1ca213d840baf7d5),0xc) >> 0x1f);
    sVar3 = (short)iVar13;
    uVar16 = iVar13 + ((uint)(sVar3 * -0x7777) >> 0x10);
    lVar14 = lVar9 % 10000000;
    iVar13 = (int)(lVar9 / 10000000) % 0x3c;
    iVar6 = (int)(lVar9 / 36000000000);
    iVar4 = (int)(short)(sVar3 + ((short)((uint)(int)(short)uVar16 >> 5) +
                                 (short)((uVar16 & 0x8000) >> 0xf)) * -0x3c);
    do {
      if (uVar15 <= uVar18) {
LAB_07509d88:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(ushort *)(param_2 + (long)(int)uVar18 * 2);
      if (uVar2 < 0x47) {
        if (uVar2 < 0x26) {
          if (uVar2 != 0x22) {
            if (uVar2 != 0x25) {
LAB_07509d2c:
              if (param_5 == 0) {
                System_Text_StringBuilderCache__Release(lVar8,0);
              }
              thunk_FUN_03fc39d4(&DAT_09184908);
              uVar10 = thunk_FUN_03f9944c();
              uVar11 = thunk_FUN_03fc39d4(&DAT_09204ca0);
              System_FormatException___ctor(uVar10,uVar11,0);
              uVar11 = thunk_FUN_03fc39d4(&DAT_091db6e8);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar10,uVar11);
            }
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar7 = System_DateTimeFormat__ParseNextChar(param_2,param_3,uVar18,0);
            if ((iVar7 < 0) || (iVar7 == 0x25)) goto LAB_07509d2c;
            local_6c[0] = (undefined2)iVar7;
            if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918bd68);
            }
            System_Globalization_TimeSpanFormat__FormatCustomized(param_1,local_6c,1,param_4,lVar8);
LAB_07509990:
            iVar7 = 2;
            goto LAB_07509cfc;
          }
        }
        else if (uVar2 != 0x27) {
          if (uVar2 != 0x46) goto LAB_07509d2c;
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,0x46,0);
          if (7 < iVar7) goto LAB_07509d2c;
          local_68 = lVar14;
          lVar9 = System_Globalization_TimeSpanParse__Pow10(7 - iVar7);
          local_68 = 0;
          if (lVar9 != 0) {
            local_68 = lVar14 / lVar9;
          }
          uVar17 = (ulong)(iVar7 - 1);
          if (0 < iVar7) {
            lVar9 = uVar17 * 8 + 0x20;
            do {
              lVar12 = local_68 / 10;
              uVar16 = (uint)uVar17;
              if (local_68 != lVar12 * 10) {
                if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar12 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
                if (lVar12 == 0) goto LAB_07509d8c;
                if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_07509d88;
                uVar10 = *(undefined8 *)(lVar12 + lVar9);
                goto LAB_07509cc0;
              }
              lVar9 = lVar9 + -8;
              uVar17 = (ulong)(uVar16 - 1);
              local_68 = lVar12;
            } while (1 < (int)(uVar16 + 1));
          }
          goto LAB_07509cfc;
        }
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar7 = System_DateTimeFormat__ParseQuoteString(param_2,param_3,uVar18,lVar8,0);
      }
      else if (uVar2 < 0x69) {
        if (uVar2 == 0x5c) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseNextChar(param_2,param_3,uVar18,0);
          if (iVar7 < 0) goto LAB_07509d2c;
          if (lVar8 == 0) goto LAB_07509d8c;
          System_Text_StringBuilder__Append(lVar8,iVar7,0);
          goto LAB_07509990;
        }
        if (uVar2 == 100) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,100,0);
          if (8 < iVar7) goto LAB_07509d2c;
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_DateTimeFormat__FormatDigits(lVar8,iVar1,iVar7,1,0);
        }
        else {
          if (uVar2 != 0x66) {
            if (uVar2 != 0x68) goto LAB_07509d2c;
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,0x68,0);
            if (2 < iVar7) goto LAB_07509d2c;
            iVar5 = iVar6;
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            goto LAB_07509b80;
          }
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,0x66,0);
          if (7 < iVar7) goto LAB_07509d2c;
          local_68 = lVar14;
          lVar9 = System_Globalization_TimeSpanParse__Pow10(7 - iVar7);
          local_68 = 0;
          if (lVar9 != 0) {
            local_68 = lVar14 / lVar9;
          }
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
          if (lVar9 == 0) {
LAB_07509d8c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_07509d88;
          uVar10 = *(undefined8 *)(lVar9 + (long)(int)(iVar7 - 1U) * 8 + 0x20);
LAB_07509cc0:
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar10 = System_Int64__ToString(&local_68,uVar10,uVar11,0);
          if (lVar8 == 0) goto LAB_07509d8c;
          System_Text_StringBuilder__Append(lVar8,uVar10,0);
        }
      }
      else {
        if (uVar2 == 0x6d) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,0x6d,0);
          if (2 < iVar7) goto LAB_07509d2c;
          iVar5 = iVar4;
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
        }
        else {
          if (uVar2 != 0x73) goto LAB_07509d2c;
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar7 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar18,0x73,0);
          if (2 < iVar7) goto LAB_07509d2c;
          iVar5 = iVar13;
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
        }
LAB_07509b80:
        System_DateTimeFormat__FormatDigits(lVar8,iVar5,iVar7,0);
      }
LAB_07509cfc:
      uVar18 = iVar7 + uVar18;
    } while ((int)uVar18 < (int)uVar15);
  }
  return lVar8;
}

