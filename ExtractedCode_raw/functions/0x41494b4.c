// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$CanDishAdd
// address: 0x41494b4
// body: available
// range: 0x41494b4-0x414973b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte AnhPD_FoodOrder_IceCreamPieceTable__CanDishAdd
               (uint param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_09516481 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516481 = 1;
  }
  local_34 = 0;
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__TryGetPiece(param_3,&local_34);
  if ((uVar5 & 1) != 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = param_2[2];
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__HasBase(param_1,&local_70);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar3 = AnhPD_FoodOrder_IceCreamPieceTable__IsRefined(param_3);
      uVar1 = local_34;
      uVar5 = AnhPD_FoodOrder_IceCreamPieceTable__IsMain(param_1,local_34);
      if ((uVar5 & 1) == 0) {
        uStack_c8 = param_2[1];
        local_d0 = *param_2;
        local_c0 = param_2[2];
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = AnhPD_FoodOrder_IceCreamPieceTable__MainCount(param_1,&local_d0);
        if ((bVar3 & 1) == 0 && (int)(uint)(param_1 != 5) <= iVar4) {
          uStack_48 = param_2[1];
          local_50 = *param_2;
          local_40 = param_2[2];
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_e8 = uStack_48;
          local_f0 = local_50;
          local_e0 = local_40;
          bVar2 = AnhPD_FoodOrder_IceCreamPieceTable__ToppingAllows(param_1,&local_f0,uVar1);
          goto LAB_04149654;
        }
      }
      else {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
        if (iVar4 == 0) {
          uStack_88 = param_2[1];
          local_90 = *param_2;
          local_80 = param_2[2];
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar4 = AnhPD_FoodOrder_IceCreamPieceTable__MainCount(param_1,&local_90);
          if (param_1 - 1 < 5) {
            iVar6 = *(int *)(&DAT_01a8f6c0 + (ulong)(param_1 - 1) * 4);
          }
          else {
            iVar6 = 0;
          }
          bVar2 = 0;
          if ((iVar4 < iVar6) && (((param_1 != 4 ^ bVar3) & 1) != 0)) {
            if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((param_1 & 0xfffffffb) == 1) {
              uStack_48 = param_2[1];
              local_50 = *param_2;
              local_40 = param_2[2];
              if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uStack_a8 = uStack_48;
              local_b0 = local_50;
              local_a0 = local_40;
              iVar4 = AnhPD_FoodOrder_IceCreamPieceTable__ToppingCount(param_1,&local_b0);
              bVar2 = iVar4 == 0;
            }
            else {
              bVar2 = 1;
            }
          }
          goto LAB_04149654;
        }
      }
    }
  }
  bVar2 = 0;
LAB_04149654:
  return bVar2 & 1;
}

