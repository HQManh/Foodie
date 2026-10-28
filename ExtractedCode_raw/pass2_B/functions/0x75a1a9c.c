// rea decompile_all
// name: System.DateTimeParse$$DoStrictParse
// address: 0x75a1a9c
// body: available
// range: 0x75a1a9c-0x75a2223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a221c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a2220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DateTimeParse__DoStrictParse
               (undefined8 param_1,undefined8 param_2,short *param_3,ulong param_4,uint param_5,
               long param_6,int *param_7)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  double dVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  local_68 = param_6;
  if ((DAT_09521c70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09177f20);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_091d22a0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091e8a80);
    FUN_03f5c2a4(&DAT_0918fd50);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_0920dc88);
    FUN_03f5c2a4(&DAT_0920ec70);
    DAT_09521c70 = 1;
  }
  local_a0 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = 0;
  System_ParsingInfo__Init(&local_90,0);
  if (local_68 != 0) {
    local_90 = *(long **)(local_68 + 0x78);
    thunk_FUN_03f5d7b8(&local_90);
    local_80 = CONCAT53(local_80._3_5_,CONCAT12((char)(param_5 >> 2),(undefined2)local_80)) &
               0xffffffffff01ffff;
    local_80 = CONCAT44(local_80._4_4_,CONCAT13((char)(param_5 >> 1),(undefined3)local_80)) &
               0xffffffff01ffffff;
    if ((int)param_4 == 1) {
      if (((*(byte *)((long)param_7 + 0x25) >> 3 & 1) != 0) && (*param_3 == 0x55)) {
        System_DateTimeResult__SetBadFormatSpecifierFailure(param_7,param_3,param_4,0);
        goto LAB_075a1f68;
      }
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = System_DateTimeParse__ExpandPredefinedFormat
                        (param_3,param_4,&local_68,&local_90,param_7);
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
      }
      if (lVar8 == 0) {
        uVar13 = 0;
        param_3 = (short *)0x0;
        param_4 = 0;
      }
      else {
        param_3 = (short *)System_String__GetRawStringData(lVar8,0);
        param_4 = (ulong)*(uint *)(lVar8 + 0x10);
        uVar13 = 0;
      }
    }
    else {
      uVar13 = param_4 & 0xffffffff00000000;
    }
    lVar8 = DAT_09184c68;
    *(long **)(param_7 + 0xc) = local_90;
    if (*(int *)(lVar8 + 0xe4) == 0) {
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
      if (local_90 == (long *)0x0) goto LAB_075a221c;
      sVar4 = (**(code **)(*local_90 + 0x1a8))(local_90,*(undefined8 *)(*local_90 + 0x1b0));
      if (sVar4 == 8) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(DAT_0918fd50 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar10 = *(undefined8 **)(DAT_0918fd50 + 0xb8);
        lVar8 = puVar10[1];
        uVar11 = *(undefined8 *)(DAT_091835a8 + 0xb8);
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918fd50 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar10 = *(undefined8 **)(DAT_0918fd50 + 0xb8);
          }
          uVar12 = *puVar10;
          lVar8 = thunk_FUN_03f9944c(DAT_09177f20);
          FUN_053017a8(lVar8,uVar12,DAT_091e8a80,0);
          plVar9 = (long *)(*(long *)(DAT_0918fd50 + 0xb8) + 8);
          *plVar9 = lVar8;
          thunk_FUN_03f5d7b8(plVar9,lVar8);
        }
        FUN_04be0954(uVar11,lVar8,DAT_091d22a0);
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_78 = **(undefined8 **)(DAT_091835a8 + 0xb8);
        thunk_FUN_03f5d7b8(&local_78);
        local_80._0_5_ = CONCAT14(1,(undefined4)local_80);
      }
    }
    lVar2 = local_68;
    param_7[5] = -1;
    lVar8 = DAT_0918db18;
    param_7[3] = -1;
    param_7[4] = -1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System___DTString___ctor(&local_c0,param_3,uVar13 | param_4 & 0xffffffff,lVar2,0,0);
    System___DTString___ctor(&local_f0,param_1,param_2,local_68,0,0);
    if ((local_80 & 0x1000000) != 0) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__TrimTail(&local_c0,0);
      System___DTString__RemoveTrailingInQuoteSpaces(&local_c0,0);
      System___DTString__TrimTail(&local_f0,0);
    }
    if ((param_5 & 1) != 0) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__SkipWhiteSpaces(&local_c0,0);
      System___DTString__RemoveLeadingInQuoteSpaces(&local_c0,0);
      System___DTString__SkipWhiteSpaces(&local_f0,0);
    }
    do {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = System___DTString__GetNext(&local_c0,0);
      if ((uVar13 & 1) == 0) {
        if ((int)local_e0 < (int)uStack_e8 + -1) goto LAB_075a1f5c;
        if ((local_80 & 0x100) != 0) {
          if (local_68 == 0) goto LAB_075a221c;
          uVar5 = System_Globalization_DateTimeFormatInfo__get_FormatFlags(local_68,0);
          if ((uVar5 >> 3 & 1) == 0) {
            if (99 < *param_7) goto LAB_075a1f5c;
            if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar6 = (**(code **)(*local_90 + 0x348))
                              (local_90,*param_7,*(undefined8 *)(*local_90 + 0x350));
            *param_7 = iVar6;
          }
        }
        if ((local_80 & 1) == 0) {
          if (uStack_88._4_4_ == 1) {
            if (param_7[3] < 0xc) goto LAB_075a1f5c;
          }
          else if ((uStack_88._4_4_ == 0) && (0xb < param_7[3])) goto LAB_075a1f5c;
LAB_075a2058:
          if ((*param_7 == -1) && (param_7[1] == -1)) {
            bVar3 = param_7[2] == -1;
          }
          else {
            bVar3 = false;
          }
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = System_DateTimeParse__CheckDefaultDateTime(param_7,&local_90,param_5);
          if ((uVar13 & 1) != 0) {
            if (bVar3 == false) {
              if (local_68 == 0) goto LAB_075a221c;
              uVar13 = System_Globalization_DateTimeFormatInfo__get_HasYearMonthAdjustment
                                 (local_68,0);
              if ((uVar13 & 1) == 0) goto LAB_075a20d4;
              if (local_68 == 0) goto LAB_075a221c;
              uVar13 = System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
                                 (local_68,param_7,param_7 + 1,(uint)param_7[9] >> 10 & 1,0);
              if ((uVar13 & 1) != 0) goto LAB_075a20d4;
LAB_075a21d8:
              uVar11 = 7;
              puVar10 = &DAT_0920ec70;
            }
            else {
LAB_075a20d4:
              if (local_90 == (long *)0x0) goto LAB_075a221c;
              piVar1 = param_7 + 0xe;
              uVar13 = (**(code **)(*local_90 + 0x2e8))
                                 (local_90,*param_7,param_7[1],param_7[2],param_7[3],param_7[4],
                                  param_7[5],0,param_7[8],piVar1,*(undefined8 *)(*local_90 + 0x2f0))
              ;
              if ((uVar13 & 1) == 0) goto LAB_075a21d8;
              dVar14 = *(double *)(param_7 + 6);
              if (0.0 < dVar14) {
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                dVar14 = (double)FUN_03eb5504(dVar14 * 10000000.0);
                if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar8 = -0x8000000000000000;
                if (dVar14 != INFINITY) {
                  lVar8 = (long)dVar14;
                }
                uVar11 = System_DateTime__AddTicks(piVar1,lVar8);
                *(undefined8 *)piVar1 = uVar11;
              }
              iVar6 = (int)uStack_88;
              if ((int)uStack_88 == -1) {
LAB_075a21b0:
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = System_DateTimeParse__DetermineTimeZoneAdjustments
                                  (&local_f0,param_7,param_5,bVar3);
                goto LAB_075a1f6c;
              }
              if (local_90 == (long *)0x0) goto LAB_075a221c;
              iVar7 = (**(code **)(*local_90 + 0x1f8))
                                (local_90,*(undefined8 *)piVar1,*(undefined8 *)(*local_90 + 0x200));
              if (iVar6 == iVar7) goto LAB_075a21b0;
              uVar11 = 4;
              puVar10 = &DAT_0920dc88;
            }
            System_DateTimeResult__SetFailure(param_7,uVar11,*puVar10,0);
          }
        }
        else {
          if (uStack_88._4_4_ == -1) {
            iVar6 = param_7[3];
            uStack_88 = uStack_88 & 0xffffffff;
            if (iVar6 < 0xd) {
LAB_075a2038:
              if (iVar6 != 0xc) goto LAB_075a2058;
              iVar6 = 0;
              goto LAB_075a2044;
            }
          }
          else {
            iVar6 = param_7[3];
            if (iVar6 < 0xd) {
              if (uStack_88._4_4_ == 0) goto LAB_075a2038;
              if (iVar6 != 0xc) {
                iVar6 = iVar6 + 0xc;
              }
LAB_075a2044:
              param_7[3] = iVar6;
              goto LAB_075a2058;
            }
          }
LAB_075a1f5c:
          System_DateTimeResult__SetBadDateTimeFailure(param_7,0);
        }
        break;
      }
      if ((local_80 & 0x10000) != 0) {
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System___DTString__SkipWhiteSpaces(&local_f0,0);
      }
      lVar8 = local_68;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = System_DateTimeParse__ParseByFormat(&local_f0,&local_c0,&local_90,lVar8,param_7);
    } while ((uVar13 & 1) != 0);
LAB_075a1f68:
    uVar5 = 0;
LAB_075a1f6c:
    return uVar5 & 1;
  }
LAB_075a221c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

