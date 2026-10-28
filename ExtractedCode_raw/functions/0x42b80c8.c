// rea decompile_all
// name: CakeOrder.UI.UIFameRewardPreview.<LoadPreview>d__12$$MoveNext
// address: 0x42b80c8
// body: available
// range: 0x42b80c8-0x42b9003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b8edc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8ee0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f30 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b8f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIFameRewardPreview_<LoadPreview>d__12__MoveNext(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 local_d0 [8];
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  long *local_90;
  long *plStack_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  ulong local_60;
  
  if ((DAT_095172de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1e28);
    FUN_03f5c2a4(&DAT_091c2190);
    FUN_03f5c2a4(&DAT_0919a600);
    FUN_03f5c2a4(&DAT_0919a608);
    FUN_03f5c2a4(&DAT_09186040);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde50);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091f5f40);
    FUN_03f5c2a4(&DAT_091f5ee8);
    DAT_095172de = 1;
  }
  iVar1 = *param_1;
  lVar13 = *(long *)(param_1 + 6);
  local_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_60 = 0;
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_60 = *(ulong *)(param_1 + 0x12);
      plStack_68 = *(long **)(param_1 + 0x10);
      local_70 = *(long **)(param_1 + 0xe);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
LAB_042b8420:
      plVar5 = local_70;
      plVar8 = plStack_68;
      if (local_70 != (long *)0x0) {
        uVar14 = local_60 & 0xffff;
        lVar6 = *(long *)(DAT_0919a600 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c(lVar6);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_042b88d4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar5,lVar6,0);
LAB_042b88d4:
        plVar8 = (long *)(*(code *)*puVar7)(plVar5,uVar14,puVar7[1]);
      }
      if (plVar8 != (long *)0x0) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(*(long *)(param_1 + 10) + 0x30);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = System_String__Split(lVar6,0x2c,0,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar14 = 0;
          uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar15 = *(undefined8 *)(lVar6 + uVar14 * 8 + 0x20);
            uVar11 = System_String__IsNullOrEmpty(uVar15,0);
            if ((uVar11 & 1) == 0) {
              lVar10 = *plVar8;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_09186040) {
                    puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_042b89a8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186040,1);
LAB_042b89a8:
              lVar10 = (*(code *)*puVar7)(plVar8,uVar15,puVar7[1]);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = UnityEngine_Object__op_Inequality(lVar10,0,0);
              if ((uVar11 & 1) != 0) {
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_UI_Image__set_sprite
                          (*(long *)(lVar13 + 0x28),*(undefined8 *)(lVar10 + 0x38),0);
                plVar8 = *(long **)(lVar13 + 0x20);
                uVar15 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar10,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar15,uVar15);
                }
                (**(code **)(*plVar8 + 0x558))(plVar8,uVar15,*(undefined8 *)(*plVar8 + 0x560));
                *(undefined1 *)(param_1 + 0xc) = 1;
                break;
              }
            }
            uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
LAB_042b8abc:
      auVar3._8_8_ = local_a0._8_8_;
      auVar3._0_8_ = local_a0._0_8_;
      auVar2._8_8_ = uStack_c8;
      auVar2._0_8_ = local_d0;
      if ((char)param_1[0xc] != '\0') goto LAB_042b8b08;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite
                (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x18),0);
      *(undefined1 *)((long)param_1 + 0x31) = 0;
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 10) + 0x28),0);
      if ((uVar14 & 1) == 0) {
        CakeOrder_UI_UIFameRewardPreview__LoadMapRecipeConfig(local_d0,lVar13);
        local_80 = local_c0;
        plStack_88 = uStack_c8;
        uStack_c8 = (long *)0x0;
        local_c0 = 0;
        local_90 = (long *)local_d0;
        local_d0 = (undefined1  [8])0x0;
        if ((*(byte *)(*(long *)(DAT_091bde50 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_c8 = plStack_88;
        local_d0 = (undefined1  [8])local_90;
        local_c0 = local_80;
        thunk_FUN_03f5d7b8(local_d0,0);
        plStack_68 = uStack_c8;
        local_70 = (long *)local_d0;
        local_60 = local_c0;
        uVar14 = FUN_041e5390(&local_70,DAT_0919a608);
        if ((uVar14 & 1) == 0) {
          *param_1 = 1;
          *(long **)(param_1 + 0x10) = plStack_68;
          *(long **)(param_1 + 0xe) = local_70;
          *(ulong *)(param_1 + 0x12) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0xe,0);
          FUN_042c5658(param_1 + 2,&local_70,param_1,DAT_091c1e28);
          return;
        }
        goto LAB_042b81c4;
      }
    }
    else {
      if (iVar1 != 1) {
LAB_042b82e4:
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar13 + 0xb8) != '\0') {
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar15 = thunk_FUN_03f9944c();
          uVar9 = thunk_FUN_03fc39d4(&DAT_091fb7c8);
          System_InvalidOperationException___ctor(uVar15,uVar9,0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091f1590);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar15,uVar9);
        }
        *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(param_1 + 8);
        *(undefined1 *)(lVar13 + 0xb8) = 1;
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(param_1 + 10);
        thunk_FUN_03f5d7b8();
        if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x30),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x28),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        plVar8 = *(long **)(lVar13 + 0x20);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar8 + 0x558))(plVar8,0,*(undefined8 *)(*plVar8 + 0x560));
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(*(long *)(param_1 + 10) + 0x18);
        if (iVar1 < 4) {
          if (iVar1 - 1U < 3) {
            if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x20),0);
            *(undefined1 *)(param_1 + 0xc) = 0;
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar14 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 10) + 0x30),0)
            ;
            if ((uVar14 & 1) == 0) {
              CakeOrder_UI_UIFameRewardPreview__LoadMapRecipeConfig(local_d0,lVar13);
              plStack_88 = uStack_c8;
              local_90 = (long *)local_d0;
              local_80 = local_c0;
              FUN_039b5b60(local_d0,&local_90,DAT_091bde50);
              plStack_68 = uStack_c8;
              local_70 = (long *)local_d0;
              local_60 = local_c0;
              uVar14 = FUN_041e5390(&local_70,DAT_0919a608);
              if ((uVar14 & 1) == 0) {
                *param_1 = 0;
                *(long **)(param_1 + 0x10) = plStack_68;
                *(long **)(param_1 + 0xe) = local_70;
                *(ulong *)(param_1 + 0x12) = local_60;
                thunk_FUN_03f5d7b8(param_1 + 0xe,0);
                FUN_042c5658(param_1 + 2,&local_70,param_1,DAT_091c1e28);
                return;
              }
              goto LAB_042b8420;
            }
            goto LAB_042b8abc;
          }
        }
        else if (iVar1 < 6) {
          if (iVar1 == 4) {
            if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x30),0);
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar14 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 10) + 0x20),0)
            ;
            auVar3._8_8_ = local_a0._8_8_;
            auVar3._0_8_ = local_a0._0_8_;
            auVar2._8_8_ = uStack_c8;
            auVar2._0_8_ = local_d0;
            if ((uVar14 & 1) != 0) goto LAB_042b8b0c;
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            _local_d0 = CakeOrder_UI_UIFameRewardPreview__LoadPetAssistantAvatarPrefabAsync
                                  (lVar13,*(undefined8 *)(*(long *)(param_1 + 10) + 0x20));
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            thunk_FUN_03f5d7b8(local_d0,0);
            local_a0 = _local_d0;
            uVar14 = FUN_042c5110(local_a0,0);
            if ((uVar14 & 1) == 0) {
              *param_1 = 3;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_a0;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              FUN_042c5764(param_1 + 2,local_a0,param_1,DAT_091c2190);
              return;
            }
            goto LAB_042b8270;
          }
          if (iVar1 == 5) {
            if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x38),0);
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar8 = *(long **)(lVar13 + 0x20);
            uVar15 = System_String__Concat
                               (*(undefined8 *)(*(long *)(param_1 + 10) + 0x20),DAT_091f5f40,0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar15,uVar15);
            }
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar15,*(undefined8 *)(*plVar8 + 0x560));
            auVar3._8_8_ = local_a0._8_8_;
            auVar3._0_8_ = local_a0._0_8_;
            auVar2._8_8_ = uStack_c8;
            auVar2._0_8_ = local_d0;
            goto LAB_042b8b0c;
          }
        }
        else {
          if (iVar1 == 6) {
            if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x48),0);
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar8 = *(long **)(lVar13 + 0x20);
            uVar15 = System_String__Concat
                               (*(undefined8 *)(*(long *)(param_1 + 10) + 0x20),DAT_091f5ee8,0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar15,uVar15);
            }
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar15,*(undefined8 *)(*plVar8 + 0x560));
            auVar3._8_8_ = local_a0._8_8_;
            auVar3._0_8_ = local_a0._0_8_;
            auVar2._8_8_ = uStack_c8;
            auVar2._0_8_ = local_d0;
            goto LAB_042b8b0c;
          }
          if (iVar1 == 7) {
            if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x40),0);
            auVar3._8_8_ = local_a0._8_8_;
            auVar3._0_8_ = local_a0._0_8_;
            auVar2._8_8_ = uStack_c8;
            auVar2._0_8_ = local_d0;
            goto LAB_042b8b0c;
          }
        }
        if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x28),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        auVar3._8_8_ = local_a0._8_8_;
        auVar3._0_8_ = local_a0._0_8_;
        auVar2._8_8_ = uStack_c8;
        auVar2._0_8_ = local_d0;
        goto LAB_042b8b0c;
      }
      local_60 = *(ulong *)(param_1 + 0x12);
      plStack_68 = *(long **)(param_1 + 0x10);
      local_70 = *(long **)(param_1 + 0xe);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
LAB_042b81c4:
      plVar5 = local_70;
      plVar8 = plStack_68;
      if (local_70 != (long *)0x0) {
        uVar14 = local_60 & 0xffff;
        lVar6 = *(long *)(DAT_0919a600 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c(lVar6);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_042b87a8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar5,lVar6,0);
LAB_042b87a8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar5,uVar14,puVar7[1]);
      }
      if (plVar8 != (long *)0x0) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(*(long *)(param_1 + 10) + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = System_String__Split(lVar6,0x2c,0,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar14 = 0;
          uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar15 = *(undefined8 *)(lVar6 + uVar14 * 8 + 0x20);
            uVar11 = System_String__IsNullOrEmpty(uVar15,0);
            if ((uVar11 & 1) == 0) {
              lVar10 = *plVar8;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_09186040) {
                    puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_042b887c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186040,1);
LAB_042b887c:
              lVar10 = (*(code *)*puVar7)(plVar8,uVar15,puVar7[1]);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = UnityEngine_Object__op_Inequality(lVar10,0,0);
              if ((uVar11 & 1) != 0) {
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_UI_Image__set_sprite
                          (*(long *)(lVar13 + 0x28),*(undefined8 *)(lVar10 + 0x38),0);
                plVar8 = *(long **)(lVar13 + 0x20);
                uVar15 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar10,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar15,uVar15);
                }
                (**(code **)(*plVar8 + 0x558))(plVar8,uVar15,*(undefined8 *)(*plVar8 + 0x560));
                *(undefined1 *)((long)param_1 + 0x31) = 1;
                break;
              }
            }
            uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
    }
    auVar3._8_8_ = local_a0._8_8_;
    auVar3._0_8_ = local_a0._0_8_;
    auVar2._8_8_ = uStack_c8;
    auVar2._0_8_ = local_d0;
    if (*(char *)((long)param_1 + 0x31) == '\0') {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite
                (*(long *)(lVar13 + 0x28),*(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x28),0);
      *(undefined1 *)((long)param_1 + 0x32) = 0;
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 10) + 0x20),0);
      auVar3._8_8_ = local_a0._8_8_;
      auVar3._0_8_ = local_a0._0_8_;
      auVar2._8_8_ = uStack_c8;
      auVar2._0_8_ = local_d0;
      if ((uVar14 & 1) != 0) goto LAB_042b8b0c;
      CakeOrder_UI_UIFameRewardPreview__LoadMapRecipeConfig(local_d0,lVar13);
      local_80 = local_c0;
      plStack_88 = uStack_c8;
      uStack_c8 = (long *)0x0;
      local_c0 = 0;
      local_90 = (long *)local_d0;
      local_d0 = (undefined1  [8])0x0;
      if ((*(byte *)(*(long *)(DAT_091bde50 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_c8 = plStack_88;
      local_d0 = (undefined1  [8])local_90;
      local_c0 = local_80;
      thunk_FUN_03f5d7b8(local_d0,0);
      plStack_68 = uStack_c8;
      local_70 = (long *)local_d0;
      local_60 = local_c0;
      uVar14 = FUN_041e5390(&local_70,DAT_0919a608);
      if ((uVar14 & 1) == 0) {
        *param_1 = 2;
        *(long **)(param_1 + 0x10) = plStack_68;
        *(long **)(param_1 + 0xe) = local_70;
        *(ulong *)(param_1 + 0x12) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_042c5658(param_1 + 2,&local_70,param_1,DAT_091c1e28);
        return;
      }
LAB_042b84c8:
      plVar5 = local_70;
      auVar3._8_8_ = local_a0._8_8_;
      auVar3._0_8_ = local_a0._0_8_;
      auVar2._8_8_ = uStack_c8;
      auVar2._0_8_ = local_d0;
      plVar8 = plStack_68;
      if (local_70 != (long *)0x0) {
        uVar14 = local_60 & 0xffff;
        lVar6 = *(long *)(DAT_0919a600 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c(lVar6);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_042b8690;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar5,lVar6,0);
LAB_042b8690:
        plVar8 = (long *)(*(code *)*puVar7)(plVar5,uVar14,puVar7[1]);
        auVar3._8_8_ = local_a0._8_8_;
        auVar3._0_8_ = local_a0._0_8_;
        auVar2._8_8_ = uStack_c8;
        auVar2._0_8_ = local_d0;
      }
      if (plVar8 != (long *)0x0) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar8;
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09186040) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_042b8708;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186040,0);
LAB_042b8708:
        lVar6 = (*(code *)*puVar7)(plVar8,uVar15,puVar7[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Inequality(lVar6,0,0);
        auVar3._8_8_ = local_a0._8_8_;
        auVar3._0_8_ = local_a0._0_8_;
        auVar2._8_8_ = uStack_c8;
        auVar2._0_8_ = local_d0;
        if ((uVar14 & 1) != 0) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_UI_Image__set_sprite(*(long *)(lVar13 + 0x28),*(undefined8 *)(lVar6 + 0x38),0)
          ;
          plVar8 = *(long **)(lVar13 + 0x20);
          uVar15 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar6,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar15,uVar15);
          }
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar15,*(undefined8 *)(*plVar8 + 0x560));
          auVar3._8_8_ = local_a0._8_8_;
          auVar3._0_8_ = local_a0._0_8_;
          auVar2._8_8_ = uStack_c8;
          auVar2._0_8_ = local_d0;
          *(undefined1 *)((long)param_1 + 0x32) = 1;
          goto LAB_042b8b0c;
        }
      }
    }
  }
  else {
    if (iVar1 == 2) {
      local_60 = *(ulong *)(param_1 + 0x12);
      plStack_68 = *(long **)(param_1 + 0x10);
      local_70 = *(long **)(param_1 + 0xe);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_042b84c8;
    }
    if (iVar1 != 3) goto LAB_042b82e4;
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_042b8270:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar15 = local_a0._0_8_;
    auVar2 = _local_d0;
    auVar3 = local_a0;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar11 = local_a0._8_8_ & 0xffff;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_042b8a04;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_042b8a04:
      (*(code *)*puVar7)(uVar15,uVar11,puVar7[1]);
      auVar2 = _local_d0;
      auVar3 = local_a0;
    }
  }
LAB_042b8b08:
  if (lVar13 == 0) {
    _local_d0 = auVar2;
    local_a0 = auVar3;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042b8b0c:
  *(undefined1 *)(lVar13 + 0xb8) = 0;
  cVar4 = DAT_095162d8;
  *param_1 = -2;
  _local_d0 = auVar2;
  local_a0 = auVar3;
  if (cVar4 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_042b8b98;
        }
        uVar14 = uVar14 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_042b8b98:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  return;
}

