// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$RecallGridToQueue
// address: 0x40f8e58
// body: available
// range: 0x40f8e58-0x40f9413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f93e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f93fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f940c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_IngredientSpawnerController__RecallGridToQueue(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0951611f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c7a8);
    FUN_03f5c2a4(&DAT_0919c7b0);
    FUN_03f5c2a4(&DAT_0919c7a0);
    FUN_03f5c2a4(&DAT_0919c7b8);
    FUN_03f5c2a4(&DAT_091760c0);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a5d20);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a5d28);
    FUN_03f5c2a4(&DAT_091a5d30);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_0917b360);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091a9368);
    FUN_03f5c2a4(&DAT_091a9370);
    FUN_03f5c2a4(&DAT_091abd90);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abd78);
    FUN_03f5c2a4(&DAT_091abe58);
    FUN_03f5c2a4(&DAT_0917bef8);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951611f = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x1a0) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20);
    lVar4 = thunk_FUN_03f9944c(DAT_0917bef8);
    FUN_057e053c(lVar4,uVar13,DAT_091abe58);
    lVar5 = thunk_FUN_03f9944c(DAT_091760c0);
    FUN_06fd76bc(lVar5,DAT_0919c7a0);
    if (lVar4 != 0) {
      FUN_057e185c(&local_d8,lVar4,DAT_091abe78);
      iVar12 = 0;
      local_70 = local_c8;
      puStack_78 = puStack_d0;
      local_80 = local_d8;
      local_d8 = 0;
      puStack_d0 = &local_80;
LAB_040f9058:
      uVar6 = FUN_071bd28c(&local_80,DAT_091a2728);
      lVar10 = local_70;
      if ((uVar6 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar13 = *(undefined8 *)(local_70 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar13,0);
        if (((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar14 = *(long **)(*(long *)(lVar10 + 0x10) + 0x90);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917b360) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_040f90f8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b360,0);
LAB_040f90f8:
          iVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
          if (iVar3 == 0) {
            plVar14 = *(long **)(lVar10 + 0x10);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar3 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
            if (iVar3 == 0) goto LAB_040f9058;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = FUN_06fd9fbc(lVar5,*(undefined8 *)(lVar10 + 0x18),&local_88,DAT_0919c7b0);
          if ((uVar6 & 1) == 0) {
            uVar13 = *(undefined8 *)(lVar10 + 0x18);
            lVar8 = thunk_FUN_03f9944c(DAT_0917bee0);
            FUN_057e0400(lVar8,DAT_091abd78);
            local_88 = lVar8;
            FUN_06fd8440(lVar5,uVar13,lVar8,DAT_0919c7b8);
          }
          lVar8 = local_88;
          uVar13 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = AnhPD_FoodOrder_IngredientSpawnerController__ToBundle(uVar13);
          lVar2 = DAT_091abd90;
          if (lVar8 != 0) {
            lVar9 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar8,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar14 = *(long **)(*(long *)(lVar10 + 0x10) + 0x90);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *plVar14;
              uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_0917b360) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_040f9274;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b360,0);
LAB_040f9274:
              iVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
              iVar12 = iVar3 + iVar12;
              goto LAB_040f9058;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_040f9058;
      }
      FUN_071bd288(&local_80,DAT_091a2720);
      if (iVar12 != 0) {
        if (lVar5 == 0) goto LAB_040f9400;
        FUN_06fd8888(&local_d8,lVar5,DAT_0919c7a8);
        local_90 = local_b8;
        puStack_a8 = puStack_d0;
        local_b0 = local_d8;
        local_98 = uStack_c0;
        local_a0 = local_c8;
        local_d8 = 0;
        puStack_d0 = &local_b0;
        while (uVar6 = FUN_072753d4(&local_b0,DAT_091a5d28), uVar13 = local_98, lVar5 = local_a0,
              (uVar6 & 1) != 0) {
          if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_ConveyorColumn__FlushPeeked(local_a0,0);
          if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_ConveyorIngredientSource__PushFrontBundles
                    (*(long *)(lVar5 + 0x10),uVar13,0);
        }
        FUN_072754f4(&local_b0,DAT_091a5d20);
        FUN_057e185c(&local_d8,lVar4,DAT_091abe78);
        local_70 = local_c8;
        puStack_78 = puStack_d0;
        local_80 = local_d8;
        local_d8 = 0;
        puStack_d0 = &local_80;
        while (uVar6 = FUN_071bd28c(&local_80,DAT_091a2728), lVar4 = local_70, (uVar6 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar13 = *(undefined8 *)(local_70 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Implicit(uVar13,0);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            AnhPD_FoodOrder_ConveyorGrid__ReleaseFor
                      (*(long *)(param_1 + 0x1a0),*(undefined8 *)(lVar4 + 0x10),0);
          }
        }
        FUN_071bd288(&local_80,DAT_091a2720);
      }
      return iVar12;
    }
  }
LAB_040f9400:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

