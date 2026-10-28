// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$GenerateRandomRecipes
// address: 0x416a474
// body: available
// range: 0x416a474-0x416a973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416a96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416a970 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SushiOrderStrategy__GenerateRandomRecipes(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
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
  
  if ((DAT_095165a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b08d8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091b08d0);
    FUN_03f5c2a4(&DAT_091b08e0);
    FUN_03f5c2a4(&DAT_091b08e8);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cd68);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b670);
    DAT_095165a0 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = AnhPD_FoodOrder_SushiOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = **(long **)(DAT_0918b670 + 0xb8);
  if (lVar13 != 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917cd68);
    FUN_057992c4(lVar7,*(undefined4 *)(lVar13 + 0x18),DAT_091b08d0);
    lVar13 = **(long **)(DAT_0918b670 + 0xb8);
    if (lVar13 != 0) {
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar6 = 0;
        uVar9 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar4 = *(undefined4 *)(lVar13 + 0x20 + uVar6 * 4);
          if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = AnhPD_FoodOrder_SushiOrderStrategy__CanRoll(uVar5,uVar4);
          lVar8 = DAT_091b08d8;
          if ((uVar9 & 1) != 0) {
            if (lVar7 == 0) goto LAB_0416a96c;
            lVar10 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0416a96c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
            }
            else {
              FUN_05799adc(lVar7,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar9 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
          uVar5 = 0;
        }
        else {
          iVar3 = UnityEngine_Random__Range(1,4,0);
          lVar13 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e0478(lVar13,iVar3,DAT_091b0568);
          lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar8,DAT_091adc70);
          if (0 < iVar3) {
            iVar14 = 0;
            do {
              uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar7 + 0x18),0);
              uVar4 = FUN_057997e4(lVar7,uVar4,DAT_091b08e8);
              AnhPD_FoodOrder_SushiOrderStrategy__Roll(&local_d8,param_1,uVar4);
              uStack_78 = uStack_d0;
              local_80 = local_d8;
              local_70 = local_c8;
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_80,0);
              lVar10 = DAT_09189158;
              if ((uVar6 & 1) == 0) {
                if (lVar8 == 0) goto LAB_0416a96c;
                *(undefined4 *)(lVar8 + 0x18) = 0;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_d8,&local_80,0);
                uStack_a8 = uStack_d0;
                local_b0 = local_d8;
                uStack_98 = uStack_c0;
                uStack_a0 = local_c8;
                local_90 = local_b8;
                while (uVar9 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0),
                      uVar6 = local_90, (uVar9 & 1) != 0) {
                  if (0 < local_90._4_4_) {
                    uVar2 = (undefined4)local_90;
                    lVar10 = DAT_091adc88;
                    iVar12 = local_90._4_4_;
                    do {
                      lVar11 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_0416a96c;
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
                      }
                      else {
                        FUN_057971a8(lVar8,uVar6 & 0xffffffff,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        lVar10 = DAT_091adc88;
                      }
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                  }
                }
                uVar5 = CakeOrder_InGame_OrderRecipeCodec__Encode(uVar4,lVar8,0);
                lVar10 = DAT_091b0570;
                if (lVar13 == 0) goto LAB_0416a96c;
                lVar11 = *(long *)(lVar13 + 0x10);
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_0416a96c;
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(lVar13,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 != iVar3);
          }
          if (lVar13 == 0) goto LAB_0416a96c;
          uVar5 = FUN_057e28a4(lVar13,DAT_091b05f8);
        }
        return uVar5;
      }
    }
  }
LAB_0416a96c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

