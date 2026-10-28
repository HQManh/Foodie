// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$CollectCompletableOrders
// address: 0x41dded0
// body: available
// range: 0x41dded0-0x41de36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41de360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41de364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41de368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_AutoCompleteOrderFx__CollectCompletableOrders
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_190;
  long lStack_188;
  long local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  long local_158;
  long lStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_09516ad1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516ad1 = 1;
  }
  lVar11 = DAT_09188ad0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
    if (param_2 != 0) {
      uVar5 = AnhPD_FoodOrder_FCustomerLine__get_IsCustomerReady(param_2,0);
      if ((uVar5 & 1) == 0) {
        return false;
      }
      uVar10 = **(undefined8 **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
      lVar11 = 0;
      if ((uVar5 & 1) != 0) {
        if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
           (lVar11 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x100), lVar11 == 0))
        goto LAB_041de360;
        lVar11 = *(long *)(lVar11 + 0x18);
      }
      lVar6 = AnhPD_FoodOrder_AutoCompleteOrderFx__FreeServableOrders(param_1,param_2);
      if (lVar6 != 0) {
        FUN_05797d74(&local_f0,lVar6,DAT_091adcc0);
        uStack_78 = uStack_e8;
        local_80 = local_f0;
        puStack_f8 = &local_80;
        local_70 = local_e0;
        local_100 = 0;
LAB_041de0a4:
        do {
          uVar7 = FUN_071ad7a4(&local_80,DAT_091a34d8);
          uVar5 = local_70;
          if ((uVar7 & 1) == 0) {
            FUN_071ad7a0(&local_80,DAT_091a34d0);
            return 0 < *(int *)(param_3 + 0x18);
          }
          uVar2 = (undefined4)local_70;
          uVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__OrderPieces
                            (param_1,param_2,local_70 & 0xffffffff,&local_98);
        } while ((uVar7 & 1) == 0);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_a8 = puVar8[1];
        local_b0 = *puVar8;
        local_a0 = puVar8[2];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar11,0);
        if ((uVar7 & 1) != 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uStack_118 = uStack_90;
          local_120 = local_98;
          local_110 = local_88;
          iVar3 = AnhPD_FoodOrder_ServeShelfController__PeekPlateForOrder
                            (lVar11,&local_120,&local_b0,0);
          if (iVar3 != 1) goto code_r0x041de14c;
          uStack_e8 = uStack_a8;
          local_f0 = local_b0;
          local_e0 = local_a0;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_138 = uStack_e8;
          local_140 = local_f0;
          local_130 = local_e0;
          uVar7 = AnhPD_FoodOrder_PieceSet__Covers(&local_98,&local_140);
          if ((uVar7 & 1) != 0) goto LAB_041de1c0;
          goto LAB_041de198;
        }
        goto LAB_041de1c0;
      }
    }
  }
LAB_041de360:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x041de14c:
  if (iVar3 != 2) {
LAB_041de198:
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_a8 = puVar8[1];
    local_b0 = *puVar8;
    local_a0 = puVar8[2];
LAB_041de1c0:
    uStack_e8 = uStack_a8;
    local_f0 = local_b0;
    local_e0 = local_a0;
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_168 = uStack_e8;
    local_170 = local_f0;
    local_160 = local_e0;
    AnhPD_FoodOrder_PieceSet__Subtract(&local_158,&local_98,&local_170);
    lStack_c8 = lStack_150;
    local_d0 = local_158;
    local_c0 = local_148;
    uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__DishOf(param_1,param_2,uVar5 & 0xffffffff);
    if ((lStack_c8 != 0 || local_d0 != 0) || local_c0 != 0) {
      uVar10 = AnhPD_FoodOrder_AutoCompleteOrderFx__OrderSequence
                         (param_1,param_2,uVar5 & 0xffffffff);
      uVar10 = AnhPD_FoodOrder_AutoCompleteOrderFx__CollectCandidates(param_1,uVar4,uVar10);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lStack_188 = lStack_c8;
      local_190 = local_d0;
      local_180 = local_c0;
      AnhPD_FoodOrder_AutoCompleteOrderFx__Plan(uVar10,&local_190,uVar4,0,&local_d0);
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_091adc88;
    if ((lStack_c8 == 0 && local_d0 == 0) && local_c0 == 0) {
      lVar9 = *(long *)(param_3 + 0x10);
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(param_3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(param_3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
      }
      else {
        FUN_057971a8(param_3,uVar5 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_041de0a4;
}

