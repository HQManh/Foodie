// rea decompile_all
// name: CakeOrder.Home.LevelCoinProbe.<ComputeOrderCoinAsync>d__0$$MoveNext
// address: 0x4310eec
// body: available
// range: 0x4310eec-0x43117e3 inclusive
// range: 0x4311810-0x4311c5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43117e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43118c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431198c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311990 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311994 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431199c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43119ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43119b4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311a24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311a3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4311a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04311998) */
/* WARNING: Removing unreachable block (ram,0x043117c8) */
/* WARNING: Removing unreachable block (ram,0x043119b0) */

void CakeOrder_Home_LevelCoinProbe_<ComputeOrderCoinAsync>d__0__MoveNext(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int *local_d0;
  int *piStack_c8;
  int **local_c0;
  undefined4 local_a8;
  int *local_a0;
  int *piStack_98;
  int **local_90;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  int local_64;
  int *local_58;
  
  local_58 = param_1;
  if ((DAT_095175cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199bb0);
    FUN_03f5c2a4(&DAT_09199c18);
    FUN_03f5c2a4(&DAT_09183108);
    FUN_03f5c2a4(&DAT_091a28a0);
    FUN_03f5c2a4(&DAT_091a28a8);
    FUN_03f5c2a4(&DAT_091a28b0);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_091cdb00);
    FUN_03f5c2a4(&DAT_091ac248);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0918a650);
    FUN_03f5c2a4(&DAT_091eca90);
    FUN_03f5c2a4(&DAT_09192378);
    FUN_03f5c2a4(&DAT_0917f720);
    DAT_095175cc = 1;
  }
  local_64 = *param_1;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  local_90 = (int **)0x0;
  local_a8 = 0;
  if (local_64 == 1) {
    local_70 = *(long *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_64 = -1;
    *param_1 = -1;
    goto joined_r0x0431105c;
  }
  if (local_64 == 0) {
LAB_04311288:
    local_c0 = &local_58;
    piStack_c8 = &local_64;
    local_d0 = (int *)0x0;
    local_64 = -1;
    local_70 = *(long *)(local_58 + 0x10);
    local_58[0x10] = 0;
    local_58[0x11] = 0;
    *local_58 = -1;
LAB_043112a4:
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_70,0);
    iVar3 = 10;
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_09192378);
    System_Object___ctor(uVar4,0);
    *(undefined8 *)(local_58 + 0xc) = uVar4;
    thunk_FUN_03f5d7b8(local_58 + 0xc,uVar4);
    uVar4 = *(undefined8 *)(local_58 + 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar4 = thunk_FUN_03f9944c();
      uVar14 = thunk_FUN_03fc39d4(&DAT_0921f138);
      System_ArgumentNullException___ctor(uVar4,uVar14,0);
      uVar14 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar14);
    }
    if (*(long *)(local_58 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(local_58 + 0xc);
    uVar4 = CakeOrder_DataSO_CakeMapSO__GetSceneName(*(long *)(local_58 + 8),local_58[10],0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x10);
    *puVar8 = uVar4;
    thunk_FUN_03f5d7b8(puVar8);
    if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(*(long *)(local_58 + 0xc) + 0x18) = 0;
    uVar14 = *(undefined8 *)(local_58 + 0xc);
    uVar4 = thunk_FUN_03f9944c(DAT_0917f720);
    FUN_064794bc(uVar4,uVar14,DAT_091eca90,0);
    if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar4,0);
    piStack_c8 = &local_64;
    local_d0 = (int *)0x0;
    local_c0 = &local_58;
    if (local_64 == 0) goto LAB_04311288;
    if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(*(long *)(local_58 + 0xc) + 0x10);
    if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(uVar4,1,0);
    if (DAT_0951766e == '\0') {
      FUN_03f5c2a4(&DAT_09181970);
      DAT_0951766e = '\x01';
    }
    if (*(int *)(DAT_09181970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = FUN_04324e20(uVar4,0,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
    uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_70,0);
    if ((uVar5 & 1) != 0) goto LAB_043112a4;
    local_64 = 0;
    *local_58 = 0;
    *(long *)(local_58 + 0x10) = local_70;
    thunk_FUN_03f5d7b8(local_58 + 0x10,0);
    FUN_04323f60(local_58 + 2,&local_70,local_58,DAT_09199bb0);
    iVar3 = 9;
  }
  if (local_64 < 0) {
    uVar14 = *(undefined8 *)(*local_c0 + 0xc);
    uVar4 = thunk_FUN_03f9944c(DAT_0917f720);
    FUN_064794bc(uVar4,uVar14,DAT_091eca90,0);
    if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_SceneManagement_SceneManager__remove_sceneLoaded(uVar4,0);
  }
  if ((iVar3 != 10) && (iVar3 != 0)) {
    return;
  }
  if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_SceneManagement_Scene__IsValid(*(long *)(local_58 + 0xc) + 0x18,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = *(undefined8 *)(*(long *)(local_58 + 0xc) + 0x10);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09206ce0);
    uVar14 = thunk_FUN_03fc39d4(&DAT_091f7498);
    uVar4 = System_String__Concat(uVar4,uVar13,uVar14,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar14 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar14,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar14,uVar4);
  }
  piVar11 = local_58 + 0x12;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  local_58[0x14] = 0;
  if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(*(long *)(local_58 + 0xc) + 0x18,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
  }
  else {
    uVar15 = 0;
    do {
      if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = FUN_04b7c6fc(lVar7,1,DAT_091cdb00);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
      if ((uVar5 & 1) != 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar1);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
  if ((uVar5 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar7 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_05a8eda4(DAT_091b4ab0);
        if ((uVar5 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(DAT_091b4aa8 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          uVar4 = *(undefined8 *)(local_58 + 0xe);
          iVar3 = local_58[10];
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189e78);
          }
          uVar4 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                            (uVar4,iVar3,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar4,uVar4);
          }
          lVar6 = IapAdsSystem_RemoteConfigManager__GetString(lVar6,uVar4,0);
        }
        uVar5 = System_String__IsNullOrEmpty(lVar6,0);
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(local_58 + 0xe);
          local_d0 = (int *)CONCAT44(local_d0._4_4_,local_58[10] + 1);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_d0);
          uVar14 = thunk_FUN_03fc39d4(&DAT_09208b00);
          uVar4 = System_String__Format(uVar14,uVar13,uVar4,0);
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar14 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar14,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar14,uVar4);
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = System_String__IndexOf(lVar6,0x7e,0);
        if (-1 < iVar3) {
          lVar6 = System_String__Substring(lVar6,0,iVar3,0);
        }
        uVar5 = FUN_05a8f088(DAT_091b4b68);
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          lVar9 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds
                            (**(long **)(lVar9 + 0xb8),0);
        }
        uVar5 = CookingGraph_CustomerOrderTranslator__TryParse
                          (lVar6,*(undefined8 *)(lVar7 + 0x20),&local_78,&local_80,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar13 = *(undefined8 *)(local_58 + 0xe);
          local_d0 = (int *)CONCAT44(local_d0._4_4_,local_58[10] + 1);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_d0);
          uVar14 = thunk_FUN_03fc39d4(&DAT_091fe040);
          uVar14 = System_String__Format(uVar14,uVar13,uVar4,0);
          uVar4 = local_80;
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar13 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar13,uVar14,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar13,uVar4);
        }
        uVar4 = *(undefined8 *)(lVar7 + 0x28);
        lVar6 = thunk_FUN_03f9944c(DAT_09183108);
        CakeOrder_InGame_CustomerScheduleBuilder___ctor(lVar6,uVar4,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = CakeOrder_InGame_CustomerScheduleBuilder__BuildAll(lVar6,0,local_78,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0;
          uVar5 = 0;
          uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar6 + uVar5 * 8 + 0x20);
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
              FUN_057e185c(&local_d0,lVar7,DAT_091ac248);
              local_a0 = local_d0;
              local_d0 = (int *)0x0;
              piStack_98 = piStack_c8;
              local_90 = local_c0;
              piStack_c8 = &local_64;
              local_c0 = &local_a0;
              while (uVar10 = FUN_071bd28c(&local_a0,DAT_091a28a8), (uVar10 & 1) != 0) {
                if (local_90 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                iVar3 = (*(uint *)(local_90 + 3) &
                        ((int)*(uint *)(local_90 + 3) >> 0x1f ^ 0xffffffffU)) + iVar3;
              }
              if (local_64 < 0) {
                FUN_071bd288(local_c0,DAT_091a28a0);
              }
            }
            uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        local_58[0x14] = 1;
        local_58[0x15] = iVar3;
        if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(undefined4 *)(*(long *)(local_58 + 0xc) + 0x18);
        if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync(uVar2,0);
        if (DAT_0951766e == '\0') {
          FUN_03f5c2a4(&DAT_09181970);
          DAT_0951766e = '\x01';
        }
        if (*(int *)(DAT_09181970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = FUN_04324e20(uVar4,0,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_70 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
        uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_70,0);
        if ((uVar5 & 1) == 0) {
          local_64 = 1;
          *local_58 = 1;
          *(long *)(local_58 + 0x10) = local_70;
          thunk_FUN_03f5d7b8(local_58 + 0x10,0);
          FUN_04323f60(local_58 + 2,&local_70,local_58,DAT_09199bb0);
          return;
        }
joined_r0x0431105c:
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Awaitable__PropagateExceptionAndRelease(local_70,0);
        plVar12 = *(long **)(local_58 + 0x12);
        if (plVar12 != (long *)0x0) {
          if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8)
              != DAT_091842a0)) {
            uVar4 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(plVar12,uVar4);
          }
          lVar6 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar12,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar6,0);
        }
        if (local_58[0x14] == 1) {
          iVar3 = local_58[0x15];
        }
        else {
          piVar11 = local_58 + 0x12;
          piVar11[0] = 0;
          piVar11[1] = 0;
          thunk_FUN_03f5d7b8(piVar11,0);
          piVar11 = local_58 + 0xc;
          piVar11[0] = 0;
          piVar11[1] = 0;
          thunk_FUN_03f5d7b8(piVar11,0);
          iVar3 = 0;
        }
        *local_58 = -2;
        piVar11 = local_58 + 0xc;
        piVar11[0] = 0;
        piVar11[1] = 0;
        thunk_FUN_03f5d7b8(piVar11,0);
        plVar12 = *(long **)(local_58 + 2);
        if (plVar12 == (long *)0x0) {
          local_58[6] = iVar3;
        }
        else {
          lVar6 = *(long *)(DAT_09199c18 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c(lVar6);
          }
          lVar7 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar6) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_04311918;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar12,lVar6,2);
LAB_04311918:
          (*(code *)*puVar8)(plVar12,iVar3,puVar8[1]);
        }
        return;
      }
    }
  }
  if (*(long *)(local_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar13 = *(undefined8 *)(*(long *)(local_58 + 0xc) + 0x10);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09206ce0);
  uVar14 = thunk_FUN_03fc39d4(&DAT_091f75b8);
  uVar4 = System_String__Concat(uVar4,uVar13,uVar14,0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar14 = thunk_FUN_03f9944c();
  System_InvalidOperationException___ctor(uVar14,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091eca98);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar14,uVar4);
}

