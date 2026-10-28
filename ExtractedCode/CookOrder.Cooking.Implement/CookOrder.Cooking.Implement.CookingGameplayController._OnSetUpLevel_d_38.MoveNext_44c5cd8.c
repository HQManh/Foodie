// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController.<OnSetUpLevel>d__38$$MoveNext
// address: 0x44c5cd8
// body: available
// range: 0x44c5cd8-0x44c6993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c6318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c687c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c688c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c68e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c68e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController_<OnSetUpLevel>d__38__MoveNext
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  
  if ((DAT_09518284 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_091c1fa0);
    FUN_03f5c2a4(&DAT_091c6518);
    FUN_03f5c2a4(&DAT_09182dd8);
    FUN_03f5c2a4(&DAT_09182df0);
    FUN_03f5c2a4(&DAT_09182df8);
    FUN_03f5c2a4(&DAT_09182e18);
    FUN_03f5c2a4(&DAT_091c9cb0);
    FUN_03f5c2a4(&DAT_091787b8);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f3970);
    FUN_03f5c2a4(&DAT_091e6e08);
    FUN_03f5c2a4(&DAT_0918eff8);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0918cf58);
    DAT_09518284 = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_78 = 0;
  if (*param_1 != 0) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(lVar10 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar3 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0xd8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar3 & 1) != 0) {
        puVar8 = (undefined8 *)(lVar10 + 0x20);
        uVar11 = *puVar8;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(lVar10 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar8 = (undefined8 *)(*(long *)(lVar10 + 0xd0) + 0x20);
        }
        piVar7 = param_1 + 8;
        *(undefined8 *)piVar7 = *puVar8;
        thunk_FUN_03f5d7b8(piVar7);
        lVar6 = *(long *)(lVar10 + 0x38);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar16 = *(long *)(lVar6 + 0x78);
        if ((lVar16 == 0) || (lVar14 = *(long *)(lVar6 + 0x90), lVar14 == 0)) {
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar11 = thunk_FUN_03f9944c();
          uVar13 = thunk_FUN_03fc39d4(&DAT_09206cf8);
          System_InvalidOperationException___ctor(uVar11,uVar13,0);
          uVar13 = thunk_FUN_03fc39d4(&DAT_091e6e38);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar11,uVar13);
        }
        lVar6 = *(long *)(lVar6 + 0x88);
        uVar3 = FUN_05a8f088(DAT_091b4b68);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(lVar10 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xd0) + 0x60);
        }
        else {
          lVar4 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds
                             (**(long **)(lVar4 + 0xb8),0);
        }
        lVar4 = thunk_FUN_03f9944c(DAT_09182dd8);
        CookingGraph_CookingLevelDefinition___ctor(lVar4,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)piVar7;
        thunk_FUN_03f5d7b8();
        *(byte *)(lVar4 + 0x54) = *(byte *)(lVar10 + 0xe0) ^ 1;
        local_98._0_8_ = 0;
        *(undefined2 *)(lVar4 + 0x48) = *(undefined2 *)(lVar10 + 0xe1);
        FUN_05c3078c(local_98,*(undefined4 *)(lVar10 + 0xe4),DAT_091b6f98);
        *(undefined8 *)(lVar4 + 0x4c) = local_98._0_8_;
        if (*(char *)(lVar10 + 0xe0) == '\0') {
          fVar19 = *(float *)(lVar10 + 0xf4);
          dVar18 = (double)(*(float *)(lVar10 + 0xec) + *(float *)(lVar10 + 0xf0));
        }
        else {
          fVar19 = 0.0;
          dVar18 = 0.0;
        }
        *(double *)(lVar4 + 0x58) = dVar18;
        *(double *)(lVar4 + 0x60) = (double)fVar19;
        uVar11 = CookingGraph_CustomerOrderTranslator__Parse(lVar16,*(undefined8 *)piVar7,uVar11,0);
        *(undefined8 *)(lVar4 + 0x28) = uVar11;
        thunk_FUN_03f5d7b8();
        uVar11 = CookingGraph_IngredientQueueTranslator__Parse(lVar14,*(undefined8 *)piVar7,0);
        *(undefined8 *)(lVar4 + 0x18) = uVar11;
        thunk_FUN_03f5d7b8();
        if (lVar6 == 0) {
          lVar6 = **(long **)(DAT_09535468 + 0xb8);
        }
        uVar11 = CookingGraph_GridLayoutTranslator__Parse(lVar6,*(undefined8 *)piVar7,0);
        *(undefined8 *)(lVar4 + 0x20) = uVar11;
        thunk_FUN_03f5d7b8();
        if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_88 = *(undefined4 *)(lVar6 + 0x10);
        local_98._0_8_ = DAT_0918cf58;
        local_98._8_8_ = 0xffffffffffffffff;
        uVar11 = System_Enum__ToString(local_98,0);
        *(undefined8 *)(lVar4 + 0x30) = uVar11;
        thunk_FUN_03f5d7b8();
        if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0xb8);
        if (lVar6 == 0) {
          uVar1 = 2;
        }
        else {
          uVar1 = *(undefined4 *)(lVar6 + 0x14);
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Math__Max(1,uVar1,0);
        *(undefined4 *)(lVar4 + 0x38) = uVar1;
        uVar11 = FUN_03f5c394(DAT_091801b8,4);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar11,DAT_091f3970,0);
        *(undefined8 *)(lVar4 + 0x78) = uVar11;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x78),uVar11);
        *(undefined4 *)(lVar4 + 0x44) = 0xffffffff;
        *(long *)(lVar10 + 0x120) = lVar4;
        thunk_FUN_03f5d7b8(lVar10 + 0x120,lVar4);
        lVar6 = thunk_FUN_03f9944c(DAT_0918eff8);
        System_Object___ctor(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar6 + 0x10) = 0;
        lVar16 = *(long *)(lVar10 + 0x120);
        if (lVar16 != 0) {
          iVar2 = 0;
          do {
            if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0x28) + 0x10);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar16 + 0x18) <= iVar2) {
              if (*(long *)(lVar10 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *(long *)(*(long *)(lVar10 + 0xd8) + 0x140);
              uVar13 = *(undefined8 *)(lVar10 + 0xd0);
              uVar11 = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy
                                 (lVar10,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              auVar20 = CookOrder_Cooking_Implement_CookingCustomerAssets__LoadAsync
                                  (lVar6,uVar13,uVar11);
              if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              local_98 = auVar20;
              thunk_FUN_03f5d7b8(local_98,0);
              uVar13 = local_98._8_8_;
              uVar11 = local_98._0_8_;
              local_70 = local_98;
              if (DAT_095162d4 == '\0') {
                FUN_03f5c2a4(&DAT_0918c610);
                DAT_095162d4 = '\x01';
              }
              if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (DAT_095162d5 == '\0') {
                FUN_03f5c2a4(&DAT_091868c0);
                DAT_095162d5 = '\x01';
              }
              if ((long *)uVar11 == (long *)0x0) goto LAB_044c644c;
              lVar6 = *(long *)uVar11;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 == 0) goto LAB_044c641c;
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_044c6404;
            }
            lVar16 = FUN_057e0998(lVar16,iVar2,DAT_091ac208);
            if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x98);
            uVar11 = thunk_FUN_03f9944c(DAT_091787b8);
            FUN_05322d94(uVar11,lVar6,DAT_091e6e08,0);
            lVar14 = FUN_04ae5fd0(uVar13,uVar11,DAT_091c9cb0);
            if (lVar14 != 0) {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar14 + 0x18);
              thunk_FUN_03f5d7b8();
            }
            uVar3 = FUN_05a8f088(DAT_091b4b68);
            if ((uVar3 & 1) == 0) {
              lVar16 = 0;
            }
            else {
              lVar14 = *(long *)(DAT_091b4b60 + 0x20);
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_03f95a6c();
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_03f95a6c();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar16 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOById
                                 (**(long **)(lVar14 + 0xb8),*(undefined8 *)(lVar16 + 0x38),0);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar16,0);
            if ((uVar3 & 1) != 0) {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar16 + 0x3c) == 2) {
                if (*(long *)(lVar10 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = *(long *)(*(long *)(lVar10 + 0x120) + 0x70);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_053d8048(lVar16,*(undefined4 *)(lVar6 + 0x10),DAT_091a82b0);
              }
            }
            iVar2 = *(int *)(lVar6 + 0x10) + 1;
            *(int *)(lVar6 + 0x10) = iVar2;
            lVar16 = *(long *)(lVar10 + 0x120);
          } while (lVar16 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar11 = thunk_FUN_03f9944c();
    uVar13 = thunk_FUN_03fc39d4(&DAT_0920aee0);
    System_InvalidOperationException___ctor(uVar11,uVar13,0);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091e6e38);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar13);
  }
  local_70 = *(undefined1 (*) [16])(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = -1;
  goto LAB_044c644c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_044c6404:
    if (*(long *)(piVar7 + -2) == DAT_091868c0) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_044c6438;
    }
  }
LAB_044c641c:
  puVar8 = (undefined8 *)FUN_03f95da8(uVar11,DAT_091868c0,0);
LAB_044c6438:
  iVar2 = (*(code *)*puVar8)(uVar11,uVar13 & 0xffffffff,puVar8[1]);
  if (iVar2 == 0) {
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 10) = local_70;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    FUN_044d7a38(param_1 + 2,local_70,param_1,DAT_091c1fa0);
    return;
  }
LAB_044c644c:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar11 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_70._0_8_;
    uVar12 = local_70._8_8_ & 0xffff;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_044c64d0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_044c64d0:
    (*(code *)*puVar8)(uVar11,uVar12,puVar8[1]);
  }
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 0x70);
  }
  else {
    lVar6 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar8 = (undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x20);
  }
  uVar11 = *puVar8;
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar3 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    lVar6 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = *(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x28);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar10 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar15 = *(undefined8 *)(lVar10 + 0x120);
  uVar17 = *(undefined8 *)(*(long *)(lVar10 + 0xd0) + 0x18);
  uVar5 = thunk_FUN_03f9944c(DAT_09182df8);
  CookingGraph_CookingLevelSimulation___ctor(uVar5,uVar15,uVar11,uVar17,uVar13,0);
  *(undefined8 *)(lVar10 + 0x118) = uVar5;
  thunk_FUN_03f5d7b8(lVar10 + 0x118,uVar5);
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar3 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    lVar6 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x30);
  }
  if (*(long *)(lVar10 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__Bind
            (*(long *)(lVar10 + 0xd8),lVar10,*(undefined8 *)(lVar10 + 0xd0),uVar11,0);
  uVar13 = *(undefined8 *)(lVar10 + 0x118);
  uVar5 = *(undefined8 *)(lVar10 + 0xd8);
  uVar11 = thunk_FUN_03f9944c(DAT_09182df0);
  CookingGraph_CookingLevelSession___ctor(uVar11,uVar13,uVar5,0);
  *(undefined8 *)(lVar10 + 0x128) = uVar11;
  thunk_FUN_03f5d7b8(lVar10 + 0x128,uVar11);
  CookOrder_Cooking_Implement_CookingGameplayController__InitializeAutoplay(lVar10);
  uVar11 = thunk_FUN_03f9944c(DAT_091747c0);
  FUN_070a7580(uVar11,lVar10,DAT_091c6518,0);
  uVar13 = thunk_FUN_03f9944c(DAT_09182e18);
  CookOrder_Cooking_Implement_CookingMoneyPresenter___ctor(uVar13,uVar11,0);
  *(undefined8 *)(lVar10 + 0x138) = uVar13;
  thunk_FUN_03f5d7b8(lVar10 + 0x138,uVar13);
  if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar10 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0x120) + 0x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar16 = *(long *)(*(long *)(lVar10 + 0x40) + 0x20);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_InGame_CakeLevelRuntimeDataCustomer__SetMaxNumCustomers
            (lVar16,*(undefined4 *)(lVar6 + 0x18),0);
  if (*(long *)(lVar10 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(lVar10 + 0xd8);
  uVar11 = CookingGraph_CookingLevelSimulation__ReadSnapshot(*(long *)(lVar10 + 0x118),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar11,uVar11);
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__Refresh(lVar6,uVar11,0);
  *param_1 = -2;
  piVar7 = param_1 + 8;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_044c6814;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_044c6814:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  return;
}

