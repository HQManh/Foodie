// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$<SlotsOf>g__Walk|8_0
// address: 0x4422fbc
// body: available
// range: 0x4422fbc-0x4423cf7 inclusive
// range: 0x4423d34-0x4423f7b inclusive
// range: 0x4423fc4-0x442400b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44239f4 to 0x53ebe0c FUN_053ebe0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4423cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423ccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423ce0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423ce8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4423cf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot ret
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04423ce4) */
/* WARNING: Removing unreachable block (ram,0x04423a1c) */

void CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
               (long *param_1,byte param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               long *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_80;
  long **pplStack_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09517f3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00e8);
    FUN_03f5c2a4(&DAT_0917fd10);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_0917fd98);
    FUN_03f5c2a4(&DAT_091c9638);
    FUN_03f5c2a4(&DAT_091c9650);
    FUN_03f5c2a4(&DAT_091cb120);
    FUN_03f5c2a4(&DAT_091cb158);
    FUN_03f5c2a4(&DAT_091cb528);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8030);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a648);
    FUN_03f5c2a4(&DAT_0917a638);
    FUN_03f5c2a4(&DAT_0917ad18);
    FUN_03f5c2a4(&DAT_0917ad28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091abfb0);
    FUN_03f5c2a4(&DAT_091abbe0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b2290);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ecf8);
    FUN_03f5c2a4(&DAT_091e67c0);
    FUN_03f5c2a4(&DAT_0918ece8);
    FUN_03f5c2a4(&DAT_091e67c8);
    FUN_03f5c2a4(&DAT_091e67d0);
    FUN_03f5c2a4(&DAT_0918ecf0);
    DAT_09517f3e = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*param_6 == 0) goto LAB_04424008;
  uVar2 = FUN_053ec72c(*param_6,param_1,DAT_091a8028);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_1 == (long *)0x0) || (*param_1 != DAT_09186c00)) {
    lVar3 = thunk_FUN_03f9944c(DAT_0918ece8);
    System_Object___ctor(lVar3,0);
    lVar14 = DAT_09184f18;
    if (lVar3 == 0) goto LAB_04424008;
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      if (*param_1 != DAT_09184f18) {
        plVar4 = (long *)0x0;
      }
      *(long **)(lVar3 + 0x10) = plVar4;
      plVar4 = param_1;
      if (*param_1 != lVar14) {
        plVar4 = (long *)0x0;
      }
    }
    plVar11 = (long *)(lVar3 + 0x10);
    thunk_FUN_03f5d7b8(plVar11,plVar4);
    if (*plVar11 != 0) {
      plVar4 = (long *)FUN_03f5c394(DAT_0917fd98,1);
      if (plVar4 != (long *)0x0) {
        lVar14 = *plVar11;
        if ((lVar14 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[4] = lVar14;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar14);
        uVar6 = FUN_04ad43f0(param_3,plVar4,DAT_091c9650);
        uVar6 = FUN_04b08b78(uVar6,DAT_091cb158);
        lVar14 = thunk_FUN_03f9944c(DAT_0918ecf8);
        CookingGraph_CompositeStructureTranslator_Slot___ctor();
        if (lVar14 != 0) {
          *(undefined1 *)(lVar14 + 0x10) = 0;
          if (*plVar11 != 0) {
            lVar5 = *(long *)(*plVar11 + 0x40);
            if ((lVar5 == 0) || (*(char *)(lVar5 + 0x10) == '\0')) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = *(undefined4 *)(lVar5 + 0x14);
            }
            *(undefined4 *)(lVar14 + 0x14) = uVar9;
            *(byte *)(lVar14 + 0x11) = param_2 & 1;
            if (*(long *)(lVar14 + 0x18) != 0) {
              FUN_057e0e78(*(long *)(lVar14 + 0x18),uVar6,DAT_091abfb0);
              if (*(long *)(lVar14 + 0x30) != 0) {
                FUN_057e0e78(*(long *)(lVar14 + 0x30),param_4,DAT_091abbe0);
                if (*(long *)(lVar14 + 0x38) != 0) {
                  FUN_057e0e78(*(long *)(lVar14 + 0x38),param_5,DAT_091abbe0);
                  if (param_6[2] != 0) {
                    uVar13 = *(undefined8 *)(param_6[2] + 0xb0);
                    lVar5 = *(long *)(lVar3 + 0x18);
                    if (lVar5 == 0) {
                      lVar5 = thunk_FUN_03f9944c(DAT_09178db8);
                      FUN_05322d94(lVar5,lVar3,DAT_091e67c0,0);
                      *(long *)(lVar3 + 0x18) = lVar5;
                      thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar5);
                    }
                    plVar4 = (long *)FUN_04b0cafc(uVar13,lVar5,DAT_091cb538);
                    if (plVar4 != (long *)0x0) {
                      lVar3 = *plVar4;
                      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      if (uVar2 != 0) {
                        piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == DAT_0917a648) {
                            puVar7 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                            goto LAB_0442355c;
                          }
                          uVar2 = uVar2 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar2 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a648,0);
LAB_0442355c:
                      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
                      pplStack_78 = &local_68;
                      local_80 = 0;
                      do {
                        local_68 = plVar4;
                        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar3 = *plVar4;
                        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
                        if (uVar2 != 0) {
                          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                              puVar7 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                              goto LAB_044235e0;
                            }
                            uVar2 = uVar2 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar2 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_044235e0:
                        uVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                        plVar4 = local_68;
                        if ((uVar2 & 1) == 0) {
                          if (local_68 == (long *)0x0) goto LAB_04423a10;
                          lVar3 = *local_68;
                          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
                          if (uVar2 == 0) goto LAB_044237cc;
                          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          goto LAB_044237b4;
                        }
                        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar3 = *local_68;
                        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
                        if (uVar2 != 0) {
                          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == DAT_0917ad28) {
                              puVar7 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                              goto LAB_04423644;
                            }
                            uVar2 = uVar2 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar2 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ad28,0);
LAB_04423644:
                        lVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                        lVar3 = DAT_091ada00;
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        plVar4 = *(long **)(lVar5 + 0x18);
                        if ((plVar4 == (long *)0x0) || (*plVar4 != DAT_09186c00)) {
                          CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
                                    (plVar4,param_2 & 1,uVar6,param_4,param_5,param_6);
                          plVar4 = local_68;
                        }
                        else {
                          lVar8 = *(long *)(lVar14 + 0x20);
                          if (lVar8 == 0) {
LAB_04423ccc:
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          lVar10 = *(long *)(lVar8 + 0x10);
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_04423ccc;
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                            plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar11 = (long)plVar4;
                            thunk_FUN_03f5d7b8(plVar11,plVar4);
                          }
                          else {
                            FUN_057e0c68(lVar8,plVar4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar3 = DAT_091adc88;
                          lVar5 = *(long *)(lVar5 + 0x20);
                          if ((lVar5 == 0) || (*(char *)(lVar5 + 0x10) == '\0')) {
                            uVar9 = 0xffffffff;
                          }
                          else {
                            uVar9 = *(undefined4 *)(lVar5 + 0x14);
                          }
                          lVar5 = *(long *)(lVar14 + 0x28);
                          if (lVar5 == 0) {
LAB_04423cd0:
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          lVar8 = *(long *)(lVar5 + 0x10);
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar8 == 0) goto LAB_04423cd0;
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar9;
                            plVar4 = local_68;
                          }
                          else {
                            FUN_057971a8(lVar5,uVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                            plVar4 = local_68;
                          }
                        }
                      } while( true );
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04424008;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_0918ecf0);
    System_Object___ctor(lVar3,0);
    lVar14 = DAT_091828a0;
    if (lVar3 == 0) goto LAB_04424008;
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      if (*param_1 != DAT_091828a0) {
        plVar4 = (long *)0x0;
      }
      *(long **)(lVar3 + 0x10) = plVar4;
      plVar4 = param_1;
      if (*param_1 != lVar14) {
        plVar4 = (long *)0x0;
      }
    }
    plVar11 = (long *)(lVar3 + 0x10);
    thunk_FUN_03f5d7b8(plVar11,plVar4);
    if (*plVar11 != 0) {
      uVar6 = *(undefined8 *)(*plVar11 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      lVar14 = *plVar11;
      if ((uVar2 & 1) == 0) {
        lVar5 = param_6[3];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar14,lVar5,0);
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_03f5c394(DAT_0917fd98,1);
          if (lVar14 == 0) goto LAB_04424008;
          lVar5 = *plVar11;
          FUN_039b0da0(lVar14,lVar5);
          FUN_039af17c(lVar14,0,lVar5);
          uVar6 = FUN_04ad43f0(param_3,lVar14,DAT_091c9650);
          param_3 = FUN_04b08b78(uVar6,DAT_091cb158);
        }
        lVar14 = FUN_03f5c394(DAT_0917fd10,1);
        if (lVar14 != 0) {
          FUN_039af17c(lVar14,0,*plVar11);
          uVar6 = FUN_04ad43f0(param_4,lVar14,DAT_091c9638);
          uVar6 = FUN_04b08b78(uVar6,DAT_091cb120);
          if (param_6[2] != 0) {
            uVar13 = *(undefined8 *)(param_6[2] + 0xa0);
            lVar14 = *(long *)(lVar3 + 0x18);
            if (lVar14 == 0) {
              lVar14 = thunk_FUN_03f9944c(DAT_09178d60);
              FUN_05322d94(lVar14,lVar3,DAT_091e67c8,0);
              *(long *)(lVar3 + 0x18) = lVar14;
              thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar14);
            }
            lVar14 = FUN_04b0cafc(uVar13,lVar14,DAT_091cb528);
            if (lVar14 != 0) {
              local_70 = (long *)FUN_039afee4(0,DAT_0917a638,lVar14);
              pplStack_78 = &local_70;
              local_80 = 0;
              do {
                plVar4 = local_70;
                if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = *local_70;
                uVar2 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar2 != 0) {
                  piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_04423c2c;
                    }
                    uVar2 = uVar2 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar2 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185b10,0);
LAB_04423c2c:
                uVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                plVar4 = local_70;
                if ((uVar2 & 1) == 0) {
                  FUN_039aeef4(&local_80);
                  lVar14 = FUN_03f5c394(DAT_0917fd10,1);
                  if (lVar14 == 0) break;
                  FUN_039af17c(lVar14,0,*plVar11);
                  uVar6 = FUN_04ad43f0(param_5,lVar14,DAT_091c9638);
                  uVar6 = FUN_04b08b78(uVar6,DAT_091cb120);
                  if (param_6[2] == 0) break;
                  uVar13 = *(undefined8 *)(param_6[2] + 0xa8);
                  lVar14 = *(long *)(lVar3 + 0x20);
                  if (lVar14 == 0) {
                    lVar14 = thunk_FUN_03f9944c(DAT_09178d60);
                    FUN_05322d94(lVar14,lVar3,DAT_091e67d0,0);
                    *(long *)(lVar3 + 0x20) = lVar14;
                    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),lVar14);
                  }
                  lVar14 = FUN_04b0cafc(uVar13,lVar14,DAT_091cb528);
                  if (lVar14 == 0) break;
                  plVar4 = (long *)FUN_039afee4(0,DAT_0917a638,lVar14);
                  pplStack_78 = &local_70;
                  local_80 = 0;
                  goto joined_r0x04423e24;
                }
                if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = *local_70;
                uVar2 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar2 != 0) {
                  piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == DAT_0917ad18) {
                      puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_04423c90;
                    }
                    uVar2 = uVar2 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar2 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ad18,0);
LAB_04423c90:
                lVar14 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
                          (*(undefined8 *)(lVar14 + 0x18),param_2 & 1,param_3,uVar6,param_5,param_6)
                ;
              } while( true );
            }
          }
        }
      }
      else if (lVar14 != 0) {
        uVar6 = *(undefined8 *)(lVar14 + 0x40);
        lVar14 = FUN_03f5c394(DAT_0917fd98,1);
        if (lVar14 != 0) {
          lVar3 = *plVar11;
          FUN_039b0da0(lVar14,lVar3);
          FUN_039af17c(lVar14,0,lVar3);
          uVar13 = FUN_04ad43f0(param_3,lVar14,DAT_091c9650);
          uVar13 = FUN_04b08b78(uVar13,DAT_091cb158);
          CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
                    (uVar6,param_2 & 1,uVar13,param_4,param_5,param_6);
          if (*param_6 != 0) {
            FUN_053ebe0c(*param_6,param_1,DAT_091a8030);
            return;
          }
        }
      }
      goto LAB_04424008;
    }
  }
  else {
    lVar14 = thunk_FUN_03f9944c(DAT_0918ecf8);
    CookingGraph_CompositeStructureTranslator_Slot___ctor();
    if (lVar14 == 0) goto LAB_04424008;
    *(byte *)(lVar14 + 0x11) = param_2 & 1;
    *(undefined1 *)(lVar14 + 0x10) = 1;
    *(undefined4 *)(lVar14 + 0x14) = 1;
    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_04424008;
    FUN_057e0e78(*(long *)(lVar14 + 0x18),param_3,DAT_091abfb0);
    lVar3 = DAT_091ada00;
    lVar5 = *(long *)(lVar14 + 0x20);
    if (lVar5 == 0) goto LAB_04424008;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_04424008;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar4 = (long)param_1;
      thunk_FUN_03f5d7b8(plVar4,param_1);
    }
    else {
      FUN_057e0c68(lVar5,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = DAT_091adc88;
    lVar5 = *(long *)(lVar14 + 0x28);
    if (lVar5 == 0) goto LAB_04424008;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_04424008;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 1;
    }
    else {
      FUN_057971a8(lVar5,1,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(lVar14 + 0x30) == 0) goto LAB_04424008;
    FUN_057e0e78(*(long *)(lVar14 + 0x30),param_4,DAT_091abbe0);
    if (*(long *)(lVar14 + 0x38) == 0) goto LAB_04424008;
    FUN_057e0e78(*(long *)(lVar14 + 0x38),param_5,DAT_091abbe0);
    lVar3 = DAT_091b2290;
    lVar5 = param_6[1];
    if (lVar5 == 0) goto LAB_04424008;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_04424008;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar4 = lVar14;
      thunk_FUN_03f5d7b8(plVar4,lVar14);
    }
    else {
      FUN_057e0c68(lVar5,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_04423fcc;
joined_r0x04423e24:
  local_70 = plVar4;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = *plVar4;
  uVar2 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar2 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_09185b10) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_04423e80;
      }
      uVar2 = uVar2 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar2 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04423e80:
  uVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  plVar4 = local_70;
  if ((uVar2 & 1) == 0) {
    FUN_039aeef4(&local_80);
    goto LAB_04423fcc;
  }
  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar14 = *local_70;
  uVar2 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar2 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917ad18) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_04423ee4;
      }
      uVar2 = uVar2 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar2 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ad18,0);
LAB_04423ee4:
  lVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  lVar14 = DAT_091c00e8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = *(long *)(DAT_091c00e8 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c00e8);
    lVar3 = *(long *)(lVar14 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_03f95a6c();
  }
  CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
            (uVar13,0,param_3,**(undefined8 **)(lVar14 + 0xb8),uVar6,param_6);
  plVar4 = local_70;
  goto joined_r0x04423e24;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar12 = piVar12 + 4;
    if (uVar2 == 0) break;
LAB_044237b4:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04423a04;
    }
  }
LAB_044237cc:
  puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_04423a04:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
LAB_04423a10:
  if (*(long *)(lVar14 + 0x20) == 0) goto LAB_04424008;
  if (0 < *(int *)(*(long *)(lVar14 + 0x20) + 0x18)) {
    if (param_6[1] == 0) goto LAB_04424008;
    FUN_039b0ea8(param_6[1],lVar14,DAT_091b2290);
  }
LAB_04423fcc:
  if (*param_6 != 0) {
    FUN_053ebe0c(*param_6,param_1,DAT_091a8030);
    return;
  }
LAB_04424008:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

