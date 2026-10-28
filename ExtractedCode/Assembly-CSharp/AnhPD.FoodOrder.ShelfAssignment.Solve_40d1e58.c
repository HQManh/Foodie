// rea decompile_all
// name: AnhPD.FoodOrder.ShelfAssignment$$Solve
// address: 0x40d1e58
// body: available
// range: 0x40d1e58-0x40d2b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d2b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d2b8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_ShelfAssignment__Solve
          (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 *param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10
          ,long param_11)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long lVar23;
  long *plVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  uint local_24c;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515fe6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b2e8);
    FUN_03f5c2a4(&DAT_0917b3a0);
    FUN_03f5c2a4(&DAT_0917b490);
    FUN_03f5c2a4(&DAT_0917b538);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918ab80);
    DAT_09515fe6 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  if ((param_11 != 0) && (0 < (int)*(ulong *)(param_11 + 0x18))) {
    uVar18 = *(ulong *)(param_11 + 0x18) & 0xffffffff;
    uVar21 = uVar18 - 1;
    uVar35 = 1;
    uVar34 = 0;
    uVar33 = 3;
    uVar32 = 2;
    uVar18 = uVar18 + 3 & 0x1fffffffc;
    puVar22 = (undefined4 *)(param_11 + 0x2c);
    do {
      if (uVar34 <= uVar21) {
        puVar22[-3] = 0xffffffff;
      }
      if (uVar35 <= uVar21) {
        puVar22[-2] = 0xffffffff;
      }
      if (uVar32 <= uVar21) {
        puVar22[-1] = 0xffffffff;
      }
      if (uVar33 <= uVar21) {
        *puVar22 = 0xffffffff;
      }
      uVar32 = uVar32 + 4;
      uVar33 = uVar33 + 4;
      uVar34 = uVar34 + 4;
      uVar35 = uVar35 + 4;
      uVar18 = uVar18 - 4;
      puVar22 = puVar22 + 4;
    } while (uVar18 != 0);
  }
  if (param_1 == (long *)0x0) {
    local_24c = 0;
  }
  else {
    lVar19 = *param_1;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == DAT_0917b2e8) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_040d2048;
        }
        uVar18 = uVar18 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar18 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b2e8,0);
LAB_040d2048:
    local_24c = (*(code *)*puVar16)(param_1,puVar16[1]);
  }
  if (param_2 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    lVar19 = *param_2;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == DAT_0917b3a0) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_040d20b0;
        }
        uVar18 = uVar18 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar18 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3a0,0);
LAB_040d20b0:
    uVar11 = (*(code *)*puVar16)(param_2,puVar16[1]);
    uVar28 = local_24c;
    if (9 < (int)local_24c) {
      uVar28 = 10;
    }
    uVar17 = uVar11;
    if (0xb < (int)uVar11) {
      uVar17 = 0xc;
    }
    if (local_24c == 0) {
      return 0;
    }
    if (uVar11 == 0) {
      return 0;
    }
    uVar3 = uVar28 & 0x1f;
    if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_ShelfAssignment__EnsureBuffers(uVar17 + 1 << (ulong)uVar3);
    if (0 < (int)local_24c) {
      if (param_1 == (long *)0x0) goto LAB_040d2b88;
      uVar18 = 0;
      do {
        lVar19 = *param_1;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == DAT_0917b490) {
              puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_040d219c;
            }
            uVar21 = uVar21 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar21 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b490,0);
LAB_040d219c:
        (*(code *)*puVar16)(&local_160,param_1,uVar18 & 0xffffffff,puVar16[1]);
        uStack_98 = uStack_158;
        local_a0 = local_160;
        uStack_88 = uStack_148;
        uStack_90 = local_150;
        if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar19 = *(long *)(*(long *)(DAT_0918ab80 + 0xb8) + 0x18);
        if ((char)local_a0 == '\0') {
          iVar12 = 0;
        }
        else {
          FUN_05c33204(&local_160,&local_a0,DAT_091b71c8);
          uStack_b8 = uStack_158;
          local_c0 = local_160;
          local_b0 = local_150;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar12 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_c0,0);
          iVar12 = iVar12 * 10;
        }
        if (lVar19 == 0) goto LAB_040d2b88;
        if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_040d2b8c;
        lVar23 = uVar18 * 4;
        uVar18 = uVar18 + 1;
        *(int *)(lVar19 + lVar23 + 0x20) = iVar12;
      } while (uVar18 != uVar28);
    }
    if (0 < (int)uVar11) {
      if (param_2 == (long *)0x0) goto LAB_040d2b88;
      uVar18 = 0;
      do {
        lVar19 = *param_2;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == DAT_0917b538) {
              puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_040d22f8;
            }
            uVar21 = uVar21 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar21 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b538,0);
LAB_040d22f8:
        (*(code *)*puVar16)(&local_160,param_2,uVar18 & 0xffffffff,puVar16[1]);
        uStack_d8 = uStack_158;
        local_e0 = local_160;
        local_d0 = local_150;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar21 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_e0,0);
        uVar9 = 0;
        if (((uVar21 & 1) == 0) && (0 < (int)local_24c)) {
          if (param_1 == (long *)0x0) goto LAB_040d2b88;
          uVar21 = 0;
          uVar9 = 0;
          do {
            lVar19 = *param_1;
            uVar32 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar32 != 0) {
              piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == DAT_0917b490) {
                  puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_040d23b0;
                }
                uVar32 = uVar32 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar32 != 0);
            }
            puVar16 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b490,0);
LAB_040d23b0:
            (*(code *)*puVar16)(&local_160,param_1,uVar21 & 0xffffffff,puVar16[1]);
            uStack_f8 = uStack_158;
            local_100 = local_160;
            uVar10 = local_100;
            uStack_e8 = uStack_148;
            uStack_f0 = local_150;
            local_100._0_1_ = (char)local_160;
            bVar4 = (char)local_100 != '\0';
            local_100 = uVar10;
            if (bVar4) {
              FUN_05c33204(&local_160,&local_100,DAT_091b71c8);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uStack_178 = uStack_158;
              local_180 = local_160;
              local_170 = local_150;
              uVar32 = AnhPD_FoodOrder_PieceSet__Covers(&local_e0,&local_180,0);
              if ((uVar32 & 1) != 0) {
                if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar32 = AnhPD_FoodOrder_ShelfAssignment__DishFits
                                   (param_4,uVar21 & 0xffffffff,param_5,uVar18 & 0xffffffff);
                if ((uVar32 & 1) != 0) {
                  FUN_05c33204(&local_160,&local_100,DAT_091b71c8);
                  uStack_b8 = uStack_158;
                  local_c0 = local_160;
                  local_b0 = local_150;
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar32 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_c0,0);
                  if ((param_7 != 0) && ((uVar32 & 1) == 0)) {
                    FUN_05c33204(&local_198,&local_100,DAT_091b71c8);
                    local_70 = local_d0;
                    uStack_78 = uStack_d8;
                    local_80 = local_e0;
                    uStack_158 = uStack_190;
                    local_160 = local_198;
                    local_150 = local_188;
                    uVar32 = (**(code **)(param_7 + 0x18))
                                       (*(undefined8 *)(param_7 + 0x40),&local_160,&local_80,
                                        *(undefined8 *)(param_7 + 0x28));
                    if ((uVar32 & 1) == 0) goto LAB_040d26c0;
                  }
                  if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar32 = AnhPD_FoodOrder_ShelfAssignment__SequenceFits
                                     (param_10,param_8,uVar21 & 0xffffffff,param_9,
                                      uVar18 & 0xffffffff,param_5);
                  if ((uVar32 & 1) != 0) {
                    FUN_05c33204(&local_160,&local_100,DAT_091b71c8);
                    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    local_1a0 = local_150;
                    uStack_1a8 = uStack_158;
                    local_1b0 = local_160;
                    AnhPD_FoodOrder_PieceSet__Subtract(&local_80,&local_e0,&local_1b0,0);
                    local_110 = local_70;
                    uStack_118 = uStack_78;
                    local_120 = local_80;
                    FUN_05c33204(&local_198,&local_100,DAT_091b71c8);
                    uStack_b8 = uStack_190;
                    local_c0 = local_198;
                    local_b0 = local_188;
                    iVar13 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_c0,0);
                    uStack_1c8 = param_6[1];
                    local_1d0 = *param_6;
                    local_1c0 = param_6[2];
                    iVar12 = AnhPD_FoodOrder_PieceSet__IntersectCount(&local_120,&local_1d0,0);
                    iVar12 = iVar12 + iVar13 * 2;
                    if (0x13 < iVar12) {
                      iVar12 = 0x14;
                    }
                    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    iVar12 = iVar12 * 20000;
                    uVar32 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_120,0);
                    if ((uVar32 & 1) == 0) {
                      uStack_158 = uStack_118;
                      local_160 = local_120;
                      local_150 = local_110;
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uStack_1e8 = uStack_158;
                      local_1f0 = local_160;
                      local_1e0 = local_150;
                      uVar32 = AnhPD_FoodOrder_PieceSet__Covers(param_6,&local_1f0,0);
                      iVar13 = iVar12 + 500000;
                      if ((uVar32 & 1) == 0) {
                        iVar13 = iVar12;
                      }
                    }
                    else {
                      iVar13 = iVar12 + 1000000;
                    }
                    if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar19 = *(long *)(*(long *)(DAT_0918ab80 + 0xb8) + 0x20);
                    if (lVar19 == 0) goto LAB_040d2b88;
                    uVar32 = uVar21 + uVar18 * 10;
                    if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_040d2b8c;
                    *(int *)(lVar19 + uVar32 * 4 + 0x20) = iVar13;
                    uVar9 = 1 << (ulong)((uint)uVar21 & 0x1f) | uVar9;
                  }
                }
              }
            }
LAB_040d26c0:
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar28);
        }
        if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar19 = *(long *)(*(long *)(DAT_0918ab80 + 0xb8) + 0x10);
        if (lVar19 == 0) goto LAB_040d2b88;
        if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_040d2b8c;
        lVar23 = uVar18 * 4;
        uVar18 = uVar18 + 1;
        *(uint *)(lVar19 + lVar23 + 0x20) = uVar9;
      } while (uVar18 != uVar17);
    }
    uVar9 = 1 << (ulong)(uVar28 & 0x1f);
    if (uVar3 != 0x1f) {
      uVar5 = uVar9;
      if ((int)uVar9 < 2) {
        uVar5 = 1;
      }
      uVar21 = (ulong)uVar5;
      uVar18 = (ulong)(uVar17 << (ulong)uVar3);
      lVar19 = uVar18 << 0x20;
      lVar23 = DAT_0918ab80;
      do {
        if (*(int *)(lVar23 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar23 = DAT_0918ab80;
        }
        lVar20 = **(long **)(lVar23 + 0xb8);
        if (lVar20 == 0) goto LAB_040d2b88;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_040d2b8c;
        lVar1 = lVar19 >> 0x1e;
        uVar21 = uVar21 - 1;
        lVar19 = lVar19 + 0x100000000;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(lVar20 + lVar1 + 0x20) = 0;
      } while (uVar21 != 0);
    }
    uVar5 = uVar17 - 1;
    lVar19 = DAT_0918ab80;
    if (-1 < (int)uVar5) {
      if (param_2 == (long *)0x0) goto LAB_040d2b88;
      iVar12 = uVar17 * 10;
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      uVar18 = (ulong)uVar5;
      do {
        iVar12 = iVar12 + -10;
        lVar19 = *param_2;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar25 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == DAT_0917b538) {
              puVar16 = (undefined8 *)(lVar19 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_040d283c;
            }
            uVar21 = uVar21 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar21 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b538,0);
LAB_040d283c:
        (*(code *)*puVar16)(&local_138,param_2,uVar18 & 0xffffffff,puVar16[1]);
        if (uVar3 != 0x1f) {
          uVar21 = 0;
          iVar26 = (int)uVar18;
          iVar13 = iVar26 + 1 << (ulong)uVar3;
          lVar19 = DAT_0918ab80;
          do {
            if (*(int *)(lVar19 + 0xe4) == 0) {
              FUN_03f5c424(lVar19);
              lVar19 = DAT_0918ab80;
            }
            lVar23 = **(long **)(lVar19 + 0xb8);
            if (lVar23 == 0) goto LAB_040d2b88;
            uVar31 = (uint)uVar21;
            uVar2 = iVar13 + uVar31;
            if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_040d2b8c;
            lVar20 = (*(long **)(lVar19 + 0xb8))[2];
            if (lVar20 == 0) goto LAB_040d2b88;
            if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_040d2b8c;
            uVar14 = 0xffffffff;
            iVar29 = *(int *)(lVar23 + (long)(int)uVar2 * 4 + 0x20);
            uVar2 = *(uint *)(lVar20 + uVar18 * 4 + 0x20) & (uVar31 ^ 0xffffffff);
            if ((uVar2 != 0) && (0 < (int)local_24c)) {
              uVar32 = 0;
              uVar27 = uVar14;
              do {
                uVar30 = (uint)uVar32;
                uVar8 = 1 << (ulong)(uVar30 & 0x1f);
                iVar6 = iVar29;
                uVar14 = uVar27;
                if ((uVar8 & uVar2) != 0) {
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    FUN_03f5c424(lVar19);
                    lVar19 = DAT_0918ab80;
                  }
                  lVar23 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x18);
                  if (lVar23 == 0) goto LAB_040d2b88;
                  if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_040d2b8c;
                  lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x20);
                  if (lVar19 == 0) goto LAB_040d2b88;
                  if (*(uint *)(lVar19 + 0x18) <= iVar12 + uVar30) goto LAB_040d2b8c;
                  iVar6 = *(int *)(lVar23 + uVar32 * 4 + 0x20);
                  iVar7 = *(int *)(lVar19 + (long)(int)(iVar12 + uVar30) * 4 + 0x20);
                  uStack_208 = uStack_130;
                  local_210 = local_138;
                  local_200 = local_128;
                  uVar14 = AnhPD_FoodOrder_ShelfAssignment__IsSame
                                     (param_3,uVar32 & 0xffffffff,&local_210);
                  if (*(int *)(DAT_0918ab80 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_0918ab80);
                  }
                  lVar19 = **(long **)(DAT_0918ab80 + 0xb8);
                  if (lVar19 == 0) goto LAB_040d2b88;
                  uVar8 = (uVar8 | uVar31) + iVar13;
                  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_040d2b8c;
                  iVar6 = iVar6 + (uVar5 - iVar26) * 1000 + 20000000 + iVar7 + (uVar14 & 1) +
                          *(int *)(lVar19 + (long)(int)uVar8 * 4 + 0x20);
                  lVar19 = DAT_0918ab80;
                  uVar14 = uVar30;
                  if (iVar6 <= iVar29) {
                    iVar6 = iVar29;
                    uVar14 = uVar27;
                  }
                }
                iVar29 = iVar6;
                uVar32 = uVar32 + 1;
                uVar27 = uVar14;
              } while ((long)uVar32 < (long)(int)uVar28);
            }
            if (*(int *)(lVar19 + 0xe4) == 0) {
              FUN_03f5c424(lVar19);
              lVar19 = DAT_0918ab80;
            }
            plVar24 = *(long **)(lVar19 + 0xb8);
            lVar23 = *plVar24;
            if (lVar23 == 0) goto LAB_040d2b88;
            uVar32 = uVar21 + (uint)(iVar26 << (ulong)uVar3);
            if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_040d2b8c;
            *(int *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) = iVar29;
            lVar23 = plVar24[1];
            if (lVar23 == 0) goto LAB_040d2b88;
            if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_040d2b8c;
            uVar21 = uVar21 + 1;
            *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) = uVar14;
          } while (uVar21 != uVar9);
        }
        bVar4 = 0 < (long)uVar18;
        uVar18 = uVar18 - 1;
      } while (bVar4);
      lVar19 = DAT_0918ab80;
      if (0 < (int)uVar11) {
        uVar11 = 0;
        uVar28 = 0;
        do {
          if (*(int *)(lVar19 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar19 = DAT_0918ab80;
          }
          lVar23 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
          if (lVar23 == 0) goto LAB_040d2b88;
          uVar9 = uVar11 + (uVar28 << (ulong)uVar3);
          if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_040d2b8c;
          uVar9 = *(uint *)(lVar23 + (long)(int)uVar9 * 4 + 0x20);
          if (-1 < (int)uVar9) {
            if ((param_11 != 0) && ((int)uVar9 < *(int *)(param_11 + 0x18))) {
              *(uint *)(param_11 + (ulong)uVar9 * 4 + 0x20) = uVar28;
            }
            uVar11 = 1 << (ulong)(uVar9 & 0x1f) | uVar11;
          }
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar19 = DAT_0918ab80;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) {
LAB_040d2b88:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar19 + 0x18) == 0) {
LAB_040d2b8c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar15 = *(undefined4 *)(lVar19 + 0x20);
  }
  return uVar15;
}

