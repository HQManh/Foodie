// rea decompile_all
// name: AnhPD.FoodOrder.ShelfSnapshot$$Ensure
// address: 0x40d694c
// body: available
// range: 0x40d694c-0x40d73bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d73ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d73b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d73b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d73b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_ShelfSnapshot__Ensure
               (long param_1,long *param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_258;
  undefined8 *puStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [72];
  undefined8 local_1f0;
  undefined8 *puStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09516019 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b60);
    FUN_03f5c2a4(&DAT_091a3b68);
    FUN_03f5c2a4(&DAT_091a3b70);
    FUN_03f5c2a4(&DAT_091798d0);
    FUN_03f5c2a4(&DAT_09179bf0);
    FUN_03f5c2a4(&DAT_0917b3b8);
    FUN_03f5c2a4(&DAT_0917b550);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091d23a0);
    FUN_03f5c2a4(&DAT_091d23a8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aa8a8);
    FUN_03f5c2a4(&DAT_091af040);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091aa8b0);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091aed38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516019 = 1;
  }
  local_b0 = 0;
  local_110 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  puStack_188 = (undefined8 *)0x0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(char *)(param_1 + 0x78) == '\0') {
    return *(char *)(param_1 + 0x79) != '\0';
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x79) = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        lVar7 = *(long *)(param_1 + 0x58);
        if (lVar7 != 0) {
          iVar4 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (0 < iVar4) {
            System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar4,0);
          }
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x18) = 0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            lVar7 = *(long *)(param_1 + 0x30);
            if (lVar7 != 0) {
              *(undefined4 *)(lVar7 + 0x18) = 0;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              lVar7 = *(long *)(param_1 + 0x60);
              if (lVar7 != 0) {
                iVar4 = *(int *)(lVar7 + 0x18);
                *(undefined4 *)(lVar7 + 0x18) = 0;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (0 < iVar4) {
                  System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar4,0);
                }
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
                uVar14 = puVar8[1];
                uVar6 = *puVar8;
                *(undefined8 *)(param_1 + 0x48) = puVar8[2];
                *(undefined8 *)(param_1 + 0x40) = uVar14;
                *(undefined8 *)(param_1 + 0x38) = uVar6;
                if (param_3 != 0) {
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar5 = UnityEngine_Object__op_Implicit(param_4,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(long *)(param_3 + 0x18) == 0) {
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
                      uStack_168 = puVar8[1];
                      local_170 = *puVar8;
                      local_160 = puVar8[2];
                    }
                    else {
                      AnhPD_FoodOrder_LevelPieceBook__GridPieces
                                (&local_170,*(long *)(param_3 + 0x18),0);
                    }
                    *(undefined8 *)(param_1 + 0x40) = uStack_168;
                    *(undefined8 *)(param_1 + 0x38) = local_170;
                    uVar6 = DAT_091798d0;
                    *(undefined8 *)(param_1 + 0x48) = local_160;
                    uVar6 = thunk_FUN_03f9944c(uVar6);
                    FUN_0533222c(uVar6,param_3,DAT_091d23a0,0);
                    *(undefined8 *)(param_1 + 0x50) = uVar6;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar6);
                    uVar6 = thunk_FUN_03f9944c(DAT_09179bf0);
                    FUN_05335dc0(uVar6,param_3,DAT_091d23a8,0);
                    *(undefined8 *)(param_1 + 0x68) = uVar6;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar6);
                    if ((param_4 != 0) &&
                       (lVar7 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveServableOrderSpecs
                                          (param_4,0), lVar7 != 0)) {
                      FUN_057f00fc(&local_1f0,lVar7,DAT_091aed38);
                      memcpy(&local_100,&local_1f0,0x58);
                      local_80 = 0;
                      puStack_78 = &local_100;
LAB_040d6d20:
                      uVar5 = FUN_071c1a7c(&local_100,DAT_091a3b68);
                      if ((uVar5 & 1) != 0) {
                        memcpy(&local_150,&local_f0,0x48);
                        if ((uStack_128 & 1) != 0) {
                          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar5 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_140,0);
                          if ((uVar5 & 1) == 0) {
                            lVar13 = *(long *)(param_1 + 0x20);
                            memcpy(&local_1f0,&local_150,0x48);
                            lVar7 = DAT_091af040;
                            if (lVar13 != 0) {
                              lVar9 = *(long *)(lVar13 + 0x10);
                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar13 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                  lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
                                  *(undefined8 *)(lVar9 + 0x28) = uStack_1d8;
                                  *(undefined8 *)(lVar9 + 0x20) = local_1e0;
                                  *(undefined8 *)(lVar9 + 0x30) = local_1d0;
                                }
                                else {
                                  uStack_98 = uStack_1d8;
                                  local_a0 = local_1e0;
                                  local_90 = local_1d0;
                                  FUN_057f7d3c(lVar13,&local_a0,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar13 = *(long *)(param_1 + 0x30);
                                memcpy(auStack_238,&local_150,0x48);
                                uVar2 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder
                                                  (param_3,auStack_238,0);
                                lVar7 = DAT_091adc88;
                                if (lVar13 != 0) {
                                  lVar9 = *(long *)(lVar13 + 0x10);
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
                                    }
                                    else {
                                      FUN_057971a8(lVar13,uVar2,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar13 = *(long *)(param_1 + 0x60);
                                    uVar6 = AnhPD_FoodOrder_LevelInfo__SequenceOf
                                                      (param_3,local_150,0);
                                    lVar7 = DAT_091b0570;
                                    if (lVar13 != 0) {
                                      lVar9 = *(long *)(lVar13 + 0x10);
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar9 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                          thunk_FUN_03f5d7b8();
                                        }
                                        else {
                                          FUN_057e0c68(lVar13,uVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        goto LAB_040d6d20;
                                      }
                                    }
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                }
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                        goto LAB_040d6d20;
                      }
                      FUN_071c1a78(&local_100,DAT_091a3b60);
                      if (param_2 != (long *)0x0) {
                        iVar4 = 0;
                        do {
                          lVar7 = *param_2;
                          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar5 != 0) {
                            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar11 + -2) == DAT_0917b3b8) {
                                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                                goto LAB_040d6f84;
                              }
                              uVar5 = uVar5 - 1;
                              piVar11 = piVar11 + 4;
                            } while (uVar5 != 0);
                          }
                          puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3b8,0);
LAB_040d6f84:
                          iVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
                          if (iVar3 <= iVar4) {
                            plVar12 = (long *)(param_1 + 0x70);
                            lVar7 = *plVar12;
                            if (lVar7 != 0) {
                              lVar13 = *param_2;
                              uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
                              if (uVar5 == 0) goto LAB_040d72c4;
                              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                              goto LAB_040d72ac;
                            }
                            break;
                          }
                          lVar7 = *param_2;
                          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar5 != 0) {
                            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar11 + -2) == DAT_0917b550) {
                                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                                goto LAB_040d6fe4;
                              }
                              uVar5 = uVar5 - 1;
                              piVar11 = piVar11 + 4;
                            } while (uVar5 != 0);
                          }
                          puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b550,0);
LAB_040d6fe4:
                          lVar7 = (*(code *)*puVar8)(param_2,iVar4,puVar8[1]);
                          lVar13 = *(long *)(param_1 + 0x18);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_09188ad0);
                          }
                          uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
                          lVar9 = DAT_091aa8a8;
                          if ((uVar5 & 1) == 0) {
                            puStack_188 = (undefined8 *)0x0;
                            local_190 = 0;
                            uStack_178 = 0;
                            uStack_180 = 0;
                          }
                          else {
                            if (lVar7 == 0) break;
                            puStack_188 = *(undefined8 **)(lVar7 + 0x90);
                            local_190 = *(undefined8 *)(lVar7 + 0x88);
                            uStack_178 = *(undefined8 *)(lVar7 + 0xa0);
                            uStack_180 = *(undefined8 *)(lVar7 + 0x98);
                          }
                          if (lVar13 == 0) break;
                          lVar10 = *(long *)(lVar13 + 0x10);
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar10 == 0) break;
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            lVar10 = lVar10 + (long)(int)uVar1 * 0x20;
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            *(undefined8 **)(lVar10 + 0x28) = puStack_188;
                            *(undefined8 *)(lVar10 + 0x20) = local_190;
                            *(undefined8 *)(lVar10 + 0x38) = uStack_178;
                            *(undefined8 *)(lVar10 + 0x30) = uStack_180;
                          }
                          else {
                            puStack_1e8 = puStack_188;
                            local_1f0 = local_190;
                            uStack_1d8 = uStack_178;
                            local_1e0 = uStack_180;
                            FUN_0568fce8(lVar13,&local_1f0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          if (param_5 == 0) break;
                          lVar9 = *(long *)(param_1 + 0x10);
                          (**(code **)(param_5 + 0x18))
                                    (&local_258,*(undefined8 *)(param_5 + 0x40),lVar7,
                                     *(undefined8 *)(param_5 + 0x28));
                          lVar13 = DAT_091aa8a8;
                          if (lVar9 == 0) break;
                          lVar10 = *(long *)(lVar9 + 0x10);
                          puStack_78 = puStack_250;
                          local_80 = local_258;
                          uStack_68 = uStack_240;
                          uStack_70 = local_248;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar10 == 0) break;
                          uVar1 = *(uint *)(lVar9 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            lVar10 = lVar10 + (long)(int)uVar1 * 0x20;
                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                            *(undefined8 **)(lVar10 + 0x28) = puStack_250;
                            *(undefined8 *)(lVar10 + 0x20) = local_258;
                            *(undefined8 *)(lVar10 + 0x38) = uStack_240;
                            *(undefined8 *)(lVar10 + 0x30) = local_248;
                          }
                          else {
                            puStack_1e8 = puStack_250;
                            local_1f0 = local_258;
                            uStack_1d8 = uStack_240;
                            local_1e0 = local_248;
                            FUN_0568fce8(lVar9,&local_1f0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar13 = *(long *)(param_1 + 0x28);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
                          lVar9 = DAT_091adc88;
                          if ((uVar5 & 1) == 0) {
                            uVar2 = 0xffffffff;
                          }
                          else {
                            if (lVar7 == 0) break;
                            uVar2 = *(undefined4 *)(lVar7 + 0xb4);
                          }
                          if (lVar13 == 0) break;
                          lVar10 = *(long *)(lVar13 + 0x10);
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar10 == 0) break;
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
                          }
                          else {
                            FUN_057971a8(lVar13,uVar2,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar13 = *(long *)(param_1 + 0x58);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
                          if ((uVar5 & 1) == 0) {
                            uVar6 = **(undefined8 **)(DAT_09535468 + 0xb8);
                          }
                          else {
                            if (param_6 == 0) break;
                            uVar6 = (**(code **)(param_6 + 0x18))
                                              (*(undefined8 *)(param_6 + 0x40),lVar7,
                                               *(undefined8 *)(param_6 + 0x28));
                          }
                          lVar7 = DAT_091b0570;
                          if (lVar13 == 0) break;
                          lVar9 = *(long *)(lVar13 + 0x10);
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar9 == 0) break;
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                            thunk_FUN_03f5d7b8();
                          }
                          else {
                            FUN_057e0c68(lVar13,uVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                          }
                          iVar4 = iVar4 + 1;
                        } while( true );
                      }
                    }
                    goto LAB_040d73ac;
                  }
                }
                return false;
              }
            }
          }
        }
      }
    }
  }
LAB_040d73ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_040d72ac:
    if (*(long *)(piVar11 + -2) == DAT_0917b3b8) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_040d72e0;
    }
  }
LAB_040d72c4:
  puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3b8,0);
LAB_040d72e0:
  iVar4 = (*(code *)*puVar8)(param_2,puVar8[1]);
  if (*(int *)(lVar7 + 0x18) < iVar4) {
    lVar7 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917b3b8) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_040d734c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3b8,0);
LAB_040d734c:
    uVar2 = (*(code *)*puVar8)(param_2,puVar8[1]);
    lVar7 = FUN_03f5c394(DAT_091801b8,uVar2);
    *plVar12 = lVar7;
    thunk_FUN_03f5d7b8(plVar12,lVar7);
  }
  *(undefined2 *)(param_1 + 0x78) = 0x100;
  return true;
}

