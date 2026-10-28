// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$DescribeMembers
// address: 0x40dedf4
// body: available
// range: 0x40dedf4-0x40df1d7 inclusive
// range: 0x40df1dc-0x40df257 inclusive
// range: 0x40df25c-0x40df25f inclusive
// range: 0x40df264-0x40df267 inclusive
// range: 0x40df26c-0x40df26f inclusive
// range: 0x40df2c8-0x40df34f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40df1d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df25c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df32c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df340 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040df250) */
/* WARNING: Removing unreachable block (ram,0x040df2f0) */

void AnhPD_FoodOrder_ConveyorGrid__DescribeMembers(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined4 local_a4;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_0951604a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f83d0);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091fa0a0);
    DAT_0951604a = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_057e185c(&local_a0,*(long *)(param_1 + 0x18),DAT_091abe78);
    plStack_78 = plStack_98;
    local_80 = local_a0;
    local_70 = local_90;
    local_a0 = 0;
    plStack_98 = &local_80;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a2728), lVar8 = local_70, lVar10 = local_a0,
          (uVar3 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(local_70 + 0x10);
      iVar1 = System_Text_StringBuilder__get_Length(plVar2,0);
      puVar7 = &DAT_091fa0a0;
      if (iVar1 < 1) {
        puVar7 = &DAT_091f5700;
      }
      lVar4 = System_Text_StringBuilder__Append(plVar2,*puVar7,0);
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar8 + 0x20));
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_b8);
      local_a4 = *(undefined4 *)(lVar8 + 0x24);
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_a4);
      uVar5 = System_String__Format(DAT_091f83d0,uVar5,uVar6,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5,uVar5);
      }
      System_Text_StringBuilder__Append(lVar4,uVar5,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar10,0);
      if ((uVar3 & 1) == 0) {
        System_Text_StringBuilder__Append(plVar2,DAT_09220040,0);
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar11 = *(long **)(lVar10 + 0x90);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a5a0) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040df0a8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5a0,0);
LAB_040df0a8:
        plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
        pplStack_b0 = &local_88;
        local_b8 = 0;
joined_r0x040df0c4:
        local_88 = plVar11;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040df114;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_040df114:
        uVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        plVar11 = local_88;
        if ((uVar3 & 1) != 0) {
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *local_88;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917ac50) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040df178;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ac50,0);
LAB_040df178:
          lVar10 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          plVar11 = local_88;
          if (lVar10 != 0) {
            lVar8 = System_Text_StringBuilder__Append(plVar2,*(undefined8 *)(lVar10 + 0x10),0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = System_Text_StringBuilder__Append(lVar8,0x78,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = System_Text_StringBuilder__Append(lVar8,*(undefined4 *)(lVar10 + 0x18),0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            System_Text_StringBuilder__Append(lVar10,0x20,0);
            plVar11 = local_88;
          }
          goto joined_r0x040df0c4;
        }
        if (local_88 != (long *)0x0) {
          lVar10 = *local_88;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185a58) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040df240;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_040df240:
          (*(code *)*puVar7)(plVar11,puVar7[1]);
        }
      }
    }
    FUN_071bd288(plStack_98,DAT_091a2720);
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar10);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

