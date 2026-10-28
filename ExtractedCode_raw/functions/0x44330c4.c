// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$<SlotsOf>g__Walk|13_0
// address: 0x44330c4
// body: available
// range: 0x44330c4-0x4433edb inclusive
// range: 0x4433f18-0x4434093 inclusive
// range: 0x44340d8-0x443411f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4433c80 to 0x53ebe0c FUN_053ebe0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4433eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ed0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4433ed8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4434088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot ret
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04433ed4) */
/* WARNING: Removing unreachable block (ram,0x04433ca8) */

void CookingGraph_CustomerOrderGenerator__<SlotsOf>g__Walk_13_0
               (long *param_1,uint param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 local_80;
  long **pplStack_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09517faa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091c9660);
    FUN_03f5c2a4(&DAT_091c9ed0);
    FUN_03f5c2a4(&DAT_091ca318);
    FUN_03f5c2a4(&DAT_091ca320);
    FUN_03f5c2a4(&DAT_091cb1a8);
    FUN_03f5c2a4(&DAT_091cb528);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_091785d8);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178590);
    FUN_03f5c2a4(&DAT_091785d0);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_0917ffd8);
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
    FUN_03f5c2a4(&DAT_091adc90);
    FUN_03f5c2a4(&DAT_091ada08);
    FUN_03f5c2a4(&DAT_091acfc8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091b2640);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918f990);
    FUN_03f5c2a4(&DAT_091e8350);
    FUN_03f5c2a4(&DAT_091e8358);
    FUN_03f5c2a4(&DAT_091e8360);
    FUN_03f5c2a4(&DAT_0918f938);
    FUN_03f5c2a4(&DAT_091e8368);
    FUN_03f5c2a4(&DAT_091e8370);
    FUN_03f5c2a4(&DAT_091e8378);
    FUN_03f5c2a4(&DAT_0918f940);
    FUN_03f5c2a4(&DAT_0918f930);
    DAT_09517faa = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*param_4 == 0) goto LAB_0443411c;
  uVar4 = FUN_053ec72c(*param_4,param_1,DAT_091a8028);
  if ((uVar4 & 1) == 0) {
    return;
  }
  bVar2 = (byte)param_2 & 1;
  if ((param_1 == (long *)0x0) || (*param_1 != DAT_09186c00)) {
    lVar5 = thunk_FUN_03f9944c(DAT_0918f938);
    System_Object___ctor(lVar5,0);
    lVar6 = DAT_09184f18;
    if (lVar5 == 0) goto LAB_0443411c;
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_1;
      if (*param_1 != DAT_09184f18) {
        plVar8 = (long *)0x0;
      }
      *(long **)(lVar5 + 0x10) = plVar8;
      plVar8 = param_1;
      if (*param_1 != lVar6) {
        plVar8 = (long *)0x0;
      }
    }
    plVar13 = (long *)(lVar5 + 0x10);
    thunk_FUN_03f5d7b8(plVar13,plVar8);
    if (*plVar13 != 0) {
      lVar6 = FUN_03f5c394(DAT_0917ffd8,1);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(long *)(lVar6 + 0x20) = *plVar13;
        thunk_FUN_03f5d7b8();
        uVar7 = FUN_04ad43f0(param_3,lVar6,DAT_091c9660);
        uVar7 = FUN_04b08b78(uVar7,DAT_091cb1a8);
        lVar6 = thunk_FUN_03f9944c(DAT_0918f990);
        CookingGraph_CustomerOrderGenerator_Slot___ctor();
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x10) = 0;
          lVar10 = *plVar13;
          if (lVar10 != 0) {
            lVar11 = *(long *)(lVar10 + 0x40);
            if ((lVar11 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = *(undefined4 *)(lVar11 + 0x14);
            }
            *(undefined4 *)(lVar6 + 0x30) = uVar3;
            uVar3 = *(undefined4 *)(lVar10 + 0x38);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Math__Max(0,uVar3,0);
            *(byte *)(lVar6 + 0x38) = bVar2;
            *(undefined4 *)(lVar6 + 0x34) = uVar3;
            if (*(long *)(lVar6 + 0x18) != 0) {
              FUN_057e0e78(*(long *)(lVar6 + 0x18),uVar7,DAT_091acfc8);
              if (param_4[2] != 0) {
                uVar15 = *(undefined8 *)(param_4[2] + 0xb0);
                lVar10 = *(long *)(lVar5 + 0x18);
                if (lVar10 == 0) {
                  lVar10 = thunk_FUN_03f9944c(DAT_09178db8);
                  FUN_05322d94(lVar10,lVar5,DAT_091e8360,0);
                  *(long *)(lVar5 + 0x18) = lVar10;
                  thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar10);
                }
                plVar8 = (long *)FUN_04b0cafc(uVar15,lVar10,DAT_091cb538);
                if (plVar8 != (long *)0x0) {
                  lVar5 = *plVar8;
                  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == DAT_0917a648) {
                        puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_04433694;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a648,0);
LAB_04433694:
                  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                  pplStack_78 = &local_68;
                  local_80 = 0;
                  do {
                    local_68 = plVar8;
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar5 = *plVar8;
                    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar4 != 0) {
                      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                          puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_04433728;
                        }
                        uVar4 = uVar4 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04433728:
                    uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    plVar8 = local_68;
                    if ((uVar4 & 1) == 0) {
                      if (local_68 == (long *)0x0) goto LAB_04433c9c;
                      lVar5 = *local_68;
                      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar4 == 0) goto LAB_044338fc;
                      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      goto LAB_044338e4;
                    }
                    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar5 = *local_68;
                    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar4 != 0) {
                      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == DAT_0917ad28) {
                          puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0443378c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ad28,0);
LAB_0443378c:
                    lVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    lVar5 = DAT_091ada00;
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar8 = *(long **)(lVar10 + 0x18);
                    if ((plVar8 == (long *)0x0) || (*plVar8 != DAT_09186c00)) {
                      CookingGraph_CustomerOrderGenerator__<SlotsOf>g__Walk_13_0
                                (plVar8,param_2 & 1,uVar7,param_4);
                      plVar8 = local_68;
                    }
                    else {
                      lVar11 = *(long *)(lVar6 + 0x20);
                      if (lVar11 == 0) {
LAB_04433ebc:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar12 = *(long *)(lVar11 + 0x10);
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_04433ebc;
                      uVar1 = *(uint *)(lVar11 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                        plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar13 = (long)plVar8;
                        thunk_FUN_03f5d7b8(plVar13,plVar8);
                      }
                      else {
                        FUN_057e0c68(lVar11,plVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = DAT_091adc88;
                      lVar10 = *(long *)(lVar10 + 0x20);
                      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x10) == '\0')) {
                        uVar3 = 0xffffffff;
                      }
                      else {
                        uVar3 = *(undefined4 *)(lVar10 + 0x14);
                      }
                      lVar10 = *(long *)(lVar6 + 0x28);
                      if (lVar10 == 0) {
LAB_04433ec0:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar11 = *(long *)(lVar10 + 0x10);
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_04433ec0;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
                        plVar8 = local_68;
                      }
                      else {
                        FUN_057971a8(lVar10,uVar3,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        plVar8 = local_68;
                      }
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      goto LAB_0443411c;
    }
    lVar5 = thunk_FUN_03f9944c(DAT_0918f940);
    System_Object___ctor(lVar5,0);
    lVar6 = DAT_091828a0;
    if (lVar5 == 0) goto LAB_0443411c;
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_1;
      if (*param_1 != DAT_091828a0) {
        plVar8 = (long *)0x0;
      }
      *(long **)(lVar5 + 0x10) = plVar8;
      plVar8 = param_1;
      if (*param_1 != lVar6) {
        plVar8 = (long *)0x0;
      }
    }
    plVar13 = (long *)(lVar5 + 0x10);
    thunk_FUN_03f5d7b8(plVar13,plVar8);
    if (*plVar13 != 0) {
      if (param_4[2] != 0) {
        uVar15 = *(undefined8 *)(param_4[2] + 0x88);
        uVar7 = thunk_FUN_03f9944c(DAT_09178590);
        FUN_05322d94(uVar7,lVar5,DAT_091e8368,0);
        lVar6 = FUN_04ae9738(uVar15,uVar7,DAT_091c9ed0);
        if (lVar6 == 0) {
          if (*plVar13 != 0) {
            uVar7 = *(undefined8 *)(*plVar13 + 0x40);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if (*plVar13 == 0) goto LAB_0443411c;
              CookingGraph_CustomerOrderGenerator__<SlotsOf>g__Walk_13_0
                        (*(undefined8 *)(*plVar13 + 0x40),param_2 & 1,param_3,param_4);
            }
            if (param_4[2] != 0) {
              uVar7 = *(undefined8 *)(param_4[2] + 0xa0);
              lVar6 = *(long *)(lVar5 + 0x18);
              if (lVar6 == 0) {
                lVar6 = thunk_FUN_03f9944c(DAT_09178d60);
                FUN_05322d94(lVar6,lVar5,DAT_091e8370,0);
                *(long *)(lVar5 + 0x18) = lVar6;
                thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar6);
              }
              lVar6 = FUN_04b0cafc(uVar7,lVar6,DAT_091cb528);
              if (lVar6 != 0) {
                local_70 = (long *)FUN_039afee4(0,DAT_0917a638,lVar6);
                pplStack_78 = &local_70;
                local_80 = 0;
                do {
                  plVar8 = local_70;
                  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar6 = *local_70;
                  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                        puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_04433e24;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185b10,0);
LAB_04433e24:
                  uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                  plVar8 = local_70;
                  if ((uVar4 & 1) == 0) {
                    FUN_039aeef4(&local_80);
                    if (param_4[2] == 0) break;
                    uVar7 = *(undefined8 *)(param_4[2] + 0xa8);
                    lVar6 = *(long *)(lVar5 + 0x20);
                    if (lVar6 == 0) {
                      lVar6 = thunk_FUN_03f9944c(DAT_09178d60);
                      FUN_05322d94(lVar6,lVar5,DAT_091e8378,0);
                      *(long *)(lVar5 + 0x20) = lVar6;
                      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x20),lVar6);
                    }
                    lVar6 = FUN_04b0cafc(uVar7,lVar6,DAT_091cb528);
                    if (lVar6 == 0) break;
                    plVar8 = (long *)FUN_039afee4(0,DAT_0917a638,lVar6);
                    pplStack_78 = &local_70;
                    local_80 = 0;
                    goto joined_r0x04433fa4;
                  }
                  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar6 = *local_70;
                  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == DAT_0917ad18) {
                        puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_04433e88;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ad18,0);
LAB_04433e88:
                  lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  CookingGraph_CustomerOrderGenerator__<SlotsOf>g__Walk_13_0
                            (*(undefined8 *)(lVar6 + 0x18),param_2 & 1,param_3,param_4);
                } while( true );
              }
            }
          }
        }
        else {
          lVar5 = thunk_FUN_03f9944c(DAT_0918f990);
          CookingGraph_CustomerOrderGenerator_Slot___ctor();
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x40) = lVar6;
            *(undefined4 *)(lVar5 + 0x30) = 1;
            *(uint *)(lVar5 + 0x34) = param_2 & 1;
            *(byte *)(lVar5 + 0x38) = bVar2;
            thunk_FUN_03f5d7b8((long *)(lVar5 + 0x40),lVar6);
            if (*(long *)(lVar5 + 0x18) != 0) {
              FUN_057e0e78(*(long *)(lVar5 + 0x18),param_3,DAT_091acfc8);
              lVar10 = *(long *)(lVar5 + 0x20);
              uVar7 = *(undefined8 *)(lVar6 + 0x50);
              if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
              lVar11 = puVar9[10];
              if (lVar11 == 0) {
                if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
                }
                uVar15 = *puVar9;
                lVar11 = thunk_FUN_03f9944c(DAT_091785d0);
                FUN_05324070(lVar11,uVar15,DAT_091e8350,0);
                plVar8 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x50);
                *plVar8 = lVar11;
                thunk_FUN_03f5d7b8(plVar8,lVar11);
              }
              uVar7 = FUN_04af8044(uVar7,lVar11,DAT_091ca318);
              if (lVar10 != 0) {
                FUN_057e0e78(lVar10,uVar7,DAT_091ada08);
                lVar10 = *(long *)(lVar5 + 0x28);
                uVar7 = *(undefined8 *)(lVar6 + 0x50);
                if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
                lVar6 = puVar9[0xb];
                if (lVar6 == 0) {
                  if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
                  }
                  uVar15 = *puVar9;
                  lVar6 = thunk_FUN_03f9944c(DAT_091785d8);
                  FUN_053239c8(lVar6,uVar15,DAT_091e8358,0);
                  plVar8 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x58);
                  *plVar8 = lVar6;
                  thunk_FUN_03f5d7b8(plVar8,lVar6);
                }
                uVar7 = FUN_04af6d6c(uVar7,lVar6,DAT_091ca320);
                if (lVar10 != 0) {
                  FUN_057973b4(lVar10,uVar7,DAT_091adc90);
                  if (param_4[1] != 0) {
                    FUN_039b0ea8(param_4[1],lVar5,DAT_091b2640);
                    if (*param_4 != 0) {
                      FUN_053ebe0c(*param_4,param_1,DAT_091a8030);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0443411c;
    }
  }
  else {
    lVar5 = param_4[1];
    lVar6 = thunk_FUN_03f9944c(DAT_0918f990);
    CookingGraph_CustomerOrderGenerator_Slot___ctor();
    if (lVar6 == 0) goto LAB_0443411c;
    lVar11 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x10) = 1;
    *(byte *)(lVar6 + 0x38) = bVar2;
    *(undefined8 *)(lVar6 + 0x30) = 1;
    lVar10 = DAT_091ada00;
    if (lVar11 == 0) goto LAB_0443411c;
    lVar12 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_0443411c;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = (long)param_1;
      thunk_FUN_03f5d7b8(plVar8,param_1);
    }
    else {
      FUN_057e0c68(lVar11,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar10 = DAT_091adc88;
    lVar11 = *(long *)(lVar6 + 0x28);
    if (lVar11 == 0) goto LAB_0443411c;
    lVar12 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_0443411c;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = 1;
    }
    else {
      FUN_057971a8(lVar11,1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = DAT_091b2640;
    if (lVar5 == 0) goto LAB_0443411c;
    lVar11 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0443411c;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar6;
      thunk_FUN_03f5d7b8(plVar8,lVar6);
    }
    else {
      FUN_057e0c68(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_044340e0;
joined_r0x04433fa4:
  local_70 = plVar8;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_09185b10) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_04433ff8;
      }
      uVar4 = uVar4 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04433ff8:
  uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  plVar8 = local_70;
  if ((uVar4 & 1) == 0) {
    FUN_039aeef4(&local_80);
    goto LAB_044340e0;
  }
  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *local_70;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_0917ad18) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0443405c;
      }
      uVar4 = uVar4 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ad18,0);
LAB_0443405c:
  lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CookingGraph_CustomerOrderGenerator__<SlotsOf>g__Walk_13_0
            (*(undefined8 *)(lVar6 + 0x18),0,param_3,param_4);
  plVar8 = local_70;
  goto joined_r0x04433fa4;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar14 = piVar14 + 4;
    if (uVar4 == 0) break;
LAB_044338e4:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04433c90;
    }
  }
LAB_044338fc:
  puVar9 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_04433c90:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_04433c9c:
  if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0443411c;
  if (0 < *(int *)(*(long *)(lVar6 + 0x20) + 0x18)) {
    if (param_4[1] == 0) goto LAB_0443411c;
    FUN_039b0ea8(param_4[1],lVar6,DAT_091b2640);
  }
LAB_044340e0:
  if (*param_4 != 0) {
    FUN_053ebe0c(*param_4,param_1,DAT_091a8030);
    return;
  }
LAB_0443411c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

