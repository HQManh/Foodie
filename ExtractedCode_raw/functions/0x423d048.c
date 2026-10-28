// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController.<CollectToSaveMeBagRoutine>d__111$$MoveNext
// address: 0x423d048
// body: available
// range: 0x423d048-0x423d937 inclusive
// range: 0x423da64-0x423da77 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423d8d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423d8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_GridIngController_<CollectToSaveMeBagRoutine>d__111__MoveNext
          (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  long *plStack_78;
  long local_68;
  
  local_68 = param_3;
  if ((DAT_09516e06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ce310);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091adae0);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091eaef8);
    FUN_03f5c2a4(&DAT_091910d0);
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_09221eb0);
    FUN_03f5c2a4(&DAT_092142e0);
    FUN_03f5c2a4(&DAT_091f77f0);
    DAT_09516e06 = 1;
  }
  iVar1 = *(int *)(param_3 + 0x10);
  lVar11 = *(long *)(param_3 + 0x20);
  uVar2 = 0;
  plStack_78 = &local_68;
  local_80 = 0;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) goto LAB_0423d86c;
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
LAB_0423d38c:
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar2);
      }
      lVar3 = AnhPD_FoodOrder_GridIngController__CollectGridIngredients(lVar11);
      AnhPD_FoodOrder_GridIngController__TakeParkedForSweep(lVar11,lVar3);
      if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x60),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      if ((uVar5 & 1) == 0) {
        uVar2 = AnhPD_FoodOrder_GridIngController__PickSaveMeBagCell(lVar11,lVar3);
      }
      else {
        uVar2 = *(undefined8 *)(lVar11 + 0x124);
      }
      lVar4 = AnhPD_FoodOrder_GridIngController__get_Layout(lVar11);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar15 = (float)AnhPD_FoodOrder_IngGridLayout__get_Origin(lVar4);
      uVar14 = (uint)((ulong)uVar2 >> 0x20);
      fVar16 = *(float *)(lVar4 + 0x18);
      fVar17 = *(float *)(lVar4 + 0x1c);
      *(undefined4 *)(local_68 + 0x48) = 0;
      *(float *)(local_68 + 0x40) = fVar15 + ((float)(int)uVar2 + 0.5) * fVar16;
      *(float *)(local_68 + 0x44) = param_2 + ((float)(int)uVar14 + 0.5) * fVar17;
      *(undefined8 *)(lVar11 + 0x124) = uVar2;
      lVar4 = AnhPD_FoodOrder_GridIngController__get_Layout(lVar11);
      lVar6 = AnhPD_FoodOrder_GridIngController__get_Layout(lVar11);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(uint *)(lVar4 + 0x38) =
           (int)uVar2 + (*(int *)(lVar6 + 0x24) + ~uVar14) * *(int *)(lVar6 + 0x20);
      AnhPD_FoodOrder_GridIngController__RefreshOccupiedCells(lVar11);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(undefined4 *)(lVar3 + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_0917c4d0);
      FUN_057e0478(uVar2,uVar9,DAT_091adae0);
      *(undefined8 *)(local_68 + 0x50) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x50),uVar2);
      FUN_057e185c(&local_b8,lVar3,DAT_091ac6b0);
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
      *(undefined8 *)(local_68 + 0x60) = uStack_b0;
      *(undefined8 *)(local_68 + 0x58) = local_b8;
      *(undefined8 *)(local_68 + 0x68) = local_a8;
      thunk_FUN_03f5d7b8(local_68 + 0x58,0);
      param_3 = local_68;
      goto LAB_0423d4f8;
    }
    lVar3 = *(long *)(DAT_091b4c28 + 0x20);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    *(undefined8 *)(local_68 + 0x38) = **(undefined8 **)(lVar3 + 0xb8);
    thunk_FUN_03f5d7b8();
    uVar2 = *(undefined8 *)(local_68 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(local_68 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(*(long *)(local_68 + 0x38) + 0x58);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar3,lVar11,0);
    }
    uVar2 = AnhPD_FoodOrder_GridIngController__SetStationsPaused(1);
    fVar15 = *(float *)(local_68 + 0x28);
    if (fVar15 <= 0.0) goto LAB_0423d38c;
    uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(fVar15,uVar2,0);
    *(undefined8 *)(local_68 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x18),uVar2);
    uVar9 = 1;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(0);
        }
        if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar11 + 0x60),0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar15 = (float)((ulong)*(undefined8 *)(local_68 + 0x44) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar11 + 0x130) >> 0x20);
        UnityEngine_Transform__set_position
                  (*(float *)(local_68 + 0x40) + *(float *)(lVar11 + 300),
                   CONCAT44(fVar15,(float)*(undefined8 *)(local_68 + 0x44) +
                                   (float)*(undefined8 *)(lVar11 + 0x130)),fVar15,lVar3,0);
        if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x60),0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        lVar3 = *(long *)(lVar11 + 0x60);
        uVar7 = *(undefined8 *)(local_68 + 0x50);
        uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar2,lVar11,DAT_091ce310,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_SpawnBagSaveMe__AddIngredients(lVar3,uVar7,uVar2,0);
LAB_0423d7ec:
        AnhPD_FoodOrder_GridIngController__SetStationsPaused(0);
        uVar2 = *(undefined8 *)(local_68 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(local_68 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *(long *)(*(long *)(local_68 + 0x38) + 0x58);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Utilities_BoolModifierWithRegisteredSource__RemoveModifier(lVar3,lVar11,0);
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined1 *)(lVar11 + 0x121) = 0;
        lVar11 = *(long *)(local_68 + 0x30);
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
        }
        uVar2 = 0;
      }
      goto LAB_0423d86c;
    }
LAB_0423d4f8:
    *(undefined4 *)(param_3 + 0x10) = 0xfffffffd;
    do {
      while( true ) {
        do {
          do {
            uVar5 = FUN_071bd28c(param_3 + 0x58,DAT_091a2a58);
            if ((uVar5 & 1) == 0) {
              AnhPD_FoodOrder_GridIngController_<CollectToSaveMeBagRoutine>d__111__<>m__Finally1();
              *(undefined8 *)(local_68 + 0x60) = 0;
              *(undefined8 *)(local_68 + 0x68) = 0;
              *(undefined8 *)(local_68 + 0x58) = 0;
              if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(*(long *)(local_68 + 0x50) + 0x18) < 1) goto LAB_0423d7ec;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              AnhPD_FoodOrder_GridIngController__RefreshCellDishes(lVar11);
              uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
              UnityEngine_WaitForSeconds___ctor(0x3f000000,uVar2,0);
              *(undefined8 *)(local_68 + 0x18) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x18),uVar2);
              uVar9 = 3;
              goto LAB_0423d7dc;
            }
            plVar12 = *(long **)(local_68 + 0x68);
            lVar3 = thunk_FUN_03f9944c(DAT_091910d0);
            System_Object___ctor(lVar3,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Implicit(plVar12,0);
            param_3 = local_68;
          } while ((uVar5 & 1) == 0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = UnityEngine_Component__get_gameObject(plVar12,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          param_3 = local_68;
        } while ((uVar5 & 1) == 0);
        uVar2 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        uVar5 = System_String__IsNullOrEmpty(uVar2,0);
        if ((uVar5 & 1) == 0) break;
        uVar2 = UnityEngine_Object__GetName(plVar12,0);
        uVar2 = System_String__Concat(DAT_092142e0,uVar2,DAT_091f77f0,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogError(uVar2,plVar12,0);
        param_3 = local_68;
      }
      lVar6 = *(long *)(local_68 + 0x50);
      uVar7 = thunk_FUN_03f9944c(DAT_09186c48);
      AnhPD_FoodOrder_IngredientState___ctor(uVar7,uVar2,1,0);
      lVar4 = DAT_091adae8;
      if (lVar6 == 0) {
LAB_0423d8d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0423d8d8;
      uVar14 = *(uint *)(lVar6 + 0x18);
      if (uVar14 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar14 + 1;
        puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_03f5d7b8(puVar8,uVar7);
      }
      else {
        FUN_057e0c68(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      AnhPD_FoodOrder_DragItem__UnregisterCell(plVar12,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = (long *)(lVar3 + 0x10);
      *plVar13 = (long)plVar12;
      thunk_FUN_03f5d7b8(plVar13,plVar12);
      lVar4 = *plVar13;
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceLedger__Step(lVar4,DAT_09221eb0,0);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = AnhPD_FoodOrder_DragItem__JumpToTargetTween
                        (*(undefined4 *)(local_68 + 0x40),*(undefined4 *)(local_68 + 0x44),
                         *(undefined4 *)(local_68 + 0x48),0x3f800000,*plVar13,0,0);
      uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar7,lVar3,DAT_091eaef8,0);
      FUN_04d956bc(uVar2,uVar7,DAT_091dbd20);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar15 = *(float *)(lVar11 + 0x68);
      param_3 = local_68;
    } while (fVar15 <= 0.0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(fVar15,uVar2,0);
    *(undefined8 *)(local_68 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x18),uVar2);
    uVar9 = 2;
  }
LAB_0423d7dc:
  uVar2 = 1;
  *(undefined4 *)(local_68 + 0x10) = uVar9;
LAB_0423d86c:
  lVar11 = local_80;
  if (local_80 == 0) {
    return uVar2;
  }
  FUN_039b4b6c(&plStack_78);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar11);
}

