// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$IsValid
// address: 0x407e190
// body: available
// range: 0x407e190-0x407e643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(int param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
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
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09515c53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c53 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_a0,param_2,0);
    local_50 = local_80;
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = uStack_88;
    uStack_60 = local_90;
    do {
      uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70,0);
      uVar4 = local_50;
      if ((uVar5 & 1) == 0) {
        bVar1 = 0;
        if (2 < param_1) {
          if (param_1 == 3) {
            uStack_98 = param_2[1];
            local_a0 = *param_2;
            local_90 = param_2[2];
            if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_178 = uStack_98;
            local_180 = local_a0;
            local_170 = local_90;
            iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                              (&local_180,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38));
            if (1 < iVar2) break;
            uStack_98 = param_2[1];
            local_a0 = *param_2;
            local_90 = param_2[2];
            if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_198 = uStack_98;
            local_1a0 = local_a0;
            local_190 = local_90;
            iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                              (&local_1a0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x20));
            bVar1 = iVar2 < 6;
            if ((5 < iVar2) || ((param_3 & 1) == 0)) goto LAB_0407e28c;
            uStack_98 = param_2[1];
            local_a0 = *param_2;
            local_90 = param_2[2];
            if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_1b8 = uStack_98;
            local_1c0 = local_a0;
            local_1b0 = local_90;
            iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                              (&local_1c0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38));
          }
          else {
            if (param_1 != 4) goto LAB_0407e28c;
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0x10,0);
          }
          bVar1 = iVar2 == 1;
          goto LAB_0407e28c;
        }
        if (param_1 != 1) {
          bVar1 = 0;
          if (param_1 != 2) goto LAB_0407e28c;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,7,0);
          if (iVar2 == 1) {
            uStack_98 = param_2[1];
            local_a0 = *param_2;
            local_90 = param_2[2];
            if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_138 = uStack_98;
            local_140 = local_a0;
            local_130 = local_90;
            iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                              (&local_140,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x30));
            if (iVar2 < 3) {
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0xe,0);
              iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0xf,0);
              if (iVar3 + iVar2 < 2) {
                uStack_98 = param_2[1];
                local_a0 = *param_2;
                local_90 = param_2[2];
                if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uStack_158 = uStack_98;
                local_160 = local_a0;
                local_150 = local_90;
                iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                                  (&local_160,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x28)
                                  );
                bVar1 = iVar2 < 4;
                goto LAB_0407e28c;
              }
            }
          }
          break;
        }
        uStack_98 = param_2[1];
        local_a0 = *param_2;
        local_90 = param_2[2];
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_b8 = uStack_98;
        local_c0 = local_a0;
        local_b0 = local_90;
        iVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                          (&local_c0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x10));
        local_d0 = param_2[2];
        uStack_d8 = param_2[1];
        local_e0 = *param_2;
        iVar3 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                          (&local_e0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 8));
        bVar1 = 0;
        if ((iVar3 != 1) || (1 < iVar2)) goto LAB_0407e28c;
        uStack_98 = param_2[1];
        local_a0 = *param_2;
        local_90 = param_2[2];
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_f8 = uStack_98;
        local_100 = local_a0;
        local_f0 = local_90;
        iVar3 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                          (&local_100,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x18));
        if (1 < iVar3) break;
        uStack_98 = param_2[1];
        local_a0 = *param_2;
        local_90 = param_2[2];
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_118 = uStack_98;
        local_120 = local_a0;
        local_110 = local_90;
        iVar3 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                          (&local_120,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x20));
        if (5 < iVar3) break;
        if (iVar2 == 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = AnhPD_FoodOrder_PieceSet__get_TotalCount(param_2,0);
          if (iVar3 != 1) break;
        }
        bVar1 = param_3 ^ 1 | iVar2 == 1;
        goto LAB_0407e28c;
      }
      if (local_50 >> 0x20 != 1) break;
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = CakeOrder_InGame_Pasta_PastaPieceTable__Allows(param_1,uVar4 & 0xffffffff);
    } while ((uVar4 & 1) != 0);
  }
  bVar1 = 0;
LAB_0407e28c:
  return bVar1 & 1;
}

