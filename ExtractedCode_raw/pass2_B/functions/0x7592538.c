// rea decompile_all
// name: System.IO.Enumeration.FileSystemName$$MatchPattern
// address: 0x7592538
// body: available
// range: 0x7592538-0x7592c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7592c74 to 0x75b7a14 System.MemoryExtensions$$EndsWith (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7592c8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7592c90 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Enumeration_FileSystemName__MatchPattern
               (short *param_1,uint param_2,long param_3,undefined8 param_4,uint param_5,
               uint param_6)

{
  ushort uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  short *psVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long local_108;
  uint local_fc;
  long local_f8;
  uint local_f0;
  uint local_ec;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  int local_cc;
  short *local_c8;
  int local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  ulong local_a8;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  local_fc = param_5;
  local_b0 = param_4;
  local_94 = param_6;
  if ((DAT_09521b70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184598);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091d2f58);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091b9820);
    FUN_03f5c2a4(&DAT_091baae8);
    FUN_03f5c2a4(&DAT_091baae0);
    FUN_03f5c2a4(&DAT_091bab00);
    FUN_03f5c2a4(&DAT_091bab10);
    DAT_09521b70 = 1;
  }
  uVar6 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar20 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if ((param_2 != 0) && (auVar20 = ZEXT816(0), auVar3 = ZEXT816(0), (int)local_b0 != 0)) {
    uVar7 = local_b0;
    local_f8 = param_3;
    if (*param_1 == 0x2a) {
      iVar11 = param_2 - 1;
      if (iVar11 == 0) {
        uVar6 = 1;
        auVar20 = ZEXT816(0);
        auVar3 = ZEXT816(0);
      }
      else {
        if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if ((local_94 & 1) == 0) {
          if (*(int *)(DAT_09184598 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = (undefined8 *)(*(long *)(DAT_09184598 + 0xb8) + 8);
        }
        else {
          if (*(int *)(DAT_09184598 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_09184598 + 0xb8);
        }
        uVar7 = local_b0;
        auVar20 = FUN_05ff7000(*puVar9,DAT_091b9820);
        uVar6 = FUN_07592e3c(param_1 + 1,iVar11,auVar20._0_8_,auVar20._8_8_,DAT_091d2f58);
        auVar3._8_8_ = local_80._8_8_;
        auVar3._0_8_ = local_80._0_8_;
        auVar20._8_8_ = local_90._8_8_;
        auVar20._0_8_ = local_90._0_8_;
        if ((int)uVar6 != -1) goto LAB_075926e4;
        auVar21 = auVar20;
        auVar4 = auVar3;
        if (iVar11 <= (int)uVar7) {
          uVar13 = 4;
          if ((local_fc & 1) != 0) {
            uVar13 = 5;
          }
          if (*(long *)(lVar10 + 0x28) == local_70) {
            System_MemoryExtensions__EndsWith(local_f8,uVar7,param_1 + 1,iVar11,uVar13,0);
            return;
          }
          goto LAB_07592c90;
        }
LAB_07592be8:
        uVar6 = 0;
        auVar20 = auVar21;
        auVar3 = auVar4;
      }
    }
    else {
LAB_075926e4:
      local_80._0_8_ = &local_150;
      local_80._8_8_ = 0x10;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      local_90._0_8_ = &local_190;
      local_98 = param_2 << 1;
      uVar18 = 1;
      local_ec = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      local_190 = 0;
      local_90._8_8_ = 0x10;
      uVar5 = 0;
      local_108 = lVar10;
LAB_07592748:
      auVar4._8_8_ = local_80._8_8_;
      auVar4._0_8_ = local_80._0_8_;
      auVar3._8_8_ = local_80._8_8_;
      auVar3._0_8_ = local_80._0_8_;
      auVar21._8_8_ = local_90._8_8_;
      auVar21._0_8_ = local_90._0_8_;
      auVar20._8_8_ = local_90._8_8_;
      auVar20._0_8_ = local_90._0_8_;
      if ((int)uVar5 < (int)(uint)uVar7) {
        auVar20 = auVar21;
        auVar3 = auVar4;
        if (uVar5 < (uint)uVar7) {
          uVar8 = uVar5 + 1;
          local_ec = (uint)*(ushort *)(local_f8 + (long)(int)uVar5 * 2);
          goto LAB_07592798;
        }
LAB_07592c78:
        lVar10 = *(long *)(local_108 + 0x28);
        goto LAB_07592c80;
      }
      uVar12 = uVar18 - 1;
      if ((uint)local_90._8_4_ <= uVar12) goto LAB_07592c78;
      uVar8 = uVar5;
      auVar3 = auVar4;
      auVar20 = auVar21;
      if (*(int *)(local_90._0_8_ + (long)(int)uVar12 * 4) != local_98) {
LAB_07592798:
        local_e0 = (ulong)(int)uVar18;
        uVar17 = 0;
        uVar12 = (uint)local_b0;
        uVar18 = 0;
        local_e8 = 0;
        local_b8 = (uint)((int)uVar12 <= (int)uVar5);
        if ((local_ec & 0xffff) == 0x2e) {
          local_a0 = local_b8;
          local_b8 = 1;
        }
        else {
          local_a0 = 1;
        }
        local_bc = uVar12 - uVar8;
        local_c8 = (short *)(local_f8 + (long)(int)uVar8 * 2);
        local_9c = local_a0;
        if (local_bc == 0 || (int)uVar12 < (int)uVar8) {
          local_9c = 1;
        }
        local_f0 = uVar8;
        local_cc = 0;
        local_b4 = uVar5;
        if (uVar8 <= uVar12) {
          local_cc = local_bc;
        }
        do {
          uVar17 = (ulong)(int)uVar17;
          local_d8 = uVar17;
          if ((long)uVar17 <= (long)local_e0) {
            local_d8 = local_e0;
          }
          do {
            local_80._8_8_ = auVar4._8_8_;
            local_80._0_8_ = auVar4._0_8_;
            local_90._8_8_ = auVar21._8_8_;
            local_90._0_8_ = auVar21._0_8_;
            uVar7 = local_90._0_8_;
            uVar6 = local_e0;
            if (uVar17 == local_d8) {
              lVar10 = local_108;
              if (uVar18 == 0) goto LAB_07592be8;
              uVar19 = local_90._8_8_;
              local_90._8_8_ = local_80._8_8_;
              local_90._0_8_ = local_80._0_8_;
              local_80._0_8_ = uVar7;
              uVar7 = local_b0;
              uVar5 = local_f0;
              local_80._8_8_ = uVar19;
              if ((int)local_b4 < (int)local_b0) goto LAB_07592748;
              local_90._8_4_ = auVar4._8_4_;
              uVar12 = uVar18 - 1;
              auVar3 = auVar21;
              auVar20 = auVar4;
              goto LAB_07592bc0;
            }
            local_90._8_4_ = auVar21._8_4_;
            auVar20 = auVar21;
            auVar3 = auVar4;
            if ((uint)local_90._8_4_ <= (uint)uVar17) goto LAB_07592c78;
            iVar15 = *(int *)(local_90._0_8_ + uVar17 * 4);
            iVar11 = iVar15 + 2;
            if (-1 < iVar15 + 1) {
              iVar11 = iVar15 + 1;
            }
            local_a8 = uVar17;
            local_80 = auVar4;
            if (iVar11 >> 1 < (int)param_2) {
              lVar10 = (long)(iVar11 >> 1);
              do {
                uVar5 = (uint)lVar10;
                auVar20 = auVar21;
                auVar3 = local_80;
                if (param_2 <= uVar5) goto LAB_07592c78;
                uVar1 = param_1[lVar10];
                if (local_80._8_4_ + -2 <= (int)uVar18) {
                  iVar11 = local_80._8_4_ << 1;
                  local_90 = auVar21;
                  uVar7 = FUN_03f5c394(DAT_091801b8,iVar11);
                  auVar20 = FUN_06120c00(uVar7,DAT_091bab10);
                  FUN_061206dc(local_80,auVar20._0_8_,auVar20._8_8_,DAT_091baae8);
                  local_80 = auVar20;
                  uVar7 = FUN_03f5c394(DAT_091801b8,iVar11);
                  auVar21 = FUN_06120c00(uVar7,DAT_091bab10);
                  uVar6 = FUN_061206dc(local_90,auVar21._0_8_,auVar21._8_8_,DAT_091baae8);
                }
                uVar8 = uVar5 * 2;
                auVar20 = auVar21;
                auVar3 = local_80;
                if (uVar1 == 0x2a) {
LAB_075929a8:
                  if ((uint)local_80._8_4_ <= uVar18) goto LAB_07592c78;
                  uVar5 = uVar18 + 1;
                  *(uint *)(local_80._0_8_ + (long)(int)uVar18 * 4) = uVar8;
LAB_075929c4:
                  if ((uint)local_80._8_4_ <= uVar5) goto LAB_07592c78;
                  uVar18 = uVar5 + 1;
                  *(uint *)(local_80._0_8_ + (long)(int)uVar5 * 4) = uVar8 | 1;
                }
                else {
                  if (((local_94 & 1) != 0) && (uVar1 == 0x3c)) {
                    psVar14 = local_c8;
                    iVar11 = local_bc;
                    iVar15 = local_cc;
                    if ((local_9c & 1) == 0) {
                      do {
                        if (iVar15 == 0) goto LAB_07592c78;
                        if (*psVar14 == 0x2e) {
                          bVar2 = true;
                          goto LAB_0759299c;
                        }
                        iVar11 = iVar11 + -1;
                        psVar14 = psVar14 + 1;
                        iVar15 = iVar15 + -1;
                      } while (iVar11 != 0);
                      bVar2 = false;
                    }
                    else {
                      bVar2 = false;
                    }
LAB_0759299c:
                    uVar5 = uVar18;
                    if (bVar2 || local_a0 != 0) goto LAB_075929a8;
                    goto LAB_075929c4;
                  }
                  if (((local_94 & 1) == 0) || (uVar1 != 0x3e)) {
                    if (((local_94 & 1) != 0) && (uVar1 == 0x22)) {
                      if ((int)local_b0 <= (int)local_b4) goto LAB_075929e4;
                      if ((local_ec & 0xffff) == 0x2e) goto LAB_07592a4c;
                      break;
                    }
                    if (uVar1 == 0x5c) {
                      uVar5 = uVar5 + 1;
                      iVar11 = local_98;
                      if (uVar5 != param_2) {
                        if (uVar5 < param_2) {
                          uVar8 = uVar5 * 2;
                          uVar1 = param_1[(int)uVar5];
                          goto LAB_07592a6c;
                        }
                        goto LAB_07592c78;
                      }
                    }
                    else {
LAB_07592a6c:
                      if ((int)local_b0 <= (int)local_b4) break;
                      local_90 = auVar21;
                      if (uVar1 != 0x3f) {
                        if ((local_fc & 1) == 0) {
                          if ((uint)uVar1 != (local_ec & 0xffff)) break;
                        }
                        else {
                          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar5 = System_Char__ToUpperInvariant(uVar1,0);
                          uVar6 = System_Char__ToUpperInvariant(local_ec,0);
                          auVar21 = local_90;
                          if ((uVar5 & 0xffff) != ((uint)uVar6 & 0xffff)) break;
                        }
                      }
                      iVar11 = uVar8 + 2;
                      auVar21 = local_90;
                    }
                    auVar20 = auVar21;
                    auVar3 = local_80;
                    if ((uint)local_80._8_4_ <= uVar18) goto LAB_07592c78;
LAB_07592a94:
                    *(int *)(local_80._0_8_ + (long)(int)uVar18 * 4) = iVar11;
                    uVar18 = uVar18 + 1;
                    break;
                  }
                  if ((local_b8 & 1) == 0) {
LAB_07592a4c:
                    if (uVar18 < (uint)local_80._8_4_) {
                      iVar11 = uVar8 + 2;
                      goto LAB_07592a94;
                    }
                    goto LAB_07592c78;
                  }
                }
LAB_075929e4:
                lVar10 = lVar10 + 1;
                if (lVar10 == (int)param_2) {
                  if ((uint)local_80._8_4_ <= uVar18) goto LAB_07592c78;
                  *(int *)(local_80._0_8_ + (long)(int)uVar18 * 4) = local_98;
                  uVar18 = uVar18 + 1;
                }
              } while (lVar10 != (int)param_2);
            }
            local_90._8_8_ = auVar21._8_8_;
            uVar7 = local_90._8_8_;
            local_90._0_8_ = auVar21._0_8_;
            uVar17 = local_a8 + 1;
            auVar4 = local_80;
          } while (((long)local_e0 <= (long)uVar17) || ((int)uVar18 <= (int)local_e8));
          local_90._8_4_ = auVar21._8_4_;
          lVar10 = (long)(int)local_e8;
          do {
            uVar5 = (uint)uVar17;
            if ((int)uVar5 < (int)local_90._8_4_) {
              piVar16 = (int *)(local_90._0_8_ + (long)(int)uVar5 * 4);
              if (uVar5 <= (uint)local_90._8_4_) {
                uVar5 = local_90._8_4_;
              }
              do {
                uVar6 = local_e0;
                auVar20 = auVar21;
                auVar3 = local_80;
                if ((uVar5 == (uint)uVar17) || ((uint)local_80._8_4_ <= (uint)lVar10))
                goto LAB_07592c78;
                if (*(int *)(local_80._0_8_ + lVar10 * 4) <= *piVar16) goto LAB_07592b80;
                uVar8 = (uint)uVar17 + 1;
                uVar17 = (ulong)uVar8;
                piVar16 = piVar16 + 1;
              } while (local_90._8_4_ != uVar8);
              uVar17 = uVar7 & 0xffffffff;
            }
LAB_07592b80:
            lVar10 = lVar10 + 1;
          } while (lVar10 != (int)uVar18);
          local_e8 = (ulong)uVar18;
        } while( true );
      }
LAB_07592bc0:
      local_90._0_8_ = auVar20._0_8_;
      if ((uint)local_90._8_4_ <= uVar12) {
        lVar10 = *(long *)(local_108 + 0x28);
LAB_07592c80:
        if (lVar10 == local_70) {
          local_90 = auVar20;
          local_80 = auVar3;
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(uVar6);
        }
        goto LAB_07592c90;
      }
      uVar6 = (ulong)(*(int *)(local_90._0_8_ + (long)(int)uVar12 * 4) == local_98);
      lVar10 = local_108;
    }
  }
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
LAB_07592c90:
  local_90 = auVar20;
  local_80 = auVar3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

