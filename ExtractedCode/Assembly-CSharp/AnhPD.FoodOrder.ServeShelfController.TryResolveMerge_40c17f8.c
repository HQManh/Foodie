// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$TryResolveMerge
// address: 0x40c17f8
// body: available
// range: 0x40c17f8-0x40c1a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c1a98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController__TryResolveMerge
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_120 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  long *local_58;
  
  puVar4 = local_120;
  if ((DAT_09515f71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f71 = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  uVar2 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c1a98;
    AnhPD_FoodOrder_ShelfMergeQueue__Project
              (*(long *)(param_1 + 0xa0),param_2,param_4,&local_58,&local_60,0);
    plVar3 = local_58;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(plVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__IsNullOrEmpty(local_60,0);
      if ((uVar2 & 1) == 0) {
        lVar5 = AnhPD_FoodOrder_FlexibleId__BaseOf(local_60,0);
        if (param_4 == 0) goto LAB_040c1a98;
        plVar3 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(param_4,lVar5,0);
        if (plVar3 != (long *)0x0) {
          if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8)
              == DAT_09184728)) {
            if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c1a98;
            AnhPD_FoodOrder_ShelfMergeQueue__InboundPieces
                      (&local_98,*(long *)(param_1 + 0xa0),param_2,param_4,0);
            goto LAB_040c19bc;
          }
        }
        if (param_2 == 0) {
LAB_040c1a98:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = AnhPD_FoodOrder_LevelInfo__TryGetDishResult
                          (param_4,*(undefined4 *)(param_2 + 0xb4),local_60,param_3,param_5,0);
        goto LAB_040c188c;
      }
    }
    else {
      if (param_4 == 0) goto LAB_040c1a98;
      uVar2 = AnhPD_FoodOrder_LevelInfo__CanAddTo(param_4,local_58,param_3,0);
      if ((uVar2 & 1) != 0) {
        if (local_58 == (long *)0x0) goto LAB_040c1a98;
        lVar5 = local_58[0xf];
        (**(code **)(*local_58 + 0x218))(&local_98,local_58,*(undefined8 *)(*local_58 + 0x220));
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c1a98;
        AnhPD_FoodOrder_ShelfMergeQueue__InboundPieces
                  (&local_b0,*(long *)(param_1 + 0xa0),param_2,param_4,0);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_d0 = local_a0;
        uStack_d8 = uStack_a8;
        local_e0 = local_b0;
        AnhPD_FoodOrder_PieceSet__Add(&local_c8,&local_80,&local_e0,0);
        puVar4 = &local_100;
        uStack_f8 = uStack_c0;
        local_100 = local_c8;
        local_f0 = local_b8;
LAB_040c19bc:
        uVar1 = AnhPD_FoodOrder_LevelInfo__CanDishAdd(param_4,lVar5,puVar4,param_3,0);
        goto LAB_040c188c;
      }
    }
  }
  uVar1 = 0;
LAB_040c188c:
  return uVar1 & 1;
}

