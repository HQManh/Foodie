// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$GetPotentialPieces
// address: 0x40c68b4
// body: available
// range: 0x40c68b4-0x40c6df3 inclusive
// range: 0x40c6e74-0x40c6e97 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c6df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c6e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__GetPotentialPieces
               (long param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  long local_210;
  undefined8 local_208;
  undefined8 *puStack_200;
  undefined1 auStack_1f8 [72];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515f97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091af068);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f97 = 1;
  }
  local_70 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  lStack_150 = 0;
  AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces(param_1,param_2,param_3);
  lVar5 = AnhPD_FoodOrder_ServeShelfController__get_Info();
  if (lVar5 == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
LAB_040c6e94:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar10 = 0;
  do {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b388) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_040c6a4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b388,0);
LAB_040c6a4c:
    iVar3 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (iVar3 <= iVar10) {
      return;
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b528) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_040c6aac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b528,0);
LAB_040c6aac:
    (*(code *)*puVar6)(&local_1b0,param_2,iVar10,puVar6[1]);
    memcpy(&local_b0,&local_1b0,0x48);
    if ((uStack_88 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_a0,0);
      if ((uVar8 & 1) == 0) {
        if (param_3 == 0) goto LAB_040c6e94;
        FUN_057f79cc(&local_1b0,param_3,iVar10,DAT_091af060);
        uStack_e8 = uStack_1a8;
        local_f0 = local_1b0;
        local_e0 = local_1a0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_f0,0);
        if ((uVar8 & 1) != 0) {
          memcpy(auStack_1f8,&local_b0,0x48);
          uVar4 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(lVar5,auStack_1f8,0);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189158);
          }
          puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
          uStack_c8 = puVar6[1];
          local_d0 = *puVar6;
          local_c0 = puVar6[2];
          if (*(long *)(param_1 + 0x90) == 0) goto LAB_040c6e94;
          FUN_057e185c(&local_1b0,*(long *)(param_1 + 0x90),DAT_091afe30);
          local_244 = 0;
          local_100 = local_1a0;
          puStack_200 = &local_110;
          uStack_108 = uStack_1a8;
          local_110 = local_1b0;
          local_208 = 0;
          while (uVar8 = FUN_071bd28c(&local_110,DAT_091a4258), lVar7 = local_100, (uVar8 & 1) != 0)
          {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = UnityEngine_Object__op_Implicit(lVar7,0);
            if ((uVar8 & 1) != 0) {
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((*(uint *)(lVar7 + 0xb4) == uVar4) || ((int)(*(uint *)(lVar7 + 0xb4) | uVar4) < 0)
                 ) {
                AnhPD_FoodOrder_ServeShelfController__PlateHas(&local_1b0,param_1,lVar7,lVar5);
                uStack_128 = uStack_1a8;
                uStack_118 = uStack_198;
                lStack_120 = local_1a0;
                local_130 = local_1b0;
                uVar2 = local_130;
                local_130._0_1_ = (char)local_1b0;
                bVar1 = (char)local_130 != '\0';
                local_130 = local_1b0;
                if (bVar1) {
                  local_130 = uVar2;
                  FUN_05c33204(&local_1b0,&local_130,DAT_091b71c8);
                  uStack_e8 = uStack_1a8;
                  local_f0 = local_1b0;
                  local_e0 = local_1a0;
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar8 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_f0,0);
                  if ((uVar8 & 1) == 0) {
                    FUN_05c33204(&local_220,&local_130,DAT_091b71c8);
                    uStack_1a8 = uStack_218;
                    local_1b0 = local_220;
                    local_1a0 = local_210;
                    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uStack_238 = uStack_1a8;
                    local_240 = local_1b0;
                    local_230 = local_1a0;
                    uVar8 = AnhPD_FoodOrder_PieceSet__Covers(&uStack_a0,&local_240,0);
                    if ((uVar8 & 1) != 0) {
                      FUN_05c33204(&local_1b0,&local_130,DAT_091b71c8);
                      uStack_e8 = uStack_1a8;
                      local_f0 = local_1b0;
                      local_e0 = local_1a0;
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_1b0,&local_f0,0);
                      iVar3 = 0;
                      uStack_158 = uStack_1a8;
                      local_160 = local_1b0;
                      uStack_148 = uStack_198;
                      lStack_150 = local_1a0;
                      local_140 = local_190;
                      while (uVar8 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_160,0),
                            (uVar8 & 1) != 0) {
                        iVar3 = iVar3 + local_140._4_4_;
                      }
                      if (local_244 < iVar3) {
                        FUN_05c33204(&local_1b0,&local_130,DAT_091b71c8);
                        uStack_c8 = uStack_1a8;
                        local_d0 = local_1b0;
                        local_c0 = local_1a0;
                        local_244 = iVar3;
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_071bd288(&local_110,DAT_091a4250);
          uStack_1a8 = uStack_c8;
          local_1b0 = local_d0;
          local_1a0 = local_c0;
          FUN_057f7a34(param_3,iVar10,&local_1b0,DAT_091af068);
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

