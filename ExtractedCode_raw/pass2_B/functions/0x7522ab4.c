// rea decompile_all
// name: System.Convert$$ChangeType
// address: 0x7522ab4
// body: available
// range: 0x7522ab4-0x75233ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7522ecc to 0x39bd200 FUN_039bd200 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x752337c to 0x39aff78 FUN_039aff78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7523390 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75233e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75233f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75233fc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Convert__ChangeType(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
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
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_58 [16];
  long local_48;
  long *plVar3;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((DAT_095217a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091858c0);
    DAT_095217a7 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09219a80);
    auVar13 = System_ArgumentNullException___ctor(uVar8,uVar6);
LAB_075233c0:
    if (*(long *)(lVar4 + 0x28) == local_48) {
      uVar6 = thunk_FUN_03fc39d4(&DAT_091c60f8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar6);
    }
  }
  else {
    if (param_1 == 0) {
      auVar14 = System_Type__get_IsValueType(param_2,0);
      if ((auVar14._0_8_ & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09187090);
        uVar8 = thunk_FUN_03f9944c();
        puVar5 = &DAT_09209150;
LAB_07522f5c:
        uVar6 = thunk_FUN_03fc39d4(puVar5);
        auVar13 = System_InvalidCastException___ctor(uVar8,uVar6,0);
        goto LAB_075233c0;
      }
    }
    else {
      auVar13 = thunk_FUN_03f99350(param_1,DAT_091858c0);
      uVar8 = auVar13._8_8_;
      plVar3 = auVar13._0_8_;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar8 = extraout_x1;
        }
        auVar14._8_8_ = uVar8;
        auVar14._0_8_ = DAT_09182b88;
        lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
        auVar13 = auVar14;
        if (lVar9 == 0) {
LAB_075233e8:
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_075233fc;
        }
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
          if (*(long *)(lVar9 + 0x38) == param_2) {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_091858c0) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_07523044;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,1);
LAB_07523044:
            uVar1 = (*(code *)*puVar7)(plVar3,param_3,puVar7[1]);
            local_58._0_8_ = CONCAT71(local_58._1_7_,uVar1) & 0xffffffffffffff01;
            uVar8 = DAT_09535400;
            goto LAB_075231b0;
          }
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
            auVar13._8_8_ = extraout_x1_00;
            auVar13._0_8_ = DAT_09182b88;
            lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
            uVar8 = extraout_x1_00;
            if (lVar9 == 0) goto LAB_075233e8;
          }
          auVar14._8_8_ = uVar8;
          auVar14._0_8_ = DAT_09182b88;
          if (4 < *(uint *)(lVar9 + 0x18)) {
            if (*(long *)(lVar9 + 0x40) == param_2) {
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_091858c0) {
                    puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_075230c0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,2);
LAB_075230c0:
              uVar2 = (*(code *)*puVar7)(plVar3,param_3,puVar7[1]);
              uVar8 = DAT_09535460;
              goto LAB_075230dc;
            }
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
              auVar13._8_8_ = extraout_x1_01;
              auVar13._0_8_ = DAT_09182b88;
              lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
              uVar8 = extraout_x1_01;
              if (lVar9 == 0) goto LAB_075233e8;
            }
            auVar14._8_8_ = uVar8;
            auVar14._0_8_ = DAT_09182b88;
            if (5 < *(uint *)(lVar9 + 0x18)) {
              if (*(long *)(lVar9 + 0x48) == param_2) {
                lVar9 = *plVar3;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == DAT_091858c0) {
                      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                      goto LAB_07523134;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,3);
LAB_07523134:
                uVar1 = (*(code *)*puVar7)(plVar3,param_3,puVar7[1]);
                uVar8 = DAT_09535408;
LAB_075231a4:
                local_58[0] = uVar1;
LAB_075231b0:
                auVar14 = FUN_03f5c42c(uVar8,local_58);
                param_1 = auVar14._0_8_;
                goto LAB_075231b8;
              }
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424();
                auVar13._8_8_ = extraout_x1_02;
                auVar13._0_8_ = DAT_09182b88;
                lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                uVar8 = extraout_x1_02;
                if (lVar9 == 0) goto LAB_075233e8;
              }
              auVar14._8_8_ = uVar8;
              auVar14._0_8_ = DAT_09182b88;
              if (6 < *(uint *)(lVar9 + 0x18)) {
                if (*(long *)(lVar9 + 0x50) == param_2) {
                  lVar9 = *plVar3;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_091858c0) {
                        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                        goto LAB_07523188;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,4);
LAB_07523188:
                  uVar1 = (*(code *)*puVar7)(plVar3,param_3,puVar7[1]);
                  uVar8 = DAT_095353f0;
                  goto LAB_075231a4;
                }
                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                  FUN_03f5c424();
                  auVar13._8_8_ = extraout_x1_03;
                  auVar13._0_8_ = DAT_09182b88;
                  lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                  uVar8 = extraout_x1_03;
                  if (lVar9 == 0) goto LAB_075233e8;
                }
                auVar14._8_8_ = uVar8;
                auVar14._0_8_ = DAT_09182b88;
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                  if (*(long *)(lVar9 + 0x58) == param_2) {
                    lVar9 = *plVar3;
                    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
                          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                          goto LAB_07523218;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,5);
LAB_07523218:
                    uVar2 = (*(code *)*puVar7)(plVar3,param_3,puVar7[1]);
                    uVar8 = DAT_09535410;
LAB_075230dc:
                    local_58._0_2_ = uVar2;
                    goto LAB_075231b0;
                  }
                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                    FUN_03f5c424();
                    auVar13._8_8_ = extraout_x1_04;
                    auVar13._0_8_ = DAT_09182b88;
                    lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                    uVar8 = extraout_x1_04;
                    if (lVar9 == 0) goto LAB_075233e8;
                  }
                  auVar14._8_8_ = uVar8;
                  auVar14._0_8_ = DAT_09182b88;
                  if (8 < *(uint *)(lVar9 + 0x18)) {
                    if (*(long *)(lVar9 + 0x60) == param_2) {
                      uVar2 = FUN_039aff78(6,DAT_091858c0,plVar3,param_3);
                      uVar8 = DAT_09535418;
                      goto LAB_075230dc;
                    }
                    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                      FUN_03f5c424();
                      auVar13._8_8_ = extraout_x1_05;
                      auVar13._0_8_ = DAT_09182b88;
                      lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                      uVar8 = extraout_x1_05;
                      if (lVar9 == 0) goto LAB_075233e8;
                    }
                    auVar14._8_8_ = uVar8;
                    auVar14._0_8_ = DAT_09182b88;
                    if (9 < *(uint *)(lVar9 + 0x18)) {
                      if (*(long *)(lVar9 + 0x68) == param_2) {
                        uVar12 = FUN_039aff78(7,DAT_091858c0,plVar3,param_3);
                        uVar8 = DAT_09535420;
LAB_07523258:
                        local_58._0_4_ = uVar12;
                        goto LAB_075231b0;
                      }
                      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                        FUN_03f5c424();
                        auVar13._8_8_ = extraout_x1_06;
                        auVar13._0_8_ = DAT_09182b88;
                        lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                        uVar8 = extraout_x1_06;
                        if (lVar9 == 0) goto LAB_075233e8;
                      }
                      auVar14._8_8_ = uVar8;
                      auVar14._0_8_ = DAT_09182b88;
                      if (10 < *(uint *)(lVar9 + 0x18)) {
                        if (*(long *)(lVar9 + 0x70) == param_2) {
                          uVar12 = FUN_039aff78(8,DAT_091858c0,plVar3,param_3);
                          uVar8 = DAT_09535428;
                          goto LAB_07523258;
                        }
                        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                          FUN_03f5c424();
                          auVar13._8_8_ = extraout_x1_07;
                          auVar13._0_8_ = DAT_09182b88;
                          lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                          uVar8 = extraout_x1_07;
                          if (lVar9 == 0) goto LAB_075233e8;
                        }
                        auVar14._8_8_ = uVar8;
                        auVar14._0_8_ = DAT_09182b88;
                        if (0xb < *(uint *)(lVar9 + 0x18)) {
                          if (*(long *)(lVar9 + 0x78) == param_2) {
                            uVar8 = FUN_039aff78(9,DAT_091858c0,plVar3,param_3);
                            local_58._0_8_ = uVar8;
                            uVar8 = DAT_09535440;
                            goto LAB_075231b0;
                          }
                          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                            FUN_03f5c424();
                            auVar13._8_8_ = extraout_x1_08;
                            auVar13._0_8_ = DAT_09182b88;
                            lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                            uVar8 = extraout_x1_08;
                            if (lVar9 == 0) goto LAB_075233e8;
                          }
                          auVar14._8_8_ = uVar8;
                          auVar14._0_8_ = DAT_09182b88;
                          if (0xc < *(uint *)(lVar9 + 0x18)) {
                            if (*(long *)(lVar9 + 0x80) == param_2) {
                              uVar8 = FUN_039aff78(10,DAT_091858c0,plVar3,param_3);
                              local_58._0_8_ = uVar8;
                              uVar8 = DAT_09535448;
                              goto LAB_075231b0;
                            }
                            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                              FUN_03f5c424();
                              auVar13._8_8_ = extraout_x1_09;
                              auVar13._0_8_ = DAT_09182b88;
                              lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                              uVar8 = extraout_x1_09;
                              if (lVar9 == 0) goto LAB_075233e8;
                            }
                            auVar14._8_8_ = uVar8;
                            auVar14._0_8_ = DAT_09182b88;
                            if (0xd < *(uint *)(lVar9 + 0x18)) {
                              if (*(long *)(lVar9 + 0x88) == param_2) {
                                uVar12 = FUN_039aff78(0xb,DAT_091858c0,plVar3,param_3);
                                local_58._0_4_ = uVar12;
                                uVar8 = DAT_09535450;
                                goto LAB_075231b0;
                              }
                              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                FUN_03f5c424();
                                auVar13._8_8_ = extraout_x1_10;
                                auVar13._0_8_ = DAT_09182b88;
                                lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                uVar8 = extraout_x1_10;
                                if (lVar9 == 0) goto LAB_075233e8;
                              }
                              auVar14._8_8_ = uVar8;
                              auVar14._0_8_ = DAT_09182b88;
                              if (0xe < *(uint *)(lVar9 + 0x18)) {
                                if (*(long *)(lVar9 + 0x90) == param_2) {
                                  uVar8 = FUN_039aff78(0xc,DAT_091858c0,plVar3,param_3);
                                  local_58._0_8_ = uVar8;
                                  uVar8 = DAT_09535458;
                                  goto LAB_075231b0;
                                }
                                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                  auVar13._8_8_ = extraout_x1_11;
                                  auVar13._0_8_ = DAT_09182b88;
                                  lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                  uVar8 = extraout_x1_11;
                                  if (lVar9 == 0) goto LAB_075233e8;
                                }
                                auVar14._8_8_ = uVar8;
                                auVar14._0_8_ = DAT_09182b88;
                                if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0) != 0) {
                                  if (*(long *)(lVar9 + 0x98) == param_2) {
                                    local_58 = FUN_039aff78(0xd,DAT_091858c0,plVar3,param_3);
                                    uVar8 = DAT_091837d8;
                                    goto LAB_075231b0;
                                  }
                                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                    auVar13._8_8_ = extraout_x1_12;
                                    auVar13._0_8_ = DAT_09182b88;
                                    lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                    uVar8 = extraout_x1_12;
                                    if (lVar9 == 0) goto LAB_075233e8;
                                  }
                                  auVar14._8_8_ = uVar8;
                                  auVar14._0_8_ = DAT_09182b88;
                                  if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                    if (*(long *)(lVar9 + 0xa0) == param_2) {
                                      uVar8 = FUN_039aff78(0xe,DAT_091858c0,plVar3,param_3);
                                      local_58._0_8_ = uVar8;
                                      uVar8 = DAT_09183548;
                                      goto LAB_075231b0;
                                    }
                                    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                      auVar13._8_8_ = extraout_x1_13;
                                      auVar13._0_8_ = DAT_09182b88;
                                      lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                      uVar8 = extraout_x1_13;
                                      if (lVar9 == 0) goto LAB_075233e8;
                                    }
                                    auVar13._8_8_ = DAT_091858c0;
                                    auVar13._0_8_ = DAT_09182b88;
                                    auVar14._8_8_ = uVar8;
                                    auVar14._0_8_ = DAT_09182b88;
                                    if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                      if (*(long *)(lVar9 + 0xb0) == param_2) {
                                        if (*(long *)(lVar4 + 0x28) == local_48) {
                                          lVar4 = FUN_039aff78(0xf,DAT_091858c0,plVar3,param_3);
                                          return lVar4;
                                        }
                                        goto LAB_075233fc;
                                      }
                                      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                                        auVar14 = FUN_03f5c424();
                                        lVar9 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                        auVar13 = auVar14;
                                        if (lVar9 == 0) goto LAB_075233e8;
                                      }
                                      auVar13._8_8_ = DAT_091858c0;
                                      auVar13._0_8_ = auVar14._0_8_;
                                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                        if (*(long *)(lVar9 + 0x28) != param_2) {
                                          if (*(long *)(lVar4 + 0x28) == local_48) {
                                            lVar4 = FUN_039bd200(0x10,DAT_091858c0,plVar3,param_2,
                                                                 param_3);
                                            return lVar4;
                                          }
                                          goto LAB_075233fc;
                                        }
                                        goto LAB_075231b8;
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
        auVar13 = auVar14;
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_075233fc;
      }
      uVar8 = System_Object__GetType(param_1,0);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      auVar14 = System_Type__op_Equality(uVar8,param_2,0);
      if ((auVar14._0_8_ & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09187090);
        uVar8 = thunk_FUN_03f9944c();
        puVar5 = &DAT_09209518;
        goto LAB_07522f5c;
      }
    }
LAB_075231b8:
    auVar13 = auVar14;
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_075233fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar13._0_8_,auVar13._8_8_);
}

