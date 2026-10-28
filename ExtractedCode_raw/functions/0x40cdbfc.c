// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Commit
// address: 0x40cdbfc
// body: available
// range: 0x40cdbfc-0x40ce1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ce17c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce18c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce19c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce1a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ce1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Commit
          (long param_1,long param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long local_e0;
  long *plStack_d8;
  ulong local_d0;
  undefined8 local_b0;
  long *plStack_a8;
  long local_a0;
  long *plStack_98;
  ulong local_90;
  undefined8 local_88;
  long local_80;
  long *plStack_78;
  ulong local_70;
  
  if ((DAT_09515fce & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac6a0);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091b43d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fce = 1;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  plStack_98 = (long *)0x0;
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_05797d74(&local_e0,*(long *)(param_1 + 0x30),DAT_091adcc0);
        local_70 = local_d0;
        plStack_a8 = &local_80;
        plStack_78 = plStack_d8;
        local_80 = local_e0;
        local_b0 = 0;
        while (uVar3 = FUN_071ad7a4(&local_80,DAT_091a34d8), (uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_05a07ee8(&local_e0,*(long *)(param_1 + 0x20),local_70 & 0xffffffff,DAT_091b43d8);
          uVar3 = local_d0;
          plVar9 = plStack_d8;
          lVar7 = local_e0;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
          lVar5 = lVar7;
          if ((uVar4 & 1) == 0) {
            if (((ulong)plVar9 & 1) == 0) {
              lVar5 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TakeFromBag(uVar3);
            }
            else {
              lVar5 = 0;
            }
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
          if ((uVar3 & 1) == 0) {
            AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Rollback
                      (param_1,param_2,param_3 & 1);
            goto LAB_040ce060;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
          lVar7 = DAT_091ac690;
          if ((uVar3 & 1) == 0) {
            lVar6 = *(long *)(param_1 + 0x40);
            if (lVar6 == 0) {
LAB_040ce188:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_040ce188;
            uVar10 = *(uint *)(lVar6 + 0x18);
            if (uVar10 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar10 + 1;
              plVar9 = (long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
              *plVar9 = lVar5;
              thunk_FUN_03f5d7b8(plVar9,lVar5);
            }
            else {
              FUN_057e0c68(lVar6,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
          }
          local_88 = 0;
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(param_2,0);
          if ((uVar3 & 1) == 0) {
LAB_040cded4:
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = AnhPD_FoodOrder_ServeShelfController__TryResolveMerge
                              (*(long *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar5 + 0x78),
                               param_4,&local_88,0);
            if ((uVar3 & 1) == 0) {
              AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Rollback
                        (param_1,param_2,param_3 & 1);
LAB_040ce060:
              FUN_071ad7a0(&local_80,DAT_091a34d0);
              return 0;
            }
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar1 = AnhPD_FoodOrder_ShelfMergeQueue__IndexOfOldest(lVar7,param_2);
            if (-1 < iVar1) goto LAB_040cded4;
          }
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_ServeShelfController__Reserve
                    (*(long *)(param_1 + 0x10),param_2,lVar5,local_88,0);
          lVar7 = DAT_091ac690;
          lVar6 = *(long *)(param_1 + 0x38);
          if (lVar6 == 0) {
LAB_040ce17c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_040ce17c;
          uVar10 = *(uint *)(lVar6 + 0x18);
          if (uVar10 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar10 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
            *plVar9 = lVar5;
            thunk_FUN_03f5d7b8(plVar9,lVar5);
          }
          else {
            FUN_057e0c68(lVar6,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071ad7a0(&local_80,DAT_091a34d0);
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_057e185c(&local_e0,*(long *)(param_1 + 0x38),DAT_091ac6b0);
          uVar10 = 0;
          plStack_98 = plStack_d8;
          local_a0 = local_e0;
          local_90 = local_d0;
          local_e0 = 0;
          plStack_d8 = &local_a0;
          while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2a58), (uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = AnhPD_FoodOrder_ServeShelfController__PrimeForMerge
                              (*(long *)(param_1 + 0x10),local_90,0);
            uVar10 = uVar10 | uVar2;
          }
          FUN_071bd288(&local_a0,DAT_091a2a50);
          lVar7 = *(long *)(param_1 + 0x10);
          if ((uVar10 & 1) == 0) {
            if (lVar7 == 0) goto LAB_040ce1a4;
            AnhPD_FoodOrder_ServeShelfController__PumpLaunches(lVar7,param_2,0);
          }
          else {
            if (lVar7 == 0) goto LAB_040ce1a4;
            AnhPD_FoodOrder_ServeShelfController__SchedulePump
                      (*(undefined4 *)(lVar7 + 0x28),lVar7,param_2,0);
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            FUN_057e185c(&local_e0,*(long *)(param_1 + 0x40),DAT_091ac6b0);
            local_90 = local_d0;
            plStack_98 = plStack_d8;
            local_a0 = local_e0;
            local_e0 = 0;
            plStack_d8 = &local_a0;
            while (uVar4 = FUN_071bd28c(&local_a0,DAT_091a2a58), uVar3 = local_90, (uVar4 & 1) != 0)
            {
              uVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsPending
                                (param_1,local_90);
              if ((uVar4 & 1) != 0) {
                AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Hold(param_1,uVar3);
              }
            }
            FUN_071bd288(&local_a0,DAT_091a2a50);
            lVar7 = *(long *)(param_1 + 0x38);
            if (lVar7 != 0) {
              iVar1 = *(int *)(lVar7 + 0x18);
              *(undefined4 *)(lVar7 + 0x18) = 0;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (0 < iVar1) {
                System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
              }
              lVar7 = *(long *)(param_1 + 0x40);
              if (lVar7 != 0) {
                iVar1 = *(int *)(lVar7 + 0x18);
                *(undefined4 *)(lVar7 + 0x18) = 0;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (0 < iVar1) {
                  System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_040ce1a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

