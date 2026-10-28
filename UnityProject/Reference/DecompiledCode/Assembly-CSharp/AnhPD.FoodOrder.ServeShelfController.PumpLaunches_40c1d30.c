// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$PumpLaunches
// address: 0x40c1d30
// body: available
// range: 0x40c1d30-0x40c20f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c1e80 to 0x40c1bf4 AnhPD.FoodOrder.ServeShelfController$$SchedulePump (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c20f0 to 0x40c0748 AnhPD.FoodOrder.ServeShelfController$$FlushDropBacks (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c20f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__PumpLaunches(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_34;
  
  if ((DAT_09515f6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afe38);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091efa58);
    FUN_03f5c2a4(&DAT_09194408);
    FUN_03f5c2a4(&DAT_09223bb0);
    DAT_09515f6b = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194408);
  AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass16_0___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_040c20f4;
  *(long *)(lVar2 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
  plVar6 = (long *)(lVar2 + 0x18);
  *plVar6 = param_2;
  thunk_FUN_03f5d7b8(plVar6,param_2);
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = AnhPD_FoodOrder_ServeShelfController__IsResultAnimPlaying(param_1,*plVar6);
  if ((uVar3 & 1) != 0) {
LAB_040c1e60:
    AnhPD_FoodOrder_ServeShelfController__SchedulePump(0x3dcccccd,param_1,*plVar6);
    return;
  }
  if (*(long *)(param_1 + 0xa0) == 0) goto LAB_040c20f4;
  uVar3 = AnhPD_FoodOrder_ShelfMergeQueue__HasInboundResultAnim(*(long *)(param_1 + 0xa0),*plVar6,0)
  ;
  if ((uVar3 & 1) != 0) goto LAB_040c1e60;
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar7 = AnhPD_FoodOrder_ShelfMergeQueue__NextToLaunch
                      (*(undefined4 *)(param_1 + 0x24),*(long *)(param_1 + 0xa0),*plVar6,0);
    if (lVar7 == 0) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        uVar3 = AnhPD_FoodOrder_ShelfMergeQueue__HasPending(*(long *)(param_1 + 0xa0),*plVar6,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        goto LAB_040c1e60;
      }
    }
    else {
      plVar8 = (long *)(lVar2 + 0x20);
      *plVar8 = *(long *)(lVar7 + 0x18);
      thunk_FUN_03f5d7b8(plVar8);
      lVar9 = *plVar8;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
      if ((uVar3 & 1) == 0) {
        AnhPD_FoodOrder_ServeShelfController__AbortRemaining(param_1,*plVar6);
        AnhPD_FoodOrder_ServeShelfController__FlushDropBacks(param_1);
        return;
      }
      bVar1 = AnhPD_FoodOrder_ServeShelfController__WillOpenResultAnim(uVar3,*plVar6,lVar7);
      lVar9 = *(long *)(param_1 + 0xa0);
      *(byte *)(lVar7 + 0x35) = bVar1 & 1;
      if (lVar9 != 0) {
        AnhPD_FoodOrder_ShelfMergeQueue__MarkLaunched(lVar9,lVar7,0);
        if (*(char *)(param_1 + 0x8c) != '\0') {
          lVar7 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
          if (lVar7 == 0) goto LAB_040c20f4;
          AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Free(lVar7,*plVar8,0);
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          lVar7 = *plVar8;
          local_34 = FUN_057e1a08(*(long *)(param_1 + 0x90),*plVar6,DAT_091afe38);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
          uVar4 = System_String__Format(DAT_09223bb0,uVar4,0);
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189140);
          }
          AnhPD_FoodOrder_PieceLedger__Step(lVar7,uVar4,0);
          lVar7 = *plVar8;
          if (lVar7 != 0) {
            if (*(long *)(lVar7 + 0xa0) != 0) {
              if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040c20f4;
              AnhPD_FoodOrder_MessyController__PlayCellGlow
                        (**(long **)(DAT_091881a0 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar7 + 0xa0) + 0x10),0);
              lVar7 = *plVar8;
              if (lVar7 == 0) goto LAB_040c20f4;
            }
            AnhPD_FoodOrder_DragItem__UnregisterCell(lVar7,0);
            if ((**(long **)(DAT_091881a0 + 0xb8) != 0) &&
               (AnhPD_FoodOrder_MessyController__RefreshCellDishes
                          (**(long **)(DAT_091881a0 + 0xb8),0), *plVar6 != 0)) {
              lVar7 = *plVar8;
              uVar4 = AnhPD_FoodOrder_ServePlate__get_ItemAnchor();
              if (lVar7 != 0) {
                uVar4 = AnhPD_FoodOrder_DragItem__JumpToMovingTargetTween
                                  (0x3f000000,lVar7,uVar4,0,0,0,0);
                uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091efa58,0);
                FUN_04d956bc(uVar4,uVar5,DAT_091dbd20);
                AnhPD_FoodOrder_ServeShelfController__SchedulePump
                          (*(undefined4 *)(param_1 + 0x24),param_1,*(undefined8 *)(lVar2 + 0x18));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_040c20f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

