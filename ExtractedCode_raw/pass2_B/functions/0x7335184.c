// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ParseVector
// address: 0x7335184
// body: available
// range: 0x7335184-0x7336507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7336400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7336404 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7336408 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7336504 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IngameDebugConsole_DebugLogConsole__ParseVector
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
          undefined8 param_6,long *param_7)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 local_140 [8];
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  float local_12c;
  undefined1 local_120 [8];
  undefined4 local_118;
  undefined1 local_110 [12];
  undefined8 local_100;
  undefined1 local_f8 [12];
  float local_e8 [6];
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0 [5];
  undefined1 auStack_9c [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long *local_88;
  
  if ((DAT_09520641 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171080);
    FUN_03f5c2a4(&DAT_09181f48);
    FUN_03f5c2a4(&DAT_09171078);
    FUN_03f5c2a4(&DAT_09181f30);
    FUN_03f5c2a4(&DAT_09171200);
    FUN_03f5c2a4(&DAT_091826c8);
    FUN_03f5c2a4(&DAT_091711f0);
    FUN_03f5c2a4(&DAT_091826b0);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0560);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b0620);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09172890);
    FUN_03f5c2a4(&DAT_091898c0);
    FUN_03f5c2a4(&DAT_09172988);
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_09172990);
    FUN_03f5c2a4(&DAT_09189c68);
    FUN_03f5c2a4(&DAT_09172980);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091734e0);
    FUN_03f5c2a4(&DAT_0918cb90);
    FUN_03f5c2a4(&DAT_091734c8);
    FUN_03f5c2a4(&DAT_0918cb68);
    FUN_03f5c2a4(&DAT_09173508);
    FUN_03f5c2a4(&DAT_0918cbf8);
    FUN_03f5c2a4(&DAT_091734f0);
    FUN_03f5c2a4(&DAT_0918cbd0);
    FUN_03f5c2a4(&DAT_09173518);
    FUN_03f5c2a4(&DAT_0918cc38);
    DAT_09520641 = 1;
  }
  local_90 = 0;
  uStack_8c = 0;
  local_88 = (long *)0x0;
  local_b0[4] = 0.0;
  auStack_9c = (undefined1  [4])0x0;
  local_98 = 0;
  local_b0[0] = 0.0;
  local_b0[1] = 0.0;
  local_b0[2] = 0.0;
  local_b0[3] = 0.0;
  local_b8 = 0.0;
  fStack_b4 = 0.0;
  local_bc = 0.0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_f8._8_4_ = 0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_110._8_4_ = 0;
  local_110._0_8_ = 0;
  local_118 = 0.0;
  local_120 = (undefined1  [8])0x0;
  auVar2 = ZEXT812(0);
  auVar4 = ZEXT812(0);
  if (param_5 == 0) {
LAB_07336400:
    local_110 = auVar4;
    local_f8 = auVar2;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar11 = System_String__Replace(param_5,0x2c,0x20,0);
  auVar4._8_4_ = local_110._8_4_;
  auVar4._0_8_ = local_110._0_8_;
  auVar2._8_4_ = local_f8._8_4_;
  auVar2._0_8_ = local_f8._0_8_;
  if (lVar11 == 0) goto LAB_07336400;
  lVar11 = System_String__Trim(lVar11,0);
  auVar4._8_4_ = local_110._8_4_;
  auVar4._0_8_ = local_110._0_8_;
  auVar2._8_4_ = local_f8._8_4_;
  auVar2._0_8_ = local_f8._0_8_;
  if (lVar11 == 0) goto LAB_07336400;
  uVar12 = System_String__Split(lVar11,0x20,0,0);
  lVar11 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e053c(lVar11,uVar12,DAT_091b0560);
  auVar4._8_4_ = local_110._8_4_;
  auVar4._0_8_ = local_110._0_8_;
  auVar2._8_4_ = local_f8._8_4_;
  auVar2._0_8_ = local_f8._0_8_;
  if (lVar11 == 0) goto LAB_07336400;
  iVar8 = *(int *)(lVar11 + 0x18);
  if (-1 < iVar8 + -1) {
    do {
      iVar8 = iVar8 + -1;
      lVar13 = FUN_057e0998(lVar11,iVar8,DAT_091b0610);
      auVar4._8_4_ = local_110._8_4_;
      auVar4._0_8_ = local_110._0_8_;
      auVar2._8_4_ = local_f8._8_4_;
      auVar2._0_8_ = local_f8._0_8_;
      if (lVar13 == 0) goto LAB_07336400;
      uVar12 = System_String__Trim(lVar13,0);
      FUN_057e09ec(lVar11,iVar8,uVar12,DAT_091b0620);
      lVar13 = FUN_057e0998(lVar11,iVar8,DAT_091b0610);
      auVar4._8_4_ = local_110._8_4_;
      auVar4._0_8_ = local_110._0_8_;
      auVar2._8_4_ = local_f8._8_4_;
      auVar2._0_8_ = local_f8._0_8_;
      if (lVar13 == 0) goto LAB_07336400;
      if (*(int *)(lVar13 + 0x10) == 0) {
        FUN_057e251c(lVar11,iVar8,DAT_091b05d8);
      }
    } while (0 < iVar8);
    iVar8 = *(int *)(lVar11 + 0x18);
  }
  lVar13 = FUN_03f5c394(DAT_09180528,iVar8);
  if (0 < *(int *)(lVar11 + 0x18)) {
    uVar22 = 0;
    do {
      uVar12 = FUN_057e0998(lVar11,uVar22 & 0xffffffff,DAT_091b0610);
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183668);
      }
      uVar14 = IngameDebugConsole_DebugLogConsole__ParseFloat(uVar12,&local_88);
      uVar12 = DAT_091734f0;
      auVar5._8_4_ = local_110._8_4_;
      auVar5._0_8_ = local_110._0_8_;
      auVar4._8_4_ = local_110._8_4_;
      auVar4._0_8_ = local_110._0_8_;
      auVar3._8_4_ = local_f8._8_4_;
      auVar3._0_8_ = local_f8._0_8_;
      auVar2._8_4_ = local_f8._8_4_;
      auVar2._0_8_ = local_f8._0_8_;
      if ((uVar14 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
        uVar22 = System_Type__op_Equality(param_6,uVar12,0);
        uVar12 = DAT_091734c8;
        if ((uVar22 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
          uVar22 = System_Type__op_Equality(param_6,uVar12,0);
          if ((uVar22 & 1) == 0) {
            if (DAT_09516627 == '\0') {
              FUN_03f5c2a4(&DAT_0918cc38);
              DAT_09516627 = '\x01';
            }
            uVar12 = (*(undefined8 **)(DAT_0918cc38 + 0xb8))[1];
            local_140 = (undefined1  [8])**(undefined8 **)(DAT_0918cc38 + 0xb8);
            uStack_138 = (undefined4)uVar12;
            fStack_134 = (float)((ulong)uVar12 >> 0x20);
            lVar11 = DAT_0918cc38;
          }
          else {
            if (DAT_09515ce8 == '\0') {
              FUN_03f5c2a4(&DAT_0918cb68);
              DAT_09515ce8 = '\x01';
            }
            local_140 = (undefined1  [8])**(undefined8 **)(DAT_0918cb68 + 0xb8);
            lVar11 = DAT_0918cb68;
          }
        }
        else {
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          local_140 = (undefined1  [8])**(undefined8 **)(DAT_0918cbd0 + 0xb8);
          uStack_138 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
          lVar11 = DAT_0918cbd0;
        }
        lVar11 = FUN_03f5c42c(lVar11,local_140);
        *param_7 = lVar11;
        goto LAB_07335a8c;
      }
      if ((lVar13 == 0) || (auVar2 = auVar3, auVar4 = auVar5, local_88 == (long *)0x0))
      goto LAB_07336400;
      if (*(long *)(*local_88 + 0x40) != *(long *)(DAT_09535450 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar15 = (undefined4 *)thunk_FUN_03f99594();
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_07336404;
      *(undefined4 *)(lVar13 + 0x20 + uVar22 * 4) = *puVar15;
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)*(int *)(lVar11 + 0x18));
  }
  uVar12 = DAT_091734f0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
  uVar22 = System_Type__op_Equality(param_6,uVar12,0);
  uVar12 = DAT_091734c8;
  if ((uVar22 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
    uVar22 = System_Type__op_Equality(param_6,uVar12,0);
    uVar12 = DAT_09173518;
    if ((uVar22 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
      uVar22 = System_Type__op_Equality(param_6,uVar12,0);
      uVar12 = DAT_09172890;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
        uVar22 = System_Type__op_Equality(param_6,uVar12,0);
        uVar12 = DAT_091711f0;
        if ((uVar22 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
          uVar22 = System_Type__op_Equality(param_6,uVar12,0);
          uVar12 = DAT_09171200;
          auVar4._8_4_ = local_110._8_4_;
          auVar4._0_8_ = local_110._0_8_;
          auVar2._8_4_ = local_f8._8_4_;
          auVar2._0_8_ = local_f8._0_8_;
          if ((uVar22 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
            uVar22 = System_Type__op_Equality(param_6,uVar12,0);
            uVar12 = DAT_09172980;
            auVar4._8_4_ = local_110._8_4_;
            auVar4._0_8_ = local_110._0_8_;
            auVar2._8_4_ = local_f8._8_4_;
            auVar2._0_8_ = local_f8._0_8_;
            if ((uVar22 & 1) == 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
              uVar22 = System_Type__op_Equality(param_6,uVar12,0);
              uVar12 = DAT_09172990;
              if ((uVar22 & 1) == 0) {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                uVar12 = DAT_09171078;
                if ((uVar22 & 1) != 0) {
                  lVar11 = thunk_FUN_03f9944c(DAT_09189c68);
                  UnityEngine_RectOffset___ctor(lVar11,0);
                  auVar4._8_4_ = local_110._8_4_;
                  auVar4._0_8_ = local_110._0_8_;
                  auVar2._8_4_ = local_f8._8_4_;
                  auVar2._0_8_ = local_f8._0_8_;
                  if (lVar13 == 0) goto LAB_07336400;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    if ((int)*(long *)(lVar13 + 0x18) == 0) goto LAB_07336404;
                    uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20),0);
                    auVar4._8_4_ = local_110._8_4_;
                    auVar4._0_8_ = local_110._0_8_;
                    auVar2._8_4_ = local_f8._8_4_;
                    auVar2._0_8_ = local_f8._0_8_;
                    if (lVar11 == 0) goto LAB_07336400;
                    UnityEngine_RectOffset__set_left(lVar11,uVar24,0);
                    if (1 < *(int *)(lVar13 + 0x18)) {
                      uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x24),0);
                      UnityEngine_RectOffset__set_right(lVar11,uVar24,0);
                      if (2 < *(int *)(lVar13 + 0x18)) {
                        uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x28),0);
                        UnityEngine_RectOffset__set_top(lVar11,uVar24,0);
                        if (3 < *(int *)(lVar13 + 0x18)) {
                          uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x2c),0);
                          UnityEngine_RectOffset__set_bottom(lVar11,uVar24,0);
                        }
                      }
                    }
                  }
                  *param_7 = lVar11;
                  goto LAB_07335a34;
                }
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                uVar12 = DAT_09173508;
                if ((uVar22 & 1) == 0) {
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                  uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                  uVar12 = DAT_091734e0;
                  if ((uVar22 & 1) == 0) {
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                    uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                    uVar12 = DAT_09172988;
                    if ((uVar22 & 1) == 0) {
                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                      uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                      uVar12 = DAT_09171080;
                      auVar4._8_4_ = local_110._8_4_;
                      auVar4._0_8_ = local_110._0_8_;
                      auVar2._8_4_ = local_f8._8_4_;
                      auVar2._0_8_ = local_f8._0_8_;
                      if ((uVar22 & 1) == 0) {
                        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
                        uVar22 = System_Type__op_Equality(param_6,uVar12,0);
                        if ((uVar22 & 1) == 0) {
                          lVar11 = 0;
                          *param_7 = 0;
LAB_07335a8c:
                          thunk_FUN_03f5d7b8(param_7,lVar11);
                          return 0;
                        }
                        local_110 = FUN_0733fbdc(0);
                        auVar2._8_4_ = local_f8._8_4_;
                        auVar2._0_8_ = local_f8._0_8_;
                        auVar4 = local_110;
                        if (lVar13 == 0) goto LAB_07336400;
                        if (0 < *(int *)(lVar13 + 0x18)) {
                          uVar22 = 0;
                          do {
                            uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20 + uVar22 * 4),0);
                            FUN_0733fc20(local_110,uVar22 & 0xffffffff,uVar24,0);
                            if (1 < uVar22) break;
                            uVar22 = uVar22 + 1;
                          } while ((long)uVar22 < (long)*(int *)(lVar13 + 0x18));
                        }
                        _local_120 = FUN_0733fbdc(0);
                        if (3 < *(int *)(lVar13 + 0x18)) {
                          uVar22 = 0;
                          do {
                            uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x2c + uVar22 * 4),0);
                            FUN_0733fc20(local_120,uVar22 & 0xffffffff,uVar24,0);
                            if (4 < uVar22 + 3) break;
                            lVar11 = uVar22 + 4;
                            uVar22 = uVar22 + 1;
                          } while (lVar11 < *(int *)(lVar13 + 0x18));
                        }
                        fStack_134 = local_120._0_4_;
                        fStack_130 = local_120._4_4_;
                        lVar11 = DAT_09181f48;
                        local_12c = local_118;
                        _local_140 = local_110;
                      }
                      else {
                        if (lVar13 == 0) goto LAB_07336400;
                        if (*(long *)(lVar13 + 0x18) == 0) {
                          uVar24 = 0;
                        }
                        else {
                          if ((int)*(long *)(lVar13 + 0x18) == 0) goto LAB_07336404;
                          uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20),0);
                          if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_09189c48);
                          }
                        }
                        if (*(int *)(lVar13 + 0x18) < 2) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x24),0);
                          if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_09189c48);
                          }
                        }
                        if (*(int *)(lVar13 + 0x18) < 3) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x28),0);
                          if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_09189c48);
                          }
                        }
                        if (*(int *)(lVar13 + 0x18) < 4) {
                          fStack_134 = 0.0;
                        }
                        else {
                          fStack_134 = (float)FUN_04249cc4(*(undefined4 *)(lVar13 + 0x2c),0);
                          if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_09189c48);
                          }
                        }
                        local_140._4_4_ = uVar9;
                        local_140._0_4_ = uVar24;
                        uStack_138 = uVar10;
                        lVar11 = DAT_09189c48;
                      }
                    }
                    else {
                      if (DAT_09517cab == '\0') {
                        FUN_03f5c2a4(&DAT_0918cb90);
                        DAT_09517cab = '\x01';
                      }
                      auVar4._8_4_ = local_110._8_4_;
                      auVar4._0_8_ = local_110._0_8_;
                      auVar2._8_4_ = local_f8._8_4_;
                      auVar2._0_8_ = local_f8._0_8_;
                      local_100 = **(undefined8 **)(DAT_0918cb90 + 0xb8);
                      if (lVar13 == 0) goto LAB_07336400;
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        lVar11 = 0;
                        do {
                          uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20 + lVar11 * 4),0);
                          FUN_0733fcc0(&local_100,lVar11,uVar24,0);
                          if (lVar11 != 0) break;
                          lVar11 = 1;
                        } while (1 < *(int *)(lVar13 + 0x18));
                      }
                      local_140 = (undefined1  [8])local_100;
                      lVar11 = DAT_0918cb90;
                    }
                  }
                  else {
                    local_f8 = FUN_0733fbdc(0);
                    auVar4._8_4_ = local_110._8_4_;
                    auVar4._0_8_ = local_110._0_8_;
                    auVar2 = local_f8;
                    if (lVar13 == 0) goto LAB_07336400;
                    if (0 < *(int *)(lVar13 + 0x18)) {
                      uVar22 = 0;
                      do {
                        uVar24 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20 + uVar22 * 4),0);
                        FUN_0733fc20(local_f8,uVar22 & 0xffffffff,uVar24,0);
                        if (1 < uVar22) break;
                        uVar22 = uVar22 + 1;
                      } while ((long)uVar22 < (long)*(int *)(lVar13 + 0x18));
                    }
                    lVar11 = DAT_0918cbf8;
                    _local_140 = local_f8;
                  }
                }
                else {
                  local_e8[5] = (float)FUN_043b2d5c(0);
                  auVar4._8_4_ = local_110._8_4_;
                  auVar4._0_8_ = local_110._0_8_;
                  auVar2._8_4_ = local_f8._8_4_;
                  auVar2._0_8_ = local_f8._0_8_;
                  local_e8[3] = param_3;
                  local_e8[4] = param_2;
                  if (lVar13 == 0) goto LAB_07336400;
                  uVar7 = *(uint *)(lVar13 + 0x18);
                  uVar6 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
                  if (2 < uVar6) {
                    uVar6 = 3;
                  }
                  if (0 < (int)uVar7) {
                    uVar22 = 0;
                    do {
                      lVar11 = uVar22 * 4;
                      iVar8 = (int)uVar22;
                      if (iVar8 == 0) {
                        pfVar19 = local_e8 + 5;
                      }
                      else if (iVar8 == 2) {
                        pfVar19 = local_e8 + 3;
                      }
                      else {
                        if (iVar8 != 1) goto LAB_0733640c;
                        pfVar19 = local_e8 + 4;
                      }
                      uVar22 = uVar22 + 1;
                      *pfVar19 = *(float *)(lVar13 + 0x20 + lVar11);
                    } while (uVar6 != uVar22);
                  }
                  local_e8[2] = (float)FUN_043b2d5c(0);
                  uVar22 = *(ulong *)(lVar13 + 0x18);
                  uVar6 = (uint)uVar22;
                  local_e8[0] = param_3;
                  local_e8[1] = param_2;
                  if (3 < (int)uVar6) {
                    if (5 < (int)uVar6) {
                      uVar6 = 6;
                    }
                    lVar11 = 0;
                    do {
                      if ((uVar22 & 0xffffffff) - 3 == lVar11) goto LAB_07336404;
                      iVar8 = (int)lVar11;
                      lVar1 = lVar11 * 4;
                      if (iVar8 == 0) {
                        pfVar19 = local_e8 + 2;
                      }
                      else if (iVar8 == 2) {
                        pfVar19 = local_e8;
                      }
                      else {
                        if (iVar8 != 1) goto LAB_0733640c;
                        pfVar19 = local_e8 + 1;
                      }
                      lVar11 = lVar11 + 1;
                      *pfVar19 = *(float *)(lVar13 + 0x2c + lVar1);
                    } while ((ulong)uVar6 - 3 != lVar11);
                  }
                  fStack_134 = local_e8[2] * 0.5;
                  fStack_130 = local_e8[1] * 0.5;
                  local_140._4_4_ = local_e8[4];
                  local_140._0_4_ = local_e8[5];
                  local_12c = local_e8[0] * 0.5;
                  uStack_138 = local_e8[3];
                  lVar11 = DAT_09181f30;
                }
              }
              else {
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar24 = FUN_0733fb88(0);
                auVar4._8_4_ = local_110._8_4_;
                auVar4._0_8_ = local_110._0_8_;
                auVar2._8_4_ = local_f8._8_4_;
                auVar2._0_8_ = local_f8._0_8_;
                if (lVar13 == 0) goto LAB_07336400;
                lVar11 = *(long *)(lVar13 + 0x18);
                if (lVar11 != 0) {
                  if ((int)lVar11 == 0) goto LAB_07336404;
                  uVar24 = *(undefined4 *)(lVar13 + 0x20);
                  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                    FUN_03f5c424();
                    lVar11 = *(long *)(lVar13 + 0x18);
                  }
                  iVar8 = (int)lVar11;
                  if (1 < iVar8) {
                    param_2 = *(float *)(lVar13 + 0x24);
                    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                      FUN_03f5c424();
                      iVar8 = *(int *)(lVar13 + 0x18);
                    }
                    if (2 < iVar8) {
                      param_3 = *(float *)(lVar13 + 0x28);
                      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                        FUN_03f5c424();
                        iVar8 = *(int *)(lVar13 + 0x18);
                      }
                      if ((3 < iVar8) &&
                         (param_4 = *(float *)(lVar13 + 0x2c), *(int *)(DAT_09189c30 + 0xe4) == 0))
                      {
                        FUN_03f5c424();
                      }
                    }
                  }
                }
                local_140._4_4_ = param_2;
                local_140._0_4_ = uVar24;
                uStack_138 = param_3;
                lVar11 = DAT_09189c30;
                fStack_134 = param_4;
              }
            }
            else {
              if (lVar13 == 0) goto LAB_07336400;
              if (*(long *)(lVar13 + 0x18) == 0) {
                uVar6 = 0;
LAB_07335dd8:
                uVar7 = 0;
                uVar21 = 0;
                goto LAB_07335ddc;
              }
              if ((int)*(long *)(lVar13 + 0x18) == 0) {
LAB_07336404:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar6 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x20),0);
              uVar6 = uVar6 & 0xff;
              if (*(int *)(lVar13 + 0x18) < 2) goto LAB_07335dd8;
              uVar7 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x24),0);
              uVar21 = (uVar7 & 0xff) << 8;
              if (*(int *)(lVar13 + 0x18) < 3) {
                uVar7 = 0;
LAB_07335ddc:
                uVar18 = 0xff000000;
              }
              else {
                uVar7 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x28),0);
                uVar7 = (uVar7 & 0xff) << 0x10;
                if (*(int *)(lVar13 + 0x18) < 4) goto LAB_07335ddc;
                iVar8 = FUN_04249cc4(*(undefined4 *)(lVar13 + 0x2c),0);
                uVar18 = iVar8 << 0x18;
              }
              local_140._0_4_ = uVar21 | uVar6 | uVar7 | uVar18;
              lVar11 = DAT_091826c8;
            }
          }
          else {
            uStack_c8 = 0x3f80000000000000;
            local_d0 = 0;
            if (lVar13 == 0) goto LAB_07336400;
            if (0 < *(int *)(lVar13 + 0x18)) {
              uVar22 = 0;
              do {
                FUN_0733fab8(*(undefined4 *)(lVar13 + 0x20 + uVar22 * 4),&local_d0,
                             uVar22 & 0xffffffff,0);
                if (2 < uVar22) break;
                uVar22 = uVar22 + 1;
              } while ((long)uVar22 < (long)*(int *)(lVar13 + 0x18));
            }
            uStack_138 = (undefined4)uStack_c8;
            local_140 = (undefined1  [8])local_d0;
            fStack_134 = (float)((ulong)uStack_c8 >> 0x20);
            lVar11 = DAT_091826b0;
          }
          goto LAB_07335a20;
        }
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        auVar4._8_4_ = local_110._8_4_;
        auVar4._0_8_ = local_110._0_8_;
        auVar2._8_4_ = local_f8._8_4_;
        auVar2._0_8_ = local_f8._0_8_;
        puVar15 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        fStack_b4 = (float)puVar15[1];
        local_b0[0] = (float)*puVar15;
        local_b8 = (float)puVar15[2];
        local_bc = (float)puVar15[3];
        if (lVar13 == 0) goto LAB_07336400;
        uVar7 = *(uint *)(lVar13 + 0x18);
        uVar6 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (3 < uVar6) {
          uVar6 = 4;
        }
        if (0 < (int)uVar7) {
          uVar22 = 0;
          do {
            lVar11 = uVar22 * 4;
            iVar8 = (int)uVar22;
            if (iVar8 < 2) {
              if (iVar8 == 0) {
                pfVar19 = local_b0;
              }
              else {
                if (iVar8 != 1) {
LAB_073364c0:
                  thunk_FUN_03fc39d4(&DAT_09186b90);
                  uVar12 = thunk_FUN_03f9944c();
                  uVar16 = thunk_FUN_03fc39d4(&DAT_09205318);
                  System_IndexOutOfRangeException___ctor(uVar12,uVar16,0);
                  puVar17 = &DAT_091d6ca8;
                  goto LAB_073364f8;
                }
                pfVar19 = &fStack_b4;
              }
            }
            else if (iVar8 == 2) {
              pfVar19 = &local_b8;
            }
            else {
              if (iVar8 != 3) goto LAB_073364c0;
              pfVar19 = &local_bc;
            }
            uVar22 = uVar22 + 1;
            *pfVar19 = *(float *)(lVar13 + 0x20 + lVar11);
          } while (uVar6 != uVar22);
        }
        lVar11 = DAT_091898c0;
        local_140._4_4_ = fStack_b4;
        fVar23 = local_b8;
        fStack_134 = local_bc;
        local_140._0_4_ = local_b0[0];
      }
      else {
        if (DAT_09516627 == '\0') {
          FUN_03f5c2a4(&DAT_0918cc38);
          DAT_09516627 = '\x01';
        }
        auVar4._8_4_ = local_110._8_4_;
        auVar4._0_8_ = local_110._0_8_;
        auVar2._8_4_ = local_f8._8_4_;
        auVar2._0_8_ = local_f8._0_8_;
        pfVar19 = *(float **)(DAT_0918cc38 + 0xb8);
        local_b0[4] = *pfVar19;
        local_140._4_4_ = pfVar19[1];
        fVar23 = pfVar19[2];
        fStack_134 = pfVar19[3];
        local_b0[1] = fStack_134;
        local_b0[2] = fVar23;
        local_b0[3] = (float)local_140._4_4_;
        if (lVar13 == 0) goto LAB_07336400;
        uVar7 = *(uint *)(lVar13 + 0x18);
        uVar6 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        if (3 < uVar6) {
          uVar6 = 4;
        }
        lVar11 = DAT_0918cc38;
        local_140._0_4_ = local_b0[4];
        if (0 < (int)uVar7) {
          uVar22 = 0;
          do {
            lVar1 = uVar22 * 4;
            iVar8 = (int)uVar22;
            if (iVar8 < 2) {
              if (iVar8 == 0) {
                pfVar19 = local_b0 + 4;
              }
              else {
                if (iVar8 != 1) {
LAB_07336484:
                  thunk_FUN_03fc39d4(&DAT_09186b90);
                  uVar12 = thunk_FUN_03f9944c();
                  uVar16 = thunk_FUN_03fc39d4(&DAT_09205468);
                  System_IndexOutOfRangeException___ctor(uVar12,uVar16,0);
                  puVar17 = &DAT_091dec10;
                  goto LAB_073364f8;
                }
                pfVar19 = local_b0 + 3;
              }
            }
            else if (iVar8 == 2) {
              pfVar19 = local_b0 + 2;
            }
            else {
              if (iVar8 != 3) goto LAB_07336484;
              pfVar19 = local_b0 + 1;
            }
            uVar22 = uVar22 + 1;
            *pfVar19 = *(float *)(lVar13 + 0x20 + lVar1);
            local_140._4_4_ = local_b0[3];
            fVar23 = local_b0[2];
            local_140._0_4_ = local_b0[4];
          } while (uVar6 != uVar22);
        }
      }
      uStack_138 = fVar23;
    }
    else {
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      auStack_9c = (undefined1  [4])(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
      local_98 = CONCAT44(local_98._4_4_,**(undefined4 **)(DAT_0918cb68 + 0xb8));
      auVar2 = local_f8;
      auVar4 = local_110;
      if (lVar13 == 0) goto LAB_07336400;
      uVar7 = *(uint *)(lVar13 + 0x18);
      uVar6 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (1 < uVar6) {
        uVar6 = 2;
      }
      if (0 < (int)uVar7) {
        uVar22 = 0;
        do {
          lVar11 = uVar22 * 4;
          if ((int)uVar22 == 0) {
            puVar20 = &local_98;
          }
          else {
            if ((int)uVar22 != 1) {
              thunk_FUN_03fc39d4(&DAT_09186b90);
              uVar12 = thunk_FUN_03f9944c();
              uVar16 = thunk_FUN_03fc39d4(&DAT_09205438);
              System_IndexOutOfRangeException___ctor(uVar12,uVar16,0);
              puVar17 = &DAT_091debd0;
              goto LAB_073364f8;
            }
            puVar20 = (undefined8 *)auStack_9c;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)puVar20 = *(undefined4 *)(lVar13 + 0x20 + lVar11);
        } while (uVar6 != uVar22);
      }
      local_140._4_4_ = auStack_9c;
      local_140._0_4_ = (int)local_98;
      lVar11 = DAT_0918cb68;
    }
  }
  else {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    puVar15 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    uStack_8c = *puVar15;
    local_90 = puVar15[1];
    uVar24 = puVar15[2];
    local_98 = CONCAT44(uVar24,(undefined4)local_98);
    auVar2 = local_f8;
    auVar4 = local_110;
    if (lVar13 == 0) goto LAB_07336400;
    uVar7 = *(uint *)(lVar13 + 0x18);
    uVar6 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    if (2 < uVar6) {
      uVar6 = 3;
    }
    if (0 < (int)uVar7) {
      uVar22 = 0;
      do {
        lVar11 = uVar22 * 4;
        iVar8 = (int)uVar22;
        if (iVar8 == 0) {
          puVar15 = &uStack_8c;
        }
        else if (iVar8 == 2) {
          puVar15 = (undefined4 *)((long)&local_98 + 4);
        }
        else {
          if (iVar8 != 1) {
LAB_0733640c:
            thunk_FUN_03fc39d4(&DAT_09186b90);
            uVar12 = thunk_FUN_03f9944c();
            uVar16 = thunk_FUN_03fc39d4(&DAT_09205450);
            System_IndexOutOfRangeException___ctor(uVar12,uVar16,0);
            puVar17 = &DAT_091debf0;
LAB_073364f8:
            uVar16 = thunk_FUN_03fc39d4(puVar17);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar12,uVar16);
          }
          puVar15 = &local_90;
        }
        uVar22 = uVar22 + 1;
        *puVar15 = *(undefined4 *)(lVar13 + 0x20 + lVar11);
      } while (uVar6 != uVar22);
    }
    local_140._4_4_ = local_90;
    local_140._0_4_ = uStack_8c;
    uStack_138 = uVar24;
    lVar11 = DAT_0918cbd0;
  }
LAB_07335a20:
  lVar11 = FUN_03f5c42c(lVar11,local_140);
  *param_7 = lVar11;
LAB_07335a34:
  thunk_FUN_03f5d7b8(param_7,lVar11);
  return 1;
}

