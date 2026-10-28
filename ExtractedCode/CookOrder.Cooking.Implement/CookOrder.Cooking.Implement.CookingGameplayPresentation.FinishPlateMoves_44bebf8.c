// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$FinishPlateMoves
// address: 0x44bebf8
// body: available
// range: 0x44bebf8-0x44bf057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44beef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf04c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bf054 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044bf050) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__FinishPlateMoves(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  long **pplStack_68;
  long *local_58;
  
  if ((DAT_09518250 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f550);
    FUN_03f5c2a4(&DAT_0919f560);
    FUN_03f5c2a4(&DAT_091c9700);
    FUN_03f5c2a4(&DAT_091cad58);
    FUN_03f5c2a4(&DAT_091caed0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a400);
    FUN_03f5c2a4(&DAT_0917aaa8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091dbcc0);
    DAT_09518250 = 1;
  }
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x420) != 0) {
    uVar1 = FUN_06fd8278(*(long *)(param_1 + 0x420),DAT_0919f560);
    uVar1 = FUN_04b049e4(uVar1,DAT_091cad58);
    if (*(long *)(param_1 + 0x420) != 0) {
      FUN_06fd85dc(*(long *)(param_1 + 0x420),DAT_0919f550);
      uVar2 = FUN_04b049e4(*(undefined8 *)(param_1 + 0x408),DAT_091caed0);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__ClearPlateMoves(param_1);
      if (((*(char *)(param_1 + 0x3c0) != '\0') || (*(long *)(param_1 + 0x2d8) == 0)) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar3 == 0)) {
        return;
      }
      lVar3 = CookingGraph_CookingLevelSimulation__ReadSnapshot(lVar3,0);
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
         (plVar9 = *(long **)(*(long *)(lVar3 + 0x10) + 0x38), plVar9 != (long *)0x0)) {
        lVar3 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a400) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_044bedb8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a400,0);
LAB_044bedb8:
        plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
        pplStack_68 = &local_58;
        local_70 = 0;
        do {
          local_58 = plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_044bee3c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_044bee3c:
          uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
          plVar9 = local_58;
          if ((uVar7 & 1) == 0) {
            if (local_58 == (long *)0x0) goto LAB_044bef68;
            lVar3 = *local_58;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar7 == 0) goto LAB_044bef40;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            goto LAB_044bef28;
          }
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *local_58;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917aaa8) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_044beea0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917aaa8,0);
LAB_044beea0:
          lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uStack_88 = *(undefined8 *)(lVar3 + 0x18);
          local_90 = *(undefined8 *)(lVar3 + 0x10);
          local_80 = *(undefined8 *)(lVar3 + 0x20);
          uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_90);
          uVar7 = FUN_04ad4c4c(uVar2,uVar5,DAT_091c9700);
          plVar9 = local_58;
          if ((uVar7 & 1) != 0) {
            CookOrder_Cooking_Implement_CookingGameplayPresentation__RebuildMovedPlate
                      (param_1,lVar3);
            plVar9 = local_58;
          }
        } while( true );
      }
    }
  }
  goto LAB_044bf048;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_044bef28:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_044bef5c;
    }
  }
LAB_044bef40:
  puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_044bef5c:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_044bef68:
  if (*(long *)(param_1 + 0x428) != 0) {
    uVar2 = FUN_06fd8278(*(long *)(param_1 + 0x428),DAT_0919f560);
    lVar3 = FUN_04b049e4(uVar2,DAT_091cad58);
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar7 = 0;
        uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentAutoDishAtShelf
                    (param_1,*(undefined8 *)(lVar3 + 0x20 + uVar7 * 8));
          uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      if (*(long *)(param_1 + 0x428) != 0) {
        FUN_06fd85dc(*(long *)(param_1 + 0x428),DAT_0919f550);
        if (((*(long *)(param_1 + 0x2d8) != 0) &&
            (lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar3 != 0)) &&
           ((lVar3 = *(long *)(lVar3 + 0x180), lVar3 != 0 &&
            (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)))) {
          CookOrder_Cooking_Implement_CookingGameplayPresentation__ScheduleDishDeliveries
                    ((float)*(double *)(lVar3 + 0x20),param_1,uVar1);
          if (*(char *)(param_1 + 0x30) == '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x38) == 0) {
            return;
          }
          uVar7 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_1 + 0x38),0);
          if ((uVar7 & 1) == 0) {
            return;
          }
          FUN_04d8dd74(*(undefined8 *)(param_1 + 0x38),DAT_091dbcc0);
          return;
        }
      }
    }
  }
LAB_044bf048:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

