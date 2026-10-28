// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$ToppingAllows
// address: 0x4150698
// body: available
// range: 0x4150698-0x4150b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IceCreamPieceTable__ToppingAllows
               (int param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516480 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516480 = 1;
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,param_3,0);
  if (0 < iVar5) {
    return false;
  }
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  iVar5 = AnhPD_FoodOrder_IceCreamPieceTable__ToppingCount(param_1,&local_a0);
  uVar1 = param_1 - 1;
  if (uVar1 < 5) {
    iVar6 = *(int *)(&DAT_01a8f6d4 + (ulong)uVar1 * 4);
  }
  else {
    iVar6 = 0;
  }
  if (iVar6 <= iVar5) {
    return false;
  }
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  local_b0 = local_70;
  iVar5 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                    (&local_c0,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x18));
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  local_d0 = param_2[2];
  iVar6 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                    (&local_e0,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x20));
  uStack_f8 = param_2[1];
  local_100 = *param_2;
  local_f0 = param_2[2];
  iVar7 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                    (&local_100,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x28));
  uStack_118 = param_2[1];
  local_120 = *param_2;
  local_110 = param_2[2];
  iVar8 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                    (&local_120,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x48));
  if (param_1 == 3) {
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186a68);
    }
    uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsJelly(param_3);
    if ((uVar9 & 1) != 0) {
LAB_04150870:
      bVar2 = SBORROW4(iVar6,1);
      bVar3 = iVar6 + -1 < 0;
      goto LAB_041508d8;
    }
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsWhippedCream(param_3);
    if ((uVar9 & 1) != 0) {
      return true;
    }
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__Contains
                      (*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x38),param_3);
    if ((uVar9 & 1) == 0) {
      uStack_78 = param_2[1];
      local_80 = *param_2;
      local_70 = param_2[2];
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_178 = uStack_78;
      local_180 = local_80;
      local_170 = local_70;
      iVar6 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf
                        (&local_180,*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x40));
      if (iVar8 < 1) {
        return false;
      }
      if (3 < iVar6 + iVar5) {
        return false;
      }
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsFruit(param_3);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar4 = AnhPD_FoodOrder_IceCreamPieceTable__Contains
                          (*(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x40),param_3);
        bVar2 = SBORROW4(iVar6,1);
        bVar3 = iVar6 + -1 < 0;
        goto LAB_04150a04;
      }
      goto LAB_04150ad4;
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = param_2[2];
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_158 = uStack_78;
    local_160 = local_80;
    puVar10 = &local_160;
    local_150 = local_70;
    uVar11 = *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09186a68);
    }
    uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsBehindDecor(param_3);
    if ((uVar9 & 1) == 0) {
      if (uVar1 < 2) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar4 = AnhPD_FoodOrder_IceCreamPieceTable__IsFruit(param_3);
        bVar2 = SBORROW4(iVar5,3);
        bVar3 = iVar5 + -3 < 0;
LAB_04150a04:
        return (bool)(bVar4 & bVar3 != bVar2);
      }
      if (param_1 == 4) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsFruit(param_3);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsJelly(param_3);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsWhippedCream(param_3);
            if ((uVar9 & 1) != 0) {
              return true;
            }
            if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            bVar4 = AnhPD_FoodOrder_IceCreamPieceTable__IsToppingSyrup(param_3);
            if (iVar7 < 1) {
              return (bool)(bVar4 & 0 < iVar8);
            }
            return false;
          }
          goto LAB_04150870;
        }
      }
      else {
        if (param_1 != 5) {
          return false;
        }
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsFruit(param_3);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar4 = AnhPD_FoodOrder_IceCreamPieceTable__IsToppingSyrup(param_3);
          bVar2 = SBORROW4(iVar7,1);
          bVar3 = iVar7 + -1 < 0;
          goto LAB_04150a04;
        }
      }
LAB_04150ad4:
      bVar2 = SBORROW4(iVar5,3);
      bVar3 = iVar5 + -3 < 0;
      goto LAB_041508d8;
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = param_2[2];
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = &local_140;
    uVar11 = *(undefined8 *)(*(long *)(DAT_09186a68 + 0xb8) + 0x30);
    uStack_138 = uStack_78;
    local_140 = local_80;
    local_130 = local_70;
  }
  iVar5 = AnhPD_FoodOrder_IceCreamPieceTable__CountOf(puVar10,uVar11);
  bVar2 = SBORROW4(iVar5,2);
  bVar3 = iVar5 + -2 < 0;
LAB_041508d8:
  return bVar3 != bVar2;
}

