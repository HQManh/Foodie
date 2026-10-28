// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$OpenOrderMissing
// address: 0x41f2d40
// body: available
// range: 0x41f2d40-0x41f303b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f3034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelPieceBook__OpenOrderMissing(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516b82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516b82 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  lVar4 = 0;
  if ((uVar1 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041f3038;
    lVar4 = AnhPD_FoodOrder_MessyController__get_LineHandle(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar1 & 1) != 0) {
      if (lVar4 == 0) {
LAB_041f3038:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveUnservedRecipes(lVar4,0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar2 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_58 = puVar2[1];
        local_60 = *puVar2;
        local_50 = puVar2[2];
        FUN_057e185c(&local_b0,lVar4,DAT_091b05a8);
        puStack_b8 = &local_80;
        uStack_78 = uStack_a8;
        local_80 = local_b0;
        local_70 = local_a0;
        local_c0 = 0;
        while (uVar1 = FUN_071bd28c(&local_80,DAT_091a45a0), (uVar1 & 1) != 0) {
          if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = AnhPD_FoodOrder_LevelInfo__TryGetOrderPieces
                            (*(long *)(param_2 + 0x10),local_70,&local_98);
          if ((uVar1 & 1) != 0) {
            uStack_a8 = uStack_90;
            local_b0 = local_98;
            local_a0 = local_88;
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_e8 = uStack_a8;
            local_f0 = local_b0;
            local_e0 = local_a0;
            AnhPD_FoodOrder_PieceSet__Add(&local_d8,&local_60,&local_f0,0);
            uStack_58 = uStack_d0;
            local_60 = local_d8;
            local_50 = local_c8;
          }
        }
        FUN_071bd288(&local_80,DAT_091a4598);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_60,0);
        if ((uVar1 & 1) == 0) {
          AnhPD_FoodOrder_LevelPieceBook__FieldPieces(&local_b0,param_2);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_100 = local_a0;
          uStack_108 = uStack_a8;
          local_110 = local_b0;
          AnhPD_FoodOrder_PieceSet__Subtract(&local_d8,&local_60,&local_110,0);
          goto LAB_041f2fc8;
        }
      }
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_d0 = puVar2[1];
  local_d8 = *puVar2;
  local_c8 = puVar2[2];
LAB_041f2fc8:
  param_1[1] = uStack_d0;
  *param_1 = local_d8;
  param_1[2] = local_c8;
  return;
}

