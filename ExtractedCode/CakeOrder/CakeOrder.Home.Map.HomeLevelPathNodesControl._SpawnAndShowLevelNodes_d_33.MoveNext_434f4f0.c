// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathNodesControl.<SpawnAndShowLevelNodes>d__33$$MoveNext
// address: 0x434f4f0
// body: available
// range: 0x434f4f0-0x434f77f inclusive
// range: 0x434f7a0-0x434fb27 inclusive
// range: 0x434fb90-0x434fe1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434f768 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434f76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434f770 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434f774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434f778 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434f77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fad0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fad4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fadc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434fae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelPathNodesControl_<SpawnAndShowLevelNodes>d__33__MoveNext
               (int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_78;
  int iStack_74;
  
  if ((DAT_095177af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174710);
    FUN_03f5c2a4(&DAT_091c2278);
    FUN_03f5c2a4(&DAT_09180028);
    FUN_03f5c2a4(&DAT_09180030);
    FUN_03f5c2a4(&DAT_091cea18);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4bc8);
    FUN_03f5c2a4(&DAT_091d4bd0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095177af = 1;
  }
  lVar13 = *(long *)(param_1 + 6);
  local_78 = 0;
  uVar5 = local_78;
  iStack_74 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    iStack_74 = param_1[0xe];
    param_1[0xe] = 0;
    *param_1 = -1;
    local_78 = 0;
    goto LAB_0434fa70;
  }
  if (*param_1 == 1) {
    iStack_74 = param_1[0xe];
    param_1[0xe] = 0;
    *param_1 = -1;
    do {
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_74,0);
      do {
        uVar16 = param_1[0xd] + 1;
        param_1[0xd] = uVar16;
LAB_0434fcd4:
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar13 + 0x98) + -1 <= (int)uVar16) goto LAB_0434fce8;
        plVar12 = *(long **)(lVar13 + 0x60);
        uVar14 = *(undefined8 *)(lVar13 + 0x30);
        uVar15 = *(undefined8 *)(lVar13 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = FUN_04c35338(uVar14,uVar15,DAT_091d4bc8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar14,0);
        }
        if (*(uint *)(plVar12 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar12[(long)(int)uVar16 + 4] = lVar7;
        thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar16 + 4,lVar7);
        lVar7 = *(long *)(lVar13 + 0x60);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar16 = param_1[0xd];
        if (*(uint *)(lVar7 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(lVar13 + 0x58);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar16 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_Home_Map_HomeLevelLink__SetUp
                  (lVar7,*(undefined8 *)(lVar13 + 0x40),
                   *(undefined8 *)(lVar8 + (long)(int)uVar16 * 8 + 0x20),
                   *(undefined8 *)(lVar8 + (long)(int)(uVar16 + 1) * 8 + 0x20));
        iVar6 = param_1[0xc];
        lVar7 = *(long *)(lVar13 + 0x70);
        param_1[0xc] = iVar6 + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while (iVar6 + 1 < *(int *)(lVar7 + 0x14));
      param_1[0xc] = 0;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Cysharp_Threading_Tasks_UniTask__Yield(0);
      _local_78 = CONCAT44(iStack_74,uVar5);
      iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_78,0);
      iStack_74 = iVar6;
      uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_74,0);
    } while ((uVar10 & 1) != 0);
    *param_1 = 1;
    uVar14 = DAT_091c2278;
    param_1[0xe] = iStack_74;
    FUN_04358cfc(param_1 + 2,&iStack_74,param_1,uVar14);
  }
  else {
    local_78 = uVar5;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar13 + 0x78) = 1;
    if (*(char *)(lVar13 + 0x79) == '\0') {
      plVar12 = (long *)(lVar13 + 0x58);
      *(undefined1 *)(lVar13 + 0x79) = 1;
      if (*plVar12 == 0) {
        lVar7 = FUN_03f5c394(DAT_09180030,*(undefined4 *)(lVar13 + 0x98));
        *plVar12 = lVar7;
        thunk_FUN_03f5d7b8(plVar12);
        uVar14 = FUN_03f5c394(DAT_09180028,*(undefined4 *)(lVar13 + 0x98));
        *(undefined8 *)(lVar13 + 0x60) = uVar14;
        thunk_FUN_03f5d7b8();
        if (0 < *(int *)(lVar13 + 0x98)) {
          plVar12 = (long *)(lVar13 + 0x48);
          lVar7 = *plVar12;
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
            lVar7 = FUN_03f5c394(DAT_091807f8,1);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar5 = *(undefined4 *)(lVar13 + 0x50);
            *(undefined4 *)(lVar7 + 0x20) = 0;
            *(undefined4 *)(lVar7 + 0x28) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar5;
            *plVar12 = lVar7;
            thunk_FUN_03f5d7b8(plVar12);
            lVar7 = *plVar12;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          iVar6 = (int)*(undefined8 *)(lVar7 + 0x18);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar1 = *(int *)(lVar13 + 0x98);
          fVar18 = *(float *)(lVar7 + (long)(iVar6 + -1) * 0xc + 0x24);
          param_1[8] = (int)fVar18;
          if (iVar1 - iVar6 == 0 || iVar1 < iVar6) {
            fVar18 = 0.0;
            fVar17 = 1.0;
          }
          else {
            fVar17 = (float)iVar6 / (float)iVar1;
            fVar18 = ((*(float *)(lVar13 + 0x6c) - *(float *)(lVar13 + 0x54)) - fVar18 * fVar17) /
                     (float)(iVar1 - iVar6);
          }
          uVar16 = 0;
          param_1[9] = (int)fVar17;
          param_1[10] = (int)fVar18;
          param_1[0xb] = 0;
          param_1[0xd] = 0;
          while( true ) {
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar13 + 0x98) <= (int)uVar16) {
              uVar16 = 0;
              param_1[0xc] = 0;
              param_1[0xd] = 0;
              goto LAB_0434fcd4;
            }
            lVar7 = *(long *)(lVar13 + 0x48);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar7 + 0x18);
            if ((int)uVar16 < (int)uVar2) {
              if (uVar2 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              fVar18 = (float)param_1[9];
              lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
              fVar17 = *(float *)(lVar7 + 0x28) * fVar18;
              fVar19 = *(float *)(lVar7 + 0x20) * fVar18;
              fVar18 = *(float *)(lVar7 + 0x24) * fVar18;
            }
            else {
              fVar17 = 0.0;
              fVar19 = 0.0;
              fVar18 = (float)param_1[8] * (float)param_1[9] +
                       (float)param_1[10] * (float)(int)((uVar16 - uVar2) + 1);
            }
            uVar14 = *(undefined8 *)(lVar13 + 0x20);
            uVar15 = *(undefined8 *)(lVar13 + 0x28);
            plVar12 = *(long **)(lVar13 + 0x58);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = FUN_04c35338(uVar15,uVar14,DAT_091d4bd0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
              uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar14,0);
            }
            if (*(uint *)(plVar12 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar12[(long)(int)uVar16 + 4] = lVar7;
            thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar16 + 4,lVar7);
            lVar7 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar6 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelState
                              (**(long **)(lVar7 + 0xb8),*(undefined8 *)(lVar13 + 0x90),param_1[0xd]
                               ,0);
            lVar7 = *(long *)(DAT_091b4a58 + 0x20);
            uVar5 = 1;
            if (iVar6 != 1) {
              uVar5 = 2;
            }
            if (iVar6 < 1) {
              uVar5 = 0;
            }
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelStars
                              (**(long **)(lVar7 + 0xb8),*(undefined8 *)(lVar13 + 0x90),param_1[0xd]
                               ,0);
            lVar7 = *(long *)(lVar13 + 0x58);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar16 = param_1[0xd];
            if (*(uint *)(lVar7 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_Home_Map_HomeLevelNode__SetUp
                      (fVar19,fVar18,fVar17,lVar7,*(undefined8 *)(lVar13 + 0x38),(long)(int)uVar16,
                       uVar5,uVar4,0);
            lVar7 = *(long *)(lVar13 + 0x58);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar7 + 0x18) <= (uint)param_1[0xd]) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar7 + (long)param_1[0xd] * 8 + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_Home_Map_HomeLevelNode__SetSelectStateImmediate(lVar7,0);
            lVar7 = *(long *)(lVar13 + 0x58);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar7 + 0x18) <= (uint)param_1[0xd]) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar7 + (long)param_1[0xd] * 8 + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar7,0);
            lVar7 = *(long *)(lVar13 + 0x58);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= (uint)param_1[0xd]) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar7 + (long)param_1[0xd] * 8 + 0x20);
            uVar14 = thunk_FUN_03f9944c(DAT_09174710);
            FUN_070a8c30(uVar14,lVar13,DAT_091cea18,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_Home_Map_HomeLevelNode__add_onSelectNode(lVar7,uVar14);
            iVar6 = param_1[0xb];
            lVar7 = *(long *)(lVar13 + 0x70);
            param_1[0xb] = iVar6 + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar7 + 0x10) <= iVar6 + 1) {
              param_1[0xb] = 0;
              if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = Cysharp_Threading_Tasks_UniTask__Yield(0);
              _local_78 = CONCAT44(iStack_74,uVar5);
              iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_78,0);
              iStack_74 = iVar6;
              uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_74,0)
              ;
              if ((uVar10 & 1) == 0) {
                *param_1 = 0;
                uVar14 = DAT_091c2278;
                param_1[0xe] = iStack_74;
                FUN_04358cfc(param_1 + 2,&iStack_74,param_1,uVar14);
                return;
              }
LAB_0434fa70:
              Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_74,0);
            }
            uVar16 = param_1[0xd] + 1;
            param_1[0xd] = uVar16;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
LAB_0434fce8:
      *(undefined1 *)(lVar13 + 0x79) = 0;
      if (*(char *)(lVar13 + 0x78) != '\0') {
        CakeOrder_Home_Map_HomeLevelPathNodesControl__ShowLevelNodes(lVar13);
      }
    }
    cVar3 = DAT_095162d8;
    *param_1 = -2;
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar12 = *(long **)(param_1 + 2);
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091866a8) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_0434fdb4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091866a8,2);
LAB_0434fdb4:
      (*(code *)*puVar9)(plVar12,puVar9[1]);
    }
  }
  return;
}

