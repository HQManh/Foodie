// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$get_CurrentMemberSchemas
// address: 0x7671d54
// body: available
// range: 0x7671d54-0x767296f inclusive
// range: 0x7672974-0x7672adb inclusive
// range: 0x7672ae0-0x7672ae3 inclusive
// range: 0x7672ae8-0x7672aeb inclusive
// range: 0x7672b34-0x7672cab inclusive
// range: 0x7672d5c-0x7672dd3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7672538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767296c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672ad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7672b6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076729f4) */
/* WARNING: Removing unreachable block (ram,0x07672b70) */
/* WARNING: Removing unreachable block (ram,0x07672b50) */

long * Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long local_88;
  long **local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_09522498 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0d8);
    FUN_03f5c2a4(&DAT_0917a1f0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2c0);
    FUN_03f5c2a4(&DAT_0917a5e0);
    FUN_03f5c2a4(&DAT_0917a938);
    FUN_03f5c2a4(&DAT_0917acb0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b0c8);
    FUN_03f5c2a4(&DAT_09180218);
    FUN_03f5c2a4(&DAT_09187488);
    FUN_03f5c2a4(&DAT_091a9860);
    FUN_03f5c2a4(&DAT_091a9868);
    FUN_03f5c2a4(&DAT_091ae068);
    FUN_03f5c2a4(&DAT_091ae070);
    FUN_03f5c2a4(&DAT_0917c5e0);
    FUN_03f5c2a4(&DAT_09189db0);
    DAT_09522498 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  if (*(long *)(param_1 + 0x98) == 0) {
    plVar10 = (long *)FUN_03f5c394(DAT_09180218,1);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x90);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
        uVar13 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar13,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar6;
        thunk_FUN_03f5d7b8(plVar10 + 4,lVar6);
        plVar11 = (long *)thunk_FUN_03f9944c(DAT_0917c5e0);
        FUN_057e053c(plVar11,plVar10,DAT_091ae070);
        return plVar11;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    goto LAB_07672b7c;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x98) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07671f3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,0);
LAB_07671f3c:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (iVar2 != 0) {
      lVar6 = *(long *)(param_1 + 0x98);
      if (lVar6 == 0) {
LAB_07672b7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = *(int *)(lVar6 + 0x10);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          return *(long **)(lVar6 + 0x18);
        }
        if (iVar2 == 1) {
          if (*(long *)(lVar6 + 0x28) == 0) {
            thunk_FUN_03fc39d4(&DAT_091873b8);
            uVar13 = thunk_FUN_03f9944c();
            uVar5 = thunk_FUN_03fc39d4(&DAT_091ffa10);
            Newtonsoft_Json_JsonReaderException___ctor(uVar13,uVar5,0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_091d1f50);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar13,uVar5);
          }
          plVar10 = (long *)thunk_FUN_03f9944c(DAT_0917c5e0);
          FUN_057e0400(plVar10,DAT_091ae068);
          if ((*(long *)(param_1 + 0x98) != 0) &&
             (plVar11 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar11 != (long *)0x0)) {
            lVar6 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_076725a0;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5e0,0);
LAB_076725a0:
            plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
            local_80 = &local_68;
            local_88 = 0;
            do {
              local_68 = plVar11;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0767262c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_0767262c:
              uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              plVar11 = local_68;
              if ((uVar8 & 1) == 0) {
                plVar11 = *local_80;
                if (plVar11 == (long *)0x0) goto LAB_07672dc8;
                lVar6 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar8 == 0) goto LAB_07672da0;
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_07672d88;
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *local_68;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_07672690;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917acb0,0);
LAB_07672690:
              lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar11 = *(long **)(lVar6 + 0x80);
              if (plVar11 != (long *)0x0) {
                if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *plVar11;
                uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x28);
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917a1f0) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                      goto LAB_07672710;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a1f0,7);
LAB_07672710:
                uVar8 = (*(code *)*puVar3)(plVar11,uVar13,&local_70,puVar3[1]);
                uVar13 = local_70;
                if ((uVar8 & 1) != 0) {
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar7 = *plVar10;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_07672780;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_07672780:
                  (*(code *)*puVar3)(plVar10,uVar13,puVar3[1]);
                }
              }
              plVar11 = *(long **)(lVar6 + 0x88);
              if (plVar11 != (long *)0x0) {
                lVar7 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917a2c0) {
                      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_076727ec;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a2c0,0);
LAB_076727ec:
                plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
joined_r0x07672808:
                local_78 = plVar11;
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_07672858;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_07672858:
                uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                plVar11 = local_78;
                if ((uVar8 & 1) != 0) {
                  if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar7 = *local_78;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a938) {
                        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_076728bc;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917a938,0);
LAB_076728bc:
                  auVar14 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x28);
                  if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar8 = System_Text_RegularExpressions_Regex__IsMatch(uVar13,auVar14._0_8_,0);
                  plVar11 = local_78;
                  if ((uVar8 & 1) != 0) {
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar7 = *plVar10;
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                          goto LAB_07672954;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_07672954:
                    (*(code *)*puVar3)(plVar10,auVar14._8_8_,puVar3[1]);
                    plVar11 = local_78;
                  }
                  goto joined_r0x07672808;
                }
                if (local_78 != (long *)0x0) {
                  lVar7 = *local_78;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_09185a58) {
                        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_076729dc;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_076729dc:
                  (*(code *)*puVar3)(plVar11,puVar3[1]);
                }
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_07672a48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,0);
LAB_07672a48:
              iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
              plVar11 = local_68;
              if (((iVar2 == 0) && (*(char *)(lVar6 + 0xa1) != '\0')) &&
                 (lVar6 = *(long *)(lVar6 + 0x90), lVar6 != 0)) {
                lVar7 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_07672ac4;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_07672ac4:
                (*(code *)*puVar3)(plVar10,lVar6,puVar3[1]);
                plVar11 = local_68;
              }
            } while( true );
          }
          goto LAB_07672b7c;
        }
      }
      else {
        if (iVar2 == 2) {
          plVar10 = (long *)thunk_FUN_03f9944c(DAT_0917c5e0);
          FUN_057e0400(plVar10,DAT_091ae068);
          if ((*(long *)(param_1 + 0x98) != 0) &&
             (plVar11 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar11 != (long *)0x0)) {
            lVar6 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_076720d8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5e0,0);
LAB_076720d8:
            plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
            local_80 = &local_68;
            local_88 = 0;
            do {
              local_68 = plVar11;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0767215c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_0767215c:
              uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              plVar11 = local_68;
              if ((uVar8 & 1) == 0) {
                if (local_68 == (long *)0x0) {
                  return plVar10;
                }
                lVar6 = *local_68;
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar8 == 0) goto LAB_07672584;
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_0767256c;
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *local_68;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_076721c0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917acb0,0);
LAB_076721c0:
              lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar12 = *(long **)(lVar6 + 0x78);
              if (*(char *)(lVar6 + 0xa0) == '\0') {
                plVar11 = local_68;
                if (plVar12 != (long *)0x0) {
                  lVar7 = *plVar12;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_07672354;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a0d8,0);
LAB_07672354:
                  iVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
                  plVar11 = local_68;
                  if (0 < iVar2) {
                    plVar11 = *(long **)(lVar6 + 0x78);
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar6 = *plVar11;
                    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_0917b0c8) {
                          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_076723bc;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b0c8,0);
LAB_076723bc:
                    uVar13 = (*(code *)*puVar3)(plVar11,0,puVar3[1]);
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar6 = *plVar10;
                    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                          goto LAB_07672424;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_07672424:
                    (*(code *)*puVar3)(plVar10,uVar13,puVar3[1]);
                    plVar11 = local_68;
                  }
                }
              }
              else {
                if (plVar12 != (long *)0x0) {
                  lVar7 = *plVar12;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_07672274;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a0d8,0);
LAB_07672274:
                  iVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
                  if (0 < iVar2) {
                    plVar11 = *(long **)(lVar6 + 0x78);
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar7 = *plVar11;
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_076722dc;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a0d8,0);
LAB_076722dc:
                    iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x30) + -1;
                    if (iVar1 < iVar2) {
                      plVar11 = *(long **)(lVar6 + 0x78);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar7 = *plVar11;
                      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == DAT_0917b0c8) {
                            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                            goto LAB_07672444;
                          }
                          uVar8 = uVar8 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b0c8,0);
LAB_07672444:
                      uVar13 = (*(code *)*puVar3)(plVar11,iVar1,puVar3[1]);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar7 = *plVar10;
                      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                            goto LAB_076724ac;
                          }
                          uVar8 = uVar8 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_076724ac:
                      (*(code *)*puVar3)(plVar10,uVar13,puVar3[1]);
                    }
                  }
                }
                plVar11 = local_68;
                if ((*(char *)(lVar6 + 0xa2) != '\0') &&
                   (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0)) {
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar7 = *plVar10;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a0d8) {
                        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_07672520;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a0d8,2);
LAB_07672520:
                  (*(code *)*puVar3)(plVar10,lVar6,puVar3[1]);
                  plVar11 = local_68;
                }
              }
            } while( true );
          }
          goto LAB_07672b7c;
        }
        if (iVar2 == 3) goto LAB_07672000;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar6 = *(long *)(param_1 + 0x98);
      FUN_039b1d98(lVar6);
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar6 + 0x10));
      uVar5 = thunk_FUN_03fc39d4(&DAT_09187268);
      uVar5 = FUN_03f5c42c(uVar5,&local_88);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09211ee0);
      uVar13 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar13,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09210ab8);
      System_ArgumentOutOfRangeException___ctor(uVar5,uVar4,uVar13,0);
      uVar13 = thunk_FUN_03fc39d4(&DAT_091d1f50);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar13);
    }
  }
LAB_07672000:
  if (*(int *)(DAT_09187488 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return (long *)**(undefined8 **)(DAT_09187488 + 0xb8);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07672d88:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07672dbc;
    }
  }
LAB_07672da0:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_07672dbc:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
LAB_07672dc8:
  if (local_88 == 0) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0767256c:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07672b40;
    }
  }
LAB_07672584:
  puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_07672b40:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
  return plVar10;
}

