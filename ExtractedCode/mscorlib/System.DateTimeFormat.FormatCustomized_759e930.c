// rea decompile_all
// name: System.DateTimeFormat$$FormatCustomized
// address: 0x759e930
// body: available
// range: 0x759e930-0x759f9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759f984 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759f988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759f9e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DateTimeFormat__FormatCustomized
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  double dVar22;
  undefined2 local_78 [2];
  int local_74;
  uint local_70;
  uint uStack_6c;
  undefined8 local_68;
  
  local_68 = param_1;
  if ((DAT_09521c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d2ff0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ffb80);
    FUN_03f5c2a4(&DAT_09226fb8);
    FUN_03f5c2a4(&DAT_09226ff0);
    DAT_09521c20 = 1;
  }
  local_70 = 0;
  uStack_6c = 0;
  local_74 = 0;
  local_78[0] = 0;
  if (param_4 == 0) {
LAB_0759f988:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar20 = *(long **)(param_4 + 0x78);
  lVar13 = param_6;
  if (param_6 == 0) {
    lVar13 = System_Text_StringBuilderCache__Acquire(0x10,0);
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
    if (plVar20 == (long *)0x0) goto LAB_0759f988;
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    bVar4 = sVar7 == 8;
  }
  else {
    bVar4 = false;
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
    if (plVar20 == (long *)0x0) goto LAB_0759f988;
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    bVar5 = sVar7 == 3;
  }
  else {
    bVar5 = false;
  }
  uVar19 = (uint)param_3;
  if ((int)uVar19 < 1) {
    return lVar13;
  }
  uVar21 = 0;
LAB_0759eb54:
  uVar15 = local_68;
  if (uVar19 <= uVar21) goto LAB_0759f984;
  uVar2 = *(ushort *)(param_2 + (long)(int)uVar21 * 2);
  if (uVar2 < 0x4c) {
    if (uVar2 < 0x30) {
      if (uVar2 < 0x26) {
        if (uVar2 == 0x22) goto LAB_0759ee90;
        if (uVar2 == 0x25) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar8 = System_DateTimeFormat__ParseNextChar(param_2,param_3,uVar21);
          uVar15 = local_68;
          if ((iVar8 < 0) || (iVar8 == 0x25)) goto LAB_0759f98c;
          local_78[0] = (undefined2)iVar8;
          if (*(long *)(DAT_091d2ff0 + 0x38) == 0) {
            FUN_03f95ac8(DAT_091d2ff0);
          }
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_DateTimeFormat__FormatCustomized(uVar15,local_78,1,param_4,param_5,lVar13);
LAB_0759ec60:
          uStack_6c = 2;
          goto LAB_0759f8c0;
        }
      }
      else {
        if (uVar2 == 0x27) {
LAB_0759ee90:
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_6c = System_DateTimeFormat__ParseQuoteString(param_2,param_3,uVar21,lVar13);
          goto LAB_0759f8c0;
        }
        if (uVar2 == 0x2f) {
          uVar15 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_4,0);
          goto joined_r0x0759f19c;
        }
      }
      goto LAB_0759f04c;
    }
    if (uVar2 < 0x47) {
      if (uVar2 == 0x3a) {
        uVar15 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_4,0);
joined_r0x0759f19c:
        if (lVar13 != 0) {
          System_Text_StringBuilder__Append(lVar13,uVar15,0);
          goto LAB_0759f1b0;
        }
        goto LAB_0759f988;
      }
      if (uVar2 != 0x46) goto LAB_0759f04c;
LAB_0759eebc:
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,uVar2);
      if (7 < (int)uStack_6c) {
LAB_0759f98c:
        if (param_6 == 0) {
          System_Text_StringBuilderCache__Release(lVar13,0);
        }
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar15 = thunk_FUN_03f9944c();
        uVar16 = thunk_FUN_03fc39d4(&DAT_09204ca0);
        System_FormatException___ctor(uVar15,uVar16);
        uVar16 = thunk_FUN_03fc39d4(&DAT_091c79e8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar15,uVar16);
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar14 = System_DateTime__get_Ticks(&local_68);
      uVar11 = uStack_6c;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187e80);
      }
      dVar22 = (double)System_Math__Pow(0x4024000000000000,(double)(int)(7 - uVar11),0);
      lVar17 = -0x8000000000000000;
      if (dVar22 != INFINITY) {
        lVar17 = (long)dVar22;
      }
      lVar18 = 0;
      if (lVar17 != 0) {
        lVar18 = (long)(uVar14 % 10000000) / lVar17;
      }
      iVar8 = (int)lVar18;
      if (uVar2 == 0x66) {
        local_74 = iVar8;
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar17 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
        if (lVar17 == 0) goto LAB_0759f988;
        if (*(uint *)(lVar17 + 0x18) <= uStack_6c - 1) {
LAB_0759f984:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar17 = lVar17 + (long)(int)(uStack_6c - 1) * 8;
      }
      else {
        uVar11 = uStack_6c;
        if ((0 < (int)uStack_6c) && (iVar8 % 10 == 0)) {
          do {
            bVar3 = uVar11 < 2;
            uVar11 = uVar11 - 1;
            lVar18 = lVar18 / 10;
            if (bVar3) break;
          } while (lVar18 == (lVar18 / 10) * 10);
        }
        if ((int)uVar11 < 1) {
          if (lVar13 != 0) {
            iVar8 = System_Text_StringBuilder__get_Length(lVar13,0);
            if (0 < iVar8) {
              iVar8 = System_Text_StringBuilder__get_Length(lVar13,0);
              sVar7 = System_Text_StringBuilder__get_Chars(lVar13,iVar8 + -1,0);
              if (sVar7 == 0x2e) {
                iVar8 = System_Text_StringBuilder__get_Length(lVar13,0);
                System_Text_StringBuilder__Remove(lVar13,iVar8 + -1,1,0);
              }
            }
            goto LAB_0759f8c0;
          }
          goto LAB_0759f988;
        }
        local_74 = (int)lVar18;
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar17 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
        if (lVar17 == 0) goto LAB_0759f988;
        if (*(uint *)(lVar17 + 0x18) <= uVar11 - 1) goto LAB_0759f984;
        lVar17 = lVar17 + (ulong)(uVar11 - 1) * 8;
      }
      uVar15 = *(undefined8 *)(lVar17 + 0x20);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar15 = System_Int32__ToString(&local_74,uVar15,uVar16,0);
      if (lVar13 == 0) goto LAB_0759f988;
LAB_0759f7a8:
      System_Text_StringBuilder__Append(lVar13,uVar15,0);
    }
    else if (uVar2 == 0x48) {
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x48);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar11 = System_DateTime__get_Hour(&local_68);
      uVar10 = uStack_6c;
LAB_0759f264:
      System_DateTimeFormat__FormatDigits(lVar13,uVar11,uVar10);
    }
    else {
      if (uVar2 != 0x4b) goto LAB_0759f04c;
      uStack_6c = 1;
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_DateTimeFormat__FormatCustomizedRoundripTimeZone(uVar15,param_5,lVar13);
    }
  }
  else {
    if (uVar2 < 0x6e) {
      if (uVar2 < 0x5d) {
        if (uVar2 == 0x4d) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x4d);
          uVar15 = local_68;
          if (plVar20 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar20 + 600))
                               (plVar20,local_68,*(undefined8 *)(*plVar20 + 0x260));
            if ((int)uStack_6c < 3) {
              if (bVar4) {
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
                cVar1 = **(char **)(DAT_09184c68 + 0xb8);
joined_r0x0759f828:
                if (cVar1 == '\0') {
                  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
LAB_0759f958:
                  System_DateTimeFormat__HebrewFormatDigits(lVar13,uVar11);
                  goto LAB_0759f8c0;
                }
              }
LAB_0759f864:
              uVar10 = uStack_6c;
              if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              goto LAB_0759f8b8;
            }
            if (bVar4) {
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
              uVar10 = uStack_6c;
              if (**(char **)(DAT_09184c68 + 0xb8) != '\0') goto LAB_0759f128;
              if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar15 = System_DateTimeFormat__FormatHebrewMonthName(uVar15,uVar11,uVar10,param_4);
            }
            else {
LAB_0759f128:
              uVar14 = System_Globalization_DateTimeFormatInfo__get_FormatFlags(param_4,0);
              uVar10 = uStack_6c;
              if (((uVar14 & 1) == 0) || ((int)uStack_6c < 4)) {
                if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar15 = System_DateTimeFormat__FormatMonth(uVar11,uVar10,param_4);
              }
              else {
                if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = System_DateTimeFormat__IsUseGenitiveForm(param_2,param_3,uVar21,uVar10,100)
                ;
                uVar15 = System_Globalization_DateTimeFormatInfo__internalGetMonthName
                                   (param_4,uVar11,uVar10 & 1,0,0);
              }
            }
            if (lVar13 != 0) {
              System_Text_StringBuilder__Append(lVar13,uVar15,0);
              goto LAB_0759f8c0;
            }
          }
          goto LAB_0759f988;
        }
        if (uVar2 == 0x5c) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar8 = System_DateTimeFormat__ParseNextChar(param_2,param_3,uVar21);
          if (iVar8 < 0) goto LAB_0759f98c;
          if (lVar13 != 0) {
            System_Text_StringBuilder__Append(lVar13,iVar8,0);
            goto LAB_0759ec60;
          }
          goto LAB_0759f988;
        }
      }
      else {
        if (uVar2 < 0x66) {
          if (uVar2 == 100) {
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,100);
            if ((int)uStack_6c < 3) {
              if (plVar20 != (long *)0x0) {
                uVar11 = (**(code **)(*plVar20 + 0x1e8))
                                   (plVar20,local_68,*(undefined8 *)(*plVar20 + 0x1f0));
                if (bVar4) {
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
                  cVar1 = **(char **)(DAT_09184c68 + 0xb8);
                  goto joined_r0x0759f828;
                }
                goto LAB_0759f864;
              }
            }
            else if (plVar20 != (long *)0x0) {
              uVar12 = (**(code **)(*plVar20 + 0x1f8))
                                 (plVar20,local_68,*(undefined8 *)(*plVar20 + 0x200));
              uVar11 = uStack_6c;
              if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09183568);
              }
              uVar15 = System_DateTimeFormat__FormatDayOfWeek(uVar12,uVar11,param_4);
joined_r0x0759f6c8:
              if (lVar13 != 0) {
                System_Text_StringBuilder__Append(lVar13,uVar15,0);
                goto LAB_0759f8c0;
              }
            }
            goto LAB_0759f988;
          }
          if (uVar2 == 0x65) goto LAB_0759f04c;
        }
        else {
          if (uVar2 == 0x66) goto LAB_0759eebc;
          if (uVar2 == 0x67) {
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x67);
            if (plVar20 != (long *)0x0) {
              uVar12 = (**(code **)(*plVar20 + 0x238))
                                 (plVar20,local_68,*(undefined8 *)(*plVar20 + 0x240));
              uVar15 = System_Globalization_DateTimeFormatInfo__GetEraName(param_4,uVar12,0);
joined_r0x0759f7a4:
              if (lVar13 != 0) goto LAB_0759f7a8;
            }
            goto LAB_0759f988;
          }
          if (uVar2 == 0x68) {
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x68);
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09183548);
            }
            uVar9 = System_DateTime__get_Hour(&local_68);
            uVar10 = uStack_6c;
            if (0xb < uVar9) {
              uVar9 = uVar9 - 0xc;
            }
            uVar11 = 0xc;
            if (uVar9 != 0) {
              uVar11 = uVar9;
            }
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            goto LAB_0759f264;
          }
        }
        if (uVar2 == 0x6d) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x6d);
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183548);
          }
          uVar11 = System_DateTime__get_Minute(&local_68);
          uVar10 = uStack_6c;
          goto LAB_0759f264;
        }
      }
    }
    else if (uVar2 < 0x75) {
      if (uVar2 == 0x73) {
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x73);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar11 = System_DateTime__get_Second(&local_68);
        uVar10 = uStack_6c;
        goto LAB_0759f264;
      }
      if (uVar2 == 0x74) {
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x74);
        if (uStack_6c != 1) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = System_DateTime__get_Hour(&local_68);
          if (uVar11 < 0xc) {
            uVar15 = System_Globalization_DateTimeFormatInfo__get_AMDesignator(param_4,0);
          }
          else {
            uVar15 = System_Globalization_DateTimeFormatInfo__get_PMDesignator(param_4,0);
          }
          goto joined_r0x0759f7a4;
        }
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = System_DateTime__get_Hour(&local_68);
        if (uVar11 < 0xc) {
          lVar17 = System_Globalization_DateTimeFormatInfo__get_AMDesignator(param_4,0);
          if (lVar17 == 0) goto LAB_0759f988;
          if (0 < *(int *)(lVar17 + 0x10)) {
            lVar17 = System_Globalization_DateTimeFormatInfo__get_AMDesignator(param_4,0);
            goto joined_r0x0759f76c;
          }
        }
        else {
          lVar17 = System_Globalization_DateTimeFormatInfo__get_PMDesignator(param_4,0);
          if (lVar17 == 0) goto LAB_0759f988;
          if (0 < *(int *)(lVar17 + 0x10)) {
            lVar17 = System_Globalization_DateTimeFormatInfo__get_PMDesignator(param_4,0);
joined_r0x0759f76c:
            if ((lVar17 != 0) && (uVar12 = System_String__get_Chars(lVar17,0,0), lVar13 != 0)) {
              System_Text_StringBuilder__Append(lVar13,uVar12,0);
              goto LAB_0759f8c0;
            }
            goto LAB_0759f988;
          }
        }
        goto LAB_0759f8c0;
      }
    }
    else {
      if (uVar2 == 0x79) {
        if (plVar20 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar20 + 0x298))
                             (plVar20,local_68,*(undefined8 *)(*plVar20 + 0x2a0));
          _local_70 = CONCAT44(uStack_6c,uVar12);
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183568);
          }
          uVar11 = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x79);
          uStack_6c = uVar11;
          if ((((bVar5) && (*(char *)(*(long *)(DAT_09181358 + 0xb8) + 3) == '\0')) &&
              (local_70 == 1)) && (uVar11 = uVar11 + uVar21, (int)uVar11 < (int)(uVar19 - 1))) {
            if (uVar19 <= uVar11) goto LAB_0759f984;
            if (*(short *)(param_2 + (long)(int)uVar11 * 2) == 0x27) {
              if (uVar19 <= uVar11 + 1) goto LAB_0759f984;
              if (DAT_09226ff0 == 0) goto LAB_0759f988;
              sVar7 = *(short *)(param_2 + (long)(int)(uVar11 + 1) * 2);
              sVar6 = System_String__get_Chars(DAT_09226ff0,0,0);
              if (sVar7 == sVar6) {
                if ((DAT_09226fb8 != 0) &&
                   (uVar12 = System_String__get_Chars(DAT_09226fb8,0,0), lVar13 != 0)) {
                  System_Text_StringBuilder__Append(lVar13,uVar12,0);
                  goto LAB_0759f8c0;
                }
                goto LAB_0759f988;
              }
            }
          }
          uVar14 = System_Globalization_DateTimeFormatInfo__get_HasForceTwoDigitYears(param_4,0);
          uVar11 = local_70;
          if ((uVar14 & 1) == 0) {
            if (bVar4) {
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
              uVar11 = local_70;
              if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
                if (*(int *)(DAT_09183568 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                goto LAB_0759f958;
              }
            }
            uVar10 = uStack_6c;
            uVar11 = local_70;
            if (2 < (int)uStack_6c) {
              uVar15 = System_Int32__ToString(&uStack_6c,0);
              uVar15 = System_String__Concat(DAT_091ffb80,uVar15,0);
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182ff8);
              }
              uVar16 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              uVar15 = System_Int32__ToString(&local_70,uVar15,uVar16,0);
              goto joined_r0x0759f6c8;
            }
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar11 = (int)uVar11 % 100;
          }
          else {
            uVar10 = uStack_6c;
            if (1 < (int)uStack_6c) {
              uVar10 = 2;
            }
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
          }
LAB_0759f8b8:
          System_DateTimeFormat__FormatDigits(lVar13,uVar11,uVar10);
          goto LAB_0759f8c0;
        }
        goto LAB_0759f988;
      }
      if (uVar2 == 0x7a) {
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_6c = System_DateTimeFormat__ParseRepeatPattern(param_2,param_3,uVar21,0x7a);
        System_DateTimeFormat__FormatCustomizedTimeZone(local_68,param_5);
        goto LAB_0759f8c0;
      }
    }
LAB_0759f04c:
    if (lVar13 == 0) goto LAB_0759f988;
    System_Text_StringBuilder__Append(lVar13,uVar2,0);
LAB_0759f1b0:
    uStack_6c = 1;
  }
LAB_0759f8c0:
  uVar21 = uStack_6c + uVar21;
  if ((int)uVar19 <= (int)uVar21) {
    return lVar13;
  }
  goto LAB_0759eb54;
}

