// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$StillBuilding
// address: 0x40c25f8
// body: available
// range: 0x40c25f8-0x40c2c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c2b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c2c18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c2c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c2c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c2c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c2c2c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040c2c28) */

uint AnhPD_FoodOrder_ServeShelfController__StillBuilding(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  long **pplStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09515f6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091afe38);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f6f = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_b0 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uVar4 = AnhPD_FoodOrder_ServeShelfController__IsResultAnimPlaying(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c2c1c;
    uVar4 = AnhPD_FoodOrder_ShelfMergeQueue__HasInbound(*(long *)(param_1 + 0xa0),param_2,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = AnhPD_FoodOrder_ServeShelfController__get_Info();
      if (lVar5 != 0) {
        if (*(long *)(param_1 + 0x90) == 0) {
LAB_040c2c1c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = FUN_057e1a08(*(long *)(param_1 + 0x90),param_2,DAT_091afe38);
        if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c2c1c;
        iVar2 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf(*(long *)(param_1 + 0xa8),uVar1,0);
        if (-1 < iVar2) {
          AnhPD_FoodOrder_ServeShelfController__PlateHas(&local_110,param_1,param_2,lVar5);
          uStack_78 = uStack_108;
          local_80 = local_110;
          uVar6 = local_80;
          uStack_68 = uStack_f8;
          uStack_70 = local_100;
          local_80._0_1_ = (char)local_110;
          if ((char)local_80 != '\0') {
            local_80 = uVar6;
            if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c2c1c;
            AnhPD_FoodOrder_ShelfSnapshot__OrderPieces(&local_110,*(long *)(param_1 + 0xa8),iVar2,0)
            ;
            uStack_98 = uStack_108;
            local_a0 = local_110;
            local_90 = local_100;
            FUN_05c33204(&local_128,&local_80,DAT_091b71c8);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_150 = local_118;
            uStack_158 = uStack_120;
            local_160 = local_128;
            AnhPD_FoodOrder_PieceSet__Subtract(&local_140,&local_a0,&local_160,0);
            uStack_b8 = pplStack_138;
            local_c0 = local_140;
            local_b0 = local_130;
            if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c2c1c;
            uVar6 = AnhPD_FoodOrder_ShelfSnapshot__PlateSequence(*(long *)(param_1 + 0xa8),uVar1,0);
            if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c2c1c;
            uVar7 = AnhPD_FoodOrder_ShelfSnapshot__OrderSequence(*(long *)(param_1 + 0xa8),iVar2,0);
            if (*(long *)(param_1 + 0xa8) == 0) goto LAB_040c2c1c;
            uVar1 = AnhPD_FoodOrder_ShelfSnapshot__OrderDishKey(*(long *)(param_1 + 0xa8),iVar2,0);
            plVar8 = (long *)AnhPD_FoodOrder_LevelInfo__GetGridItems(lVar5,0);
            if (plVar8 == (long *)0x0) goto LAB_040c2c1c;
            lVar12 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_0917a4a8) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_040c28b8;
                }
                uVar4 = uVar4 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar4 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a4a8,0);
LAB_040c28b8:
            plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            pplStack_138 = &local_c8;
            local_140 = 0;
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        local_c8 = plVar8;
                        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar12 = *plVar8;
                        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar4 != 0) {
                          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                              puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                              goto LAB_040c293c;
                            }
                            uVar4 = uVar4 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_040c293c:
                        uVar3 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                        plVar8 = local_c8;
                        if ((uVar3 & 1) == 0) {
                          uVar3 = 0;
                          goto LAB_040c2b7c;
                        }
                        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar12 = *local_c8;
                        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar4 != 0) {
                          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar13 + -2) == DAT_0917ab58) {
                              puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                              goto LAB_040c29a4;
                            }
                            uVar4 = uVar4 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ab58,0);
LAB_040c29a4:
                        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar4 = UnityEngine_Object__op_Implicit(plVar10,0);
                        plVar8 = local_c8;
                      } while ((uVar4 & 1) == 0);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                    } while ((*(char *)((long)plVar10 + 0x92) != '\0') ||
                            (*(char *)((long)plVar10 + 0xe9) != '\0'));
                    if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar4 = AnhPD_FoodOrder_ShelfMergeQueue__IsInFlight
                                      (*(long *)(param_1 + 0xa0),plVar10,0);
                    plVar8 = local_c8;
                  } while (((uVar4 & 1) != 0) ||
                          (lVar12 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(lVar5,plVar10,0),
                          plVar8 = local_c8, lVar12 == 0));
                  uStack_108 = *(undefined8 *)(lVar12 + 0x18);
                  local_110 = *(undefined8 *)(lVar12 + 0x10);
                  local_100 = *(undefined8 *)(lVar12 + 0x20);
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uStack_178 = uStack_108;
                  local_180 = local_110;
                  local_170 = local_100;
                  iVar2 = AnhPD_FoodOrder_PieceSet__IntersectCount(&local_c0,&local_180,0);
                  plVar8 = local_c8;
                } while ((iVar2 == 0) ||
                        (uVar4 = AnhPD_FoodOrder_ServeShelfController__TryResolveMerge
                                           (param_1,param_2,plVar10[0xf],lVar5,&local_d0),
                        plVar8 = local_c8, (uVar4 & 1) == 0));
                FUN_05c33204(&local_110,&local_80,DAT_091b71c8);
                local_e0 = local_100;
                local_100 = *(undefined8 *)(lVar12 + 0x20);
                uStack_e8 = uStack_108;
                local_f0 = local_110;
                local_110 = *(undefined8 *)(lVar12 + 0x10);
                uStack_108 = *(undefined8 *)(lVar12 + 0x18);
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uStack_198 = uStack_108;
                local_1a0 = local_110;
                local_190 = local_100;
                AnhPD_FoodOrder_PieceSet__Add(&local_128,&local_f0,&local_1a0,0);
                uStack_1b8 = uStack_120;
                local_1c0 = local_128;
                local_1b0 = local_118;
                uStack_1d8 = uStack_98;
                local_1e0 = local_a0;
                local_1d0 = local_90;
                uVar4 = AnhPD_FoodOrder_LevelInfo__CanStillComplete(lVar5,&local_1c0,&local_1e0,0);
                plVar8 = local_c8;
              } while ((uVar4 & 1) == 0);
              uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar11 = AnhPD_FoodOrder_LevelInfo__SequenceOf(lVar5,uVar11,0);
              uVar11 = System_String__Concat(uVar6,uVar11,0);
              uVar4 = AnhPD_FoodOrder_LevelInfo__SequenceFits(lVar5,uVar1,uVar11,uVar7,0);
              plVar8 = local_c8;
            } while ((uVar4 & 1) == 0);
LAB_040c2b7c:
            plVar8 = local_c8;
            if (local_c8 != (long *)0x0) {
              lVar5 = *local_c8;
              uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar4 != 0) {
                piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185a58) {
                    puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_040c2bdc;
                  }
                  uVar4 = uVar4 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar4 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_040c2bdc:
              (*(code *)*puVar9)(plVar8,puVar9[1]);
            }
            goto LAB_040c2bec;
          }
        }
      }
      uVar3 = 0;
      goto LAB_040c2bec;
    }
  }
  uVar3 = 1;
LAB_040c2bec:
  return uVar3 & 1;
}

