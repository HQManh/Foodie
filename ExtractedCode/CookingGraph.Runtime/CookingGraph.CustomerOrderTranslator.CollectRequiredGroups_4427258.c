// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$CollectRequiredGroups
// address: 0x4427258
// body: available
// range: 0x4427258-0x4427de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4427c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427db0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427db8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427dd4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4427ddc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04427d20) */
/* WARNING: Removing unreachable block (ram,0x04427dd8) */
/* WARNING: Removing unreachable block (ram,0x044277cc) */
/* WARNING: Removing unreachable block (ram,0x04427ad8) */
/* WARNING: Removing unreachable block (ram,0x04427de0) */
/* WARNING: Removing unreachable block (ram,0x04427dd0) */

void CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
               (long *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_09517f5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091cb528);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_0917a018);
    FUN_03f5c2a4(&DAT_0917a1b0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a648);
    FUN_03f5c2a4(&DAT_0917a638);
    FUN_03f5c2a4(&DAT_0917ad18);
    FUN_03f5c2a4(&DAT_0917ad28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8418);
    FUN_03f5c2a4(&DAT_0918f9a0);
    FUN_03f5c2a4(&DAT_091e8420);
    FUN_03f5c2a4(&DAT_091e8428);
    FUN_03f5c2a4(&DAT_0918f9a8);
    DAT_09517f5b = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f9a0);
  System_Object___ctor(lVar1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_5 != (long *)0x0) {
    lVar5 = *param_5;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b5c8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0442743c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b5c8,0);
LAB_0442743c:
    uVar2 = (*(code *)*puVar3)(param_5,param_1,puVar3[1]);
    lVar5 = DAT_09184f18;
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (lVar1 != 0) {
      if (param_1 == (long *)0x0) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = param_1;
        if (*param_1 != DAT_09184f18) {
          plVar4 = (long *)0x0;
        }
        *(long **)(lVar1 + 0x10) = plVar4;
        plVar4 = param_1;
        if (*param_1 != lVar5) {
          plVar4 = (long *)0x0;
        }
      }
      plVar8 = (long *)(lVar1 + 0x10);
      thunk_FUN_03f5d7b8(plVar8,plVar4);
      lVar5 = *plVar8;
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_0918f9a8);
        System_Object___ctor(lVar5,0);
        lVar1 = DAT_091828a0;
        if (lVar5 != 0) {
          if (param_1 == (long *)0x0) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = param_1;
            if (*param_1 != DAT_091828a0) {
              plVar4 = (long *)0x0;
            }
            *(long **)(lVar5 + 0x10) = plVar4;
            plVar4 = param_1;
            if (*param_1 != lVar1) {
              plVar4 = (long *)0x0;
            }
          }
          plVar8 = (long *)(lVar5 + 0x10);
          thunk_FUN_03f5d7b8(plVar8,plVar4);
          if (*plVar8 == 0) goto LAB_04427d24;
          uVar9 = *(undefined8 *)(*plVar8 + 0x40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar9,0,0);
          if ((uVar2 & 1) != 0) {
            if (*plVar8 == 0) goto LAB_04427dcc;
            CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
                      (*(undefined8 *)(*plVar8 + 0x40),param_2,param_3,param_4,param_5);
          }
          if (param_2 != 0) {
            uVar9 = *(undefined8 *)(param_2 + 0xa0);
            lVar1 = *(long *)(lVar5 + 0x18);
            if (lVar1 == 0) {
              lVar1 = thunk_FUN_03f9944c(DAT_09178d60);
              FUN_05322d94(lVar1,lVar5,DAT_091e8420,0);
              *(long *)(lVar5 + 0x18) = lVar1;
              thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar1);
            }
            plVar4 = (long *)FUN_04b0cafc(uVar9,lVar1,DAT_091cb528);
            if (plVar4 != (long *)0x0) {
              lVar1 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917a638) {
                    puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_0442794c;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a638,0);
LAB_0442794c:
              plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
              do {
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar1 = *plVar4;
                uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar2 != 0) {
                  piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_044279c8;
                    }
                    uVar2 = uVar2 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_044279c8:
                uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                if ((uVar2 & 1) == 0) {
                  if (plVar4 == (long *)0x0) goto LAB_04427acc;
                  lVar1 = *plVar4;
                  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                  if (uVar2 == 0) goto LAB_04427aa4;
                  piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  goto LAB_04427a8c;
                }
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar1 = *plVar4;
                uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar2 != 0) {
                  piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == DAT_0917ad18) {
                      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_04427a2c;
                    }
                    uVar2 = uVar2 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ad18,0);
LAB_04427a2c:
                lVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
                          (*(undefined8 *)(lVar1 + 0x18),param_2,param_3,param_4,param_5);
              } while( true );
            }
          }
        }
      }
      else if (param_4 != (long *)0x0) {
        lVar6 = *param_4;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917a1b0) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_04427500;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a1b0,4);
LAB_04427500:
        uVar2 = (*(code *)*puVar3)(param_4,lVar5,puVar3[1]);
        if ((uVar2 & 1) == 0) {
          lVar5 = *param_4;
          lVar6 = *plVar8;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a1b0) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                goto LAB_04427568;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a1b0,5);
LAB_04427568:
          (*(code *)*puVar3)(param_4,lVar6,param_3,puVar3[1]);
        }
        if (param_2 != 0) {
          uVar9 = *(undefined8 *)(param_2 + 0xb0);
          lVar5 = *(long *)(lVar1 + 0x18);
          if (lVar5 == 0) {
            lVar5 = thunk_FUN_03f9944c(DAT_09178db8);
            FUN_05322d94(lVar5,lVar1,DAT_091e8418,0);
            *(long *)(lVar1 + 0x18) = lVar5;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar5);
          }
          plVar4 = (long *)FUN_04b0cafc(uVar9,lVar5,DAT_091cb538);
          if (plVar4 != (long *)0x0) {
            lVar1 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917a648) {
                  puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04427640;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a648,0);
LAB_04427640:
            plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
            do {
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar1 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_044276bc;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_044276bc:
              uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if ((uVar2 & 1) == 0) {
                if (plVar4 == (long *)0x0) goto LAB_04427d24;
                lVar1 = *plVar4;
                uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
                if (uVar2 == 0) goto LAB_04427798;
                piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                goto LAB_04427780;
              }
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar1 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917ad28) {
                    puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_04427720;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ad28,0);
LAB_04427720:
              lVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
                        (*(undefined8 *)(lVar1 + 0x18),param_2,*plVar8,param_4,param_5);
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_04427dcc;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_04427780:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_044277b4;
    }
  }
LAB_04427798:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_044277b4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  goto LAB_04427d24;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_04427a8c:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04427ac0;
    }
  }
LAB_04427aa4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04427ac0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_04427acc:
  uVar9 = *(undefined8 *)(param_2 + 0xa8);
  lVar1 = *(long *)(lVar5 + 0x20);
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09178d60);
    FUN_05322d94(lVar1,lVar5,DAT_091e8428,0);
    *(long *)(lVar5 + 0x20) = lVar1;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x20),lVar1);
  }
  plVar4 = (long *)FUN_04b0cafc(uVar9,lVar1,DAT_091cb528);
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a638) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04427b9c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a638,0);
LAB_04427b9c:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04427c08;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04427c08:
      uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar2 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_04427d24;
        lVar1 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 == 0) goto LAB_04427cec;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_04427cd4;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917ad18) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04427c6c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ad18,0);
LAB_04427c6c:
      lVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
                (*(undefined8 *)(lVar1 + 0x18),param_2,param_3,param_4,param_5);
    } while( true );
  }
LAB_04427dcc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_04427cd4:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04427d08;
    }
  }
LAB_04427cec:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04427d08:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_04427d24:
  lVar1 = *param_5;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a018) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_04427d7c;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917a018,6);
LAB_04427d7c:
  (*(code *)*puVar3)(param_5,param_1,puVar3[1]);
  return;
}

