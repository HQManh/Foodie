// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$StationResultDemand
// address: 0x414dc14
// body: available
// range: 0x414dc14-0x414dfa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414dfa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_IceCreamOrderStrategy__StationResultDemand(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 auStack_160 [72];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_d0;
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
  undefined4 local_64;
  
  if ((DAT_0951645b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a58);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951645b = 1;
  }
  local_64 = 0;
  local_70 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = AnhPD_FoodOrder_IceCreamOrderStrategy__IsGated(param_2,&local_64);
  if ((uVar4 & 1) != 0) {
    lVar8 = **(long **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
    lVar9 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) goto LAB_0414dfa4;
      lVar9 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar8,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_IceCreamPieceTable__IsRefined(param_2);
      if ((lVar9 != 0) &&
         (lVar9 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar9,0), lVar8 != 0)
         ) {
        uVar5 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar8,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar6 & 1) == 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          if (lVar7 == 0) goto LAB_0414dfa4;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        }
        else {
          lVar7 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar8,0);
          if (lVar7 == 0) goto LAB_0414dfa4;
          AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                    (lVar7,lVar9,*(undefined8 *)(param_1 + 0x28),0);
        }
        uVar1 = local_64;
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) < 1) {
            return 0;
          }
          iVar3 = 0;
          iVar10 = 0;
          do {
            FUN_057eeec4(&local_118,lVar9,iVar3,DAT_091aed50);
            memcpy(&local_b0,&local_118,0x48);
            if ((uStack_88 & 1) != 0) {
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&uStack_a0,uVar1,0);
              if (iVar2 != 0) {
                lVar7 = *(long *)(param_1 + 0x28);
                if (lVar7 == 0) break;
                if (iVar3 < *(int *)(lVar7 + 0x18)) {
                  FUN_057f79cc(&local_118,lVar7,iVar3,DAT_091af060);
                  uStack_c8 = uStack_110;
                  local_d0 = local_118;
                  local_c0 = local_108;
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&local_d0,uVar1,0);
                  if (0 < iVar2) goto LAB_0414df38;
                }
                if ((uVar4 & 1) != 0) {
                  memcpy(auStack_160,&local_b0,0x48);
                  iVar2 = AnhPD_FoodOrder_OrderStrategy__DishKeyOfOrder(param_1,auStack_160,0);
                  if (iVar2 != 4) goto LAB_0414df38;
                }
                iVar10 = iVar10 + 1;
              }
            }
LAB_0414df38:
            iVar3 = iVar3 + 1;
            if (*(int *)(lVar9 + 0x18) <= iVar3) {
              if (iVar10 == 0) {
                return 0;
              }
              if (*(long *)(lVar8 + 0x110) == 0) {
                iVar3 = 0;
              }
              else {
                lVar8 = *(long *)(*(long *)(lVar8 + 0x110) + 0x18);
                iVar3 = 0;
                if (lVar8 != 0) {
                  iVar3 = AnhPD_FoodOrder_LevelPieceBook__CountMade(lVar8,param_2,0);
                }
              }
              return iVar10 - iVar3;
            }
          } while( true );
        }
      }
LAB_0414dfa4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

