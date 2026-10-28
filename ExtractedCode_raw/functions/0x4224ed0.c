// rea decompile_all
// name: AnhPD.FoodOrder.ListIngredientBoardView$$ApplyOwned
// address: 0x4224ed0
// body: available
// range: 0x4224ed0-0x42252c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42252c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ListIngredientBoardView__ApplyOwned
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_09516d51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091ad868);
    FUN_03f5c2a4(&DAT_091ad870);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091aec90);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516d51 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < *(int *)(param_3 + 0x40)) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      lVar2 = *(long *)(param_3 + 0x50);
      if (lVar2 == 0) goto LAB_042252c0;
      if (iVar6 < *(int *)(lVar2 + 0x18)) {
        FUN_05780e6c(&local_f0,lVar2,iVar6,DAT_091ad870);
        if ((int)local_f0 != iVar7) goto LAB_0422512c;
        if (*(long *)(param_3 + 0x50) == 0) goto LAB_042252c0;
        FUN_05780e6c(&local_f0,*(long *)(param_3 + 0x50),iVar6,DAT_091ad870);
        uStack_a8 = uStack_e8;
        local_b0 = local_f0;
        uStack_98 = local_d8;
        uStack_a0 = local_e0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar6 = iVar6 + 1;
        uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty((ulong)&local_b0 | 8,0);
        if ((uVar3 & 1) != 0) goto LAB_0422512c;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        local_d8 = uStack_98;
        local_e0 = uStack_a0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_108 = local_e0;
        local_110 = uStack_e8;
        local_100 = local_d8;
        uVar3 = AnhPD_FoodOrder_PieceSet__Covers(param_4,&local_110,0);
        if ((uVar3 & 1) == 0) goto LAB_0422512c;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        local_d8 = uStack_98;
        local_e0 = uStack_a0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_130 = local_d8;
        uStack_138 = local_e0;
        local_140 = uStack_e8;
        AnhPD_FoodOrder_PieceSet__Subtract(&local_128,param_4,&local_140,0);
        param_4[1] = uStack_120;
        *param_4 = local_128;
        param_4[2] = local_118;
        if ((iVar7 < local_b0._4_4_ + iVar7) && (iVar1 = iVar7, iVar7 < *(int *)(param_3 + 0x40))) {
          do {
            if ((*(long *)(param_3 + 0x38) == 0) ||
               (lVar2 = FUN_057e0998(*(long *)(param_3 + 0x38),iVar1,DAT_091aec90), lVar2 == 0))
            goto LAB_042252c0;
            if (*(char *)(lVar2 + 0x38) == '\0') {
              *(undefined1 *)(lVar2 + 0x38) = 1;
              AnhPD_FoodOrder_OrderIngredientIcon__Apply(param_1,param_2);
            }
            iVar1 = iVar1 + 1;
          } while ((iVar1 < local_b0._4_4_ + iVar7) && (iVar1 < *(int *)(param_3 + 0x40)));
        }
        iVar7 = iVar7 + local_b0._4_4_ + -1;
      }
      else {
LAB_0422512c:
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_042252c0;
        lVar2 = FUN_057e0998(*(long *)(param_3 + 0x38),iVar7,DAT_091aec90);
        lVar5 = *(long *)(param_3 + 0x48);
        if (lVar5 == 0) goto LAB_042252c0;
        if (iVar7 < *(int *)(lVar5 + 0x18)) {
          FUN_057f79cc(&local_f0,lVar5,iVar7,DAT_091af060);
          uStack_c8 = uStack_e8;
          local_d0 = local_f0;
          local_c0 = local_e0;
        }
        else {
          if (lVar2 == 0) goto LAB_042252c0;
          AnhPD_FoodOrder_PieceLookup__PiecesOfAnyRole(&local_d0,*(undefined8 *)(lVar2 + 0x30),0);
        }
        uStack_88 = uStack_c8;
        local_90 = local_d0;
        local_80 = local_c0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_90,0);
        if ((uVar3 & 1) == 0) {
          uStack_e8 = uStack_88;
          local_f0 = local_90;
          local_e0 = local_80;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_158 = uStack_e8;
          local_160 = local_f0;
          local_150 = local_e0;
          uVar3 = AnhPD_FoodOrder_PieceSet__Covers(param_4,&local_160,0);
          if ((uVar3 & 1) == 0) goto LAB_04225264;
          uStack_e8 = uStack_88;
          local_f0 = local_90;
          local_e0 = local_80;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_170 = local_e0;
          uStack_178 = uStack_e8;
          local_180 = local_f0;
          AnhPD_FoodOrder_PieceSet__Subtract(&local_128,param_4,&local_180,0);
          param_4[2] = local_118;
          cVar4 = '\x01';
          param_4[1] = uStack_120;
          *param_4 = local_128;
        }
        else {
LAB_04225264:
          cVar4 = '\0';
        }
        if (lVar2 == 0) {
LAB_042252c0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar2 + 0x38) != cVar4) {
          *(char *)(lVar2 + 0x38) = cVar4;
          AnhPD_FoodOrder_OrderIngredientIcon__Apply(param_1,param_2,lVar2);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_3 + 0x40));
  }
  return;
}

