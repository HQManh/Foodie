// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$TryPickMergeTarget
// address: 0x40c0cf4
// body: available
// range: 0x40c0cf4-0x40c140b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c1408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ServeShelfController__TryPickMergeTarget
          (long param_1,long param_2,undefined8 param_3,long param_4,long *param_5,int *param_6,
          int *param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int local_2b4;
  int local_29c;
  int local_298;
  long local_290;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515f70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8610);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091b71b0);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f70 = 1;
  }
  local_88 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = -1;
  *param_7 = 0;
  if (param_2 != 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2 + 0x10,0);
    if (((uVar7 & 1) == 0) &&
       (uVar7 = AnhPD_FoodOrder_ServeShelfController__EnsureSnapshot(param_1), (uVar7 & 1) != 0)) {
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar8 = AnhPD_FoodOrder_ShelfSnapshot__get_OrderCount(*(long *)(param_1 + 0xa8),0);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (iVar2 = AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0), param_4 != 0)
           ) {
          uVar3 = AnhPD_FoodOrder_LevelInfo__DishKeyOfId(param_4,param_3,0);
          uVar7 = AnhPD_FoodOrder_ServeShelfController__HoldsTheFloor
                            (param_1,*(undefined8 *)(param_1 + 0x38));
          lVar11 = *(long *)(param_1 + 0x90);
          if (lVar11 != 0) {
            local_290 = 0;
            local_29c = 0;
            local_298 = 0;
            iVar12 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar12) {
                if ((uVar7 & 1) == 0) {
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = UnityEngine_Object__op_Implicit(local_290,0);
                  if (((uVar7 & 1) == 0) &&
                     (uVar7 = AnhPD_FoodOrder_ServeShelfController__get_HasFreeSlot(param_1),
                     (uVar7 & 1) != 0)) {
                    uStack_248 = *(undefined8 *)(param_2 + 0x18);
                    local_250 = *(undefined8 *)(param_2 + 0x10);
                    local_240 = *(undefined8 *)(param_2 + 0x20);
                    uVar7 = AnhPD_FoodOrder_ServeShelfController__CanStartPlate
                                      (param_1,param_3,&local_250,0xffffffff,param_4);
                    if ((uVar7 & 1) != 0) {
                      uStack_268 = *(undefined8 *)(param_2 + 0x18);
                      local_270 = *(undefined8 *)(param_2 + 0x10);
                      local_260 = *(undefined8 *)(param_2 + 0x20);
                      uVar7 = AnhPD_FoodOrder_ServeShelfController__IsWorthANewPlate
                                        (param_1,param_3,&local_270,uVar3,iVar2,param_4,
                                         (long)&local_88 + 4,&local_88);
                      if ((uVar7 & 1) != 0) {
                        local_298 = (int)local_88;
                        *param_6 = local_88._4_4_;
                      }
                    }
                  }
                }
                if (*(long *)(param_1 + 0xa8) != 0) {
                  AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
                  *param_5 = local_290;
                  thunk_FUN_03f5d7b8(param_5,local_290);
                  lVar11 = *param_5;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar7 = UnityEngine_Object__op_Implicit(lVar11,0);
                  if (((uVar7 & 1) == 0) && (*param_6 < 0)) {
                    return 0;
                  }
                  *param_7 = local_298 - iVar2;
                  return 1;
                }
                break;
              }
              lVar11 = FUN_057e0998(lVar11,iVar12,DAT_091afe58);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar9 = UnityEngine_Object__op_Implicit(lVar11,0);
              if ((uVar9 & 1) != 0) {
                if (lVar11 == 0) break;
                if (*(char *)(lVar11 + 0xb1) == '\0') {
                  if ((uVar7 & 1) != 0) {
                    uVar8 = *(undefined8 *)(param_1 + 0x38);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar9 = UnityEngine_Object__op_Inequality(lVar11,uVar8,0);
                    if ((uVar9 & 1) != 0) goto LAB_040c0ee0;
                  }
                  if (*(long *)(param_1 + 0x98) == 0) break;
                  uVar9 = FUN_053ebc3c(*(long *)(param_1 + 0x98),lVar11,DAT_091a8610);
                  if (((uVar9 & 1) == 0) &&
                     ((*(uint *)(lVar11 + 0xb4) == uVar3 ||
                      ((int)(*(uint *)(lVar11 + 0xb4) | uVar3) < 0)))) {
                    uVar9 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar11);
                    if ((uVar9 & 1) == 0) {
LAB_040c0f84:
                      uVar9 = AnhPD_FoodOrder_ServeShelfController__TryResolveMerge
                                        (param_1,lVar11,param_3,param_4,&local_d8);
                    }
                    else {
                      if (*(long *)(param_1 + 0xa0) == 0) break;
                      uVar9 = AnhPD_FoodOrder_ShelfMergeQueue__HasInbound
                                        (*(long *)(param_1 + 0xa0),lVar11,0);
                      if ((uVar9 & 1) != 0) goto LAB_040c0f84;
                      uStack_108 = *(undefined8 *)(param_2 + 0x18);
                      local_110 = *(undefined8 *)(param_2 + 0x10);
                      local_100 = *(undefined8 *)(param_2 + 0x20);
                      uVar9 = AnhPD_FoodOrder_ServeShelfController__CanStartPlate
                                        (param_1,param_3,&local_110,*(undefined4 *)(lVar11 + 0xb4),
                                         param_4);
                    }
                    if ((uVar9 & 1) != 0) {
                      if (*(long *)(param_1 + 0xa8) == 0) break;
                      AnhPD_FoodOrder_ShelfSnapshot__PlateHas
                                (&local_130,*(long *)(param_1 + 0xa8),iVar12,0);
                      uStack_a8 = uStack_128;
                      uStack_98 = uStack_118;
                      uStack_a0 = local_120;
                      local_b0 = local_130;
                      uVar8 = local_b0;
                      local_b0._0_1_ = (char)local_130;
                      bVar1 = (char)local_b0 != '\0';
                      local_b0 = local_130;
                      if (bVar1) {
                        local_b0 = uVar8;
                        FUN_05c33204(&local_148,&local_b0,DAT_091b71c8);
                        uStack_158 = *(undefined8 *)(param_2 + 0x18);
                        local_160 = *(undefined8 *)(param_2 + 0x10);
                        local_e0 = local_138;
                        local_150 = *(undefined8 *)(param_2 + 0x20);
                        uStack_e8 = uStack_140;
                        local_f0 = local_148;
                        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        local_180 = local_150;
                        uStack_188 = uStack_158;
                        local_190 = local_160;
                        AnhPD_FoodOrder_PieceSet__Add(&local_178,&local_f0,&local_190,0);
                        uStack_c8 = uStack_170;
                        local_d0 = local_178;
                        local_c0 = local_168;
                        if (*(long *)(param_1 + 0xa8) == 0) break;
                        uVar8 = AnhPD_FoodOrder_ShelfSnapshot__PlateSequence
                                          (*(long *)(param_1 + 0xa8),iVar12,0);
                        lVar13 = *(long *)(param_1 + 0xa8);
                        uStack_78 = uStack_c8;
                        local_80 = local_d0;
                        local_70 = local_c0;
                        uStack_128 = 0;
                        local_130 = 0;
                        uStack_118 = 0;
                        local_120 = 0;
                        FUN_05c331e0(&local_130,&local_80,DAT_091b71b0);
                        if (lVar13 == 0) break;
                        uStack_1a8 = uStack_128;
                        local_1b0 = local_130;
                        uStack_198 = uStack_118;
                        uStack_1a0 = local_120;
                        AnhPD_FoodOrder_ShelfSnapshot__SetPlateHas(lVar13,iVar12,&local_1b0,0);
                        lVar13 = *(long *)(param_1 + 0xa8);
                        uVar10 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_4,param_3,0);
                        uVar10 = System_String__Concat(uVar8,uVar10,0);
                        if (lVar13 == 0) break;
                        AnhPD_FoodOrder_ShelfSnapshot__SetPlateSequence(lVar13,iVar12,uVar10,0);
                        if (*(long *)(param_1 + 0xa8) == 0) break;
                        iVar4 = AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
                        if (*(long *)(param_1 + 0xa8) == 0) break;
                        iVar5 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf
                                          (*(long *)(param_1 + 0xa8),iVar12,0);
                        if (iVar5 < 0) {
                          uVar6 = 1;
                          local_2b4 = 0x7fffffff;
                        }
                        else {
                          if (*(long *)(param_1 + 0xa8) == 0) break;
                          AnhPD_FoodOrder_ShelfSnapshot__OrderPieces
                                    (&local_130,*(long *)(param_1 + 0xa8),iVar5,0);
                          uStack_e8 = uStack_128;
                          local_f0 = local_130;
                          local_e0 = local_120;
                          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uStack_1c8 = uStack_c8;
                          local_1d0 = local_d0;
                          local_1c0 = local_c0;
                          local_2b4 = AnhPD_FoodOrder_PieceSet__MissingFrom(&local_f0,&local_1d0,0);
                          if (*(long *)(param_1 + 0xa8) == 0) break;
                          AnhPD_FoodOrder_ShelfSnapshot__OrderPieces
                                    (&local_130,*(long *)(param_1 + 0xa8),iVar5,0);
                          uStack_1e8 = uStack_c8;
                          local_1f0 = local_d0;
                          local_1e0 = local_c0;
                          uStack_208 = uStack_128;
                          local_210 = local_130;
                          local_200 = local_120;
                          uVar6 = AnhPD_FoodOrder_LevelInfo__CanStillComplete
                                            (param_4,&local_1f0,&local_210,0);
                          uVar6 = uVar6 & 1;
                        }
                        if (*(long *)(param_1 + 0xa8) == 0) break;
                        uStack_228 = uStack_a8;
                        local_230 = local_b0;
                        uStack_218 = uStack_98;
                        uStack_220 = uStack_a0;
                        AnhPD_FoodOrder_ShelfSnapshot__SetPlateHas
                                  (*(long *)(param_1 + 0xa8),iVar12,&local_230,0);
                        if (*(long *)(param_1 + 0xa8) == 0) break;
                        AnhPD_FoodOrder_ShelfSnapshot__SetPlateSequence
                                  (*(long *)(param_1 + 0xa8),iVar12,uVar8,0);
                        if ((iVar2 < iVar4) && (uVar6 != 0)) {
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar9 = UnityEngine_Object__op_Implicit(local_290,0);
                          if (((uVar9 & 1) == 0) ||
                             ((local_298 <= iVar4 &&
                              ((iVar4 != local_298 || (local_2b4 < local_29c)))))) {
                            local_29c = local_2b4;
                            local_298 = iVar4;
                            local_290 = lVar11;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_040c0ee0:
              lVar11 = *(long *)(param_1 + 0x90);
              iVar12 = iVar12 + 1;
            } while (lVar11 != 0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

