// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$CanDishAdd
// address: 0x415e75c
// body: available
// range: 0x415e75c-0x415ec63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong AnhPD_FoodOrder_SandwichPieceTable__CanDishAdd
                (int param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar7;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_34;
  undefined8 *puVar6;
  
  if ((DAT_0951651f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_0951651f = 1;
  }
  local_34 = 0;
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = AnhPD_FoodOrder_SandwichPieceTable__TryGetDishPiece(param_1,param_3,&local_34);
  iVar4 = local_34;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,iVar4,0);
    if (iVar3 < 1) {
      if (param_1 < 3) {
        if (param_1 == 1) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0,0);
          if (0 < iVar3) {
            if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                              (**(undefined8 **)(DAT_0918a578 + 0xb8),iVar4);
            if ((uVar5 & 1) != 0) {
              uStack_58 = param_2[1];
              local_60 = *param_2;
              local_50 = param_2[2];
              if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uStack_78 = uStack_58;
              local_80 = local_60;
              local_70 = local_50;
              iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                                (&local_80,**(undefined8 **)(DAT_0918a578 + 0xb8));
              bVar1 = SBORROW4(iVar4,8);
              bVar2 = iVar4 + -8 < 0;
              goto LAB_0415ec5c;
            }
          }
        }
        else {
          if (param_1 != 2) {
            return 0;
          }
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (iVar4 == 9) {
            return 1;
          }
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,9,0);
          if (0 < iVar3) {
            if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                              (*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 8),iVar4);
            if ((uVar5 & 1) != 0) {
              uStack_58 = param_2[1];
              local_60 = *param_2;
              local_50 = param_2[2];
              if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uStack_98 = uStack_58;
              local_a0 = local_60;
              local_90 = local_50;
              iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                                (&local_a0,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 8));
              bVar1 = SBORROW4(iVar4,4);
              bVar2 = iVar4 + -4 < 0;
LAB_0415ec5c:
              return (ulong)(bVar2 != bVar1);
            }
          }
        }
      }
      else if (param_1 == 3) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,5,0);
        if (0 < iVar3) {
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                            (*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x10),iVar4);
          if ((uVar5 & 1) != 0) {
            uStack_58 = param_2[1];
            local_60 = *param_2;
            local_50 = param_2[2];
            if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_b8 = uStack_58;
            local_c0 = local_60;
            local_b0 = local_50;
            iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                              (&local_c0,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x10));
            bVar1 = SBORROW4(iVar4,5);
            bVar2 = iVar4 + -5 < 0;
            goto LAB_0415ec5c;
          }
        }
      }
      else if (param_1 == 4) {
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                          (*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x18),iVar4);
        if ((uVar5 & 1) != 0) {
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = param_2[2];
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = &local_e0;
          uVar7 = *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x18);
          uStack_d8 = uStack_58;
          local_e0 = local_60;
          local_d0 = local_50;
          goto LAB_0415ea00;
        }
        if (iVar4 == 0xe) {
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = param_2[2];
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_f8 = uStack_58;
          local_100 = local_60;
          local_f0 = local_50;
          iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                            (&local_100,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x18));
          return (ulong)(0 < iVar4);
        }
      }
      else {
        if (param_1 != 5) {
          return 0;
        }
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                          (*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x20),iVar4);
        if ((uVar5 & 1) != 0) {
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = param_2[2];
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = &local_120;
          uVar7 = *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x20);
          uStack_118 = uStack_58;
          local_120 = local_60;
          local_110 = local_50;
LAB_0415ea00:
          iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn(puVar6,uVar7);
          return (ulong)(iVar4 == 0);
        }
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = AnhPD_FoodOrder_SandwichPieceTable__Contains
                          (*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x28),iVar4);
        if ((uVar5 & 1) != 0) {
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = param_2[2];
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_138 = uStack_58;
          local_140 = local_60;
          local_130 = local_50;
          iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                            (&local_140,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x20));
          if (0 < iVar4) {
            uStack_58 = param_2[1];
            local_60 = *param_2;
            local_50 = param_2[2];
            if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_158 = uStack_58;
            local_160 = local_60;
            local_150 = local_50;
            iVar4 = AnhPD_FoodOrder_SandwichPieceTable__CountIn
                              (&local_160,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x28));
            bVar1 = SBORROW4(iVar4,2);
            bVar2 = iVar4 + -2 < 0;
            goto LAB_0415ec5c;
          }
        }
      }
    }
  }
  return 0;
}

