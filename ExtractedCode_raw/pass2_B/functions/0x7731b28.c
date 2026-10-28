// rea decompile_all
// name: PlatformServiceR1.CloudSaveControllerAbstract.<RunLoadFlow>d__37$$MoveNext
// address: 0x7731b28
// body: available
// range: 0x7731b28-0x7732007 inclusive
// range: 0x773340c-0x773380b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7732004 to 0x89db650 FUN_089db650 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77337f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77337fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7733800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7733804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7733808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_CloudSaveControllerAbstract_<RunLoadFlow>d__37__MoveNext(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [8];
  int iVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint *puVar39;
  undefined8 uVar40;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar41;
  long lVar42;
  char cVar43;
  ulong uVar44;
  int *piVar45;
  long *plVar46;
  ulong uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auStack_1c0 [16];
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  uint *puStack_198;
  long **local_190;
  uint **ppuStack_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  undefined1 *local_170;
  undefined8 *puStack_168;
  undefined8 *local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined4 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 local_100 [16];
  ulong local_f0;
  undefined1 local_e0 [8];
  undefined8 uStack_d8;
  ulong local_d0;
  undefined1 local_c0 [16];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 local_a0 [16];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 local_80 [16];
  undefined1 local_68 [16];
  long *local_58;
  uint local_4c;
  uint *local_48;
  
  local_48 = param_1;
  if ((DAT_09522a7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c1dc0);
    FUN_03f5c2a4(&DAT_091c2260);
    FUN_03f5c2a4(&DAT_091c1ee8);
    FUN_03f5c2a4(&DAT_091c1f90);
    FUN_03f5c2a4(&DAT_0919a5a0);
    FUN_03f5c2a4(&DAT_0919a7b0);
    FUN_03f5c2a4(&DAT_0919a7b8);
    FUN_03f5c2a4(&DAT_0919a5a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091857d0);
    FUN_03f5c2a4(&DAT_091b6c40);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6c50);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b6c58);
    FUN_03f5c2a4(&DAT_091b6a68);
    FUN_03f5c2a4(&DAT_091957a0);
    FUN_03f5c2a4(&DAT_091e66c8);
    FUN_03f5c2a4(&DAT_091e66d0);
    FUN_03f5c2a4(&DAT_0918ebd0);
    FUN_03f5c2a4(&DAT_091bdde8);
    FUN_03f5c2a4(&DAT_091bdf68);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091fead0);
    FUN_03f5c2a4(&DAT_091feac8);
    FUN_03f5c2a4(&DAT_091feae8);
    FUN_03f5c2a4(&DAT_091feac0);
    DAT_09522a7b = 1;
  }
  local_4c = *param_1;
  local_58 = *(long **)(param_1 + 6);
  local_68._8_8_ = 0;
  local_68._0_8_ = 0;
  auVar15 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar24 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar49 = ZEXT816(0);
  local_c0._8_8_ = 0;
  local_c0._0_8_ = 0;
  auVar29 = ZEXT816(0);
  auVar28 = ZEXT816(0);
  auVar27 = ZEXT816(0);
  auVar17 = ZEXT816(0);
  auVar13 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  auVar32 = ZEXT816(0);
  auVar31 = ZEXT816(0);
  auVar30 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  uStack_88 = 0;
  uStack_90 = 0;
  local_e0 = (undefined1  [8])0x0;
  uStack_d8 = (long *)0x0;
  auVar26 = ZEXT816(0);
  auVar23 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  local_d0 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  auVar25 = ZEXT816(0);
  auVar22 = ZEXT816(0);
  auVar20 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  local_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  if (10 < local_4c) {
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar1 = ZEXT816(0);
    auVar2 = ZEXT816(0);
    auVar4 = ZEXT816(0);
    auVar8 = ZEXT816(0);
    auVar9 = ZEXT816(0);
    auVar14 = ZEXT816(0);
    if ((char)local_58[5] != '\0') goto LAB_0773334c;
    *(undefined1 *)(local_58 + 5) = 1;
    param_1[0xc] = 3;
  }
  puStack_198 = &local_4c;
  local_190 = &local_58;
  local_1a0 = 0;
  ppuStack_188 = &local_48;
  local_180 = &uStack_138;
  puStack_178 = &local_140;
  local_170 = auStack_130;
  puStack_168 = &local_110;
  local_160 = &uStack_148;
  puStack_158 = &local_150;
  if ((int)local_4c < 5) {
    if ((int)local_4c < 2) {
      if (local_4c == 0) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        local_4c = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_0773264c;
      }
      if (local_4c != 1) goto LAB_0773219c;
      local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      local_4c = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_07732dc4;
    }
    if (local_4c == 2) {
LAB_07732708:
      local_4c = 0xffffffff;
      local_a0 = *(undefined1 (*) [16])(local_48 + 0x12);
      uStack_88 = *(ulong *)(local_48 + 0x18);
      uStack_90 = *(ulong *)(local_48 + 0x16);
      local_48[0x14] = 0;
      local_48[0x15] = 0;
      local_48[0x12] = 0;
      local_48[0x13] = 0;
      local_48[0x18] = 0;
      local_48[0x19] = 0;
      local_48[0x16] = 0;
      local_48[0x17] = 0;
      *local_48 = 0xffffffff;
      local_80 = auVar49;
LAB_07732730:
      auVar49._8_8_ = uStack_90;
      auVar49._0_8_ = local_a0._8_8_;
      uVar38 = local_a0._0_8_;
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        uVar35 = local_a0._8_4_;
      }
      else {
        uVar44 = uStack_88 & 0xffff;
        lVar41 = *(long *)(DAT_0919a5a0 + 0x20);
        if ((*(ushort *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = FUN_03f95a6c();
        }
        lVar41 = *(long *)(*(long *)(lVar41 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar41 + 0x135) & 1) == 0) {
          lVar41 = FUN_03f95a6c(lVar41);
        }
        lVar42 = *(long *)uVar38;
        uVar47 = (ulong)*(ushort *)(lVar42 + 0x12e);
        if (uVar47 != 0) {
          piVar45 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == lVar41) {
              puVar37 = (undefined8 *)(lVar42 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_07732910;
            }
            uVar47 = uVar47 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar47 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(uVar38,lVar41,0);
LAB_07732910:
        auVar49 = (*(code *)*puVar37)(uVar38,uVar44,puVar37[1]);
        uVar35 = auVar49._0_4_;
      }
      uVar38 = auVar49._8_8_;
      if ((auVar49._0_8_ & 1) != 0) {
        if ((uVar35 >> 8 & 1) == 0) {
          if (DAT_09522a98 == '\0') {
            FUN_03f5c2a4(&DAT_091891d8);
            DAT_09522a98 = '\x01';
            uVar38 = extraout_x1_01;
          }
          if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
            EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_091fead0,0);
            uVar38 = extraout_x1_02;
          }
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(0,uVar38);
          }
          auVar49 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0));
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auStack_1c0 = auVar49;
          thunk_FUN_03f5d7b8(auStack_1c0,0);
          local_80 = auStack_1c0;
          uVar44 = FUN_042c5110(local_80,0);
          auVar17 = local_c0;
          auVar19 = local_a0;
          if ((uVar44 & 1) != 0) goto LAB_07731e44;
          local_4c = 4;
          *local_48 = 4;
          *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
          thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
        }
        else {
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(0,uVar38);
          }
          PlatformServiceR1_CloudSaveControllerAbstract__ParseAsync(auStack_1c0);
          local_f0 = uStack_1b0;
          local_100 = auStack_1c0;
          FUN_039b5b60(auStack_1c0,local_100,DAT_091bdf68);
          local_d0 = uStack_1b0;
          _local_e0 = auStack_1c0;
          uVar44 = FUN_041e5390(local_e0,DAT_0919a7b8);
          auVar3 = local_100;
          auVar7 = local_80;
          auVar13 = local_c0;
          auVar18 = local_a0;
          if ((uVar44 & 1) != 0) goto LAB_077320f8;
          local_4c = 5;
          *local_48 = 5;
          *(undefined1 (*) [16])(local_48 + 0x1a) = _local_e0;
          *(ulong *)(local_48 + 0x1e) = local_d0;
          thunk_FUN_03f5d7b8(local_48 + 0x1a,0);
          FUN_049af13c(local_48 + 2,local_e0,local_48,DAT_091c1ee8);
        }
LAB_0773331c:
        uVar35 = 0x12;
        goto LAB_07733320;
      }
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
        uVar38 = extraout_x1;
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__LogWarning(**(long **)(DAT_091891d8 + 0xb8),DAT_091feae8,0);
        uVar38 = extraout_x1_00;
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(0,uVar38);
      }
      auVar49 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auStack_1c0 = auVar49;
      thunk_FUN_03f5d7b8(auStack_1c0,0);
      local_80 = auStack_1c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar38 = local_80._0_8_;
      auVar6 = local_c0;
      auVar16 = local_a0;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_07732bdc;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_07732bdc:
        iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        auVar6 = local_c0;
        auVar16 = local_a0;
        if (iVar34 == 0) {
          local_4c = 3;
          *local_48 = 3;
          *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
          thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
          goto LAB_0773331c;
        }
      }
LAB_07732bf0:
      local_c0 = auVar6;
      local_a0 = auVar16;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
              goto LAB_07732c74;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_07732c74:
        (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
      }
LAB_07732c84:
      uVar35 = 3;
    }
    else {
      if (local_4c == 3) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        local_4c = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_07732bf0;
      }
      if (local_4c != 4) goto LAB_0773219c;
      local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      local_4c = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_07731e44:
      local_c0 = auVar17;
      local_a0 = auVar19;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
              goto LAB_07732360;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_07732360:
        (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      PlatformServiceR1_CloudSaveControllerAbstract__RequestSaveData();
      uVar35 = 2;
    }
    local_48[0xc] = uVar35;
LAB_07732c90:
    uVar35 = 4;
  }
  else {
    if (7 < (int)local_4c) {
      if (local_4c == 8) {
        uStack_104 = param_1[0x20];
        param_1[0x20] = 0;
        local_4c = 0xffffffff;
        uStack_108 = 0;
        *param_1 = 0xffffffff;
        goto LAB_07733468;
      }
      if (local_4c == 9) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        local_4c = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_07732060;
      }
      if (local_4c == 10) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        local_4c = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_07731ee8;
      }
LAB_0773219c:
      uVar38 = thunk_FUN_03f9944c(DAT_0918ebd0);
      System_Object___ctor(uVar38,0);
      *(undefined8 *)(local_48 + 10) = uVar38;
      thunk_FUN_03f5d7b8(local_48 + 10,uVar38);
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auStack_1c0 = (**(code **)(*local_58 + 0x1c8))(local_58,*(undefined8 *)(*local_58 + 0x1d0));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(auStack_1c0,0);
      local_80 = auStack_1c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ == (long *)0x0) {
LAB_0773264c:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar38 = local_80._0_8_;
        if ((long *)local_80._0_8_ != (long *)0x0) {
          lVar41 = *(long *)local_80._0_8_;
          uVar47 = local_80._8_8_ & 0xffff;
          uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
          if (uVar44 != 0) {
            piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
            do {
              if (*(long *)(piVar45 + -2) == DAT_091868c0) {
                puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                goto LAB_077326d0;
              }
              uVar44 = uVar44 - 1;
              piVar45 = piVar45 + 4;
            } while (uVar44 != 0);
          }
          puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077326d0:
          (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        }
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        PlatformServiceR1_CloudSaveControllerAbstract__EnsureLastSaveTimeSeeded();
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (local_58[4] == 0) {
          auVar49 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0));
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auStack_1c0 = auVar49;
          thunk_FUN_03f5d7b8(auStack_1c0,0);
          local_80 = auStack_1c0;
          if (DAT_095162d4 == '\0') {
            FUN_03f5c2a4(&DAT_0918c610);
            DAT_095162d4 = '\x01';
          }
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_095162d5 == '\0') {
            FUN_03f5c2a4(&DAT_091868c0);
            DAT_095162d5 = '\x01';
          }
          uVar38 = local_80._0_8_;
          if ((long *)local_80._0_8_ != (long *)0x0) {
            lVar41 = *(long *)local_80._0_8_;
            uVar47 = local_80._8_8_ & 0xffff;
            uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
            if (uVar44 != 0) {
              piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == DAT_091868c0) {
                  puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
                  goto LAB_07732db0;
                }
                uVar44 = uVar44 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar44 != 0);
            }
            puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_07732db0:
            iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
            if (iVar34 == 0) {
              local_4c = 1;
              *local_48 = 1;
              *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
              thunk_FUN_03f5d7b8(local_48 + 0xe,0);
              FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
              goto LAB_0773331c;
            }
          }
LAB_07732dc4:
          if (DAT_095162d6 == '\0') {
            FUN_03f5c2a4(&DAT_091868c0);
            DAT_095162d6 = '\x01';
          }
          uVar38 = local_80._0_8_;
          if ((long *)local_80._0_8_ != (long *)0x0) {
            lVar41 = *(long *)local_80._0_8_;
            uVar47 = local_80._8_8_ & 0xffff;
            uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
            if (uVar44 != 0) {
              piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
              do {
                if (*(long *)(piVar45 + -2) == DAT_091868c0) {
                  puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
                  goto LAB_07732e48;
                }
                uVar44 = uVar44 - 1;
                piVar45 = piVar45 + 4;
              } while (uVar44 != 0);
            }
            puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_07732e48:
            (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
          }
          goto LAB_07732c90;
        }
        auVar49 = local_80;
        if (local_4c == 2) goto LAB_07732708;
        plVar46 = (long *)local_58[4];
        uVar38 = (**(code **)(*local_58 + 0x178))(local_58,*(undefined8 *)(*local_58 + 0x180));
        if (plVar46 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar41 = *plVar46;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091857d0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_07732ce8;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(plVar46,DAT_091857d0,0);
LAB_07732ce8:
        (*(code *)*puVar37)(auStack_1c0,plVar46,uVar38,puVar37[1]);
        uStack_a8 = uStack_1a8;
        uStack_b0 = uStack_1b0;
        local_c0 = auStack_1c0;
        auStack_1c0._8_8_ = 0;
        auStack_1c0._0_8_ = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        if ((*(byte *)(*(long *)(DAT_091bdde8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_1a8 = uStack_a8;
        uStack_1b0 = uStack_b0;
        auStack_1c0 = local_c0;
        thunk_FUN_03f5d7b8(auStack_1c0,0);
        uStack_88 = uStack_1a8;
        uStack_90 = uStack_1b0;
        local_a0 = auStack_1c0;
        uVar44 = FUN_06b807b4(local_a0,DAT_0919a5a8);
        if ((uVar44 & 1) != 0) goto LAB_07732730;
        local_4c = 2;
        *local_48 = 2;
        *(undefined1 (*) [16])(local_48 + 0x12) = local_a0;
        *(ulong *)(local_48 + 0x18) = uStack_88;
        *(ulong *)(local_48 + 0x16) = uStack_90;
        thunk_FUN_03f5d7b8(local_48 + 0x12,0);
        FUN_049aeacc(local_48 + 2,local_a0,local_48,DAT_091c1dc0);
      }
      else {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_07732638;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_07732638:
        iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        if (iVar34 != 0) goto LAB_0773264c;
        local_4c = 0;
        *local_48 = 0;
        *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
        thunk_FUN_03f5d7b8(local_48 + 0xe,0);
        FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
      }
      goto LAB_0773331c;
    }
    if (local_4c != 5) {
      if (local_4c == 6) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        local_4c = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_07731fd4;
      }
      if (local_4c != 7) goto LAB_0773219c;
      local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      local_4c = 0xffffffff;
      *param_1 = 0xffffffff;
      local_68 = ZEXT816(0);
      local_100 = ZEXT816(0);
      _local_e0 = ZEXT816(0);
      local_c0 = ZEXT816(0);
      local_a0 = ZEXT816(0);
LAB_07731d98:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
              goto LAB_07732610;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_07732610:
        (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
      }
      local_48[0xc] = 0;
      goto LAB_07732c90;
    }
    local_d0 = *(ulong *)(param_1 + 0x1e);
    _local_e0 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_4c = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_077320f8:
    auVar33 = local_e0;
    plVar46 = uStack_d8;
    if (local_e0 != (undefined1  [8])0x0) {
      uVar44 = local_d0 & 0xffff;
      lVar41 = *(long *)(DAT_0919a7b0 + 0x20);
      local_100 = auVar3;
      local_80 = auVar7;
      local_c0 = auVar13;
      local_a0 = auVar18;
      if ((*(ushort *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = FUN_03f95a6c();
      }
      lVar41 = *(long *)(*(long *)(lVar41 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar41 + 0x135) & 1) == 0) {
        lVar41 = FUN_03f95a6c(lVar41);
      }
      lVar42 = *(long *)auVar33;
      uVar47 = (ulong)*(ushort *)(lVar42 + 0x12e);
      if (uVar47 != 0) {
        piVar45 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
        do {
          if (*(long *)(piVar45 + -2) == lVar41) {
            puVar37 = (undefined8 *)(lVar42 + (long)*piVar45 * 0x10 + 0x138);
            goto LAB_07732394;
          }
          uVar47 = uVar47 - 1;
          piVar45 = piVar45 + 4;
        } while (uVar47 != 0);
      }
      puVar37 = (undefined8 *)FUN_03f95da8(auVar33,lVar41,0);
LAB_07732394:
      plVar46 = (long *)(*(code *)*puVar37)(auVar33,uVar44,puVar37[1]);
      auVar3 = local_100;
      auVar7 = local_80;
      auVar13 = local_c0;
      auVar18 = local_a0;
    }
    local_c0 = auVar13;
    local_80 = auVar7;
    local_100 = auVar3;
    local_a0 = auVar18;
    if (plVar46 == (long *)0x0) {
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__LogError(**(long **)(DAT_091891d8 + 0xb8),DAT_091feac0,0);
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar49 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auStack_1c0 = auVar49;
      thunk_FUN_03f5d7b8(auStack_1c0,0);
      local_80 = auStack_1c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar38 = local_80._0_8_;
      auVar11 = local_100;
      auVar12 = _local_e0;
      auVar17 = local_c0;
      auVar19 = local_a0;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_07732eac;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_07732eac:
        iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        auVar11 = local_100;
        auVar12 = _local_e0;
        auVar17 = local_c0;
        auVar19 = local_a0;
        if (iVar34 == 0) {
          local_4c = 6;
          *local_48 = 6;
          *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
          thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
          goto LAB_0773331c;
        }
      }
LAB_07731fd4:
      local_100 = auVar11;
      _local_e0 = auVar12;
      local_c0 = auVar17;
      local_a0 = auVar19;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
        FUN_089db650(*(undefined8 *)local_80._0_8_);
        return;
      }
      goto LAB_07732c84;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58[7] = (long)plVar46;
    thunk_FUN_03f5d7b8(local_58 + 7,plVar46);
    uVar38 = (**(code **)(*plVar46 + 0x188))(plVar46,*(undefined8 *)(*plVar46 + 400));
    local_68 = PlatformServiceR1_CloudSaveControllerAbstract__GetLocalLastSaveTimeUtc();
    uVar35 = local_68._0_4_;
    cVar43 = (char)local_48[8];
    if ((cVar43 == '\0') && ((local_68._0_8_ & 0xff) != 0)) {
      uVar40 = FUN_05c2c6bc(local_68,DAT_091b6c58);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar44 = System_DateTime__op_GreaterThanOrEqual(uVar38,uVar40,0);
      if ((uVar44 & 1) != 0) {
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar49 = PlatformServiceR1_CloudSaveControllerAbstract__ApplyCloudData
                            (local_58,*(undefined1 *)((long)local_48 + 0x21));
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auStack_1c0 = auVar49;
        thunk_FUN_03f5d7b8(auStack_1c0,0);
        local_80 = auStack_1c0;
        uVar44 = FUN_042c5110(local_80,0);
        if ((uVar44 & 1) != 0) goto LAB_07731d98;
        local_4c = 7;
        *local_48 = 7;
        *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
        thunk_FUN_03f5d7b8(local_48 + 0xe,0);
        FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
        goto LAB_0773331c;
      }
      uVar35 = local_68._0_4_ & 0xff;
      cVar43 = (char)local_48[8];
    }
    plVar46 = local_58;
    if (cVar43 != '\0') {
      uVar35 = 2;
    }
    if (*(long *)(local_48 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined2 *)(*(long *)(local_48 + 10) + 0x10) = 0;
    lVar41 = thunk_FUN_03f9944c(DAT_091957a0);
    System_Object___ctor(lVar41,0);
    if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar41 + 0x18) = uVar38;
    *(uint *)(lVar41 + 0x10) = uVar35 & 0xff;
    auVar49 = local_68;
    if (local_68[0] == '\0') {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
        auVar49 = local_68;
      }
      local_68._8_8_ = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
    }
    *(undefined8 *)(lVar41 + 0x20) = local_68._8_8_;
    uVar40 = *(undefined8 *)(local_48 + 10);
    local_68 = auVar49;
    uVar38 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar38,uVar40,DAT_091e66c8,0);
    *(undefined8 *)(lVar41 + 0x28) = uVar38;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar41 + 0x28),uVar38);
    uVar40 = *(undefined8 *)(local_48 + 10);
    uVar38 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar38,uVar40,DAT_091e66d0,0);
    *(undefined8 *)(lVar41 + 0x30) = uVar38;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar41 + 0x30),uVar38);
    if (plVar46 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar46 + 0x1e8))(plVar46,lVar41,*(undefined8 *)(*plVar46 + 0x1f0));
    uVar35 = UnityEngine_Time__get_realtimeSinceStartup(0);
    local_48[0xd] = uVar35;
    while( true ) {
      lVar41 = *(long *)(local_48 + 10);
      if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar41 + 0x10) != '\0') break;
      fVar48 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
      if (30.0 < fVar48 - (float)local_48[0xd]) {
        if (DAT_09522a98 == '\0') {
          FUN_03f5c2a4(&DAT_091891d8);
          DAT_09522a98 = '\x01';
        }
        if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
          EssentialSystemR1_R1Logger__LogError(**(long **)(DAT_091891d8 + 0xb8),DAT_091feac8,0);
        }
        auStack_1c0._0_8_ = auStack_1c0._0_8_ & 0xffffffffffff0000;
        lVar41 = *(long *)(local_48 + 10);
        FUN_05c290f8(auStack_1c0,0,DAT_091b6a48);
        auVar3._8_8_ = auStack_1c0._8_8_;
        auVar3._0_8_ = auStack_1c0._0_8_;
        if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined2 *)(lVar41 + 0x10) = auStack_1c0._0_2_;
        lVar41 = *(long *)(local_48 + 10);
        auStack_1c0 = auVar3;
        if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        break;
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar36 = Cysharp_Threading_Tasks_UniTask__Yield(0);
      _uStack_108 = CONCAT44(uStack_104,uVar36);
      uVar35 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&uStack_108,0);
      uStack_104 = uVar35;
      uVar44 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&uStack_104,0);
      auVar10 = local_68;
      auVar22 = local_100;
      auVar23 = _local_e0;
      auVar24 = local_80;
      auVar28 = local_c0;
      auVar31 = local_a0;
      if ((uVar44 & 1) == 0) {
        local_4c = 8;
        *local_48 = 8;
        uVar38 = DAT_091c2260;
        local_48[0x20] = uStack_104;
        FUN_049b3734(local_48 + 2,&uStack_104,local_48,uVar38);
        goto LAB_0773331c;
      }
LAB_07733468:
      local_68 = auVar10;
      local_100 = auVar22;
      _local_e0 = auVar23;
      local_80 = auVar24;
      local_c0 = auVar28;
      local_a0 = auVar31;
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&uStack_104,0);
    }
    uVar44 = FUN_05c29110(lVar41 + 0x10,DAT_091b6a68);
    if ((uVar44 & 1) == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar49 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auStack_1c0 = auVar49;
      thunk_FUN_03f5d7b8(auStack_1c0,0);
      local_80 = auStack_1c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar38 = local_80._0_8_;
      auVar5 = local_68;
      auVar20 = local_100;
      auVar21 = _local_e0;
      auVar27 = local_c0;
      auVar30 = local_a0;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_077337a0;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_077337a0:
        iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        auVar5 = local_68;
        auVar20 = local_100;
        auVar21 = _local_e0;
        auVar27 = local_c0;
        auVar30 = local_a0;
        if (iVar34 == 0) {
          local_4c = 10;
          *local_48 = 10;
          *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
          thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
          goto LAB_0773331c;
        }
      }
LAB_07731ee8:
      local_68 = auVar5;
      local_100 = auVar20;
      _local_e0 = auVar21;
      local_c0 = auVar27;
      local_a0 = auVar30;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
              goto LAB_077322f0;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077322f0:
        (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      PlatformServiceR1_CloudSaveControllerAbstract__RequestSaveData();
      uVar35 = 1;
    }
    else {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar49 = PlatformServiceR1_CloudSaveControllerAbstract__ApplyCloudData
                          (local_58,*(undefined1 *)((long)local_48 + 0x21));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auStack_1c0 = auVar49;
      thunk_FUN_03f5d7b8(auStack_1c0,0);
      local_80 = auStack_1c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar38 = local_80._0_8_;
      auVar15 = local_68;
      auVar25 = local_100;
      auVar26 = _local_e0;
      auVar29 = local_c0;
      auVar32 = local_a0;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)*piVar45 * 0x10 + 0x138);
              goto LAB_0773373c;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_0773373c:
        iVar34 = (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
        auVar15 = local_68;
        auVar25 = local_100;
        auVar26 = _local_e0;
        auVar29 = local_c0;
        auVar32 = local_a0;
        if (iVar34 == 0) {
          local_4c = 9;
          *local_48 = 9;
          *(undefined1 (*) [16])(local_48 + 0xe) = local_80;
          thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          FUN_049b1078(local_48 + 2,local_80,local_48,DAT_091c1f90);
          goto LAB_0773331c;
        }
      }
LAB_07732060:
      local_68 = auVar15;
      local_100 = auVar25;
      _local_e0 = auVar26;
      local_c0 = auVar29;
      local_a0 = auVar32;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar38 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar41 = *(long *)local_80._0_8_;
        uVar47 = local_80._8_8_ & 0xffff;
        uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
        if (uVar44 != 0) {
          piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
          do {
            if (*(long *)(piVar45 + -2) == DAT_091868c0) {
              puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
              goto LAB_077322c8;
            }
            uVar44 = uVar44 - 1;
            piVar45 = piVar45 + 4;
          } while (uVar44 != 0);
        }
        puVar37 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077322c8:
        (*(code *)*puVar37)(uVar38,uVar47,puVar37[1]);
      }
      uVar35 = 0;
    }
    puVar39 = local_48 + 10;
    puVar39[0] = 0;
    puVar39[1] = 0;
    local_48[0xc] = uVar35;
    thunk_FUN_03f5d7b8(puVar39,0);
    uVar35 = 0x3d;
  }
LAB_07733320:
  FUN_03ebd0a0(&local_1a0);
  if (0x3d < uVar35) {
    return;
  }
  auVar1 = local_80;
  auVar2 = local_68;
  auVar4 = local_c0;
  auVar8 = local_100;
  auVar9 = _local_e0;
  auVar14 = local_a0;
  if ((1L << (ulong)uVar35 & 0x2000000000000011U) == 0) {
    return;
  }
LAB_0773334c:
  puVar39 = local_48;
  cVar43 = DAT_095162d8;
  *local_48 = 0xfffffffe;
  local_80 = auVar1;
  local_68 = auVar2;
  local_c0 = auVar4;
  local_100 = auVar8;
  _local_e0 = auVar9;
  local_a0 = auVar14;
  if (cVar43 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar46 = *(long **)(puVar39 + 2);
  if (plVar46 != (long *)0x0) {
    lVar41 = *plVar46;
    uVar44 = (ulong)*(ushort *)(lVar41 + 0x12e);
    if (uVar44 != 0) {
      piVar45 = (int *)(*(long *)(lVar41 + 0xb0) + 8);
      do {
        if (*(long *)(piVar45 + -2) == DAT_091866a8) {
          puVar37 = (undefined8 *)(lVar41 + (long)(*piVar45 + 2) * 0x10 + 0x138);
          goto LAB_077333d8;
        }
        uVar44 = uVar44 - 1;
        piVar45 = piVar45 + 4;
      } while (uVar44 != 0);
    }
    puVar37 = (undefined8 *)FUN_03f95da8(plVar46,DAT_091866a8,2);
LAB_077333d8:
    (*(code *)*puVar37)(plVar46,puVar37[1]);
  }
  return;
}

