// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy$$GenerateRandomRecipes
// address: 0x4152ddc
// body: available
// range: 0x4152ddc-0x415321b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4153214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4153218 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_PastaOrderStrategy__GenerateRandomRecipes(void)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095164a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aef30);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aef28);
    FUN_03f5c2a4(&DAT_091aef38);
    FUN_03f5c2a4(&DAT_091aef40);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c8b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_095164a9 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917c8b8);
  FUN_0579924c(lVar5,DAT_091aef28);
  iVar10 = 1;
  do {
    uVar6 = AnhPD_FoodOrder_PastaOrderStrategy__get_Config();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = AnhPD_FoodOrder_PastaOrderStrategy__get_Config();
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f10);
      }
      uVar6 = CakeOrder_InGame_Pasta_PastaPieceTable__BaseId(iVar10,0);
      uVar7 = local_90;
      if (lVar8 == 0) goto LAB_04153214;
      uVar6 = AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(lVar8,uVar6,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
      lVar8 = DAT_091aef30;
      if ((uVar7 & 1) != 0) {
        uVar7 = local_90;
        if (lVar5 == 0) goto LAB_04153214;
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_04153214;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
        }
        else {
          FUN_05799adc(lVar5,iVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    lVar8 = DAT_091c0310;
    iVar10 = iVar10 + 1;
  } while (iVar10 != 5);
  uVar7 = local_90;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
      lVar5 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar5 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
    }
    else {
      uVar4 = UnityEngine_Random__Range(0,*(int *)(lVar5 + 0x18),0);
      uVar4 = FUN_057997e4(lVar5,uVar4,DAT_091aef40);
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f10);
      }
      CakeOrder_InGame_Pasta_PastaPieceTable__Roll(&local_c8,uVar4,0,0);
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      local_70 = local_b8;
      lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(lVar8,DAT_091adc70);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_b0,&local_80,0);
      uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0);
      uVar2 = local_90;
      lVar5 = DAT_091adc88;
      while (local_90 = uVar2, DAT_091adc88 = lVar5, (uVar7 & 1) != 0) {
        local_90._4_4_ = (int)(uVar2 >> 0x20);
        uVar7 = uVar2;
        if (0 < local_90._4_4_) {
          if (lVar8 == 0) goto LAB_04153214;
          local_90._0_4_ = (undefined4)uVar2;
          uVar3 = (undefined4)local_90;
          iVar10 = local_90._4_4_;
          do {
            lVar9 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            uVar7 = local_90;
            if (lVar9 == 0) goto LAB_04153214;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
            }
            else {
              FUN_057971a8(lVar8,uVar2 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              lVar5 = DAT_091adc88;
            }
            iVar10 = iVar10 + -1;
            uVar7 = local_90;
          } while (iVar10 != 0);
        }
        local_90 = uVar7;
        uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0);
        uVar2 = local_90;
        lVar5 = DAT_091adc88;
      }
      lVar5 = FUN_03f5c394(DAT_091805f8,1);
      uVar6 = CakeOrder_InGame_OrderRecipeCodec__Encode(uVar4,lVar8,0);
      uVar7 = local_90;
      if (lVar5 == 0) goto LAB_04153214;
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
    }
    return lVar5;
  }
LAB_04153214:
  local_90 = uVar7;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

