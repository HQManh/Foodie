// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$Setup
// address: 0x41f1710
// body: available
// range: 0x41f1710-0x41f1bbb inclusive
// range: 0x41f1bc0-0x41f1bc3 inclusive
// range: 0x41f1bc8-0x41f1bcb inclusive
// range: 0x41f1c2c-0x41f1c43 inclusive
// range: 0x41f1c70-0x41f1d07 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f1bb8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1c2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1c30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1c3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f1d04 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f1c38) */

void AnhPD_FoodOrder_LevelPieceBook__Setup(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined1 auStack_1f8 [72];
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_128;
  undefined8 *puStack_120;
  long local_118;
  long **local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long *local_68;
  
  if ((DAT_09516b7a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a490);
    FUN_03f5c2a4(&DAT_0917ab40);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516b7a = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uVar10 = puVar5[1];
  uVar4 = *puVar5;
  *(undefined8 *)(param_1 + 0x28) = puVar5[2];
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_06fca5d0(*(long *)(param_1 + 0x30),DAT_0919f998);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_06fca5d0(*(long *)(param_1 + 0x38),DAT_0919f998);
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_06fca5d0(*(long *)(param_1 + 0x40),DAT_0919f998);
        if (param_2 == 0) {
          return;
        }
        if (param_3 == (long *)0x0) {
          return;
        }
        lVar6 = *param_3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a490) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_041f18bc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a490,0);
LAB_041f18bc:
        plVar3 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
        local_110 = &local_68;
        local_118 = 0;
        do {
          local_68 = plVar3;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_041f194c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_041f194c:
          uVar8 = (*(code *)*puVar5)(plVar3,puVar5[1]);
          plVar3 = local_68;
          if ((uVar8 & 1) == 0) {
            plVar3 = *local_110;
            if (plVar3 == (long *)0x0) goto LAB_041f1cdc;
            lVar6 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_041f1cb4;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_041f1c9c;
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
              if (*(long *)(piVar9 + -2) == DAT_0917ab40) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_041f19b0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab40,0);
LAB_041f19b0:
          lVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
          plVar3 = local_68;
          if (((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) &&
             (uVar8 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(lVar6,0),
             plVar3 = local_68, (uVar8 & 1) == 0)) {
            if (*(long *)(lVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_170,*(long *)(lVar6 + 0x30),DAT_091ac248);
            local_70 = local_160;
            puStack_120 = &local_80;
            uStack_78 = uStack_168;
            local_80 = local_170;
            local_128 = 0;
            while (uVar8 = FUN_071bd28c(&local_80,DAT_091a28a8), lVar6 = local_70, (uVar8 & 1) != 0)
            {
              if (local_70 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined8 *)(local_70 + 0x10);
              }
              uVar8 = System_String__IsNullOrEmpty(uVar4,0);
              if ((uVar8 & 1) == 0) {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar6 = AnhPD_FoodOrder_LevelInfo__ConvertOrderData
                                  (param_2,*(undefined8 *)(lVar6 + 0x10));
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                  uVar8 = 0;
                  uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  do {
                    if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    memmove(&local_d0,(void *)(lVar6 + uVar8 * 0x48 + 0x20),0x48);
                    if ((uStack_a8 & 1) != 0) {
                      memcpy(&local_170,&local_d0,0x48);
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uStack_1a8 = uStack_158;
                      local_1b0 = local_160;
                      local_1a0 = local_150;
                      AnhPD_FoodOrder_PieceSet__Add(&local_220,param_1 + 0x18,&local_1b0,0);
                      uStack_188 = uStack_218;
                      local_190 = local_220;
                      local_180 = local_210;
                      *(undefined8 *)(param_1 + 0x20) = uStack_218;
                      *(undefined8 *)(param_1 + 0x18) = local_220;
                      *(undefined8 *)(param_1 + 0x28) = local_210;
                      memcpy(auStack_1f8,&local_d0,0x48);
                      uVar2 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(param_2,auStack_1f8);
                      AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_220,&uStack_c0,0);
                      local_e0 = local_200;
                      uStack_f8 = uStack_218;
                      local_100 = local_220;
                      uStack_e8 = uStack_208;
                      uStack_f0 = local_210;
                      while (uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_100,0),
                            (uVar7 & 1) != 0) {
                        uVar1 = local_e0._4_4_;
                        uVar7 = AnhPD_FoodOrder_LevelInfo__TryGetFormOf
                                          (param_2,uVar2,local_e0 & 0xffffffff,&local_108);
                        if ((uVar7 & 1) != 0) {
                          AnhPD_FoodOrder_LevelPieceBook__Bump
                                    (*(undefined8 *)(param_1 + 0x30),local_108,uVar1);
                        }
                      }
                    }
                    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
                    uVar8 = uVar8 + 1;
                  } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
                }
              }
            }
            FUN_071bd288(&local_80,DAT_091a28a0);
            plVar3 = local_68;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_041f1c9c:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_041f1cd0;
    }
  }
LAB_041f1cb4:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_041f1cd0:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
LAB_041f1cdc:
  if (local_118 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

