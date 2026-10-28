// rea decompile_all
// name: AnhPD.FoodOrder.DragInteractionHandler$$MergeIntoPlate
// address: 0x41e8834
// body: available
// range: 0x41e8834-0x41e9477 inclusive
// range: 0x41e94f8-0x41e94fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e946c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e9470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e9474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e94f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_DragInteractionHandler__MergeIntoPlate
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long param_5,
          long *param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 local_78;
  
  local_78 = param_7;
  if ((DAT_09516b15 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091cd4d0);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092206b8);
    FUN_03f5c2a4(&DAT_0921a820);
    FUN_03f5c2a4(&DAT_09213f38);
    FUN_03f5c2a4(&DAT_091f5d88);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_09220d10);
    FUN_03f5c2a4(&DAT_0921d718);
    FUN_03f5c2a4(&DAT_091f7378);
    FUN_03f5c2a4(&DAT_091f7878);
    FUN_03f5c2a4(&DAT_09219598);
    FUN_03f5c2a4(&DAT_092240e0);
    FUN_03f5c2a4(&DAT_091f78e8);
    FUN_03f5c2a4(&DAT_09213f30);
    DAT_09516b15 = 1;
  }
  local_88 = 0;
  local_8c[0] = 0;
  puStack_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_c0 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_5,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_6,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_5 == 0) goto LAB_041e94f8;
  uVar2 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(param_5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_4 + 0x10) == 0) goto LAB_041e94f8;
    lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x18);
    if (lVar3 != 0) {
      if (param_6 == (long *)0x0) goto LAB_041e94f8;
      uVar2 = AnhPD_FoodOrder_LevelInfo__TryGetDishOpener
                        (lVar3,*(undefined4 *)(param_5 + 0xb4),param_6[0xf],&local_88);
      if ((uVar2 & 1) != 0) {
        if (param_6[4] == 0) goto LAB_041e94f8;
        lVar3 = param_6[0xf];
        uVar13 = UnityEngine_Transform__get_position(param_6[4],0);
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = AnhPD_FoodOrder_PieceLedger__Describe(param_6);
        uVar4 = System_String__Concat(DAT_0921a820,uVar4,0);
        local_8c[0] = AnhPD_FoodOrder_PieceLedger__From(4,uVar4,0);
        puStack_d0 = local_8c;
        local_d8 = 0;
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar5 = (long *)AnhPD_FoodOrder_SpawnService__Spawn
                                   (uVar13,param_2,param_3,*(long *)(param_4 + 0x20),local_88,0,0,0)
        ;
        AnhPD_FoodOrder_PieceLedger_Scope__Dispose();
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(plVar5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = AnhPD_FoodOrder_PieceLedger__Describe(plVar5);
        uVar4 = System_String__Concat(DAT_092206b8,uVar4,0);
        AnhPD_FoodOrder_PieceLedger__Finish(param_6,2,uVar4,0);
        lVar10 = *(long *)(param_4 + 0x20);
        lVar6 = thunk_FUN_03f9944c(DAT_0917c0a8);
        FUN_057e0400(lVar6,DAT_091ac680);
        if (((lVar6 == 0) || (FUN_039b0ea8(lVar6,param_6,DAT_091ac690), lVar10 == 0)) ||
           (AnhPD_FoodOrder_SpawnService__DespawnAll(lVar10,lVar6), plVar5 == (long *)0x0))
        goto LAB_041e94f8;
        lVar6 = *plVar5;
        if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
            DAT_09184728)) {
          (**(code **)(lVar6 + 0x238))(plVar5,lVar3,*(undefined8 *)(lVar6 + 0x240));
        }
        uVar4 = UnityEngine_Component__get_transform(plVar5,0);
        AnhPD_APDUtilities__Appear(0x3dcccccd,uVar4,0);
        param_6 = plVar5;
        goto LAB_041e8cdc;
      }
    }
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__Step(param_6,DAT_09220d10);
LAB_041e8cdc:
    AnhPD_FoodOrder_ServePlate__Adopt(param_5,param_6,0,0,0);
    return 1;
  }
  plVar5 = *(long **)(param_5 + 0xa8);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
        DAT_09184728)) {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_041e94f8;
      lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x18);
      if (lVar3 == 0) {
        return 0;
      }
      if (param_6 == (long *)0x0) goto LAB_041e94f8;
      uVar2 = AnhPD_FoodOrder_LevelInfo__CanAddTo(lVar3,plVar5,param_6[0xf]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar2 = AnhPD_FoodOrder_DragItem__HasResultMergeAnimFor(plVar5,param_6[0xf],0);
      if ((uVar2 & 1) != 0) {
        AnhPD_FoodOrder_FlexibleDragItem__SuspendVisual(plVar5,0);
      }
      (**(code **)(*plVar5 + 0x218))(&local_d8,plVar5,*(undefined8 *)(*plVar5 + 0x220));
      puStack_a8 = puStack_d0;
      local_b0 = local_d8;
      local_a0 = local_c8;
      (**(code **)(*plVar5 + 0x248))(plVar5,param_6[0xf],*(undefined8 *)(*plVar5 + 0x250));
      (**(code **)(*plVar5 + 0x218))(&local_f0,plVar5,*(undefined8 *)(*plVar5 + 0x220));
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_108 = uStack_e8;
      local_110 = local_f0;
      local_100 = local_e0;
      puStack_128 = puStack_a8;
      local_130 = local_b0;
      local_120 = local_a0;
      uVar9 = AnhPD_FoodOrder_PieceSet__op_Equality(&local_110,&local_130,0);
      if ((uVar9 & 1) != 0) {
        lVar3 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar3 != 0) {
          FUN_039af17c(lVar3,0,DAT_09213f30);
          FUN_039af17c(lVar3,1,param_6[0xf]);
          FUN_039af17c(lVar3,2,DAT_091f78e8);
          uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          FUN_039af17c(lVar3,3,uVar4);
          FUN_039af17c(lVar3,4,DAT_091f7320);
          uVar4 = System_String__Concat(lVar3,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar4,plVar5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          AnhPD_FoodOrder_FlexibleDragItem__ResumeVisual(plVar5,0);
          return 0;
        }
        goto LAB_041e94f8;
      }
      if ((uVar2 & 1) == 0) {
        AnhPD_FoodOrder_DragInteractionHandler__PlayMergeBurst(param_6,plVar5);
      }
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_PieceLedger__Describe(plVar5);
      uVar4 = System_String__Concat(DAT_0921d718,uVar4,0);
      AnhPD_FoodOrder_PieceLedger__Finish(param_6,2,uVar4,0);
      uVar4 = System_String__Concat(DAT_092240e0,param_6[0xf],0);
      AnhPD_FoodOrder_PieceLedger__Step(plVar5,uVar4);
      lVar6 = *(long *)(param_4 + 0x20);
      lVar3 = thunk_FUN_03f9944c(DAT_0917c0a8);
      FUN_057e0400(lVar3,DAT_091ac680);
      if ((lVar3 == 0) || (FUN_039b0ea8(lVar3,param_6,DAT_091ac690), lVar6 == 0)) goto LAB_041e94f8;
      AnhPD_FoodOrder_SpawnService__DespawnAll(lVar6,lVar3);
      goto LAB_041e9164;
    }
  }
  uVar2 = System_String__IsNullOrEmpty(param_7,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_03f5c394(DAT_091805f8,2);
    if (param_6 == (long *)0x0) goto LAB_041e94f8;
  }
  else {
    if ((((*(long *)(param_4 + 0x10) == 0) || (param_6 == (long *)0x0)) || (plVar5 == (long *)0x0))
       || (lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10), lVar3 == 0)) goto LAB_041e94f8;
    uVar2 = AnhPD_FoodOrder_RecipeConfigSO__TryGetCombineResult
                      (lVar3,param_6[0xf],plVar5[0xf],&local_78,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = FUN_03f5c394(DAT_091805f8,2);
  }
  uVar4 = (**(code **)(*param_6 + 0x1b8))(param_6,*(undefined8 *)(*param_6 + 0x1c0));
  if (lVar3 == 0) goto LAB_041e94f8;
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_041e946c;
  puVar12 = (undefined8 *)(lVar3 + 0x20);
  *puVar12 = uVar4;
  thunk_FUN_03f5d7b8(puVar12,uVar4);
  if (plVar5 == (long *)0x0) goto LAB_041e94f8;
  uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_041e946c;
  puVar11 = (undefined8 *)(lVar3 + 0x28);
  *puVar11 = uVar4;
  thunk_FUN_03f5d7b8(puVar11,uVar4);
  if (plVar5[4] == 0) {
LAB_041e94f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar13 = UnityEngine_Transform__get_position(plVar5[4],0);
  if ((*(long *)(param_4 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_4 + 0x10) + 0x10), lVar6 == 0)) goto LAB_041e94f8;
  lVar6 = AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(lVar6,local_78,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (lVar6 == 0) goto LAB_041e94f8;
    uVar1 = AnhPD_FoodOrder_DragItem__HasResultMergeAnimFor(lVar6,param_6[0xf],0);
    uVar1 = uVar1 & 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_03f5c394(DAT_091805f8,7);
    if (lVar6 != 0) {
      FUN_039af17c(lVar6,0,DAT_09213f38);
      FUN_039af17c(lVar6,1,local_78);
      FUN_039af17c(lVar6,2,DAT_091f7878);
      if (*(int *)(lVar3 + 0x18) != 0) {
        FUN_039af17c(lVar6,3,*(undefined8 *)(lVar3 + 0x20));
        FUN_039af17c(lVar6,4,DAT_091f7378);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
          FUN_039af17c(lVar6,5,*puVar11);
          FUN_039af17c(lVar6,6,DAT_091f7320);
          uVar4 = System_String__Concat(lVar6,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar4,plVar5,0);
          return 0;
        }
      }
      goto LAB_041e946c;
    }
    goto LAB_041e94f8;
  }
  AnhPD_FoodOrder_ServePlate__DetachItem(param_5,0);
  if (uVar1 == 0) {
    AnhPD_FoodOrder_DragInteractionHandler__PlayMergeBurst(param_6,plVar5);
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = AnhPD_FoodOrder_PieceLedger__Describe(plVar5);
  uVar7 = AnhPD_FoodOrder_PieceLedger__Describe(param_6);
  uVar4 = System_String__Concat(uVar4,DAT_091f5d88,uVar7,0);
  uVar7 = System_String__Concat(DAT_09219598,local_78,0);
  AnhPD_FoodOrder_PieceLedger__Finish(plVar5,2,uVar7,0);
  uVar7 = System_String__Concat(DAT_09219598,local_78,0);
  AnhPD_FoodOrder_PieceLedger__Finish(param_6,2,uVar7,0);
  lVar10 = *(long *)(param_4 + 0x20);
  lVar6 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(lVar6,DAT_091ac680);
  if (lVar6 == 0) goto LAB_041e94f8;
  FUN_039b0ea8(lVar6,plVar5,DAT_091ac690);
  FUN_039b0ea8(lVar6,param_6,DAT_091ac690);
  if (lVar10 == 0) goto LAB_041e94f8;
  AnhPD_FoodOrder_SpawnService__DespawnAll(lVar10,lVar6);
  local_8c[0] = AnhPD_FoodOrder_PieceLedger__From(4,uVar4,0);
  puStack_d0 = local_8c;
  local_d8 = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar8 = (long *)AnhPD_FoodOrder_SpawnService__Spawn
                             (uVar13,param_2,param_3,*(long *)(param_4 + 0x20),local_78,0,0,0);
  FUN_039b4074(&local_d8);
  if (uVar1 == 0) {
    if (plVar8 == (long *)0x0) goto LAB_041e94f8;
    uVar4 = UnityEngine_Component__get_transform(plVar8,0);
    AnhPD_APDUtilities__Appear(0x3dcccccd,uVar4,0);
LAB_041e90e4:
    if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
        DAT_09184728)) {
      if (uVar1 != 0) {
        AnhPD_FoodOrder_FlexibleDragItem__SuspendVisual(plVar8,0);
      }
      if ((*(int *)(lVar3 + 0x18) == 1) || (*(int *)(lVar3 + 0x18) == 0)) {
LAB_041e946c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      (**(code **)(*plVar8 + 0x228))(plVar8,*puVar12,*puVar11,*(undefined8 *)(*plVar8 + 0x230));
    }
  }
  else if (plVar8 != (long *)0x0) goto LAB_041e90e4;
  AnhPD_FoodOrder_ServePlate__Adopt(param_5,plVar8,0,0,0);
LAB_041e9164:
  local_b8 = (long *)0x0;
  local_c0 = param_6;
  thunk_FUN_03f5d7b8(&local_c0,param_6);
  local_b8 = plVar5;
  thunk_FUN_03f5d7b8(&local_b8,plVar5);
  plVar8 = local_b8;
  plVar5 = local_c0;
  if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b78a24(plVar5,plVar8,DAT_091cd4d0);
  return 1;
}

