// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy$$Shortfall
// address: 0x415b0ec
// body: available
// range: 0x415b0ec-0x415b67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415b678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_SandwichOrderStrategy__Shortfall(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int local_1b4;
  undefined1 auStack_1a8 [72];
  undefined8 local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095164fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a568);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_095164fd = 1;
  }
  local_70 = 0;
  local_c0 = 0;
  local_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_f0 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = AnhPD_FoodOrder_SandwichOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((param_2 != 0) && ((uVar7 & 1) == 0)) {
    lVar11 = **(long **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar11,0);
    lVar12 = 0;
    if ((uVar7 & 1) != 0) {
      if (lVar11 == 0) goto LAB_0415b678;
      lVar12 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar11,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar12,0);
    if ((uVar7 & 1) != 0) {
      if ((lVar12 != 0) &&
         (lVar12 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar12,0),
         lVar11 != 0)) {
        uVar8 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar11,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar7 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar7 & 1) == 0) {
          lVar9 = *(long *)(param_1 + 0x20);
          if (lVar9 == 0) goto LAB_0415b678;
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        }
        else {
          lVar9 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar11,0);
          if (lVar9 == 0) goto LAB_0415b678;
          AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                    (lVar9,lVar12,*(undefined8 *)(param_1 + 0x20),0);
        }
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (FUN_053ebbdc(*(long *)(param_1 + 0x28),DAT_091a86c0), lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x18) < 1) {
            local_1b4 = 0;
          }
          else {
            local_1b4 = 0;
            iVar5 = 0;
            do {
              FUN_057eeec4(&local_160,lVar12,iVar5,DAT_091aed50);
              memcpy(&local_b0,&local_160,0x48);
              if ((uStack_88 & 1) != 0) {
                memcpy(auStack_1a8,&local_b0,0x48);
                iVar3 = AnhPD_FoodOrder_OrderStrategy__DishKeyOfOrder(param_1,auStack_1a8,0);
                if (iVar3 != -1) {
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_160,&uStack_a0,0);
                  uStack_d8 = puStack_158;
                  local_e0 = local_160;
                  uStack_c8 = uStack_148;
                  uStack_d0 = local_150;
                  local_c0 = local_140;
                  uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_e0,0);
joined_r0x0415b458:
                  if ((uVar7 & 1) != 0) {
                    do {
                      uVar7 = local_c0;
                      lVar9 = *(long *)(param_1 + 0x20);
                      if (lVar9 == 0) goto LAB_0415b678;
                      iVar2 = local_c0._4_4_;
                      if (iVar5 < *(int *)(lVar9 + 0x18)) {
                        FUN_057f79cc(&local_160,lVar9,iVar5,DAT_091af060);
                        uStack_f8 = puStack_158;
                        local_100 = local_160;
                        local_f0 = local_150;
                        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(&local_100,uVar7 & 0xffffffff,0);
                      }
                      else {
                        iVar4 = 0;
                      }
                      iVar1 = iVar2 - iVar4;
                      if (iVar1 != 0 && iVar4 <= iVar2) {
                        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar10 = AnhPD_FoodOrder_SandwichPieceTable__TryGetFormOf
                                           (iVar3,uVar7 & 0xffffffff,&local_e8,0);
                        uVar8 = local_e8;
                        if ((uVar10 & 1) != 0) {
                          if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar7 = AnhPD_FoodOrder_SandwichOrderStrategy__ChainContains
                                            (uVar6,uVar8,param_2,uVar7 & 0xffffffff);
                          if ((uVar7 & 1) != 0) goto LAB_0415b53c;
                        }
                      }
                      uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_e0,0);
                      if ((uVar7 & 1) == 0) break;
                    } while( true );
                  }
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar12 + 0x18));
          }
          if (local_1b4 == 0) {
            return 0;
          }
          if (*(long *)(lVar11 + 0x110) == 0) {
            return local_1b4;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x110) + 0x18);
          if (lVar11 == 0) {
            return local_1b4;
          }
          iVar5 = AnhPD_FoodOrder_LevelPieceBook__CountMade(lVar11,param_2,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_053ec0b0(&local_118,*(long *)(param_1 + 0x28),DAT_091a86d0);
            local_160 = 0;
            puStack_158 = &local_118;
            while (uVar7 = FUN_071bb7b4(&local_118,DAT_091a4588), (uVar7 & 1) != 0) {
              iVar3 = AnhPD_FoodOrder_LevelPieceBook__CountMade(lVar11,local_108,0);
              iVar5 = iVar3 + iVar5;
            }
            FUN_071bb7b0(&local_118,DAT_091a4580);
            return local_1b4 - iVar5;
          }
        }
      }
LAB_0415b678:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
LAB_0415b53c:
  uVar7 = System_String__op_Inequality(local_e8,param_2,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0415b678;
    FUN_053ec72c(*(long *)(param_1 + 0x28),local_e8,DAT_091a86b8);
  }
  local_1b4 = iVar1 + local_1b4;
  uVar7 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_e0,0);
  goto joined_r0x0415b458;
}

