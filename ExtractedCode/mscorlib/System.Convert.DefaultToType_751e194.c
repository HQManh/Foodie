// rea decompile_all
// name: System.Convert$$DefaultToType
// address: 0x751e194
// body: available
// range: 0x751e194-0x751ec43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751e5e0 to 0x39bb5f0 FUN_039bb5f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x751ea50 to 0x39aff78 FUN_039aff78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x751eaa4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751eae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751eb80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751eb84 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Convert__DefaultToType(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined2 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_095217a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091858c0);
    DAT_095217a5 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar16 = System_Type__op_Equality(param_2,0,0);
  if ((auVar16._0_8_ & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09223c28);
    auVar16 = System_ArgumentNullException___ctor(uVar7,uVar9);
LAB_0751ea80:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar9 = thunk_FUN_03fc39d4(&DAT_091c6108);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar9);
    }
    goto LAB_0751eb84;
  }
  if (param_1 != (long *)0x0) {
    auVar16 = System_Object__GetType(param_1,0);
    uVar9 = auVar16._8_8_;
    if (auVar16._0_8_ == param_2) {
LAB_0751e850:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return param_1;
      }
      goto LAB_0751eb84;
    }
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar9 = extraout_x1;
    }
    auVar16._8_8_ = uVar9;
    auVar16._0_8_ = DAT_09182b88;
    lVar11 = *(long *)(DAT_09182b88 + 0xb8);
    lVar12 = *(long *)(lVar11 + 8);
    if (lVar12 != 0) {
      auVar2 = auVar16;
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) != 0) {
        if (*(long **)(lVar12 + 0x38) == param_2) {
          lVar11 = *param_1;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_0751e6cc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,1);
LAB_0751e6cc:
          uVar3 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
          local_58._0_8_ = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
          uVar9 = DAT_09535400;
          goto LAB_0751e848;
        }
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
          auVar16._8_8_ = extraout_x1_00;
          auVar16._0_8_ = DAT_09182b88;
          lVar11 = *(long *)(DAT_09182b88 + 0xb8);
          lVar12 = *(long *)(lVar11 + 8);
          uVar9 = extraout_x1_00;
          if (lVar12 == 0) goto LAB_0751ead8;
        }
        auVar2._8_8_ = uVar9;
        auVar2._0_8_ = DAT_09182b88;
        if (4 < *(uint *)(lVar12 + 0x18)) {
          if (*(long **)(lVar12 + 0x40) == param_2) {
            lVar11 = *param_1;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_0751e744;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,2);
LAB_0751e744:
            uVar4 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
            uVar9 = DAT_09535460;
            goto LAB_0751e758;
          }
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
            auVar16._8_8_ = extraout_x1_01;
            auVar16._0_8_ = DAT_09182b88;
            lVar11 = *(long *)(DAT_09182b88 + 0xb8);
            lVar12 = *(long *)(lVar11 + 8);
            uVar9 = extraout_x1_01;
            if (lVar12 == 0) goto LAB_0751ead8;
          }
          auVar2._8_8_ = uVar9;
          auVar2._0_8_ = DAT_09182b88;
          if (5 < *(uint *)(lVar12 + 0x18)) {
            if (*(long **)(lVar12 + 0x48) == param_2) {
              lVar11 = *param_1;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                    goto LAB_0751e7b8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,3);
LAB_0751e7b8:
              uVar3 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
              uVar9 = DAT_09535408;
LAB_0751e83c:
              local_58[0] = uVar3;
LAB_0751e848:
              auVar16 = FUN_03f5c42c(uVar9,local_58);
              param_1 = auVar16._0_8_;
              goto LAB_0751e850;
            }
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
              auVar16._8_8_ = extraout_x1_02;
              auVar16._0_8_ = DAT_09182b88;
              lVar11 = *(long *)(DAT_09182b88 + 0xb8);
              lVar12 = *(long *)(lVar11 + 8);
              uVar9 = extraout_x1_02;
              if (lVar12 == 0) goto LAB_0751ead8;
            }
            auVar2._8_8_ = uVar9;
            auVar2._0_8_ = DAT_09182b88;
            if (6 < *(uint *)(lVar12 + 0x18)) {
              if (*(long **)(lVar12 + 0x50) == param_2) {
                lVar11 = *param_1;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                      goto LAB_0751e828;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,4);
LAB_0751e828:
                uVar3 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
                uVar9 = DAT_095353f0;
                goto LAB_0751e83c;
              }
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424();
                auVar16._8_8_ = extraout_x1_03;
                auVar16._0_8_ = DAT_09182b88;
                lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                lVar12 = *(long *)(lVar11 + 8);
                uVar9 = extraout_x1_03;
                if (lVar12 == 0) goto LAB_0751ead8;
              }
              auVar2._8_8_ = uVar9;
              auVar2._0_8_ = DAT_09182b88;
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffff8) != 0) {
                if (*(long **)(lVar12 + 0x58) == param_2) {
                  lVar11 = *param_1;
                  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                        goto LAB_0751e8b0;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,5);
LAB_0751e8b0:
                  uVar4 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
                  uVar9 = DAT_09535410;
LAB_0751e758:
                  local_58._0_2_ = uVar4;
                  goto LAB_0751e848;
                }
                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                  FUN_03f5c424();
                  auVar16._8_8_ = extraout_x1_04;
                  auVar16._0_8_ = DAT_09182b88;
                  lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                  lVar12 = *(long *)(lVar11 + 8);
                  uVar9 = extraout_x1_04;
                  if (lVar12 == 0) goto LAB_0751ead8;
                }
                auVar2._8_8_ = uVar9;
                auVar2._0_8_ = DAT_09182b88;
                if (8 < *(uint *)(lVar12 + 0x18)) {
                  if (*(long **)(lVar12 + 0x60) == param_2) {
                    lVar11 = *param_1;
                    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == DAT_091858c0) {
                          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                          goto LAB_0751e900;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,6);
LAB_0751e900:
                    uVar4 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
                    uVar9 = DAT_09535418;
                    goto LAB_0751e758;
                  }
                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                    FUN_03f5c424();
                    auVar16._8_8_ = extraout_x1_05;
                    auVar16._0_8_ = DAT_09182b88;
                    lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                    lVar12 = *(long *)(lVar11 + 8);
                    uVar9 = extraout_x1_05;
                    if (lVar12 == 0) goto LAB_0751ead8;
                  }
                  auVar2._8_8_ = uVar9;
                  auVar2._0_8_ = DAT_09182b88;
                  if (9 < *(uint *)(lVar12 + 0x18)) {
                    if (*(long **)(lVar12 + 0x68) == param_2) {
                      uVar15 = FUN_039aff78(7,DAT_091858c0,param_1,param_3);
                      uVar9 = DAT_09535420;
LAB_0751e8e8:
                      local_58._0_4_ = uVar15;
                      goto LAB_0751e848;
                    }
                    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                      FUN_03f5c424();
                      auVar16._8_8_ = extraout_x1_06;
                      auVar16._0_8_ = DAT_09182b88;
                      lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                      lVar12 = *(long *)(lVar11 + 8);
                      uVar9 = extraout_x1_06;
                      if (lVar12 == 0) goto LAB_0751ead8;
                    }
                    auVar2._8_8_ = uVar9;
                    auVar2._0_8_ = DAT_09182b88;
                    if (10 < *(uint *)(lVar12 + 0x18)) {
                      if (*(long **)(lVar12 + 0x70) == param_2) {
                        uVar15 = FUN_039aff78(8,DAT_091858c0,param_1,param_3);
                        uVar9 = DAT_09535428;
                        goto LAB_0751e8e8;
                      }
                      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                        FUN_03f5c424();
                        auVar16._8_8_ = extraout_x1_07;
                        auVar16._0_8_ = DAT_09182b88;
                        lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                        lVar12 = *(long *)(lVar11 + 8);
                        uVar9 = extraout_x1_07;
                        if (lVar12 == 0) goto LAB_0751ead8;
                      }
                      auVar2._8_8_ = uVar9;
                      auVar2._0_8_ = DAT_09182b88;
                      if (0xb < *(uint *)(lVar12 + 0x18)) {
                        if (*(long **)(lVar12 + 0x78) == param_2) {
                          uVar9 = FUN_039aff78(9,DAT_091858c0,param_1,param_3);
                          local_58._0_8_ = uVar9;
                          uVar9 = DAT_09535440;
                          goto LAB_0751e848;
                        }
                        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                          FUN_03f5c424();
                          auVar16._8_8_ = extraout_x1_08;
                          auVar16._0_8_ = DAT_09182b88;
                          lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                          lVar12 = *(long *)(lVar11 + 8);
                          uVar9 = extraout_x1_08;
                          if (lVar12 == 0) goto LAB_0751ead8;
                        }
                        auVar2._8_8_ = uVar9;
                        auVar2._0_8_ = DAT_09182b88;
                        if (0xc < *(uint *)(lVar12 + 0x18)) {
                          if (*(long **)(lVar12 + 0x80) == param_2) {
                            uVar9 = FUN_039aff78(10,DAT_091858c0,param_1,param_3);
                            local_58._0_8_ = uVar9;
                            uVar9 = DAT_09535448;
                            goto LAB_0751e848;
                          }
                          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                            FUN_03f5c424();
                            auVar16._8_8_ = extraout_x1_09;
                            auVar16._0_8_ = DAT_09182b88;
                            lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                            lVar12 = *(long *)(lVar11 + 8);
                            uVar9 = extraout_x1_09;
                            if (lVar12 == 0) goto LAB_0751ead8;
                          }
                          auVar2._8_8_ = uVar9;
                          auVar2._0_8_ = DAT_09182b88;
                          if (0xd < *(uint *)(lVar12 + 0x18)) {
                            if (*(long **)(lVar12 + 0x88) == param_2) {
                              uVar15 = FUN_039aff78(0xb,DAT_091858c0,param_1,param_3);
                              local_58._0_4_ = uVar15;
                              uVar9 = DAT_09535450;
                              goto LAB_0751e848;
                            }
                            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                              FUN_03f5c424();
                              auVar16._8_8_ = extraout_x1_10;
                              auVar16._0_8_ = DAT_09182b88;
                              lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                              lVar12 = *(long *)(lVar11 + 8);
                              uVar9 = extraout_x1_10;
                              if (lVar12 == 0) goto LAB_0751ead8;
                            }
                            auVar2._8_8_ = uVar9;
                            auVar2._0_8_ = DAT_09182b88;
                            if (0xe < *(uint *)(lVar12 + 0x18)) {
                              if (*(long **)(lVar12 + 0x90) == param_2) {
                                uVar9 = FUN_039aff78(0xc,DAT_091858c0,param_1,param_3);
                                local_58._0_8_ = uVar9;
                                uVar9 = DAT_09535458;
                                goto LAB_0751e848;
                              }
                              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                FUN_03f5c424();
                                auVar16._8_8_ = extraout_x1_11;
                                auVar16._0_8_ = DAT_09182b88;
                                lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                                lVar12 = *(long *)(lVar11 + 8);
                                uVar9 = extraout_x1_11;
                                if (lVar12 == 0) goto LAB_0751ead8;
                              }
                              auVar2._8_8_ = uVar9;
                              auVar2._0_8_ = DAT_09182b88;
                              if ((*(uint *)(lVar12 + 0x18) & 0xfffffff0) != 0) {
                                if (*(long **)(lVar12 + 0x98) == param_2) {
                                  local_58 = FUN_039aff78(0xd,DAT_091858c0,param_1,param_3);
                                  uVar9 = DAT_091837d8;
                                  goto LAB_0751e848;
                                }
                                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                  auVar16._8_8_ = extraout_x1_12;
                                  auVar16._0_8_ = DAT_09182b88;
                                  lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                                  lVar12 = *(long *)(lVar11 + 8);
                                  uVar9 = extraout_x1_12;
                                  if (lVar12 == 0) goto LAB_0751ead8;
                                }
                                auVar2._8_8_ = uVar9;
                                auVar2._0_8_ = DAT_09182b88;
                                if (0x10 < *(uint *)(lVar12 + 0x18)) {
                                  if (*(long **)(lVar12 + 0xa0) == param_2) {
                                    uVar9 = FUN_039aff78(0xe,DAT_091858c0,param_1,param_3);
                                    local_58._0_8_ = uVar9;
                                    uVar9 = DAT_09183548;
                                    goto LAB_0751e848;
                                  }
                                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                    auVar16._8_8_ = extraout_x1_13;
                                    auVar16._0_8_ = DAT_09182b88;
                                    lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                                    lVar12 = *(long *)(lVar11 + 8);
                                    uVar9 = extraout_x1_13;
                                    if (lVar12 == 0) goto LAB_0751ead8;
                                  }
                                  auVar2._8_8_ = uVar9;
                                  auVar2._0_8_ = DAT_09182b88;
                                  auVar16._8_8_ = DAT_091858c0;
                                  auVar16._0_8_ = DAT_09182b88;
                                  if (0x12 < *(uint *)(lVar12 + 0x18)) {
                                    if (*(long **)(lVar12 + 0xb0) == param_2) {
                                      if (*(long *)(lVar1 + 0x28) == local_48) {
                                        plVar5 = (long *)FUN_039aff78(0xf,DAT_091858c0,param_1,
                                                                      param_3);
                                        return plVar5;
                                      }
                                      goto LAB_0751eb84;
                                    }
                                    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                      auVar16._8_8_ = extraout_x1_14;
                                      auVar16._0_8_ = DAT_09182b88;
                                      lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                                      lVar12 = *(long *)(lVar11 + 8);
                                      uVar9 = extraout_x1_14;
                                      if (lVar12 == 0) goto LAB_0751ead8;
                                    }
                                    auVar16._8_8_ = uVar9;
                                    auVar16._0_8_ = DAT_09182b88;
                                    auVar2 = auVar16;
                                    if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
                                      if (*(long **)(lVar12 + 0x28) == param_2) goto LAB_0751e850;
                                      lVar12 = DAT_09182b88;
                                      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                        lVar12 = FUN_03f5c424();
                                        lVar11 = *(long *)(DAT_09182b88 + 0xb8);
                                      }
                                      auVar16._8_8_ = DAT_09535470;
                                      auVar16._0_8_ = lVar12;
                                      if (*(long **)(lVar11 + 0x10) == param_2) {
                                        if (*(long *)(lVar1 + 0x28) == local_48) {
                                          plVar5 = (long *)FUN_039bb5f0(param_1);
                                          return plVar5;
                                        }
                                        goto LAB_0751eb84;
                                      }
                                      lVar11 = thunk_FUN_03fc39d4(&DAT_09182b88);
                                      if (*(int *)(lVar11 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      auVar16 = thunk_FUN_03fc39d4(&DAT_09182b88);
                                      lVar11 = *(long *)(*(long *)(auVar16._0_8_ + 0xb8) + 8);
                                      if (lVar11 != 0) {
                                        auVar2 = auVar16;
                                        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0751eb70;
                                        if (*(long **)(lVar11 + 0x30) == param_2) {
                                          thunk_FUN_03fc39d4(&DAT_09187090);
                                          uVar7 = thunk_FUN_03f9944c();
                                          puVar8 = &DAT_09209408;
LAB_0751eb20:
                                          uVar9 = thunk_FUN_03fc39d4(puVar8);
                                        }
                                        else {
                                          lVar11 = thunk_FUN_03fc39d4(&DAT_09182b88);
                                          if (*(int *)(lVar11 + 0xe4) == 0) {
                                            FUN_03f5c424();
                                          }
                                          auVar16 = thunk_FUN_03fc39d4(&DAT_09182b88);
                                          lVar11 = *(long *)(*(long *)(auVar16._0_8_ + 0xb8) + 8);
                                          if (lVar11 == 0) goto LAB_0751ead8;
                                          auVar2 = auVar16;
                                          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0751eb70;
                                          if (*(long **)(lVar11 + 0x20) == param_2) {
                                            thunk_FUN_03fc39d4(&DAT_09187090);
                                            uVar7 = thunk_FUN_03f9944c();
                                            puVar8 = &DAT_09209410;
                                            goto LAB_0751eb20;
                                          }
                                          FUN_039b1d98(param_1);
                                          plVar5 = (long *)System_Object__GetType(param_1,0);
                                          FUN_039b1d98();
                                          uVar9 = (**(code **)(*plVar5 + 0x2f8))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x300)
                                                            );
                                          FUN_039b1d98(param_2);
                                          uVar7 = (**(code **)(*param_2 + 0x2f8))
                                                            (param_2,*(undefined8 *)
                                                                      (*param_2 + 0x300));
                                          uVar10 = thunk_FUN_03fc39d4(&DAT_09205638);
                                          uVar9 = System_String__Format(uVar10,uVar9,uVar7,0);
                                          thunk_FUN_03fc39d4(&DAT_09187090);
                                          uVar7 = thunk_FUN_03f9944c();
                                        }
                                        auVar16 = System_InvalidCastException___ctor(uVar7,uVar9,0);
                                        goto LAB_0751ea80;
                                      }
                                      goto LAB_0751ead8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0751eb70:
      auVar16 = auVar2;
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_0751eb84;
    }
  }
LAB_0751ead8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0751eb84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar16._0_8_,auVar16._8_8_);
}

