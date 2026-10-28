// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CollectRawToFinishOpenOrders
// address: 0x41f4014
// body: available
// range: 0x41f4014-0x41f443b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f4438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelPieceBook__CollectRawToFinishOpenOrders(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined1 auStack_190 [72];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
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
  
  if ((DAT_09516b8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091adaf8);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516b8c = 1;
  }
  local_70 = 0;
  local_c0 = 0;
  local_f0 = 0;
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
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar9) {
      System_Array__Clear(*(undefined8 *)(param_2 + 0x10),0,iVar9,0);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_06fca5d0(*(long *)(param_1 + 0x50),DAT_0919f998);
      lVar10 = **(long **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar10,0);
      lVar8 = 0;
      if ((uVar4 & 1) != 0) {
        if (lVar10 == 0) goto LAB_041f4438;
        lVar8 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar10,0);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar10,0);
      lVar7 = 0;
      if ((uVar4 & 1) != 0) {
        if (lVar10 == 0) goto LAB_041f4438;
        lVar7 = *(long *)(lVar10 + 0xd0);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar8,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
          if ((uVar4 & 1) != 0) {
            if ((lVar8 != 0) &&
               (lVar8 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar8,0),
               lVar10 != 0)) {
              uVar5 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar10,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
              if ((uVar4 & 1) == 0) {
                lVar10 = *(long *)(param_1 + 0x48);
                if (lVar10 == 0) goto LAB_041f4438;
                *(undefined4 *)(lVar10 + 0x18) = 0;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              }
              else {
                lVar10 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar10,0);
                if (lVar10 == 0) goto LAB_041f4438;
                AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                          (lVar10,lVar8,*(undefined8 *)(param_1 + 0x48),0);
              }
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) < 1) {
                  return;
                }
                iVar9 = 0;
                while( true ) {
                  FUN_057eeec4(&local_148,lVar8,iVar9,DAT_091aed50);
                  memcpy(&local_b0,&local_148,0x48);
                  if ((uStack_88 & 1) != 0) break;
LAB_041f42c8:
                  iVar9 = iVar9 + 1;
                  if (*(int *)(lVar8 + 0x18) <= iVar9) {
                    return;
                  }
                }
                lVar10 = *(long *)(param_1 + 0x10);
                if (lVar10 != 0) {
                  memcpy(auStack_190,&local_b0,0x48);
                  uVar2 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(lVar10,auStack_190);
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09189158);
                  }
                  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_148,&uStack_a0,0);
                  uStack_d8 = uStack_140;
                  local_e0 = local_148;
                  uStack_c8 = uStack_130;
                  uStack_d0 = local_138;
                  local_c0 = local_128;
LAB_041f4340:
                  uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_e0,0);
                  uVar4 = local_c0;
                  if ((uVar6 & 1) != 0) {
                    if (*(long *)(param_1 + 0x10) != 0) {
                      iVar1 = local_c0._4_4_;
                      uVar6 = AnhPD_FoodOrder_LevelInfo__TryGetFormOf
                                        (*(long *)(param_1 + 0x10),uVar2,local_c0 & 0xffffffff,
                                         &local_e8);
                      if ((uVar6 & 1) != 0) goto LAB_041f438c;
                      if (lVar7 != 0) goto code_r0x041f4374;
                    }
                    goto LAB_041f4438;
                  }
                  goto LAB_041f42c8;
                }
              }
            }
            goto LAB_041f4438;
          }
        }
      }
      return;
    }
  }
LAB_041f4438:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x041f4374:
  uVar6 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece
                    (lVar7,uVar4 & 0xffffffff,&local_e8,0);
  if ((uVar6 & 1) != 0) {
LAB_041f438c:
    lVar10 = *(long *)(param_1 + 0x48);
    if (lVar10 == 0) goto LAB_041f4438;
    if (iVar9 < *(int *)(lVar10 + 0x18)) {
      FUN_057f79cc(&local_148,lVar10,iVar9,DAT_091af060);
      uStack_f8 = uStack_140;
      local_100 = local_148;
      local_f0 = local_138;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_100,uVar4 & 0xffffffff,0);
    }
    else {
      iVar3 = 0;
    }
    iVar11 = iVar1 - iVar3;
    if (iVar11 != 0 && iVar3 <= iVar1) {
      do {
        AnhPD_FoodOrder_LevelPieceBook__CollectRaw
                  (param_1,lVar7,local_e8,uVar4 & 0xffffffff,param_2,0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  goto LAB_041f4340;
}

