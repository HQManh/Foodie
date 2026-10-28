// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSashimiDisplay$$Display
// address: 0x41659b4
// body: available
// range: 0x41659b4-0x4165e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4165e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSashimiDisplay__Display(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_0951656e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b2bd8);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b2bc0);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b2bc8);
    FUN_03f5c2a4(&DAT_091b2be0);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_0951656e = 1;
  }
  lVar9 = DAT_09189158;
  lVar7 = *(long *)(param_1 + 0x40);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_b8,param_2,0);
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    uStack_80 = local_a8;
    local_70 = local_98;
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
    uVar5 = local_70;
    while (local_70 = uVar5, (uVar4 & 1) != 0) {
      local_70._0_4_ = (undefined4)uVar5;
      uVar2 = (undefined4)local_70;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_SushiPieceTable__IsFish(uVar5 & 0xffffffff);
      lVar9 = DAT_091adc88;
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 == 0) goto LAB_04165e48;
        lVar8 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_04165e48;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_057971a8(lVar7,uVar5 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
      uVar5 = local_70;
    }
    if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      iVar10 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      if (iVar1 <= iVar10) {
        iVar10 = iVar1;
      }
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar2,0);
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 != 0) {
        iVar11 = 0;
        while (iVar11 < *(int *)(lVar9 + 0x18)) {
          lVar9 = FUN_057e0998(lVar9,iVar11,DAT_091b2bc8);
          if (lVar9 != 0) {
            uVar13 = *(undefined8 *)(lVar9 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Implicit(uVar13,0);
            if ((uVar5 & 1) != 0) {
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_04165e48;
              UnityEngine_GameObject__SetActive(*(long *)(lVar9 + 0x10),iVar11 == iVar10 + -1,0);
            }
            if (iVar11 == iVar10 + -1) {
              lVar7 = *(long *)(lVar9 + 0x18);
              if (lVar7 == 0) goto LAB_04165e48;
              iVar12 = 0;
              while (iVar12 < *(int *)(lVar7 + 0x18)) {
                uVar13 = FUN_057e0998(lVar7,iVar12,DAT_091b0430);
                lVar7 = *(long *)(param_1 + 0x40);
                if (lVar7 == 0) goto LAB_04165e48;
                if (iVar12 < *(int *)(lVar7 + 0x18)) {
                  uVar2 = FUN_05796eb0(lVar7,iVar12,DAT_091add20);
                  uVar6 = AnhPD_FoodOrder_FlexibleSashimiDisplay__SpriteOf(param_1,uVar2);
                }
                else {
                  uVar6 = 0;
                }
                AnhPD_FoodOrder_FlexibleSashimiDisplay__Show(uVar13,uVar6);
                lVar7 = *(long *)(lVar9 + 0x18);
                iVar12 = iVar12 + 1;
                if (lVar7 == 0) goto LAB_04165e48;
              }
              lVar7 = *(long *)(lVar9 + 0x20);
              if (lVar7 == 0) goto LAB_04165e48;
              iVar12 = 0;
              while (iVar12 < *(int *)(lVar7 + 0x18)) {
                uVar13 = FUN_057e0998(lVar7,iVar12,DAT_091acd88);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar5 = UnityEngine_Object__op_Implicit(uVar13,0);
                if ((uVar5 & 1) != 0) {
                  if ((*(long *)(lVar9 + 0x20) == 0) ||
                     (lVar7 = FUN_057e0998(*(long *)(lVar9 + 0x20),iVar12,DAT_091acd88), lVar7 == 0)
                     ) goto LAB_04165e48;
                  UnityEngine_GameObject__SetActive(lVar7,0 < iVar1,0);
                }
                lVar7 = *(long *)(lVar9 + 0x20);
                iVar12 = iVar12 + 1;
                if (lVar7 == 0) goto LAB_04165e48;
              }
            }
          }
          lVar9 = *(long *)(param_1 + 0x20);
          iVar11 = iVar11 + 1;
          if (lVar9 == 0) goto LAB_04165e48;
        }
        lVar9 = *(long *)(param_1 + 0x38);
        if (lVar9 != 0) {
          iVar10 = 0;
          goto LAB_04165db8;
        }
      }
    }
  }
  goto LAB_04165e48;
LAB_04165db8:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar10) {
      return;
    }
    lVar9 = FUN_057e0998(lVar9,iVar10,DAT_091b2be0);
    if (lVar9 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar9 + 0x18);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (lVar9 == 0) break;
      uStack_c8 = param_2[1];
      local_d0 = *param_2;
      local_c0 = param_2[2];
      lVar7 = *(long *)(lVar9 + 0x18);
      uVar3 = AnhPD_FoodOrder_FlexibleSushiDisplay_PieceVisual__WantsActive(lVar9,&local_d0);
      if (lVar7 == 0) break;
      UnityEngine_GameObject__SetActive(lVar7,uVar3 & 1,0);
    }
    lVar9 = *(long *)(param_1 + 0x38);
    iVar10 = iVar10 + 1;
  } while (lVar9 != 0);
LAB_04165e48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

