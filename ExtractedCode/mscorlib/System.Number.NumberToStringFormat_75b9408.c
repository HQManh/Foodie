// rea decompile_all
// name: System.Number$$NumberToStringFormat
// address: 0x75b9408
// body: available
// range: 0x75b9408-0x75ba5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ba5c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ba5e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ba5e4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__NumberToStringFormat
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  ushort *puVar26;
  short *psVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  short *psVar33;
  ushort uVar34;
  short sVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  int local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  long local_e8;
  long local_e0;
  uint local_d4;
  long local_d0;
  long local_c8;
  int local_bc;
  long local_b8;
  undefined8 local_b0;
  uint local_a4;
  long local_a0;
  uint local_94;
  short *local_90;
  uint local_84;
  undefined8 local_80;
  undefined1 local_78 [16];
  long local_68;
  undefined1 auVar4 [12];
  
  local_e8 = tpidr_el0;
  local_68 = *(long *)(local_e8 + 0x28);
  local_a0 = param_5;
  local_80 = param_3;
  if ((DAT_09521d57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091baae8);
    FUN_03f5c2a4(&DAT_091baae0);
    FUN_03f5c2a4(&DAT_091bab00);
    FUN_03f5c2a4(&DAT_091bab10);
    DAT_09521d57 = 1;
  }
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_90 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  if (*local_90 == 0) {
    uVar15 = 2;
  }
  else {
    uVar15 = System_Number_NumberBuffer__get_sign(param_2,0);
    uVar15 = uVar15 & 1;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = System_Number__FindSection(local_80,param_4,uVar15);
  iVar37 = (int)param_4;
  local_c8 = (long)iVar37;
  local_a4 = 0;
  do {
    uVar29 = uVar15;
    lVar16 = FUN_04c072b4(local_80,param_4,DAT_091d3030);
    if ((int)uVar29 < iVar37) {
      iVar32 = 0;
      iVar28 = 0;
      local_84 = 0;
      local_94 = 0;
      iVar24 = 0;
      iVar36 = 0x7fffffff;
      iVar23 = -1;
      uVar15 = uVar29;
      iVar21 = -1;
      do {
        uVar34 = *(ushort *)(lVar16 + (long)(int)uVar15 * 2);
        iVar22 = iVar21;
        if ((uVar34 == 0x3b) || (uVar34 == 0)) break;
        uVar25 = uVar15 + 1;
        iVar11 = iVar32;
        iVar12 = iVar36;
        uVar20 = local_a4;
        if (uVar34 < 0x46) {
          if (uVar34 < 0x27) {
            if (uVar34 < 0x24) {
              if (uVar34 == 0x22) goto LAB_075b9664;
              if (uVar34 == 0x23) {
                iVar11 = iVar32 + 1;
              }
              else {
LAB_075b96e8:
                if (uVar34 == 0x45) goto LAB_075b96f0;
              }
            }
            else if (uVar34 != 0x24) {
              if (uVar34 == 0x25) {
                iVar24 = iVar24 + 2;
              }
              else if (uVar34 != 0x26) goto LAB_075b96e8;
            }
          }
          else if (uVar34 < 0x2e) {
            if (uVar34 == 0x27) {
LAB_075b9664:
              lVar31 = (long)(int)uVar25;
              puVar26 = (ushort *)(lVar16 + (long)(int)uVar25 * 2);
              lVar1 = lVar31;
              if (lVar31 <= local_c8) {
                lVar1 = local_c8;
              }
              do {
                if (lVar1 == lVar31) goto LAB_075b9790;
                uVar2 = *puVar26;
                if (uVar2 == 0) break;
                lVar31 = lVar31 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar2 != uVar34);
              uVar25 = (uint)lVar31;
            }
            else if (uVar34 == 0x2c) {
              if ((0 < iVar32) && (iVar21 < 0)) {
                if (iVar23 < 0) {
                  local_a4 = 1;
                  iVar23 = iVar32;
                  uVar20 = local_a4;
                }
                else {
                  bVar13 = iVar23 != iVar32;
                  local_94 = bVar13 | local_94;
                  iVar23 = iVar32;
                  uVar20 = 1;
                  if (!bVar13) {
                    uVar20 = local_a4 + 1;
                  }
                }
              }
            }
            else if (uVar34 != 0x2d) goto LAB_075b96e8;
          }
          else if (uVar34 == 0x2e) {
            iVar22 = iVar32;
            if (-1 < iVar21) {
              iVar22 = iVar21;
            }
          }
          else if (uVar34 != 0x2f) {
            if (uVar34 != 0x30) goto LAB_075b96e8;
            iVar28 = iVar32 + 1;
            iVar11 = iVar28;
            iVar12 = iVar32;
            if (iVar36 != 0x7fffffff) {
              iVar12 = iVar36;
            }
          }
        }
        else if (uVar34 == 0x5c) {
          if (((int)uVar25 < iVar37) && (*(short *)(lVar16 + (long)(int)uVar25 * 2) != 0)) {
            uVar25 = uVar15 + 2;
          }
        }
        else if (uVar34 == 0x65) {
LAB_075b96f0:
          if (((int)uVar25 < iVar37) && (*(short *)(lVar16 + (long)(int)uVar25 * 2) == 0x30))
          goto LAB_075b9730;
          if (((int)(uVar15 + 2) < iVar37) &&
             ((sVar35 = *(short *)(lVar16 + (long)(int)uVar25 * 2), sVar35 == 0x2d ||
              (sVar35 == 0x2b)))) {
            sVar35 = *(short *)(lVar16 + (long)(int)(uVar15 + 2) * 2);
            while (sVar35 == 0x30) {
LAB_075b9730:
              uVar25 = uVar25 + 1;
              if (iVar37 <= (int)uVar25) {
                local_84 = 1;
                goto LAB_075b9790;
              }
              local_84 = 1;
              sVar35 = *(short *)(lVar16 + (long)(int)uVar25 * 2);
            }
          }
        }
        else if (uVar34 == 0x2030) {
          iVar24 = iVar24 + 3;
        }
        local_a4 = uVar20;
        iVar36 = iVar12;
        uVar15 = uVar25;
        iVar32 = iVar11;
        iVar21 = iVar22;
      } while ((int)uVar15 < iVar37);
LAB_075b9790:
      iVar21 = iVar32;
      if (-1 < iVar22) {
        iVar21 = iVar22;
      }
      if (-1 < iVar23) {
        if (iVar23 == iVar21) {
          iVar24 = local_a4 * -3 + iVar24;
        }
        else {
          local_94 = 1;
        }
      }
    }
    else {
      iVar21 = 0;
      local_84 = 0;
      iVar28 = 0;
      iVar32 = 0;
      iVar24 = 0;
      local_94 = 0;
      iVar36 = 0x7fffffff;
    }
    if (*local_90 == 0) {
      System_Number_NumberBuffer__set_sign(param_2,0,0);
      *(undefined4 *)(param_2 + 4) = 0;
      break;
    }
    iVar24 = *(int *)(param_2 + 4) + iVar24;
    *(int *)(param_2 + 4) = iVar24;
    iVar23 = iVar32;
    if (local_84 == 0) {
      iVar23 = (iVar32 - iVar21) + iVar24;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Number__RoundNumber(param_2,iVar23);
    if (*local_90 != 0) break;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar15 = System_Number__FindSection(local_80,param_4,2);
  } while (uVar15 != uVar29);
  local_f0 = iVar21 - iVar36;
  local_a4 = 0;
  if (local_f0 == 0 || iVar21 < iVar36) {
    local_f0 = 0;
  }
  local_ec = iVar21 - iVar28;
  if (iVar28 <= iVar21) {
    local_ec = 0;
  }
  iVar37 = iVar21;
  if ((local_84 & 1) == 0) {
    iVar37 = *(int *)(param_2 + 4);
    local_a4 = iVar37 - iVar21;
    if (local_a4 == 0 || iVar37 < iVar21) {
      iVar37 = iVar21;
    }
  }
  puVar19 = &local_110;
  local_110 = 0;
  uStack_108 = 0;
  auVar10._8_8_ = 4;
  auVar10._0_8_ = puVar19;
  auVar9._8_8_ = 4;
  auVar9._0_8_ = puVar19;
  auVar8._8_8_ = 4;
  auVar8._0_8_ = puVar19;
  local_78._8_8_ = 4;
  local_78._0_8_ = puVar19;
  auVar7._8_8_ = 4;
  auVar7._0_8_ = puVar19;
  auVar6._8_8_ = 4;
  auVar6._0_8_ = puVar19;
  auVar39._8_8_ = 4;
  auVar39._0_8_ = puVar19;
  local_e0 = param_2;
  local_b0 = param_4;
  if ((local_94 & 1) == 0) {
LAB_075b9914:
    uVar15 = 0xffffffff;
LAB_075b9918:
    local_f4 = iVar32;
    local_bc = iVar21;
    uVar17 = System_Number_NumberBuffer__get_sign(local_e0,0);
    uVar18 = local_b0;
    if (((uVar17 & 1) == 0) || (uVar29 != 0)) {
LAB_075b99c8:
      local_b8 = FUN_04c072b4(local_80,uVar18,DAT_091d3030);
      if ((int)uVar29 < (int)uVar18) {
        local_80 = CONCAT44(local_80._4_4_,local_94) ^ 1;
        local_f8 = (int)local_b0 + -2;
        local_d4 = 0;
        local_d0 = CONCAT44(local_d0._4_4_,-(int)local_b0);
        psVar33 = local_90;
        uVar25 = local_84;
LAB_075b9a14:
        uVar34 = *(ushort *)(local_b8 + (long)(int)uVar29 * 2);
        if ((uVar34 == 0x3b) || (local_84 = uVar29, uVar34 == 0)) goto LAB_075ba464;
        lVar16 = local_a0;
        uVar20 = local_a4;
        if ((0 < (int)local_a4) &&
           ((uVar34 < 0x31 && ((1L << ((ulong)uVar34 & 0x3f) & 0x1400800000000U) != 0)))) {
          iVar28 = local_a4 + 1;
          local_94 = local_a4;
          if (0 < (int)local_a4) {
            local_94 = 1;
          }
          local_94 = local_94 - 1;
          uVar29 = (uint)local_80;
          do {
            sVar35 = *psVar33;
            sVar3 = 0x30;
            if (sVar35 != 0) {
              psVar33 = psVar33 + 1;
              sVar3 = sVar35;
            }
            if (DAT_09521150 == '\0') {
              FUN_03f5c2a4(&DAT_091ba998);
              DAT_09521150 = '\x01';
            }
            uVar20 = *(uint *)(param_1 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
              *(uint *)(param_1 + 0x18) = uVar20 + 1;
              *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = sVar3;
            }
            else {
              System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar3,0);
            }
            if (((uVar29 & 1) == 0 && 1 < iVar37) && (-1 < (int)uVar15)) {
              if ((uint)local_78._8_4_ <= uVar15) goto LAB_075ba5b4;
              if (iVar37 == *(int *)(local_78._0_8_ + (ulong)uVar15 * 4) + 1) {
                auVar8 = local_78;
                if (lVar16 == 0) goto LAB_075ba5cc;
                lVar31 = *(long *)(lVar16 + 0x40);
                if (DAT_09521d81 == '\0') {
                  FUN_03f5c2a4(&DAT_091ba998);
                  DAT_09521d81 = '\x01';
                }
                auVar8 = local_78;
                if (lVar31 == 0) goto LAB_075ba5cc;
                if (*(int *)(lVar31 + 0x10) == 1) {
                  uVar29 = *(uint *)(param_1 + 0x18);
                  if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar29) goto LAB_075b9b9c;
                  if (*(uint *)(param_1 + 0x10) <= uVar29) goto LAB_075ba5b4;
                  lVar16 = *(long *)(param_1 + 8);
                  uVar14 = System_String__get_Chars(lVar31,0,0);
                  *(undefined2 *)(lVar16 + (long)(int)uVar29 * 2) = uVar14;
                  *(uint *)(param_1 + 0x18) = uVar29 + 1;
                  lVar16 = local_a0;
                }
                else {
LAB_075b9b9c:
                  System_Text_ValueStringBuilder__AppendSlow(param_1,lVar31,0);
                }
                uVar15 = uVar15 - 1;
                uVar29 = (uint)local_80;
              }
            }
            iVar28 = iVar28 + -1;
            iVar37 = iVar37 + -1;
            uVar20 = local_94;
          } while (1 < iVar28);
        }
        uVar29 = local_84 + 1;
        uVar38 = (uint)local_b0;
        local_a4 = uVar20;
        auVar8 = local_78;
        if (uVar34 < 0x46) {
          if (uVar34 < 0x27) {
            if (uVar34 < 0x24) {
              if (uVar34 == 0x22) goto LAB_075b9e04;
              if (uVar34 != 0x23) goto LAB_075b9c8c;
LAB_075b9df0:
              if ((int)uVar20 < 0) {
                uVar30 = uVar20 + 1;
                local_a4 = uVar30;
                if (iVar37 <= (int)local_f0) {
LAB_075ba170:
                  sVar35 = 0x30;
                  goto LAB_075ba174;
                }
              }
              else {
                sVar35 = *psVar33;
                uVar30 = uVar20;
                if (sVar35 == 0) {
                  if (local_ec < iVar37) goto LAB_075ba170;
                }
                else {
                  psVar33 = psVar33 + 1;
LAB_075ba174:
                  if (DAT_09521150 == '\0') {
                    local_a4 = uVar20;
                    FUN_03f5c2a4(&DAT_091ba998);
                    DAT_09521150 = '\x01';
                  }
                  uVar20 = *(uint *)(param_1 + 0x18);
                  local_a4 = uVar30;
                  if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
                    if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
                    *(uint *)(param_1 + 0x18) = uVar20 + 1;
                    *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = sVar35;
                  }
                  else {
                    System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar35,0);
                  }
                  if (((local_80 & 1) == 0 && 1 < iVar37) && (-1 < (int)uVar15)) {
                    if ((uint)local_78._8_4_ <= uVar15) goto LAB_075ba5b4;
                    if (iVar37 == *(int *)(local_78._0_8_ + (ulong)uVar15 * 4) + 1) {
                      auVar8 = local_78;
                      if (lVar16 == 0) goto LAB_075ba5cc;
                      lVar16 = *(long *)(lVar16 + 0x40);
                      if (DAT_09521d81 == '\0') {
                        FUN_03f5c2a4(&DAT_091ba998);
                        DAT_09521d81 = '\x01';
                      }
                      auVar8 = local_78;
                      if (lVar16 == 0) goto LAB_075ba5cc;
                      if (*(int *)(lVar16 + 0x10) == 1) {
                        uVar20 = *(uint *)(param_1 + 0x18);
                        if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar20) goto LAB_075ba340;
                        if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
                        lVar31 = *(long *)(param_1 + 8);
                        uVar14 = System_String__get_Chars(lVar16,0,0);
                        *(undefined2 *)(lVar31 + (long)(int)uVar20 * 2) = uVar14;
                        *(uint *)(param_1 + 0x18) = uVar20 + 1;
                      }
                      else {
LAB_075ba340:
                        System_Text_ValueStringBuilder__AppendSlow(param_1,lVar16,0);
                      }
                      uVar15 = uVar15 - 1;
                    }
                  }
                }
              }
              iVar37 = iVar37 + -1;
              goto LAB_075ba3a8;
            }
            if (uVar34 == 0x24) goto LAB_075b9d0c;
            if (uVar34 == 0x25) {
              if (lVar16 != 0) {
                lVar16 = *(long *)(lVar16 + 0x90);
                goto LAB_075b9f54;
              }
              goto LAB_075ba5cc;
            }
            if (uVar34 != 0x26) goto LAB_075b9c8c;
          }
          else if (uVar34 < 0x2e) {
            if (uVar34 == 0x27) {
LAB_075b9e04:
              if ((int)uVar29 < (int)uVar38) {
                lVar16 = (ulong)uVar29 << 0x20;
                puVar26 = (ushort *)(local_b8 + (long)(int)uVar29 * 2);
                uVar29 = ~local_84;
                while ((uVar2 = *puVar26, uVar2 != 0 && (uVar2 != uVar34))) {
                  if (DAT_09521150 == '\0') {
                    FUN_03f5c2a4(&DAT_091ba998);
                    DAT_09521150 = '\x01';
                  }
                  uVar20 = *(uint *)(param_1 + 0x18);
                  if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
                    if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
                    *(uint *)(param_1 + 0x18) = uVar20 + 1;
                    *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = uVar2;
                  }
                  else {
                    System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar2,0);
                  }
                  uVar29 = uVar29 - 1;
                  puVar26 = puVar26 + 1;
                  lVar16 = lVar16 + 0x100000000;
                  if ((uint)local_d0 == uVar29) goto LAB_075ba464;
                }
                uVar38 = (uint)local_b0;
                uVar29 = (*(short *)((lVar16 >> 0x1f) + local_b8) != 0) - uVar29;
              }
              goto LAB_075ba3a8;
            }
            if (uVar34 == 0x2c) goto LAB_075ba3a8;
            if (uVar34 != 0x2d) goto LAB_075b9c8c;
          }
          else {
            if (uVar34 == 0x2e) {
              if ((local_d4 & 1) != 0 || iVar37 != 0) goto LAB_075ba3a8;
              if ((local_ec < 0) || ((local_bc < local_f4 && (*psVar33 != 0)))) {
                if (lVar16 == 0) goto LAB_075ba5cc;
                lVar16 = *(long *)(lVar16 + 0x38);
                if (DAT_09521d81 == '\0') {
                  FUN_03f5c2a4(&DAT_091ba998);
                  DAT_09521d81 = '\x01';
                }
                auVar8 = local_78;
                if (lVar16 == 0) goto LAB_075ba5cc;
                if (*(int *)(lVar16 + 0x10) == 1) {
                  uVar20 = *(uint *)(param_1 + 0x18);
                  if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar20) goto LAB_075ba444;
                  if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
                  lVar31 = *(long *)(param_1 + 8);
                  uVar14 = System_String__get_Chars(lVar16,0,0);
                  *(undefined2 *)(lVar31 + (long)(int)uVar20 * 2) = uVar14;
                  *(uint *)(param_1 + 0x18) = uVar20 + 1;
                }
                else {
LAB_075ba444:
                  System_Text_ValueStringBuilder__AppendSlow(param_1,lVar16,0);
                }
                iVar37 = 0;
                local_d4 = 1;
              }
              else {
                local_d4 = 0;
                iVar37 = 0;
              }
              goto LAB_075ba3a8;
            }
            if (uVar34 != 0x2f) {
              if (uVar34 == 0x30) goto LAB_075b9df0;
LAB_075b9c8c:
              if (uVar34 == 0x45) goto LAB_075b9c94;
            }
          }
LAB_075b9d0c:
          if (DAT_09521150 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521150 = '\x01';
          }
          uVar20 = *(uint *)(param_1 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
            lVar16 = *(long *)(param_1 + 8);
LAB_075b9d50:
            *(uint *)(param_1 + 0x18) = uVar20 + 1;
            *(ushort *)(lVar16 + (long)(int)uVar20 * 2) = uVar34;
          }
          else {
LAB_075b9d64:
            System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar34,0);
          }
        }
        else if (uVar34 == 0x5c) {
          if (((int)uVar29 < (int)uVar38) &&
             (uVar34 = *(ushort *)(local_b8 + (long)(int)uVar29 * 2), uVar34 != 0)) {
            if (DAT_09521150 == '\0') {
              FUN_03f5c2a4(&DAT_091ba998);
              DAT_09521150 = '\x01';
            }
            uVar20 = *(uint *)(param_1 + 0x18);
            uVar29 = local_84 + 2;
            if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar20) goto LAB_075b9d64;
            if (*(uint *)(param_1 + 0x10) <= uVar20) goto LAB_075ba5b4;
            *(uint *)(param_1 + 0x18) = uVar20 + 1;
            *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar20 * 2) = uVar34;
          }
        }
        else if (uVar34 == 0x65) {
LAB_075b9c94:
          if ((uVar25 & 1) != 0) {
            if (((int)uVar29 < (int)uVar38) &&
               (*(short *)(local_b8 + (long)(int)uVar29 * 2) == 0x30)) {
              uVar25 = 0;
              iVar28 = 1;
              goto LAB_075b9cc0;
            }
            iVar28 = local_84 + 2;
            if (iVar28 < (int)uVar38) {
              sVar35 = *(short *)(local_b8 + (long)(int)uVar29 * 2);
              if (sVar35 == 0x2d) {
                if (*(short *)(local_b8 + (long)iVar28 * 2) == 0x30) {
                  iVar28 = 0;
                  uVar25 = 0;
                  goto LAB_075b9cc0;
                }
              }
              else if ((sVar35 == 0x2b) && (*(short *)(local_b8 + (long)iVar28 * 2) == 0x30)) {
                iVar28 = 0;
                uVar25 = 1;
LAB_075b9cc0:
                uVar20 = local_84 + 2;
                iVar24 = iVar28;
                uVar29 = uVar20;
                if ((int)uVar20 < (int)uVar38) {
                  iVar21 = local_f8 + iVar28;
                  psVar27 = (short *)(local_b8 + (long)(int)uVar20 * 2);
                  do {
                    iVar24 = iVar28;
                    uVar29 = uVar20;
                    if (*psVar27 != 0x30) break;
                    uVar20 = uVar20 + 1;
                    iVar28 = iVar28 + 1;
                    psVar27 = psVar27 + 1;
                    iVar24 = iVar21 - local_84;
                    uVar29 = uVar38;
                  } while (uVar38 != uVar20);
                }
                if (9 < iVar24) {
                  iVar24 = 10;
                }
                if (*local_90 == 0) {
                  iVar28 = 0;
                }
                else {
                  iVar28 = *(int *)(local_e0 + 4) - local_bc;
                }
                if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                  local_84 = uVar25;
                  FUN_03f5c424();
                  uVar25 = local_84;
                }
                System_Number__FormatExponent(param_1,lVar16,iVar28,(ulong)uVar34,iVar24,uVar25);
                goto LAB_075ba3a4;
              }
            }
            if (DAT_09521150 == '\0') {
              FUN_03f5c2a4(&DAT_091ba998);
              DAT_09521150 = '\x01';
            }
            uVar20 = *(uint *)(param_1 + 0x18);
            if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar20) {
              System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar34,0);
              uVar25 = 1;
              goto LAB_075ba3a8;
            }
            if (uVar20 < *(uint *)(param_1 + 0x10)) {
              lVar16 = *(long *)(param_1 + 8);
              uVar25 = 1;
              goto LAB_075b9d50;
            }
            goto LAB_075ba5b4;
          }
          if (DAT_09521150 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521150 = '\x01';
          }
          uVar20 = local_84;
          uVar25 = *(uint *)(param_1 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar25) goto LAB_075ba5b4;
            *(uint *)(param_1 + 0x18) = uVar25 + 1;
            *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar25 * 2) = uVar34;
          }
          else {
            System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar34,0);
          }
          if ((int)uVar29 < (int)uVar38) {
            sVar35 = *(short *)(local_b8 + (long)(int)uVar29 * 2);
            if ((sVar35 == 0x2d) || (sVar35 == 0x2b)) {
              if (DAT_09521150 == '\0') {
                FUN_03f5c2a4(&DAT_091ba998);
                DAT_09521150 = '\x01';
              }
              uVar25 = *(uint *)(param_1 + 0x18);
              uVar29 = uVar20 + 2;
              if ((int)uVar25 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar25) goto LAB_075ba5b4;
                *(uint *)(param_1 + 0x18) = uVar25 + 1;
                *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar25 * 2) = sVar35;
              }
              else {
                System_Text_ValueStringBuilder__GrowAndAppend(param_1,sVar35,0);
              }
            }
            if ((int)uVar29 < (int)uVar38) {
              psVar27 = (short *)(local_b8 + (long)(int)uVar29 * 2);
              lVar16 = local_c8 - (int)uVar29;
              while (*psVar27 == 0x30) {
                if (DAT_09521150 == '\0') {
                  FUN_03f5c2a4(&DAT_091ba998);
                  DAT_09521150 = '\x01';
                }
                uVar25 = *(uint *)(param_1 + 0x18);
                if ((int)uVar25 < (int)*(uint *)(param_1 + 0x10)) {
                  if (*(uint *)(param_1 + 0x10) <= uVar25) goto LAB_075ba5b4;
                  *(uint *)(param_1 + 0x18) = uVar25 + 1;
                  *(undefined2 *)(*(long *)(param_1 + 8) + (long)(int)uVar25 * 2) = 0x30;
                }
                else {
                  System_Text_ValueStringBuilder__GrowAndAppend(param_1,0x30,0);
                }
                lVar16 = lVar16 + -1;
                uVar29 = uVar29 + 1;
                psVar27 = psVar27 + 1;
                if (lVar16 == 0) goto LAB_075ba464;
              }
              uVar38 = (uint)local_b0;
            }
          }
LAB_075ba3a4:
          uVar25 = 0;
        }
        else {
          if (uVar34 != 0x2030) goto LAB_075b9d0c;
          if (lVar16 == 0) goto LAB_075ba5cc;
          lVar16 = *(long *)(lVar16 + 0x98);
LAB_075b9f54:
          if (DAT_09521d81 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521d81 = '\x01';
          }
          auVar8 = local_78;
          if (lVar16 == 0) goto LAB_075ba5cc;
          if (*(int *)(lVar16 + 0x10) == 1) {
            uVar20 = *(uint *)(param_1 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(param_1 + 0x10)) {
              if (uVar20 < *(uint *)(param_1 + 0x10)) {
                lVar31 = *(long *)(param_1 + 8);
                uVar14 = System_String__get_Chars(lVar16,0,0);
                *(undefined2 *)(lVar31 + (long)(int)uVar20 * 2) = uVar14;
                *(uint *)(param_1 + 0x18) = uVar20 + 1;
                goto LAB_075ba3a8;
              }
              goto LAB_075ba5b4;
            }
          }
          System_Text_ValueStringBuilder__AppendSlow(param_1,lVar16,0);
        }
LAB_075ba3a8:
        if ((int)uVar38 <= (int)uVar29) goto LAB_075ba464;
        goto LAB_075b9a14;
      }
LAB_075ba464:
      if (*(long *)(local_e8 + 0x28) == local_68) {
        return;
      }
      goto LAB_075ba5e4;
    }
    auVar8 = local_78;
    if (local_a0 != 0) {
      lVar16 = *(long *)(local_a0 + 0x30);
      if (DAT_09521d81 == '\0') {
        FUN_03f5c2a4(&DAT_091ba998);
        DAT_09521d81 = '\x01';
      }
      auVar8 = local_78;
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x10) == 1) {
          uVar25 = *(uint *)(param_1 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar25) {
LAB_075ba5b4:
              if (*(long *)(local_e8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              goto LAB_075ba5e4;
            }
            lVar31 = *(long *)(param_1 + 8);
            uVar14 = System_String__get_Chars(lVar16,0,0);
            *(undefined2 *)(lVar31 + (long)(int)uVar25 * 2) = uVar14;
            *(uint *)(param_1 + 0x18) = uVar25 + 1;
            goto LAB_075b99c8;
          }
        }
        System_Text_ValueStringBuilder__AppendSlow(param_1,lVar16,0);
        goto LAB_075b99c8;
      }
    }
  }
  else if ((local_a0 != 0) && (auVar8 = auVar9, *(long *)(local_a0 + 0x40) != 0)) {
    if (*(int *)(*(long *)(local_a0 + 0x40) + 0x10) < 1) goto LAB_075b9914;
    lVar16 = *(long *)(local_a0 + 0x10);
    auVar8 = auVar10;
    if (lVar16 == 0) goto LAB_075ba5cc;
    iVar28 = *(int *)(lVar16 + 0x18);
    if (iVar28 == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = *(int *)(lVar16 + 0x20);
    }
    uVar15 = 0xffffffff;
    uVar25 = (local_a4 & (int)local_a4 >> 0x1f) + iVar37;
    uVar20 = local_f0;
    if ((int)local_f0 <= (int)uVar25) {
      uVar20 = uVar25;
    }
    local_78 = auVar6;
    if ((iVar24 != 0) && (local_78 = auVar7, iVar24 < (int)uVar20)) {
      lVar31 = 0;
      local_d4 = uVar20;
      local_d0 = lVar16;
      iVar36 = iVar24;
      do {
        local_78._8_8_ = auVar39._8_8_;
        uVar18 = local_78._8_8_;
        local_78._8_4_ = auVar39._8_4_;
        auVar5._8_8_ = uVar18 & 0xffffffff;
        auVar5._0_8_ = puVar19;
        auVar4 = auVar5._0_12_;
        uVar15 = uVar15 + 1;
        if ((int)local_78._8_4_ <= (int)uVar15) {
          iVar23 = local_78._8_4_ << 1;
          local_b8 = CONCAT44(local_b8._4_4_,uVar15);
          local_78 = auVar39;
          uVar18 = FUN_03f5c394(DAT_091801b8,iVar23);
          auVar39 = FUN_06120c00(uVar18,DAT_091bab10);
          FUN_061206dc(local_78,auVar39._0_8_,auVar39._8_8_,DAT_091baae8);
          auVar39 = FUN_06120c00(uVar18,DAT_091bab10);
          auVar4 = auVar39._0_12_;
          lVar16 = local_d0;
          uVar20 = local_d4;
          uVar15 = (uint)local_b8;
        }
        puVar19 = auVar4._0_8_;
        local_78 = auVar39;
        if (auVar4._8_4_ <= uVar15) goto LAB_075ba5b4;
        *(int *)((long)puVar19 + (long)(int)uVar15 * 4) = iVar24;
        if ((int)lVar31 < iVar28 + -1) {
          lVar31 = (long)(int)lVar31 + 1;
          if (*(uint *)(lVar16 + 0x18) <= (uint)lVar31) goto LAB_075ba5b4;
          iVar36 = *(int *)(lVar16 + lVar31 * 4 + 0x20);
        }
      } while ((iVar36 != 0) && (iVar24 = iVar36 + iVar24, auVar39 = local_78, iVar24 < (int)uVar20)
              );
    }
    goto LAB_075b9918;
  }
LAB_075ba5cc:
  local_78 = auVar8;
  if (*(long *)(local_e8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_075ba5e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

