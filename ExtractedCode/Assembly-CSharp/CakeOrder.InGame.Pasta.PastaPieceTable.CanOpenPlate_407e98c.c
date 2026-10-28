// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$CanOpenPlate
// address: 0x407e98c
// body: available
// range: 0x407e98c-0x407ec93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte CakeOrder_InGame_Pasta_PastaPieceTable__CanOpenPlate
               (int param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
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
  int local_34;
  
  if ((DAT_09515c55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c55 = 1;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  local_40 = param_3[2];
  local_34 = 0;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar6 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(param_1,&local_70,0);
  bVar2 = 0;
  if ((uVar6 & 1) == 0) goto LAB_0407ec7c;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = CakeOrder_InGame_Pasta_PastaPieceTable__BaseId(param_1);
  bVar3 = System_String__op_Equality(param_2,uVar7,0);
  uVar6 = CakeOrder_InGame_Pasta_PastaPieceTable__TryGetPiece(param_2,&local_34);
  iVar5 = local_34;
  if ((uVar6 & 1) == 0) {
    bVar4 = 1;
  }
  else {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__One(&local_50,iVar5,0);
    uStack_88 = uStack_48;
    local_90 = local_50;
    local_80 = local_40;
    bVar4 = AnhPD_FoodOrder_PieceSet__Equals(param_3,&local_90,0);
    bVar4 = bVar4 ^ 1;
  }
  bVar2 = 0;
  if (param_1 < 3) {
    if (param_1 == 1) {
      uStack_48 = param_3[1];
      local_50 = *param_3;
      local_40 = param_3[2];
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_a8 = uStack_48;
      local_b0 = local_50;
      local_a0 = local_40;
      iVar5 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                        (&local_b0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 8));
      bVar1 = iVar5 != 1;
      bVar2 = bVar1 | bVar3;
      if (((bVar2 | bVar4) & 1) == 0) {
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = *(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 8);
LAB_0407ec74:
        bVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__Contains(uVar7,local_34);
        goto LAB_0407ec7c;
      }
    }
    else {
      if (param_1 != 2) goto LAB_0407ec7c;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,7,0);
      bVar1 = iVar5 != 1;
      bVar2 = bVar1 | bVar3;
      if (((bVar2 | bVar4) & 1) == 0) {
        bVar2 = local_34 == 7;
        goto LAB_0407ec7c;
      }
    }
  }
  else if (param_1 == 3) {
    uStack_48 = param_3[1];
    local_50 = *param_3;
    local_40 = param_3[2];
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_c8 = uStack_48;
    local_d0 = local_50;
    local_c0 = local_40;
    iVar5 = CakeOrder_InGame_Pasta_PastaPieceTable__Count
                      (&local_d0,*(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38));
    bVar1 = iVar5 != 1;
    bVar2 = bVar1 | bVar3;
    if (((bVar2 | bVar4) & 1) == 0) {
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = *(undefined8 *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38);
      goto LAB_0407ec74;
    }
  }
  else {
    if (param_1 != 4) goto LAB_0407ec7c;
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar5 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,0x10,0);
    bVar1 = iVar5 != 1;
    bVar2 = bVar1 | bVar3;
    if (((bVar2 | bVar4) & 1) == 0) {
      bVar2 = local_34 == 0x10;
      goto LAB_0407ec7c;
    }
  }
  bVar2 = bVar1 ^ bVar2;
LAB_0407ec7c:
  return bVar2 & 1;
}

