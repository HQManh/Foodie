// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSaveSync.<Set>d__10$$MoveNext
// address: 0x427b010
// body: available
// range: 0x427b010-0x427b69b inclusive
// range: 0x427b854-0x427ba37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427b668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b684 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b688 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b68c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427b698 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0427b56c) */
/* WARNING: Removing unreachable block (ram,0x0427b694) */

void CakeOrder_SaveProfile_CookOrderSaveSync_<Set>d__10__MoveNext(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 uVar10;
  uint *puVar11;
  uint *puVar12;
  long *plVar13;
  uint *puVar14;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined4 local_5c;
  undefined8 local_58;
  
  if ((DAT_0951708d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091998d8);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a9818);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b9d48);
    FUN_03f5c2a4(&DAT_091b9cf8);
    FUN_03f5c2a4(&DAT_091b9d58);
    FUN_03f5c2a4(&DAT_091b9dc8);
    FUN_03f5c2a4(&DAT_091b9dd8);
    FUN_03f5c2a4(&DAT_091b9d08);
    FUN_03f5c2a4(&DAT_091b9d68);
    FUN_03f5c2a4(&DAT_091b9d88);
    FUN_03f5c2a4(&DAT_091b9e00);
    FUN_03f5c2a4(&DAT_091b9d20);
    FUN_03f5c2a4(&DAT_091b9d28);
    FUN_03f5c2a4(&DAT_091b9e08);
    FUN_03f5c2a4(&DAT_091b9d90);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09213c10);
    DAT_0951708d = 1;
  }
  uVar1 = *param_1;
  local_5c = 0;
  local_70 = 0;
  local_98 = 0;
  lStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_58 = (ulong)uVar1 << 0x20;
  if (uVar1 - 1 < 2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = 0;
    *param_1 = 0xffffffff;
    local_58 = CONCAT44(0xffffffff,uVar1);
LAB_0427b1e4:
    do {
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_58,0);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_06076f48(*(long *)(param_1 + 10),DAT_091b9e08);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_06076f48(*(long *)(param_1 + 0xc),DAT_091b9d90);
        if ((uVar3 & 1) == 0) goto LAB_0427b22c;
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_06076f48(*(long *)(param_1 + 0xe),DAT_091b9d28);
        if ((uVar3 & 1) == 0) goto LAB_0427b22c;
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_060773cc(*(long *)(param_1 + 10),0,DAT_091b9dd8);
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_060773cc(*(long *)(param_1 + 0xc),0,DAT_091b9d68);
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_060773cc(*(long *)(param_1 + 0xe),0,DAT_091b9d08);
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(*(long *)(param_1 + 8) + 0x28) != 0) {
          if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = FUN_06077228(*(long *)(param_1 + 0xc),DAT_091b9d48);
          if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = CakeOrder_SaveProfile_CookOrderSaveSync__GetPrefKeys(uVar4);
          if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fca844(&local_c8,lVar6,DAT_0919f9b0);
          lStack_88 = lStack_c0;
          local_90 = local_c8;
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_b8 = &local_90;
          local_70 = local_a8;
          local_c8 = 0;
          lStack_c0 = (long)&local_58 + 4;
          while (uVar7 = FUN_07272f90(&local_90,DAT_091a6758), uVar3 = uStack_78, puVar8 = local_80,
                (uVar7 & 1) != 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = FUN_053ebc3c(lVar5,local_80,DAT_091a86c8);
            if ((uVar7 & 1) == 0) {
              uVar4 = System_String__Concat(DAT_09213c10,puVar8,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogWarning(uVar4,0);
            }
            else {
              UnityEngine_PlayerPrefs__SetInt(puVar8,uVar3 & 0xffffffff,0);
            }
          }
          if ((long)local_58 < 0) {
            FUN_072730b4(local_b8,DAT_091a6750);
          }
          UnityEngine_PlayerPrefs__Save(0);
        }
        uVar10 = 1;
        goto LAB_0427b57c;
      }
LAB_0427b22c:
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_5c = Cysharp_Threading_Tasks_UniTask__Yield(0);
      uVar2 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_5c,0);
      local_58 = CONCAT44(local_58._4_4_,uVar2);
      uVar3 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_58,0);
    } while ((uVar3 & 1) != 0);
    *param_1 = 2;
    uVar4 = DAT_091998d8;
    local_58 = CONCAT44(2,(uint)local_58);
    param_1[0x10] = (uint)local_58;
    FUN_04285d1c(param_1 + 2,&local_58,param_1,uVar4);
  }
  else if (uVar1 == 0) {
    uVar1 = param_1[0x10];
    param_1[0x10] = 0;
    *param_1 = 0xffffffff;
    local_58 = CONCAT44(0xffffffff,uVar1);
    do {
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_58,0);
LAB_0427b89c:
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_06076f78(*(long *)(param_1 + 10),DAT_091b9e00);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_06076f78(*(long *)(param_1 + 0xc),DAT_091b9d88);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06076f78(*(long *)(param_1 + 0xe),DAT_091b9d20);
          if ((uVar3 & 1) == 0) {
            lVar5 = *(long *)(param_1 + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar5 + 0x10) != 0) {
              if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_0607727c(*(long *)(param_1 + 10),*(long *)(lVar5 + 0x10),0,DAT_091b9dc8);
              lVar5 = *(long *)(param_1 + 8);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            if (*(long *)(lVar5 + 0x18) != 0) {
              if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_0607727c(*(long *)(param_1 + 0xc),*(long *)(lVar5 + 0x18),0,DAT_091b9d58);
              lVar5 = *(long *)(param_1 + 8);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            if (*(long *)(lVar5 + 0x20) != 0) {
              if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_0607727c(*(long *)(param_1 + 0xe),*(long *)(lVar5 + 0x20),0,DAT_091b9cf8);
            }
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_5c = Cysharp_Threading_Tasks_UniTask__Yield(0);
            uVar2 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_5c,0);
            local_58 = CONCAT44(local_58._4_4_,uVar2);
            uVar3 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_58,0);
            if ((uVar3 & 1) == 0) {
              *param_1 = 1;
              uVar4 = DAT_091998d8;
              local_58 = CONCAT44(1,(uint)local_58);
              param_1[0x10] = (uint)local_58;
              FUN_04285d1c(param_1 + 2,&local_58,param_1,uVar4);
              return;
            }
            goto LAB_0427b1e4;
          }
        }
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_5c = Cysharp_Threading_Tasks_UniTask__Yield(0);
      uVar2 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_5c,0);
      local_58 = CONCAT44(local_58._4_4_,uVar2);
      uVar3 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_58,0);
    } while ((uVar3 & 1) != 0);
    *param_1 = 0;
    uVar4 = DAT_091998d8;
    uVar1 = (uint)local_58;
    local_58 = local_58 & 0xffffffff;
    param_1[0x10] = uVar1;
    FUN_04285d1c(param_1 + 2,&local_58,param_1,uVar4);
  }
  else {
    if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProfileManager();
    puVar14 = param_1 + 10;
    *(undefined8 *)puVar14 = uVar4;
    thunk_FUN_03f5d7b8(puVar14);
    uVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProgressManager();
    puVar12 = param_1 + 0xc;
    *(undefined8 *)puVar12 = uVar4;
    thunk_FUN_03f5d7b8(puVar12);
    uVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_LiveOpsManagerData();
    puVar11 = param_1 + 0xe;
    *(undefined8 *)puVar11 = uVar4;
    thunk_FUN_03f5d7b8(puVar11);
    if (*(long *)(param_1 + 8) != 0) {
      uVar4 = *(undefined8 *)puVar14;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)puVar12;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = *(undefined8 *)puVar11;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
          if ((uVar3 & 1) != 0) goto LAB_0427b89c;
        }
      }
    }
    uVar10 = 0;
LAB_0427b57c:
    *param_1 = 0xfffffffe;
    puVar11 = param_1 + 10;
    puVar11[0] = 0;
    puVar11[1] = 0;
    thunk_FUN_03f5d7b8(puVar11,0);
    puVar11 = param_1 + 0xc;
    puVar11[0] = 0;
    puVar11[1] = 0;
    thunk_FUN_03f5d7b8(puVar11,0);
    puVar11 = param_1 + 0xe;
    puVar11[0] = 0;
    puVar11[1] = 0;
    thunk_FUN_03f5d7b8(puVar11,0);
    plVar13 = *(long **)(param_1 + 2);
    if (plVar13 == (long *)0x0) {
      *(undefined1 *)(param_1 + 6) = uVar10;
    }
    else {
      lVar5 = *(long *)(DAT_09199a20 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar6 = *plVar13;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0427b654;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar13,lVar5,2);
LAB_0427b654:
      (*(code *)*puVar8)(plVar13,uVar10,puVar8[1]);
    }
  }
  return;
}

