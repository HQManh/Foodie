// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$Roll
// address: 0x407f658
// body: available
// range: 0x407f658-0x407fb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407fb38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x407fb3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaPieceTable__Roll(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515c60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adce8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c60 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_78 = puVar9[1];
  local_80 = *puVar9;
  local_70 = puVar9[2];
  if (param_2 < 3) {
    if (param_2 == 1) {
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_09188f10 + 0xb8) + 8);
      uVar2 = UnityEngine_Random__Range(0,3,0);
      if (lVar7 == 0) goto LAB_0407fb38;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_0407fb3c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189158);
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_80,uVar5,1,0);
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      lVar7 = *(long *)(*(long *)(DAT_09188f10 + 0xb8) + 0x10);
      uVar2 = UnityEngine_Random__Range(0,3,0);
      if (lVar7 == 0) goto LAB_0407fb38;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_0407fb3c;
      AnhPD_FoodOrder_PieceSet__Add
                (&local_d0,&local_a0,*(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20),1,0);
      local_80 = local_d0;
      uStack_78 = uStack_c8;
      local_70 = local_c0;
    }
    else if (param_2 == 2) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = 7;
      goto LAB_0407f8d8;
    }
  }
  else {
    if (param_2 == 3) {
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_09188f10 + 0xb8) + 0x38);
      if (lVar7 == 0) goto LAB_0407fb38;
      uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar7 + 0x18),0);
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_0407fb3c;
      uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
    else {
      if (param_2 != 4) goto LAB_0407f8f4;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = 0x10;
    }
LAB_0407f8d8:
    AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_80,uVar5,1,0);
    local_80 = local_b8;
    uStack_78 = uStack_b0;
    local_70 = local_a8;
  }
LAB_0407f8f4:
  lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar7,DAT_091adc70);
  iVar4 = 0;
  do {
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = CakeOrder_InGame_Pasta_PastaPieceTable__Allows(param_2,iVar4);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,iVar4,0);
      lVar1 = DAT_091adc88;
      if (iVar3 == 0) {
        if (lVar7 == 0) goto LAB_0407fb38;
        lVar10 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0407fb38;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(int *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = iVar4;
        }
        else {
          FUN_057971a8(lVar7,iVar4,*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x17);
  if (lVar7 != 0) {
    iVar4 = *(int *)(lVar7 + 0x18);
    while (0 < iVar4) {
      if (0 < param_3) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_80,0);
        if (param_3 <= iVar4) break;
        iVar4 = *(int *)(lVar7 + 0x18);
      }
      uVar5 = UnityEngine_Random__Range(0,iVar4,0);
      uVar6 = FUN_05796eb0(lVar7,uVar5,DAT_091add20);
      FUN_05798a08(lVar7,uVar5,DAT_091adce8);
      fVar11 = (float)UnityEngine_Random__get_value(0);
      if (fVar11 < 0.5) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_80,uVar6,1,0);
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_e8 = uStack_b0;
        local_f0 = local_b8;
        local_e0 = local_a8;
        uVar8 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(param_2,&local_f0,1);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_80,uVar6,1,0);
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_70 = local_a8;
        }
      }
      iVar4 = *(int *)(lVar7 + 0x18);
    }
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
    return;
  }
LAB_0407fb38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

