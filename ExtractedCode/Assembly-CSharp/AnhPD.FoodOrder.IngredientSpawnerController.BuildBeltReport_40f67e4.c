// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$BuildBeltReport
// address: 0x40f67e4
// body: available
// range: 0x40f67e4-0x40f708b inclusive
// range: 0x40f7090-0x40f7733 inclusive
// range: 0x40f7738-0x40f773b inclusive
// range: 0x40f7788-0x40f796f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f7088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f783c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7848 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f784c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7850 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7854 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040f7110) */
/* WARNING: Removing unreachable block (ram,0x040f7894) */
/* WARNING: Removing unreachable block (ram,0x040f7808) */

undefined8 AnhPD_FoodOrder_IngredientSpawnerController__BuildBeltReport(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  byte local_d0 [4];
  byte local_cc [4];
  ulong local_c8;
  long **pplStack_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  long local_a8;
  long **pplStack_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_09516116 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2708);
    FUN_03f5c2a4(&DAT_091a2710);
    FUN_03f5c2a4(&DAT_091a2718);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abe28);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0921fec0);
    FUN_03f5c2a4(&DAT_09214730);
    FUN_03f5c2a4(&DAT_09223700);
    FUN_03f5c2a4(&DAT_0921c9e8);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09218fb8);
    FUN_03f5c2a4(&DAT_0921c9d0);
    FUN_03f5c2a4(&DAT_091f7098);
    FUN_03f5c2a4(&DAT_0921fdb8);
    FUN_03f5c2a4(&DAT_09217f38);
    FUN_03f5c2a4(&DAT_09220ca8);
    FUN_03f5c2a4(&DAT_091f5c80);
    FUN_03f5c2a4(&DAT_09217f30);
    FUN_03f5c2a4(&DAT_09218a90);
    FUN_03f5c2a4(&DAT_09223c08);
    FUN_03f5c2a4(&DAT_091f6c90);
    FUN_03f5c2a4(&DAT_09217e90);
    DAT_09516116 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (*(long *)(param_1 + 0x1a0) == 0) {
    return DAT_09217f38;
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x18));
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_a8);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      uVar3 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(*(long *)(param_1 + 0x1a0),0);
      local_c8 = CONCAT44(local_c8._4_4_,uVar3);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_c8);
      local_ac = CONCAT31(local_ac._1_3_,*(undefined1 *)(param_1 + 0x1d8));
      uVar8 = FUN_03f5c42c(DAT_09535400,&local_ac);
      uVar7 = System_String__Format(DAT_09217f30,uVar6,uVar7,uVar8,0);
      local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(param_1 + 0x7c));
      uVar8 = FUN_03f5c42c(DAT_09535400,&local_b0);
      uVar6 = DAT_09220ca8;
      cVar14 = '\0';
      if (*(long *)(param_1 + 0x1b8) != 0) {
        cVar14 = *(char *)(*(long *)(param_1 + 0x1b8) + 0x18);
      }
      local_a8 = CONCAT71(local_a8._1_7_,cVar14 != '\0');
      uVar9 = FUN_03f5c42c(DAT_09535400,&local_a8);
      uVar6 = System_String__Format(uVar6,uVar8,uVar9,0);
      uVar6 = System_String__Concat(uVar7,uVar6,0);
      if (plVar5 != (long *)0x0) {
        System_Text_StringBuilder__AppendLine(plVar5,uVar6,0);
        uVar6 = DAT_09223700;
        uVar7 = DAT_0921fec0;
        if (*(long *)(param_1 + 0x1d0) != 0) {
          uVar7 = AnhPD_FoodOrder_ConveyorStuckAlert__DebugState();
        }
        uVar6 = System_String__Concat(uVar6,uVar7,0);
        System_Text_StringBuilder__AppendLine(plVar5,uVar6,0);
        if (*(long *)(param_1 + 0x198) != 0) {
          FUN_057e185c(&local_a8,*(long *)(param_1 + 0x198),DAT_091abe28);
          iVar19 = 0;
          local_70 = local_98;
          plStack_78 = (long *)pplStack_a0;
          local_80 = local_a8;
          local_a8 = 0;
          pplStack_a0 = (long **)&local_80;
          while (uVar10 = FUN_071bd28c(&local_80,DAT_091a2710), (uVar10 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = AnhPD_FoodOrder_ConveyorColumn__get_HasPendingSpawn(local_70,0);
            iVar19 = iVar19 + (uVar4 & 1);
          }
          FUN_071bd288(&local_80,DAT_091a2708);
          local_a8 = CONCAT44(local_a8._4_4_,iVar19);
          uVar6 = FUN_03f5c42c(DAT_09535420,&local_a8);
          uVar6 = System_String__Format(DAT_09218fb8,uVar6,0);
          System_Text_StringBuilder__AppendLine(plVar5,uVar6,0);
          if ((*(long *)(param_1 + 0x1a0) != 0) &&
             (plVar17 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x20), plVar17 != (long *)0x0)) {
            lVar15 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == DAT_0917a3f0) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_040f6c5c;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917a3f0,0);
LAB_040f6c5c:
            plVar17 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
            pplStack_a0 = &local_88;
            local_a8 = 0;
            do {
              local_88 = plVar17;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar15 = *plVar17;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == DAT_09185b10) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_040f6ce0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185b10,0);
LAB_040f6ce0:
              uVar10 = (*(code *)*puVar11)(plVar17,puVar11[1]);
              plVar17 = local_88;
              if ((uVar10 & 1) == 0) {
                plVar17 = *pplStack_a0;
                if (plVar17 == (long *)0x0) goto LAB_040f77f8;
                lVar15 = *plVar17;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 == 0) goto LAB_040f77d0;
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                goto LAB_040f77b8;
              }
              if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar15 = *local_88;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == DAT_0917aa98) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_040f6d44;
                  }
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917aa98,0);
LAB_040f6d44:
              lVar15 = (*(code *)*puVar11)(plVar17,puVar11[1]);
              plVar17 = local_88;
              if (lVar15 != 0) {
                plVar18 = *(long **)(lVar15 + 0x10);
                plVar17 = (long *)FUN_03f5c394(DAT_09180318,4);
                local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar15 + 0x20));
                lVar12 = FUN_03f5c42c(DAT_09535420,&local_c8);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar13 == 0)) {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if ((int)plVar17[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar17[4] = lVar12;
                thunk_FUN_03f5d7b8(plVar17 + 4,lVar12);
                local_ac = *(uint *)(lVar15 + 0x24);
                lVar12 = FUN_03f5c42c(DAT_09535420,&local_ac);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar13 == 0)) {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar17[5] = lVar12;
                thunk_FUN_03f5d7b8(plVar17 + 5,lVar12);
                local_b0 = *(uint *)(lVar15 + 0x28);
                lVar12 = FUN_03f5c42c(DAT_09535420,&local_b0);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar13 == 0)) {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if (*(uint *)(plVar17 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar17[6] = lVar12;
                thunk_FUN_03f5d7b8(plVar17 + 6,lVar12);
                local_b4 = *(uint *)(lVar15 + 0x2c);
                lVar12 = FUN_03f5c42c(DAT_09535420,&local_b4);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar13 == 0)) {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if ((*(uint *)(plVar17 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar17[7] = lVar12;
                thunk_FUN_03f5d7b8(plVar17 + 7,lVar12);
                uVar6 = System_String__Format(DAT_091f5c80,plVar17,0);
                System_Text_StringBuilder__Append(plVar5,uVar6,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = UnityEngine_Object__op_Implicit(plVar18,0);
                if ((uVar10 & 1) == 0) {
                  System_Text_StringBuilder__AppendLine(plVar5,DAT_0921fdb8,0);
                  plVar17 = local_88;
                }
                else {
                  System_Text_StringBuilder__Append(plVar5,0x5b,0);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar17 = (long *)plVar18[0x12];
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar12 = *plVar17;
                  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar10 != 0) {
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == DAT_0917a5a0) {
                        puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_040f6f80;
                      }
                      uVar10 = uVar10 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917a5a0,0);
LAB_040f6f80:
                  plVar17 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
                  pplStack_c0 = &local_90;
                  local_c8 = 0;
joined_r0x040f6f9c:
                  local_90 = plVar17;
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar12 = *plVar17;
                  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar10 != 0) {
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == DAT_09185b10) {
                        puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_040f6fec;
                      }
                      uVar10 = uVar10 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185b10,0);
LAB_040f6fec:
                  uVar10 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                  plVar17 = local_90;
                  if ((uVar10 & 1) != 0) {
                    if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar12 = *local_90;
                    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar10 != 0) {
                      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == DAT_0917ac50) {
                          puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_040f7050;
                        }
                        uVar10 = uVar10 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_03f95da8(local_90,DAT_0917ac50,0);
LAB_040f7050:
                    lVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                    plVar17 = local_90;
                    if (lVar12 != 0) {
                      lVar12 = System_Text_StringBuilder__Append(plVar5,lVar12,0);
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      System_Text_StringBuilder__Append(lVar12,0x20,0);
                      plVar17 = local_90;
                    }
                    goto joined_r0x040f6f9c;
                  }
                  if (local_90 != (long *)0x0) {
                    lVar12 = *local_90;
                    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar10 != 0) {
                      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == DAT_09185a58) {
                          puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_040f70f8;
                        }
                        uVar10 = uVar10 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_03f95da8(local_90,DAT_09185a58,0);
LAB_040f70f8:
                    (*(code *)*puVar11)(plVar17,puVar11[1]);
                  }
                  System_Text_StringBuilder__Append(plVar5,DAT_09214730,0);
                  lVar12 = DAT_091f8a38;
                  if (*(long *)(lVar15 + 0x30) != 0) {
                    plVar17 = (long *)FUN_03f5c394(DAT_09180318,4);
                    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_c8 = CONCAT44(local_c8._4_4_,
                                        *(undefined4 *)(*(long *)(lVar15 + 0x30) + 0x10));
                    lVar12 = FUN_03f5c42c(DAT_09535420,&local_c8);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar13 == 0)) {
                      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,0);
                    }
                    if ((int)plVar17[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar17[4] = lVar12;
                    thunk_FUN_03f5d7b8(plVar17 + 4,lVar12);
                    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar12 = *(long *)(*(long *)(lVar15 + 0x30) + 0x18);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_ac = *(uint *)(lVar12 + 0x18);
                    lVar12 = FUN_03f5c42c(DAT_09535420,&local_ac);
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar13 == 0)) {
                      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,0);
                    }
                    if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar17[5] = lVar12;
                    thunk_FUN_03f5d7b8(plVar17 + 5,lVar12);
                    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_b0 = *(uint *)(*(long *)(lVar15 + 0x30) + 0x14);
                    lVar12 = FUN_03f5c42c(DAT_09535420,&local_b0);
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar13 == 0)) {
                      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,0);
                    }
                    if (*(uint *)(plVar17 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar17[6] = lVar12;
                    thunk_FUN_03f5d7b8(plVar17 + 6,lVar12);
                    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar1 = AnhPD_FoodOrder_ConveyorChain__get_IsReady(*(long *)(lVar15 + 0x30),0);
                    local_b4 = CONCAT31(local_b4._1_3_,uVar1) & 0xffffff01;
                    lVar12 = FUN_03f5c42c(DAT_09535400,&local_b4);
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar13 == 0)) {
                      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,0);
                    }
                    if ((*(uint *)(plVar17 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar17[7] = lVar12;
                    thunk_FUN_03f5d7b8(plVar17 + 7,lVar12);
                    lVar12 = System_String__Format(DAT_091f7098,plVar17,0);
                  }
                  plVar17 = (long *)FUN_03f5c394(DAT_09180318,4);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar13 == 0)) {
                    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar6,0);
                  }
                  if ((int)plVar17[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  plVar17[4] = lVar12;
                  thunk_FUN_03f5d7b8(plVar17 + 4,lVar12);
                  local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)((long)plVar18 + 0xd1));
                  lVar12 = FUN_03f5c42c(DAT_09535400,&local_c8);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar13 == 0)) {
                    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar6,0);
                  }
                  if ((*(uint *)(plVar17 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  plVar17[5] = lVar12;
                  thunk_FUN_03f5d7b8(plVar17 + 5,lVar12);
                  local_ac = CONCAT31(local_ac._1_3_,0 < *(int *)((long)plVar18 + 0x9c));
                  lVar12 = FUN_03f5c42c(DAT_09535400,&local_ac);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar13 == 0)) {
                    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar6,0);
                  }
                  if (*(uint *)(plVar17 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  plVar17[6] = lVar12;
                  thunk_FUN_03f5d7b8(plVar17 + 6,lVar12);
                  local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)((long)plVar18 + 0x1ac));
                  lVar12 = FUN_03f5c42c(DAT_09535400,&local_b0);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar13 == 0)) {
                    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar6,0);
                  }
                  if ((*(uint *)(plVar17 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  plVar17[7] = lVar12;
                  thunk_FUN_03f5d7b8(plVar17 + 7,lVar12);
                  uVar6 = System_String__Format(DAT_09218a90,plVar17,0);
                  local_b4 = CONCAT31(local_b4._1_3_,*(undefined1 *)((long)plVar18 + 0xe2));
                  uVar7 = FUN_03f5c42c(DAT_09535400,&local_b4);
                  local_cc[0] = AnhPD_FoodOrder_ConveyorSlot__get_IsPickable(lVar15,0);
                  local_cc[0] = local_cc[0] & 1;
                  uVar8 = FUN_03f5c42c(DAT_09535400,local_cc);
                  local_d0[0] = (**(code **)(*plVar18 + 0x198))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1a0));
                  local_d0[0] = local_d0[0] & 1;
                  uVar9 = FUN_03f5c42c(DAT_09535400,local_d0);
                  uVar7 = System_String__Format(DAT_09223c08,uVar7,uVar8,uVar9,0);
                  uVar6 = System_String__Concat(uVar6,uVar7,0);
                  System_Text_StringBuilder__Append(plVar5,uVar6,0);
                  uVar10 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar15,0);
                  if (((uVar10 & 1) != 0) && (*(long *)(param_1 + 0x1b8) != 0)) {
                    uVar1 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor
                                      (*(long *)(param_1 + 0x1b8),plVar18,0);
                    lVar15 = FUN_03f5c394(DAT_091805f8,6);
                    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar2 = AnhPD_FoodOrder_ConveyorPickup__Allows
                                      (*(long *)(param_1 + 0x1b8),plVar18,0,0);
                    local_c8 = CONCAT71(local_c8._1_7_,uVar2) & 0xffffffffffffff01;
                    uVar6 = FUN_03f5c42c(DAT_09535400,&local_c8);
                    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar2 = AnhPD_FoodOrder_ConveyorPickup__Allows
                                      (*(long *)(param_1 + 0x1b8),plVar18,1,0);
                    local_ac = CONCAT31(local_ac._1_3_,uVar2) & 0xffffff01;
                    uVar7 = FUN_03f5c42c(DAT_09535400,&local_ac);
                    uVar6 = System_String__Format(DAT_091f6c90,uVar6,uVar7,0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x20) = uVar6;
                    thunk_FUN_03f5d7b8();
                    local_b0 = CONCAT31(local_b0._1_3_,uVar1) & 0xffffff01;
                    uVar6 = FUN_03f5c42c(DAT_09535400,&local_b0);
                    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_b4 = CONCAT31(local_b4._1_3_,
                                        *(undefined1 *)(*(long *)(param_1 + 0x1b8) + 0x58));
                    uVar7 = FUN_03f5c42c(DAT_09535400,&local_b4);
                    uVar6 = System_String__Format(DAT_0921c9e8,uVar6,uVar7,0);
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x28) = uVar6;
                    thunk_FUN_03f5d7b8();
                    if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x30) = DAT_09217e90;
                    thunk_FUN_03f5d7b8();
                    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar6 = AnhPD_FoodOrder_ConveyorPickup__DebugLastBatch();
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x38) = uVar6;
                    thunk_FUN_03f5d7b8();
                    if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x40) = DAT_09214730;
                    thunk_FUN_03f5d7b8();
                    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_cc[0] = AnhPD_FoodOrder_ConveyorPickup__HasMoveFor
                                            (*(long *)(param_1 + 0x1b8),plVar18);
                    local_cc[0] = local_cc[0] & 1;
                    uVar6 = FUN_03f5c42c(DAT_09535400,local_cc);
                    local_d0[0] = AnhPD_FoodOrder_IngredientSpawnerController__WouldBeUsableAtFront
                                            (param_1,plVar18);
                    local_d0[0] = local_d0[0] & 1;
                    uVar7 = FUN_03f5c42c(DAT_09535400,local_d0);
                    uVar6 = System_String__Format(DAT_0921c9d0,uVar6,uVar7,0);
                    if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined8 *)(lVar15 + 0x48) = uVar6;
                    thunk_FUN_03f5d7b8();
                    uVar6 = System_String__Concat(lVar15,0);
                    System_Text_StringBuilder__Append(plVar5,uVar6,0);
                  }
                  System_Text_StringBuilder__AppendLine(plVar5,0);
                  plVar17 = local_88;
                }
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_040f77b8:
    if (*(long *)(piVar16 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_040f77ec;
    }
  }
LAB_040f77d0:
  puVar11 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185a58,0);
LAB_040f77ec:
  (*(code *)*puVar11)(plVar17,puVar11[1]);
LAB_040f77f8:
  if (local_a8 == 0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

