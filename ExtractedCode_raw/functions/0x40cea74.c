// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$TryStep
// address: 0x40cea74
// body: available
// range: 0x40cea74-0x40cefdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cefdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryStep
               (byte *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,int param_5,
               long param_6,undefined1 *param_7)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_230 [4];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_170;
  long lStack_168;
  long local_160;
  long local_150;
  long lStack_148;
  long local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515fcd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fcd = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  memmove(param_7,param_1,0x50);
  thunk_FUN_03f5d7b8(param_7 + 8,0);
  lStack_1b8 = param_2[1];
  local_1c0 = *param_2;
  lStack_1a8 = param_2[3];
  local_1b0 = param_2[2];
  lStack_198 = param_2[5];
  local_1a0 = param_2[4];
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_c0 = lStack_198;
  lStack_c8 = local_1a0;
  local_d0 = lStack_1a8;
  AnhPD_FoodOrder_PieceSet__Add(&local_b8,param_1 + 0x18,&local_d0,0);
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  local_70 = local_a8;
  uStack_e8 = uStack_b0;
  local_f0 = local_b8;
  local_e0 = local_a8;
  uVar3 = AnhPD_FoodOrder_PieceSet__Covers(param_3,&local_f0,0);
  if ((uVar3 & 1) != 0) {
    if (param_6 == 0) {
LAB_040cefdc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_128 = param_3[1];
    local_130 = *param_3;
    local_120 = param_3[2];
    uStack_108 = uStack_78;
    local_110 = local_80;
    local_100 = local_70;
    uVar3 = AnhPD_FoodOrder_LevelInfo__CanStillComplete(param_6,&local_110,&local_130,0);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      lVar10 = *param_2;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar10,0);
      if ((uVar3 & 1) == 0) {
        lVar10 = param_2[2];
      }
      else {
        plVar4 = (long *)*param_2;
        if (plVar4 == (long *)0x0) goto LAB_040cefdc;
        lVar10 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      uVar5 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_6,lVar10,0);
      uVar9 = System_String__Concat(uVar9,uVar5,0);
      uVar3 = AnhPD_FoodOrder_LevelInfo__SequenceFits(param_6,param_5,uVar9,param_4,0);
      lVar10 = DAT_09189158;
      if ((uVar3 & 1) != 0) {
        *(undefined8 *)(param_7 + 0x20) = uStack_78;
        *(undefined8 *)(param_7 + 0x18) = local_80;
        *(undefined8 *)(param_7 + 0x28) = local_70;
        lStack_1b8 = param_2[1];
        local_1c0 = *param_2;
        lStack_1a8 = param_2[3];
        local_1b0 = param_2[2];
        lStack_198 = param_2[5];
        local_1a0 = param_2[4];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_140 = lStack_198;
        lStack_148 = local_1a0;
        local_150 = lStack_1a8;
        AnhPD_FoodOrder_PieceSet__Add(&local_b8,param_1 + 0x30,&local_150,0);
        *(undefined8 *)(param_7 + 0x48) = uVar9;
        *(undefined8 *)(param_7 + 0x38) = uStack_b0;
        *(undefined8 *)(param_7 + 0x30) = local_b8;
        *(undefined8 *)(param_7 + 0x40) = local_a8;
        thunk_FUN_03f5d7b8(param_7 + 0x48,uVar9);
        if ((*param_1 & 1) == 0) {
          if (param_5 < 0) {
            param_5 = AnhPD_FoodOrder_LevelInfo__DishKeyOfId(param_6,param_2[2],0);
            if (-1 < param_5) goto LAB_040ceea4;
          }
          else {
            lStack_1a8 = param_2[3];
            local_1b0 = param_2[2];
            lStack_198 = param_2[5];
            local_1a0 = param_2[4];
            lStack_1b8 = param_2[1];
            local_1c0 = *param_2;
            local_170 = lStack_1a8;
            lStack_168 = local_1a0;
            local_160 = lStack_198;
            uVar3 = AnhPD_FoodOrder_LevelInfo__CanOpenDish(param_6,param_5,param_2[2],&local_170,0);
            if ((uVar3 & 1) != 0) {
LAB_040ceea4:
              *(int *)(param_7 + 4) = param_5;
              *param_7 = 1;
              lVar10 = DAT_09184728;
              plVar4 = (long *)*param_2;
              if (plVar4 == (long *)0x0) {
                plVar4 = (long *)0x0;
                *(undefined8 *)(param_7 + 0x10) = 0;
              }
              else {
                bVar1 = *(byte *)(DAT_09184728 + 0x130);
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar8 = (long *)0x0;
                }
                else {
                  plVar8 = plVar4;
                  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09184728) {
                    plVar8 = (long *)0x0;
                  }
                }
                *(long **)(param_7 + 0x10) = plVar8;
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar4 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                  plVar4 = (long *)0x0;
                }
              }
              thunk_FUN_03f5d7b8(param_7 + 0x10,plVar4);
              uVar9 = *(undefined8 *)(param_7 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
              lVar10 = 0;
              if ((uVar3 & 1) == 0) {
                lVar10 = param_2[2];
              }
LAB_040cef94:
              *(long *)(param_7 + 8) = lVar10;
              thunk_FUN_03f5d7b8(param_7 + 8);
              uVar2 = 1;
              goto LAB_040ceee4;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
            if ((uVar3 & 1) == 0) {
              lVar10 = AnhPD_FoodOrder_FlexibleId__BaseOf(*(undefined8 *)(param_1 + 8),0);
              plVar4 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(param_6,lVar10,0);
              if (plVar4 != (long *)0x0) {
                if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8
                             + -8) == DAT_09184728)) {
                  memcpy(&local_1c0,param_1,0x50);
                  puVar6 = local_230;
                  lVar7 = param_2[2];
                  goto LAB_040cedf0;
                }
              }
              uVar3 = AnhPD_FoodOrder_LevelInfo__TryGetDishResult
                                (param_6,*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_1 + 8),
                                 param_2[2],&local_88,0);
              lVar10 = local_88;
              if ((uVar3 & 1) != 0) goto LAB_040cef94;
            }
          }
          else {
            uVar3 = AnhPD_FoodOrder_LevelInfo__CanAddTo
                              (param_6,*(undefined8 *)(param_1 + 0x10),param_2[2],0);
            if ((uVar3 & 1) != 0) {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) goto LAB_040cefdc;
              lVar10 = plVar4[0xf];
              (**(code **)(*plVar4 + 0x218))(&local_b8,plVar4,*(undefined8 *)(*plVar4 + 0x220));
              uStack_98 = uStack_b0;
              local_a0 = local_b8;
              local_90 = local_a8;
              memcpy(&local_1c0,param_1,0x50);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              local_1e0 = local_180;
              uStack_1e8 = uStack_188;
              local_1f0 = local_190;
              AnhPD_FoodOrder_PieceSet__Add(&local_1d8,&local_a0,&local_1f0,0);
              puVar6 = &local_210;
              lVar7 = param_2[2];
              uStack_208 = uStack_1d0;
              local_210 = local_1d8;
              local_200 = local_1c8;
LAB_040cedf0:
              uVar2 = AnhPD_FoodOrder_LevelInfo__CanDishAdd(param_6,lVar10,puVar6,lVar7,0);
              goto LAB_040ceee4;
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_040ceee4:
  return uVar2 & 1;
}

