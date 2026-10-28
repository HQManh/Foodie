// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$GenerateRandomRecipes
// address: 0x414cf70
// body: available
// range: 0x414cf70-0x414d4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414d4b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414d4bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_IceCreamOrderStrategy__GenerateRandomRecipes(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09516457 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a58);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ad800);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091ad7f8);
    FUN_03f5c2a4(&DAT_091ad808);
    FUN_03f5c2a4(&DAT_091ad810);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c450);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516457 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = AnhPD_FoodOrder_IceCreamOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar14 = **(long **)(DAT_09186a58 + 0xb8);
  if (lVar14 != 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917c450);
    FUN_057992c4(lVar7,*(undefined4 *)(lVar14 + 0x18),DAT_091ad7f8);
    lVar14 = **(long **)(DAT_09186a58 + 0xb8);
    if (lVar14 != 0) {
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar6 = 0;
        uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar5 == 0) goto LAB_0414d4b8;
          uVar3 = *(undefined4 *)(lVar14 + 0x20 + uVar6 * 4);
          uVar10 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId(lVar5,uVar3,&uStack_68,0);
          lVar8 = DAT_091ad800;
          if ((uVar10 & 1) != 0) {
            if (lVar7 == 0) goto LAB_0414d4b8;
            lVar11 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0414d4b8;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
            }
            else {
              FUN_05799adc(lVar7,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
          uVar9 = 0;
        }
        else {
          iVar2 = UnityEngine_Random__Range(1,4,0);
          lVar14 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e0478(lVar14,iVar2,DAT_091b0568);
          lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar8,DAT_091adc70);
          if (0 < iVar2) {
            iVar13 = 0;
            do {
              uVar3 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar7 + 0x18),0);
              uVar4 = FUN_057997e4(lVar7,uVar3,DAT_091ad810);
              uVar3 = *(undefined4 *)(param_1 + 0x20);
              if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09186a58);
              }
              uVar9 = AnhPD_FoodOrder_IceCreamOrderStrategy__CanShowOf(lVar5,uVar4);
              if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09186a68);
              }
              AnhPD_FoodOrder_IceCreamPieceTable__Roll(&local_d8,uVar4,uVar3,uVar9);
              uStack_78 = uStack_d0;
              local_80 = local_d8;
              local_70 = local_c8;
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_80,0);
              lVar11 = DAT_09189158;
              if ((uVar6 & 1) == 0) {
                if (lVar8 == 0) goto LAB_0414d4b8;
                *(undefined4 *)(lVar8 + 0x18) = 0;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_d8,&local_80,0);
                uStack_a8 = uStack_d0;
                local_b0 = local_d8;
                uStack_98 = uStack_c0;
                uStack_a0 = local_c8;
                local_90 = local_b8;
                while (uVar10 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0),
                      uVar6 = local_90, (uVar10 & 1) != 0) {
                  if (0 < local_90._4_4_) {
                    uVar3 = (undefined4)local_90;
                    lVar11 = DAT_091adc88;
                    iVar15 = local_90._4_4_;
                    do {
                      lVar12 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_0414d4b8;
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
                      }
                      else {
                        FUN_057971a8(lVar8,uVar6 & 0xffffffff,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        lVar11 = DAT_091adc88;
                      }
                      iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                  }
                }
                uVar9 = CakeOrder_InGame_OrderRecipeCodec__Encode(uVar4,lVar8,0);
                lVar11 = DAT_091b0570;
                if (lVar14 == 0) goto LAB_0414d4b8;
                lVar12 = *(long *)(lVar14 + 0x10);
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_0414d4b8;
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(lVar14,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 != iVar2);
          }
          if (lVar14 == 0) goto LAB_0414d4b8;
          uVar9 = FUN_057e28a4(lVar14,DAT_091b05f8);
        }
        return uVar9;
      }
    }
  }
LAB_0414d4b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

