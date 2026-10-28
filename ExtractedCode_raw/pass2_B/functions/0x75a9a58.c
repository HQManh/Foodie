// rea decompile_all
// name: System.DateTimeParse$$ParseByFormat
// address: 0x75a9a58
// body: available
// range: 0x75a9a58-0x75aabcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75aabc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75aabc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_DateTimeParse__ParseByFormat
          (long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined2 local_9c [2];
  undefined8 local_98;
  undefined8 local_90;
  int local_84;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_58;
  uint uStack_54;
  
  if ((DAT_09521c6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_09213988);
    FUN_03f5c2a4(&DAT_092030f8);
    FUN_03f5c2a4(&DAT_091fdd60);
    FUN_03f5c2a4(&DAT_09200208);
    DAT_09521c6e = 1;
  }
  local_70 = 0;
  local_80 = 0.0;
  local_78 = 0;
  local_84 = 0;
  local_98 = 0;
  local_90 = 0;
  local_58 = 0;
  uStack_54 = 0;
  local_68 = 0;
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System___DTString__GetChar(param_2,0);
  lVar12 = DAT_0918db18;
  uVar7 = uVar5 & 0xffff;
  local_9c[0] = (short)uVar5;
  if (uVar7 < 0x4c) {
    if (uVar7 < 0x2f) {
      uVar7 = uVar5 & 0xffff;
      if (0x25 < uVar7) {
        if (uVar7 != 0x27) {
          if (uVar7 != 0x2e) goto LAB_075aa610;
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System___DTString__Match(param_1,0x2e,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System___DTString__GetNext(param_2,0);
            if ((uVar10 & 1) != 0) {
              if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System___DTString__Match(param_2,0x46,0);
              if ((uVar10 & 1) != 0) {
                if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                System___DTString__GetRepeatCount(param_2,0);
                goto LAB_075aaba0;
              }
            }
            goto LAB_075aa6d8;
          }
          goto LAB_075aaba0;
        }
LAB_075a9f5c:
        uVar11 = System_Text_StringBuilderCache__Acquire(0x10,0);
        lVar12 = *param_2;
        lVar2 = param_2[1];
        lVar3 = param_2[2];
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835a8);
        }
        uVar10 = System_DateTimeParse__TryParseQuoteString
                           (lVar12,lVar2,(int)lVar3,uVar11,&uStack_54);
        if ((uVar10 & 1) != 0) {
          *(uint *)(param_2 + 2) = (int)param_2[2] + uStack_54 + -1;
          lVar12 = System_Text_StringBuilderCache__GetStringAndRelease(uVar11,0);
          if (lVar12 == 0) goto LAB_075aabc4;
          if (0 < *(int *)(lVar12 + 0x10)) {
            iVar13 = 0;
            do {
              sVar4 = System_String__get_Chars(lVar12,iVar13,0);
              if ((sVar4 == 0x20) && (*(char *)(param_3 + 0x12) != '\0')) {
                if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                System___DTString__SkipWhiteSpaces(param_1,0);
              }
              else {
                uVar6 = System_String__get_Chars(lVar12,iVar13,0);
                if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918db18);
                }
                uVar10 = System___DTString__Match(param_1,uVar6,0);
                if ((uVar10 & 1) == 0) goto LAB_075aa6d8;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar12 + 0x10));
          }
          uVar7 = *(uint *)(param_5 + 0x24);
          if ((uVar7 >> 0xb & 1) == 0) goto LAB_075aaba0;
          if ((uVar7 >> 0xd & 1) == 0) {
LAB_075aa0a0:
            if (((uVar7 >> 0xe & 1) == 0) ||
               (uVar10 = System_String__op_Equality(lVar12,DAT_09213988,0), (uVar10 & 1) == 0))
            goto LAB_075aaba0;
            uVar7 = *(uint *)(param_5 + 0x24);
          }
          else {
            uVar10 = System_String__op_Equality(lVar12,DAT_092030f8,0);
            uVar7 = *(uint *)(param_5 + 0x24);
            if ((uVar10 & 1) == 0) goto LAB_075aa0a0;
          }
          *(uint *)(param_5 + 0x24) = uVar7 | 0x100;
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          *(undefined8 *)(param_5 + 0x28) = **(undefined8 **)(DAT_0918bd60 + 0xb8);
          goto LAB_075aaba0;
        }
        uVar8 = FUN_03f5c42c(DAT_09535460,local_9c);
        System_DateTimeResult__SetFailure(param_5,3,DAT_091fdd60,uVar8,0);
        System_Text_StringBuilderCache__Release(uVar11,0);
        goto LAB_075aa6e4;
      }
      if (uVar7 == 0x20) {
        if (*(char *)(param_3 + 0x12) == '\0') {
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System___DTString__Match(param_1,0x20,0);
          if ((uVar10 & 1) == 0) {
            if (*(char *)(param_3 + 0x13) == '\0') goto LAB_075aa6d8;
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System___DTString__GetNext(param_2,0);
            if ((uVar10 & 1) == 0) goto LAB_075aa6d8;
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_DateTimeParse__ParseByFormat(param_1,param_2,param_3,param_4,param_5);
            goto joined_r0x075aa520;
          }
        }
      }
      else {
        if (uVar7 == 0x22) goto LAB_075a9f5c;
        if (uVar7 != 0x25) goto LAB_075aa610;
        if ((int)(*(uint *)(param_2 + 1) - 1) <= (int)param_2[2]) goto LAB_075aa18c;
        uVar7 = (int)param_2[2] + 1;
        if (*(uint *)(param_2 + 1) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar12 = *param_2;
        if (*(short *)(lVar12 + (long)(int)uVar7 * 2) == 0x25) goto LAB_075aa190;
      }
    }
    else {
      uVar7 = uVar5 & 0xffff;
      if (0x3a < uVar7) {
        if (uVar7 == 0x46) {
LAB_075aa110:
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System___DTString__GetRepeatCount(param_2,0);
          uStack_54 = uVar7;
          if ((int)uVar7 < 8) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_DateTimeParse__ParseFractionExact(param_1,uVar7,&local_80);
            if (((uVar5 & 0xffff) != 0x66) || ((uVar10 & 1) != 0)) {
              if (0.0 <= *(double *)(param_5 + 0x18)) {
                if (local_80 != *(double *)(param_5 + 0x18)) goto LAB_075aa868;
              }
              else {
                *(double *)(param_5 + 0x18) = local_80;
              }
              goto LAB_075aaba0;
            }
          }
        }
        else {
          if (uVar7 != 0x48) {
            if (uVar7 != 0x4b) goto LAB_075aa610;
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System___DTString__Match(param_1,0x5a,0);
            if ((uVar10 & 1) == 0) {
              if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System___DTString__Match(param_1,0x2b,0);
              if ((uVar10 & 1) == 0) {
                if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = System___DTString__Match(param_1,0x2d,0);
                if ((uVar10 & 1) == 0) goto LAB_075aaba0;
              }
              lVar12 = DAT_0918bd60;
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              local_98 = 0;
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__ParseTimeZoneOffset(param_1,3,&local_98);
              uVar11 = local_98;
              if ((uVar10 & 1) == 0) goto LAB_075aa6d8;
              uVar7 = *(uint *)(param_5 + 0x24);
              if ((uVar7 >> 8 & 1) != 0) {
                uVar8 = *(undefined8 *)(param_5 + 0x28);
                if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = System_TimeSpan__op_Inequality(uVar11,uVar8,0);
                if ((uVar10 & 1) != 0) goto LAB_075aa854;
                uVar7 = *(uint *)(param_5 + 0x24);
                uVar11 = local_98;
              }
LAB_075aab94:
              uVar7 = uVar7 | 0x100;
              *(undefined8 *)(param_5 + 0x28) = uVar11;
            }
            else {
              uVar7 = *(uint *)(param_5 + 0x24);
              if ((uVar7 >> 8 & 1) != 0) {
                uVar11 = *(undefined8 *)(param_5 + 0x28);
                if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = System_TimeSpan__op_Inequality
                                   (uVar11,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
                if ((uVar10 & 1) != 0) {
LAB_075aa854:
                  local_9c[0] = 0x4b;
                  goto LAB_075aa868;
                }
                uVar7 = *(uint *)(param_5 + 0x24);
              }
              uVar7 = uVar7 | 0x300;
              *(undefined8 *)(param_5 + 0x28) = 0;
            }
            *(uint *)(param_5 + 0x24) = uVar7;
            goto LAB_075aaba0;
          }
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_54 = System___DTString__GetRepeatCount(param_2,0);
          uVar6 = 1;
          if (1 < (int)uStack_54) {
            uVar6 = 2;
          }
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = System_DateTimeParse__ParseDigits(param_1,uVar6,&local_70);
          uVar10 = local_70;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = uVar10 & 0xffffffff;
            uVar5 = 0x48;
            param_3 = param_5 + 0xc;
            goto LAB_075aab7c;
          }
        }
        goto LAB_075aa6d8;
      }
      if (uVar7 == 0x2f) {
        if ((param_4 == 0) ||
           (lVar12 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_4,0),
           lVar12 == 0)) goto LAB_075aabc4;
        if (*(int *)(lVar12 + 0x10) < 2) {
LAB_075aa250:
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System___DTString__Match(param_1,0x2f,0);
          if ((uVar10 & 1) != 0) goto LAB_075aaba0;
        }
        else {
          lVar12 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_4,0);
          if (lVar12 == 0) goto LAB_075aabc4;
          sVar4 = System_String__get_Chars(lVar12,0,0);
          if (sVar4 != 0x2f) goto LAB_075aa250;
        }
        lVar12 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(param_4,0);
      }
      else {
        if (uVar7 != 0x3a) goto LAB_075aa610;
        if ((param_4 == 0) ||
           (lVar12 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_4,0),
           lVar12 == 0)) goto LAB_075aabc4;
        if (*(int *)(lVar12 + 0x10) < 2) {
LAB_075a9c80:
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System___DTString__Match(param_1,0x3a,0);
          if ((uVar10 & 1) != 0) goto LAB_075aaba0;
        }
        else {
          lVar12 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_4,0);
          if (lVar12 == 0) goto LAB_075aabc4;
          sVar4 = System_String__get_Chars(lVar12,0,0);
          if (sVar4 != 0x3a) goto LAB_075a9c80;
        }
        lVar12 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(param_4,0);
      }
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918db18);
      }
LAB_075aa6a4:
      uVar10 = System___DTString__Match(param_1,lVar12,0);
joined_r0x075aa520:
      if ((uVar10 & 1) == 0) goto LAB_075aa6d8;
    }
LAB_075aaba0:
    uVar11 = 1;
  }
  else {
    if (uVar7 < 0x69) {
      uVar1 = uVar5 & 0xffff;
      if (uVar1 < 0x5b) {
        if (uVar1 == 0x4d) {
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System___DTString__GetRepeatCount(param_2,0);
          uStack_54 = uVar7;
          if ((int)uVar7 < 3) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_DateTimeParse__ParseDigits(param_1,uVar7,(long)&local_68 + 4);
            if ((uVar10 & 1) != 0) {
LAB_075aaa04:
              uVar10 = local_68 >> 0x20;
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = 0x4d;
              param_3 = param_5 + 4;
              goto LAB_075aab7c;
            }
            if (*(char *)(param_3 + 0x14) != '\0') {
              lVar12 = *(long *)(param_3 + 0x18);
              if (lVar12 == 0) goto LAB_075aabc4;
              uVar10 = (**(code **)(lVar12 + 0x18))
                                 (*(undefined8 *)(lVar12 + 0x40),param_1,uVar7,(long)&local_68 + 4,
                                  *(undefined8 *)(lVar12 + 0x28));
              if ((uVar10 & 1) != 0) goto LAB_075aaa04;
            }
          }
          else {
            if (uVar7 == 3) {
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__MatchAbbreviatedMonthName
                                 (param_1,param_4,(long)&local_68 + 4);
            }
            else {
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__MatchMonthName(param_1,param_4,(long)&local_68 + 4);
            }
            if ((uVar10 & 1) != 0) {
              *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x400;
              goto LAB_075aaa04;
            }
          }
        }
        else {
          if (uVar1 != 0x5a) goto LAB_075aa610;
          uVar7 = *(uint *)(param_5 + 0x24);
          if ((uVar7 >> 8 & 1) != 0) {
            uVar11 = *(undefined8 *)(param_5 + 0x28);
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_TimeSpan__op_Inequality(uVar11,**(undefined8 **)(DAT_0918bd60 + 0xb8),0)
            ;
            if ((uVar10 & 1) != 0) {
              local_9c[0] = 0x5a;
              goto LAB_075aa868;
            }
            uVar7 = *(uint *)(param_5 + 0x24);
          }
          *(undefined8 *)(param_5 + 0x28) = 0;
          *(uint *)(param_5 + 0x24) = uVar7 | 0x300;
          lVar12 = DAT_091835a8;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_DateTimeParse__GetTimeZoneName(param_1);
          if ((uVar10 & 1) != 0) {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
            goto LAB_075aaba0;
          }
        }
      }
      else {
        if (uVar1 == 0x5c) {
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System___DTString__GetNext(param_2,0);
          if ((uVar10 & 1) == 0) {
LAB_075aa18c:
            lVar12 = *param_2;
LAB_075aa190:
            System_DateTimeResult__SetBadFormatSpecifierFailure(param_5,lVar12,param_2[1],0);
            goto LAB_075aa6e4;
          }
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System___DTString__GetChar(param_2,0);
LAB_075aa6cc:
          uVar10 = System___DTString__Match(param_1,uVar5,0);
        }
        else {
          if (uVar7 < 0x67) {
            if (uVar7 == 100) {
              if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = System___DTString__GetRepeatCount(param_2,0);
              uStack_54 = uVar7;
              if ((int)uVar7 < 3) {
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = System_DateTimeParse__ParseDigits(param_1,uVar7,&local_68);
                if ((uVar10 & 1) != 0) {
LAB_075aaaf4:
                  uVar7 = (uint)local_68;
                  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  param_3 = param_5 + 8;
                  goto LAB_075aab74;
                }
                if (*(char *)(param_3 + 0x14) != '\0') {
                  lVar12 = *(long *)(param_3 + 0x18);
                  if (lVar12 == 0) goto LAB_075aabc4;
                  uVar10 = (**(code **)(lVar12 + 0x18))
                                     (*(undefined8 *)(lVar12 + 0x40),param_1,uVar7,&local_68,
                                      *(undefined8 *)(lVar12 + 0x28));
                  if ((uVar10 & 1) != 0) goto LAB_075aaaf4;
                }
              }
              else {
                if (uVar7 == 3) {
                  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar10 = System_DateTimeParse__MatchAbbreviatedDayName
                                     (param_1,param_4,(long)&local_70 + 4);
                }
                else {
                  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar10 = System_DateTimeParse__MatchDayName(param_1,param_4,(long)&local_70 + 4);
                }
                if ((uVar10 & 1) != 0) {
                  local_70._4_4_ = (uint)(local_70 >> 0x20);
                  uVar7 = local_70._4_4_;
                  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  param_3 = param_3 + 8;
LAB_075aab74:
                  uVar10 = (ulong)uVar7;
                  goto LAB_075aab7c;
                }
              }
              goto LAB_075aa6d8;
            }
            if (uVar7 == 0x66) goto LAB_075aa110;
LAB_075aa610:
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = FUN_075ab390(param_2,DAT_092030f8,0);
            if ((uVar10 & 1) != 0) {
              if (DAT_092030f8 == 0) {
LAB_075aabc4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(int *)(param_2 + 2) = (int)param_2[2] + *(int *)(DAT_092030f8 + 0x10) + -1;
              lVar12 = DAT_0918bd60;
              *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x100;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar12 = DAT_0918bd60;
              }
              lVar2 = DAT_0918db18;
              *(undefined8 *)(param_5 + 0x28) = **(undefined8 **)(lVar12 + 0xb8);
              lVar12 = DAT_092030f8;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar12 = DAT_092030f8;
              }
              goto LAB_075aa6a4;
            }
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            goto LAB_075aa6cc;
          }
          if (uVar7 != 0x67) {
            if (uVar7 == 0x68) {
              uVar6 = 1;
              *(undefined1 *)(param_3 + 0x10) = 1;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uStack_54 = System___DTString__GetRepeatCount(param_2,0);
              if (1 < (int)uStack_54) {
                uVar6 = 2;
              }
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__ParseDigits(param_1,uVar6,&local_70);
              if ((uVar10 & 1) != 0) {
                uVar7 = (uint)local_70;
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                param_3 = param_5 + 0xc;
                goto LAB_075aab74;
              }
              goto LAB_075aa6d8;
            }
            goto LAB_075aa610;
          }
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_54 = System___DTString__GetRepeatCount(param_2,0);
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835a8);
          }
          uVar10 = System_DateTimeParse__MatchEraName(param_1,param_4,param_5 + 0x20);
        }
        if ((uVar10 & 1) != 0) goto LAB_075aaba0;
      }
    }
    else {
      uVar7 = uVar5 & 0xffff;
      if (uVar7 < 0x74) {
        if (uVar7 == 0x6d) {
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_54 = System___DTString__GetRepeatCount(param_2,0);
          uVar6 = 1;
          if (1 < (int)uStack_54) {
            uVar6 = 2;
          }
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_DateTimeParse__ParseDigits(param_1,uVar6,(long)&local_78 + 4);
          if ((uVar10 & 1) != 0) {
            uVar10 = local_78 >> 0x20;
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = 0x6d;
            param_3 = param_5 + 0x10;
LAB_075aab7c:
            uVar10 = System_DateTimeParse__CheckNewValue(param_3,uVar10,uVar5,param_5);
            if ((uVar10 & 1) == 0) goto LAB_075aa6e4;
            goto LAB_075aaba0;
          }
        }
        else {
          if (uVar7 != 0x73) goto LAB_075aa610;
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_54 = System___DTString__GetRepeatCount(param_2,0);
          uVar6 = 1;
          if (1 < (int)uStack_54) {
            uVar6 = 2;
          }
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = System_DateTimeParse__ParseDigits(param_1,uVar6,&local_78);
          uVar10 = local_78;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = uVar10 & 0xffffffff;
            uVar5 = 0x73;
            param_3 = param_5 + 0x14;
            goto LAB_075aab7c;
          }
        }
      }
      else if (uVar7 == 0x74) {
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_54 = System___DTString__GetRepeatCount(param_2,0);
        if (uStack_54 == 1) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_DateTimeParse__MatchAbbreviatedTimeMark(param_1,param_4,&local_84);
        }
        else {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_DateTimeParse__MatchTimeMark(param_1,param_4,&local_84);
        }
        if ((uVar10 & 1) != 0) {
          if (*(int *)(param_3 + 0xc) == -1) {
            *(int *)(param_3 + 0xc) = local_84;
          }
          else if (*(int *)(param_3 + 0xc) != local_84) {
            local_9c[0] = 0x74;
LAB_075aa868:
            uVar11 = FUN_03f5c42c(DAT_09535460,local_9c);
            System_DateTimeResult__SetFailure(param_5,3,DAT_09200208,uVar11,0);
            goto LAB_075aa6e4;
          }
          goto LAB_075aaba0;
        }
      }
      else {
        if (uVar7 != 0x7a) {
          if (uVar7 != 0x79) goto LAB_075aa610;
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System___DTString__GetRepeatCount(param_2,0);
          uStack_54 = uVar7;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835a8);
          }
          uVar10 = FUN_075ab4a4(param_1,param_4,0);
          if ((uVar10 & 1) == 0) {
            if (param_4 == 0) goto LAB_075aabc4;
            uVar10 = System_Globalization_DateTimeFormatInfo__get_HasForceTwoDigitYears(param_4,0);
            if ((uVar10 & 1) == 0) {
              if ((int)uVar7 < 3) {
                *(undefined1 *)(param_3 + 0x11) = 1;
              }
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__ParseDigits(param_1,uVar7,&local_58);
            }
            else {
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_DateTimeParse__ParseDigits(param_1,1,4,&local_58);
            }
            if ((uVar10 & 1) == 0) {
              if (*(char *)(param_3 + 0x14) != '\0') {
                lVar12 = *(long *)(param_3 + 0x18);
                if (lVar12 == 0) goto LAB_075aabc4;
                uVar10 = (**(code **)(lVar12 + 0x18))
                                   (*(undefined8 *)(lVar12 + 0x40),param_1,uVar7,&local_58,
                                    *(undefined8 *)(lVar12 + 0x28));
                if ((uVar10 & 1) != 0) goto LAB_075a9f38;
              }
              goto LAB_075aa6d8;
            }
          }
          else {
            local_58 = 1;
          }
LAB_075a9f38:
          uVar7 = local_58;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = (ulong)uVar7;
          uVar5 = 0x79;
          param_3 = param_5;
          goto LAB_075aab7c;
        }
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System___DTString__GetRepeatCount(param_2,0);
        uStack_54 = uVar7;
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        local_90 = 0;
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_DateTimeParse__ParseTimeZoneOffset(param_1,uVar7,&local_90);
        uVar11 = local_90;
        if ((uVar10 & 1) != 0) {
          uVar7 = *(uint *)(param_5 + 0x24);
          if ((uVar7 >> 8 & 1) != 0) {
            uVar8 = *(undefined8 *)(param_5 + 0x28);
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_TimeSpan__op_Inequality(uVar11,uVar8,0);
            if ((uVar10 & 1) != 0) {
              local_9c[0] = 0x7a;
              goto LAB_075aa868;
            }
            uVar7 = *(uint *)(param_5 + 0x24);
            uVar11 = local_90;
          }
          goto LAB_075aab94;
        }
      }
    }
LAB_075aa6d8:
    System_DateTimeResult__SetBadDateTimeFailure(param_5,0);
LAB_075aa6e4:
    uVar11 = 0;
  }
  return uVar11;
}

