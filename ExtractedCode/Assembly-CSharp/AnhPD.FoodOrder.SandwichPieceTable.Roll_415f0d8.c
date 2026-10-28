// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$Roll
// address: 0x415f0d8
// body: available
// range: 0x415f0d8-0x415f6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichPieceTable__Roll
               (undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
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
  
  if ((DAT_09516524 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a560);
    FUN_03f5c2a4(&DAT_0918a578);
    FUN_03f5c2a4(&DAT_09225618);
    FUN_03f5c2a4(&DAT_09214270);
    FUN_03f5c2a4(&DAT_09214268);
    DAT_09516524 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  uVar1 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09214268,0);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    local_60 = puVar5[2];
    goto LAB_0415f6d0;
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_68 = puVar5[1];
  local_70 = *puVar5;
  local_60 = puVar5[2];
  iVar4 = param_3;
  if (param_2 < 3) {
    if (param_2 == 1) {
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(1,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__One(&local_b0,0,0);
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar5 = &local_d0;
        uVar3 = **(undefined8 **)(DAT_0918a578 + 0xb8);
        if (7 < param_3) {
          iVar4 = 8;
        }
        if (param_3 < 1) {
          iVar4 = 8;
        }
        uVar2 = 1;
        uStack_c8 = uStack_a8;
        local_d0 = local_b0;
        local_c0 = local_a0;
        goto LAB_0415f630;
      }
    }
    else if (param_2 == 2) {
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(2,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(2,9,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__One(&local_b0,0,0);
          local_80 = local_a0;
          uStack_88 = uStack_a8;
          local_90 = local_b0;
          AnhPD_FoodOrder_PieceSet__Add(&local_e8,&local_90,9,1,0);
          if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar5 = &local_100;
          uVar3 = *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 8);
          if (3 < param_3) {
            iVar4 = 4;
          }
          uStack_f8 = uStack_e0;
          local_100 = local_e8;
          if (param_3 < 1) {
            iVar4 = 4;
          }
          local_f0 = local_d8;
          uVar2 = 2;
          goto LAB_0415f630;
        }
      }
    }
  }
  else if (param_2 == 3) {
    if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = AnhPD_FoodOrder_SandwichPieceTable__IsUsable(3,5,param_4);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_b0,5,0);
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (4 < param_3) {
        iVar4 = 5;
      }
      puVar5 = &local_120;
      uVar2 = 3;
      uVar3 = *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x10);
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      uStack_118 = uStack_a8;
      local_120 = local_b0;
      if (param_3 < 1) {
        iVar4 = 5;
      }
      local_110 = local_a0;
LAB_0415f630:
      AnhPD_FoodOrder_SandwichPieceTable__PickSome(&local_70,uVar2,puVar5,uVar3,1,iVar4,param_4);
    }
  }
  else if (param_2 == 4) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
    }
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    local_a0 = puVar5[2];
    if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_138 = uStack_a8;
    local_140 = local_b0;
    local_130 = local_a0;
    AnhPD_FoodOrder_SandwichPieceTable__PickSome
              (&local_70,4,&local_140,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x18),1,1,
               param_4);
    uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_70,0);
    if ((uVar1 & 1) == 0) {
      uStack_a8 = uStack_68;
      local_b0 = local_70;
      local_a0 = local_60;
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_150 = local_a0;
      uStack_158 = uStack_a8;
      local_160 = local_b0;
      AnhPD_FoodOrder_SandwichPieceTable__MaybeAdd(&local_e8,4,&local_160,0xe,param_4);
LAB_0415f584:
      uStack_68 = uStack_e0;
      local_70 = local_e8;
      local_60 = local_d8;
    }
  }
  else if (param_2 == 5) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
    }
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    local_a0 = puVar5[2];
    if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_178 = uStack_a8;
    local_180 = local_b0;
    local_170 = local_a0;
    AnhPD_FoodOrder_SandwichPieceTable__PickSome
              (&local_70,5,&local_180,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x20),1,1,
               param_4);
    uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_70,0);
    if ((uVar1 & 1) == 0) {
      uStack_a8 = uStack_68;
      local_b0 = local_70;
      local_a0 = local_60;
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (1 < param_3) {
        iVar4 = 2;
      }
      if (param_3 < 1) {
        iVar4 = 2;
      }
      uStack_198 = uStack_a8;
      local_1a0 = local_b0;
      local_190 = local_a0;
      AnhPD_FoodOrder_SandwichPieceTable__PickSome
                (&local_e8,5,&local_1a0,*(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x28),0,
                 iVar4,param_4);
      goto LAB_0415f584;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_70,0);
  if ((uVar1 & 1) != 0) {
    local_b0 = CONCAT44(local_b0._4_4_,param_2);
    uVar3 = FUN_03f5c42c(DAT_0918a560,&local_b0);
    uVar3 = System_String__Format(DAT_09214270,uVar3,0);
    uVar3 = System_String__Concat(uVar3,DAT_09225618,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar3,0);
  }
LAB_0415f6d0:
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  return;
}

