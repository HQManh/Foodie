// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$BuildAlertReport
// address: 0x423aa1c
// body: available
// range: 0x423aa1c-0x423c29f inclusive
// range: 0x423c4c0-0x423c4c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423bb44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423bdcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c22c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c238 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c23c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c240 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c248 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0423be58) */
/* WARNING: Removing unreachable block (ram,0x0423c4c0) */
/* WARNING: Removing unreachable block (ram,0x0423bbc8) */

void AnhPD_FoodOrder_GridIngController__BuildAlertReport(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined2 uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong local_e8;
  byte local_dc [4];
  byte local_d8 [4];
  undefined1 local_d4 [4];
  byte local_d0 [4];
  byte local_cc [4];
  long *local_c8;
  long **pplStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long *local_b0;
  long **pplStack_a8;
  long local_a0;
  long *local_90;
  long *local_88;
  long *local_80;
  long **pplStack_78;
  long local_70;
  byte local_64 [4];
  
  if ((DAT_09516dfd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4f8);
    FUN_03f5c2a4(&DAT_09187830);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_0917dc20);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918cb90);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_0921c838);
    FUN_03f5c2a4(&DAT_09209348);
    FUN_03f5c2a4(&DAT_09221600);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f6490);
    FUN_03f5c2a4(&DAT_0921c9e8);
    FUN_03f5c2a4(&DAT_09223708);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09207378);
    FUN_03f5c2a4(&DAT_0921c9c8);
    FUN_03f5c2a4(&DAT_09217428);
    FUN_03f5c2a4(&DAT_09218d78);
    FUN_03f5c2a4(&DAT_091f5c38);
    FUN_03f5c2a4(&DAT_09219ac8);
    FUN_03f5c2a4(&DAT_09221eb8);
    FUN_03f5c2a4(&DAT_09220c10);
    FUN_03f5c2a4(&DAT_09223370);
    FUN_03f5c2a4(&DAT_09217f40);
    FUN_03f5c2a4(&DAT_0921fdc0);
    FUN_03f5c2a4(&DAT_09208518);
    FUN_03f5c2a4(&DAT_092256b0);
    FUN_03f5c2a4(&DAT_091f5c50);
    FUN_03f5c2a4(&DAT_09220cb0);
    FUN_03f5c2a4(&DAT_091f60b0);
    FUN_03f5c2a4(&DAT_091f5c28);
    FUN_03f5c2a4(&DAT_09213ae8);
    FUN_03f5c2a4(&DAT_091f6978);
    FUN_03f5c2a4(&DAT_09220868);
    FUN_03f5c2a4(&DAT_09218a88);
    FUN_03f5c2a4(&DAT_09217708);
    FUN_03f5c2a4(&DAT_091f5c88);
    FUN_03f5c2a4(&DAT_091f5c40);
    DAT_09516dfd = 1;
  }
  local_64[0] = 0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  local_90 = (long *)0x0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar6,0);
  uVar7 = FUN_05a8f088(DAT_091b4c30);
  lVar20 = 0;
  if ((uVar7 & 1) != 0) {
    lVar20 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_03f95a6c();
    }
    lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_03f95a6c();
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
  }
  lVar19 = **(long **)(DAT_091881a0 + 0xb8);
  lVar8 = FUN_03f5c394(DAT_091805f8,6);
  if (lVar8 == 0) goto LAB_0423c230;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x20) = DAT_09213ae8;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar20,0);
  uVar9 = DAT_0921fdc0;
  if ((uVar7 & 1) != 0) {
    if (lVar20 == 0) goto LAB_0423c230;
    local_b8 = *(undefined4 *)(lVar20 + 0x50);
    local_c8 = DAT_09187830;
    pplStack_c0 = (long **)0xffffffffffffffff;
    uVar9 = System_Enum__ToString(&local_c8,0);
  }
  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x28));
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x30) = DAT_091f60b0;
  thunk_FUN_03f5d7b8();
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_0423c22c;
  puVar13 = &DAT_09209348;
  if ((uVar7 & 1) == 0) {
    puVar13 = &DAT_09207378;
  }
  *(undefined8 *)(lVar8 + 0x38) = *puVar13;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x38));
  if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x40) = DAT_091f6490;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x40));
  if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0423c22c;
  puVar13 = &DAT_09208518;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar13 = &DAT_09209348;
  }
  *(undefined8 *)(lVar8 + 0x48) = *puVar13;
  thunk_FUN_03f5d7b8();
  uVar9 = System_String__Concat(lVar8,0);
  if (plVar6 == (long *)0x0) goto LAB_0423c230;
  System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar19,0);
  if ((uVar7 & 1) == 0) {
LAB_0423affc:
    bVar1 = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_0423c230;
    uVar9 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar19,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar7 & 1) == 0) goto LAB_0423affc;
    lVar8 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar19,0);
    if (lVar8 == 0) goto LAB_0423c230;
    bVar1 = AnhPD_FoodOrder_FCustomerLineHandle__get_IsClearingForNextCustomer(lVar8,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar19,0);
  if ((uVar7 & 1) == 0) {
LAB_0423b088:
    bVar2 = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_0423c230;
    uVar9 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar19,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar7 & 1) == 0) goto LAB_0423b088;
    lVar8 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar19,0);
    if (lVar8 == 0) goto LAB_0423c230;
    bVar2 = AnhPD_FoodOrder_ServeShelfController__get_HasMergesInFlight(lVar8,0);
  }
  iVar4 = AnhPD_FoodOrder_GridIngController__CountFreeCells(param_1,1);
  lVar8 = FUN_03f5c394(DAT_091805f8,8);
  local_c8 = (long *)CONCAT71(local_c8._1_7_,iVar4 == 0);
  uVar9 = FUN_03f5c42c(DAT_09535400,&local_c8);
  local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0xec));
  uVar10 = FUN_03f5c42c(DAT_09535400,&local_e8);
  local_cc[0] = *(byte *)(param_1 + 0xed);
  uVar11 = FUN_03f5c42c(DAT_09535400,local_cc);
  uVar9 = System_String__Format(DAT_0921c838,uVar9,uVar10,uVar11,0);
  if (lVar8 == 0) goto LAB_0423c230;
  if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0423c22c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x20),uVar9);
  local_d0[0] = *(byte *)(param_1 + 0xee);
  uVar9 = FUN_03f5c42c(DAT_09535400,local_d0);
  local_d4[0] = *(undefined1 *)(param_1 + 0xef);
  uVar10 = FUN_03f5c42c(DAT_09535400,local_d4);
  uVar9 = System_String__Format(DAT_09217f40,uVar9,uVar10,0);
  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  thunk_FUN_03f5d7b8();
  local_d8[0] = bVar1 & 1;
  uVar9 = FUN_03f5c42c(DAT_09535400,local_d8);
  local_dc[0] = bVar2 & 1;
  uVar10 = FUN_03f5c42c(DAT_09535400,local_dc);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar19,0);
  uVar11 = DAT_09218d78;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_0423c230;
    uVar3 = AnhPD_FoodOrder_MessyController__get_IsBoosterHolding(lVar19,0);
  }
  local_c8 = (long *)(CONCAT71(local_c8._1_7_,uVar3) & 0xffffffffffffff01);
  uVar12 = FUN_03f5c42c(DAT_09535400,&local_c8);
  uVar9 = System_String__Format(uVar11,uVar9,uVar10,uVar12,0);
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x30),uVar9);
  uVar3 = AnhPD_FoodOrder_GridIngController__AnyStationResolvingJam();
  local_e8 = CONCAT71(local_e8._1_7_,uVar3) & 0xffffffffffffff01;
  uVar9 = FUN_03f5c42c(DAT_09535400,&local_e8);
  local_cc[0] = AnhPD_FoodOrder_GridIngController__AnyStationMidCook();
  local_cc[0] = local_cc[0] & 1;
  uVar10 = FUN_03f5c42c(DAT_09535400,local_cc);
  uVar9 = System_String__Format(DAT_09223370,uVar9,uVar10,0);
  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x38),uVar9);
  if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x40) = DAT_09221eb8;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar20,0);
  uVar9 = DAT_091f8a38;
  if ((uVar7 & 1) != 0) {
    if (lVar20 == 0) goto LAB_0423c230;
    bVar1 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(lVar20,0);
    local_64[0] = (bVar1 ^ 0xff) & 1;
    if (*(int *)(DAT_09535400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Boolean__ToString(local_64,0);
  }
  if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x48) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x48));
  if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x50) = DAT_091f5a98;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x50));
  uVar3 = AnhPD_FoodOrder_GridIngController__AnyGridItemHasMove();
  local_c8 = (long *)(CONCAT71(local_c8._1_7_,uVar3) & 0xffffffffffffff01);
  uVar9 = FUN_03f5c42c(DAT_09535400,&local_c8);
  uVar9 = System_String__Format(DAT_09217708,uVar9,0);
  if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) == 0) goto LAB_0423c22c;
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  thunk_FUN_03f5d7b8();
  uVar9 = System_String__Concat(lVar8,0);
  System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0423c230;
  uVar9 = AnhPD_FoodOrder_IngCellFinder__DebugPending();
  lVar20 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
  if (lVar20 == 0) goto LAB_0423c230;
  uVar10 = AnhPD_FoodOrder_IngGridLayout__get_DebugReservedCell();
  uVar9 = System_String__Concat(DAT_09220c10,uVar9,DAT_091f6978,uVar10,0);
  System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar19,0);
  if ((uVar7 & 1) != 0) {
    if (lVar19 == 0) goto LAB_0423c230;
    lVar20 = AnhPD_FoodOrder_MessyController__GetDragItems(lVar19,0);
    if (lVar20 != 0) {
      FUN_057e185c(&local_c8,lVar20,DAT_091ac6b0);
      local_70 = CONCAT44(uStack_b4,local_b8);
      pplStack_78 = pplStack_c0;
      local_80 = local_c8;
      pplStack_c0 = &local_80;
      local_c8 = (long *)0x0;
      while (uVar7 = FUN_071bd28c(&local_80,DAT_091a2a58), lVar20 = local_70, (uVar7 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar20,0);
        if ((uVar7 & 1) != 0) {
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = AnhPD_FoodOrder_DragItem__get_IsLandedInCell(lVar20,0);
          if ((uVar7 & 1) != 0) {
            uVar10 = *(undefined8 *)(lVar20 + 0x78);
            uVar9 = AnhPD_FoodOrder_GridIngController__DebugGridItemMove(lVar19,lVar20);
            uVar9 = System_String__Concat(DAT_091f5c50,uVar10,DAT_091f9f60,uVar9,0);
            System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
          }
        }
      }
      FUN_071bd288(&local_80,DAT_091a2a50);
    }
    lVar20 = AnhPD_FoodOrder_MessyController__get_Spawner(lVar19,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar20,0);
    if ((uVar7 & 1) != 0) {
      if (lVar20 == 0) goto LAB_0423c230;
      if ((*(long *)(lVar20 + 0x1a0) != 0) && (*(long *)(lVar20 + 0x1b8) != 0)) {
        plVar21 = *(long **)(*(long *)(lVar20 + 0x1a0) + 0x20);
        if (plVar21 != (long *)0x0) {
          lVar8 = *plVar21;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_0917a3f0) {
                puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_0423b688;
              }
              uVar7 = uVar7 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar7 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_0917a3f0,0);
LAB_0423b688:
          plVar21 = (long *)(*(code *)*puVar13)(plVar21,puVar13[1]);
          pplStack_c0 = &local_88;
          local_c8 = (long *)0x0;
          do {
            local_88 = plVar21;
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar21;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == DAT_09185b10) {
                  puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0423b6fc;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_09185b10,0);
LAB_0423b6fc:
            uVar7 = (*(code *)*puVar13)(plVar21,puVar13[1]);
            plVar21 = local_88;
            if ((uVar7 & 1) == 0) {
              plVar21 = *pplStack_c0;
              if (plVar21 == (long *)0x0) goto LAB_0423bbb8;
              lVar20 = *plVar21;
              uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar7 == 0) goto LAB_0423bb90;
              piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              goto LAB_0423bb78;
            }
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *local_88;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == DAT_0917aa98) {
                  puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0423b768;
                }
                uVar7 = uVar7 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar7 != 0);
            }
            puVar13 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917aa98,0);
LAB_0423b768:
            lVar8 = (*(code *)*puVar13)(plVar21,puVar13[1]);
            if (lVar8 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = *(long *)(lVar8 + 0x10);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Implicit(lVar22,0);
            plVar21 = local_88;
            if ((uVar7 & 1) != 0) {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar7 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar8,0);
              plVar21 = local_88;
              if ((uVar7 & 1) != 0) {
                if (*(long *)(lVar20 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                bVar1 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor
                                  (*(long *)(lVar20 + 0x1b8),lVar22,0,0);
                lVar14 = FUN_03f5c394(DAT_091805f8,7);
                local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar8 + 0x20));
                uVar9 = FUN_03f5c42c(DAT_09535420,&local_e8);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar21 = *(long **)(lVar22 + 0x90);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar17 = *plVar21;
                uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar7 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == DAT_0917b4f8) {
                      puVar13 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_0423b88c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar7 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_0917b4f8,0);
LAB_0423b88c:
                lVar17 = (*(code *)*puVar13)(plVar21,0,puVar13[1]);
                uVar10 = DAT_091f5c28;
                if (lVar17 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined8 *)(lVar17 + 0x10);
                }
                uVar3 = AnhPD_FoodOrder_IngredientConveyorItem__get_IsFrozen(lVar22,0);
                local_e8 = CONCAT71(local_e8._1_7_,uVar3) & 0xffffffffffffff01;
                uVar12 = FUN_03f5c42c(DAT_09535400,&local_e8);
                uVar9 = System_String__Format(uVar10,uVar9,uVar11,uVar12,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x20) = uVar9;
                thunk_FUN_03f5d7b8();
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x28) = DAT_09218a88;
                thunk_FUN_03f5d7b8();
                if (*(long *)(lVar8 + 0x30) == 0) {
                  puVar13 = &DAT_091f8a38;
                }
                else {
                  uVar7 = AnhPD_FoodOrder_ConveyorChain__get_IsReady(*(long *)(lVar8 + 0x30),0);
                  puVar13 = (undefined8 *)&DAT_09221600;
                  if ((uVar7 & 1) == 0) {
                    puVar13 = &DAT_092256b0;
                  }
                }
                if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x30) = *puVar13;
                thunk_FUN_03f5d7b8();
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x38) = DAT_091f5a98;
                thunk_FUN_03f5d7b8();
                uVar3 = AnhPD_FoodOrder_IngredientConveyorItem__get_IsPickable(lVar22,0);
                local_e8 = CONCAT71(local_e8._1_7_,uVar3) & 0xffffffffffffff01;
                uVar9 = FUN_03f5c42c(DAT_09535400,&local_e8);
                if (*(long *)(lVar20 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_cc[0] = AnhPD_FoodOrder_ConveyorPickup__CanPick
                                        (*(long *)(lVar20 + 0x1b8),lVar22,0);
                local_cc[0] = local_cc[0] & 1;
                uVar10 = FUN_03f5c42c(DAT_09535400,local_cc);
                uVar9 = System_String__Format(DAT_09220cb0,uVar9,uVar10,0);
                if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x40) = uVar9;
                thunk_FUN_03f5d7b8();
                local_d0[0] = bVar1 & 1;
                uVar9 = FUN_03f5c42c(DAT_09535400,local_d0);
                if (*(long *)(lVar20 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_d4[0] = *(undefined1 *)(*(long *)(lVar20 + 0x1b8) + 0x58);
                uVar10 = FUN_03f5c42c(DAT_09535400,local_d4);
                uVar9 = System_String__Format(DAT_0921c9e8,uVar9,uVar10,0);
                if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x48) = uVar9;
                thunk_FUN_03f5d7b8();
                if (*(long *)(lVar20 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_d8[0] = AnhPD_FoodOrder_ConveyorPickup__HasMoveFor
                                        (*(long *)(lVar20 + 0x1b8),lVar22,0);
                local_d8[0] = local_d8[0] & 1;
                uVar9 = FUN_03f5c42c(DAT_09535400,local_d8);
                uVar9 = System_String__Format(DAT_0921c9c8,uVar9,0);
                if (*(uint *)(lVar14 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar14 + 0x50) = uVar9;
                thunk_FUN_03f5d7b8();
                uVar9 = System_String__Concat(lVar14,0);
                System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
                plVar21 = local_88;
              }
            }
          } while( true );
        }
        goto LAB_0423c230;
      }
    }
  }
  goto LAB_0423bbcc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar18 = piVar18 + 4;
    if (uVar7 == 0) break;
LAB_0423be0c:
    if (*(long *)(piVar18 + -2) == DAT_09185a58) {
      puVar13 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0423be40;
    }
  }
LAB_0423be24:
  puVar13 = (undefined8 *)FUN_03f95da8(local_90,DAT_09185a58,0);
LAB_0423be40:
  (*(code *)*puVar13)(plVar21,puVar13[1]);
  goto LAB_0423be5c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar18 = piVar18 + 4;
    if (uVar7 == 0) break;
LAB_0423bb78:
    if (*(long *)(piVar18 + -2) == DAT_09185a58) {
      puVar13 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0423bbac;
    }
  }
LAB_0423bb90:
  puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_09185a58,0);
LAB_0423bbac:
  (*(code *)*puVar13)(plVar21,puVar13[1]);
LAB_0423bbb8:
  if (local_c8 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
LAB_0423bbcc:
  if (iVar4 != 0) {
    lVar20 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
    if ((lVar20 != 0) &&
       (plVar21 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar21 != (long *)0x0)) {
      lVar20 = *plVar21;
      uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917a7c8) {
            puVar13 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0423bc40;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_0917a7c8,0);
LAB_0423bc40:
      plVar21 = (long *)(*(code *)*puVar13)(plVar21,puVar13[1]);
      pplStack_c0 = &local_90;
      local_c8 = (long *)0x0;
      do {
        local_90 = plVar21;
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar20 = *plVar21;
        uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_09185b10) {
              puVar13 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0423bcd4;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_09185b10,0);
LAB_0423bcd4:
        uVar7 = (*(code *)*puVar13)(plVar21,puVar13[1]);
        plVar21 = local_90;
        if ((uVar7 & 1) == 0) {
          if (local_90 == (long *)0x0) goto LAB_0423be5c;
          lVar20 = *local_90;
          uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar7 == 0) goto LAB_0423be24;
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_0423be0c;
        }
        if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar20 = *local_90;
        uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_0917aec0) {
              puVar13 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0423bd38;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_03f95da8(local_90,DAT_0917aec0,0);
LAB_0423bd38:
        uVar7 = (*(code *)*puVar13)(plVar21,puVar13[1]);
        lVar20 = AnhPD_FoodOrder_GridIngController__TryGetExistingCell(param_1,uVar7);
        if (lVar20 == 0) {
          local_e8 = uVar7;
          uVar9 = FUN_03f5c42c(DAT_0918cb90,&local_e8);
          uVar9 = System_String__Format(DAT_091f5c40,uVar9,0);
          System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
          plVar21 = local_90;
        }
        else {
          uVar15 = AnhPD_FoodOrder_IngCell__get_IsEmpty();
          plVar21 = local_90;
          if ((uVar15 & 1) != 0) {
            local_e8 = uVar7;
            uVar9 = FUN_03f5c42c(DAT_0918cb90,&local_e8);
            uVar9 = System_String__Format(DAT_091f5c38,uVar9,0);
            System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
            plVar21 = local_90;
          }
        }
      } while( true );
    }
LAB_0423c230:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0423be5c:
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar19,0);
  if ((uVar7 & 1) != 0) {
    if (lVar19 == 0) goto LAB_0423c230;
    lVar20 = AnhPD_FoodOrder_MessyController__GetCookingStations(lVar19,0);
    if (lVar20 != 0) {
      FUN_057e185c(&local_c8,lVar20,DAT_091ac068);
      local_a0 = CONCAT44(uStack_b4,local_b8);
      pplStack_a8 = pplStack_c0;
      local_b0 = local_c8;
      pplStack_c0 = &local_b0;
      local_c8 = (long *)0x0;
      while (uVar7 = FUN_071bd28c(&local_b0,DAT_091a27d0), lVar20 = local_a0, (uVar7 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar20,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = FUN_03f5c394(DAT_091805f8,7);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x20) = DAT_091f5c88;
          thunk_FUN_03f5d7b8();
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar20 + 0x28);
          thunk_FUN_03f5d7b8();
          if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x30) = DAT_091f9f60;
          thunk_FUN_03f5d7b8();
          uVar9 = AnhPD_FoodOrder_CookingStation__DebugJamState(lVar20,0);
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x38) = uVar9;
          thunk_FUN_03f5d7b8();
          if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x40) = DAT_091f5a98;
          thunk_FUN_03f5d7b8();
          local_cc[0] = AnhPD_FoodOrder_CookingStation__IsCookingForShelf(lVar20,0);
          local_cc[0] = local_cc[0] & 1;
          uVar9 = FUN_03f5c42c(DAT_09535400,local_cc);
          local_d0[0] = *(byte *)(lVar20 + 0x90);
          uVar10 = FUN_03f5c42c(DAT_09535400,local_d0);
          uVar9 = System_String__Format(DAT_09219ac8,uVar9,uVar10,0);
          if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x48) = uVar9;
          thunk_FUN_03f5d7b8();
          uVar5 = AnhPD_FoodOrder_CookingStation__get_OwedResults(lVar20,0);
          local_e8 = CONCAT44(local_e8._4_4_,uVar5);
          uVar9 = FUN_03f5c42c(DAT_09535420,&local_e8);
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = AnhPD_FoodOrder_PieceLedger__DescribeStationInputs(lVar20,0);
          uVar9 = System_String__Format(DAT_09220868,uVar9,uVar10,0);
          if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x50) = uVar9;
          thunk_FUN_03f5d7b8();
          uVar9 = System_String__Concat(lVar8,0);
          System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
        }
      }
      FUN_071bd288(&local_b0,DAT_091a27c8);
    }
  }
  local_c8 = (long *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x11c));
  uVar9 = FUN_03f5c42c(DAT_09535450,&local_c8);
  local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0xf0));
  uVar10 = FUN_03f5c42c(DAT_09535450,&local_e8);
  uVar10 = System_String__Format(DAT_09223708,uVar9,uVar10,0);
  local_cc[0] = *(byte *)(param_1 + 0x118);
  uVar11 = FUN_03f5c42c(DAT_09535400,local_cc);
  uVar9 = DAT_09217428;
  uVar16 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    local_c8 = (long *)((ulong)local_c8 & 0xffffffffffff0000);
    FUN_05c290f8(&local_c8,*(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x31),DAT_091b6a48);
    uVar16 = SUB82(local_c8,0);
  }
  local_c8 = (long *)CONCAT62(local_c8._2_6_,uVar16);
  uVar12 = FUN_03f5c42c(DAT_0917dc20,&local_c8);
  uVar9 = System_String__Format(uVar9,uVar11,uVar12,0);
  uVar9 = System_String__Concat(uVar10,uVar9,0);
  System_Text_StringBuilder__AppendLine(plVar6,uVar9,0);
  (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  return;
}

