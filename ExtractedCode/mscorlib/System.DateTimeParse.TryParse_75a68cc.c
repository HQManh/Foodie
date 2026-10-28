// rea decompile_all
// name: System.DateTimeParse$$TryParse
// address: 0x75a68cc
// body: available
// range: 0x75a68cc-0x75a704b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a7030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a7044 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a7048 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DateTimeParse__TryParse
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 *puVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  long local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_84 = param_4;
  local_80 = param_3;
  if ((DAT_09521c56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_0920dc90);
    FUN_03f5c2a4(&DAT_0920dc88);
    FUN_03f5c2a4(&DAT_0920ec70);
    DAT_09521c56 = 1;
  }
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0.0;
  if ((int)param_2 == 0) {
    uVar12 = 3;
    puVar16 = &DAT_0920dc90;
    goto LAB_075a6de8;
  }
  local_a0 = 0x10000000000;
  local_98 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0.0;
  local_108 = 0;
  local_110 = 0;
  System_DateTimeRawInfo__Init(&local_d0,&local_110,0);
  if (((local_80 != 0) &&
      (lVar11 = System_Globalization_DateTimeFormatInfo__get_DateSeparator(local_80,0),
      local_80 != 0)) &&
     (uVar12 = System_Globalization_DateTimeFormatInfo__get_TimeSeparator(local_80,0), lVar11 != 0))
  {
    uVar6 = System_String__Equals(lVar11,uVar12,4,0);
    lVar11 = local_80;
    uStack_a8 = CONCAT71(uStack_a8._1_7_,uVar6) & 0xffffffffffffff01;
    if (local_80 != 0) {
      iVar3 = *(int *)(DAT_0918db18 + 0xe4);
      plVar15 = (long *)(param_5 + 0xc);
      *plVar15 = *(long *)(local_80 + 0x78);
      param_5[8] = 0;
      if (iVar3 == 0) {
        FUN_03f5c424();
      }
      System___DTString___ctor(&local_100,param_1,param_2,lVar11,0);
      System___DTString__GetNext(&local_100,0);
      bVar5 = false;
      uVar10 = 0;
      do {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_DateTimeParse__Lex
                           (uVar10,&local_100,&local_a0,&local_d0,param_5,&local_80,param_4);
        if ((uVar13 & 1) == 0) goto LAB_075a6fac;
        if ((uint)local_a0 != 0x12) {
          uVar8 = (uint)local_a0;
          if (local_a0._4_4_ != 0x100) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar13 = System_DateTimeParse__ProcessDateTimeSuffix(param_5,&local_d0,&local_a0);
            if ((uVar13 & 1) == 0) goto LAB_075a6fa0;
            local_a0 = CONCAT44(0x100,(uint)local_a0);
            uVar8 = (uint)local_a0;
          }
          if (uVar8 != 0x13) {
            if ((uStack_a8 & 1) == 0) goto LAB_075a6c44;
            uVar1 = 3;
            if (uVar10 != 0x12) {
              uVar1 = uVar10;
            }
            uVar2 = 5;
            if (uVar1 != 0x13) {
              uVar2 = uVar1;
            }
            if ((uVar8 & 0xfffffffd) != 0xc && uVar8 != 0xd) {
              uVar2 = uVar10;
            }
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            bVar7 = System___DTString__AtEnd(&local_100,0);
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835a8);
            }
            lVar11 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_075a7020;
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_075a7020;
              if ((uint)local_a0 < *(uint *)(lVar11 + 0x18)) {
                uVar10 = uVar2;
                if ((*(int *)(lVar11 + (long)(int)(uint)local_a0 * 4 + 0x20) != 0x14 &
                    (bVar7 ^ 0xff)) == 0) {
                  if ((int)(uint)local_a0 < 8) {
                    if (((uint)local_a0 != 4) && ((uint)local_a0 != 5)) goto LAB_075a6c44;
                    uVar17 = 3;
                    if ((bVar7 & 1) != 0) {
                      uVar17 = 1;
                    }
                  }
                  else if ((uint)local_a0 == 8) {
                    uVar17 = 6;
                    if ((bVar7 & 1) == 0) {
                      uVar17 = 7;
                    }
                  }
                  else {
                    if ((uint)local_a0 != 0xd) goto LAB_075a6c44;
                    uVar17 = 0xe;
                    if ((bVar7 & 1) == 0) {
                      uVar17 = 0xc;
                    }
                  }
                  local_a0 = CONCAT44(local_a0._4_4_,uVar17);
                }
LAB_075a6c44:
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835a8);
                }
                lVar11 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
                if (lVar11 == 0) goto LAB_075a7020;
                if (uVar10 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = *(long *)(lVar11 + (long)(int)uVar10 * 8 + 0x20);
                  if (lVar11 == 0) goto LAB_075a7020;
                  if ((uint)local_a0 < *(uint *)(lVar11 + 0x18)) {
                    uVar10 = *(uint *)(lVar11 + (long)(int)(uint)local_a0 * 4 + 0x20);
                    if (uVar10 == 0x14) goto LAB_075a6fa0;
                    if (0x14 < (int)uVar10) {
                      if (local_80 == 0) goto LAB_075a7020;
                      uVar8 = System_Globalization_DateTimeFormatInfo__get_FormatFlags(local_80,0);
                      lVar11 = local_80;
                      if ((uVar8 >> 3 & 1) == 0) {
                        uVar12 = extraout_x1;
                        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                          FUN_03f5c424();
                          uVar12 = extraout_x1_00;
                        }
                        uVar13 = System_DateTimeParse__ProcessTerminalState
                                           (uVar10,uVar12,param_5,&local_84,&local_d0,lVar11);
joined_r0x075a6d6c:
                        if ((uVar13 & 1) == 0) goto LAB_075a6fac;
                      }
                      else {
                        uVar12 = extraout_x1;
                        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
                          FUN_03f5c424();
                          uVar12 = extraout_x1_01;
                        }
                        if (DAT_095216cd == '\0') {
                          FUN_03f5c2a4(&DAT_09184c68);
                          DAT_095216cd = '\x01';
                          uVar12 = extraout_x1_02;
                        }
                        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
                          FUN_03f5c424();
                          uVar12 = extraout_x1_03;
                        }
                        lVar11 = local_80;
                        if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
                          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                            FUN_03f5c424();
                            uVar12 = extraout_x1_04;
                          }
                          uVar13 = System_DateTimeParse__ProcessHebrewTerminalState
                                             (uVar10,uVar12,param_5,&local_84,&local_d0,lVar11);
                          goto joined_r0x075a6d6c;
                        }
                      }
                      uVar10 = 0;
                      bVar5 = true;
                    }
                    goto LAB_075a6d7c;
                  }
                }
              }
            }
            if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_075a7048;
          }
          if ((uVar10 & 0xfffffffe) != 0xc) goto LAB_075a6fa0;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_DateTimeParse__ParseISO8601(&local_d0,&local_100,param_4,param_5);
          goto LAB_075a6fb0;
        }
LAB_075a6d7c:
        lVar11 = local_80;
      } while ((6 < (uint)local_a0) || ((1 << (ulong)((uint)local_a0 & 0x1f) & 0x43U) == 0));
      if (!bVar5) goto LAB_075a6fa0;
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_DateTimeParse__AdjustTimeMark(lVar11,&local_d0);
      uVar17 = local_84;
      if (uStack_b8._4_4_ == -1) {
LAB_075a6e48:
        if ((*param_5 == -1) && (param_5[1] == -1)) {
          bVar5 = param_5[2] == -1;
        }
        else {
          bVar5 = false;
        }
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_DateTimeParse__CheckDefaultDateTime(param_5,plVar15,uVar17);
        if ((uVar13 & 1) == 0) goto LAB_075a6fac;
        plVar14 = (long *)*plVar15;
        if (plVar14 == (long *)0x0) goto LAB_075a7020;
        uVar13 = (**(code **)(*plVar14 + 0x2e8))
                           (plVar14,*param_5,param_5[1],param_5[2],param_5[3],param_5[4],param_5[5],
                            0,param_5[8],&local_90,*(undefined8 *)(*plVar14 + 0x2f0));
        dVar18 = local_b0;
        if ((uVar13 & 1) == 0) {
          uVar12 = 7;
          puVar16 = &DAT_0920ec70;
LAB_075a6de8:
          System_DateTimeResult__SetFailure(param_5,uVar12,*puVar16,0);
          goto LAB_075a6fac;
        }
        if (0.0 < local_b0) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar18 = (double)FUN_03eb5504(dVar18 * 10000000.0);
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = -0x8000000000000000;
          if (dVar18 != INFINITY) {
            lVar11 = (long)dVar18;
          }
          local_90 = System_DateTime__AddTicks(&local_90,lVar11);
        }
        iVar3 = local_c0._4_4_;
        if (local_c0._4_4_ != -1) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_075a7020;
          iVar9 = (**(code **)(*plVar15 + 0x1f8))
                            (plVar15,local_90,*(undefined8 *)(*plVar15 + 0x200));
          if (iVar3 != iVar9) {
            uVar12 = 4;
            puVar16 = &DAT_0920dc88;
            goto LAB_075a6de8;
          }
        }
        lVar11 = DAT_091835a8;
        *(undefined8 *)(param_5 + 0xe) = local_90;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_DateTimeParse__DetermineTimeZoneAdjustments(&local_100,param_5,uVar17,bVar5)
        ;
      }
      else {
        if (uStack_b8._4_4_ == 0) {
          uVar8 = param_5[3];
          if (uVar8 < 0xd) {
            uVar10 = 0;
            if (uVar8 != 0xc) {
              uVar10 = uVar8;
            }
LAB_075a6e44:
            param_5[3] = uVar10;
            goto LAB_075a6e48;
          }
        }
        else {
          uVar10 = param_5[3];
          if (uVar10 < 0x18) {
            if (uVar10 < 0xc) {
              uVar10 = uVar10 + 0xc;
              goto LAB_075a6e44;
            }
            goto LAB_075a6e48;
          }
        }
LAB_075a6fa0:
        System_DateTimeResult__SetBadDateTimeFailure(param_5,0);
LAB_075a6fac:
        uVar10 = 0;
      }
LAB_075a6fb0:
      if (*(long *)(lVar4 + 0x28) == local_78) {
        return uVar10 & 1;
      }
      goto LAB_075a7048;
    }
  }
LAB_075a7020:
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_075a7048:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

