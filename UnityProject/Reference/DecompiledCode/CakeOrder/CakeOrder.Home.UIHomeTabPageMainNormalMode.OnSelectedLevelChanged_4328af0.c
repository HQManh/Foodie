// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainNormalMode$$OnSelectedLevelChanged
// address: 0x4328af0
// body: available
// range: 0x4328af0-0x4329503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43294f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43294f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4329500 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainNormalMode__OnSelectedLevelChanged(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_64;
  undefined8 local_38;
  
  if ((DAT_09517699 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba230);
    FUN_03f5c2a4(&DAT_091ba270);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbce8);
    FUN_03f5c2a4(&DAT_091dcb58);
    FUN_03f5c2a4(&DAT_0918c400);
    FUN_03f5c2a4(&DAT_092185c8);
    FUN_03f5c2a4(&DAT_0921a2c8);
    FUN_03f5c2a4(&DAT_0921b3b8);
    FUN_03f5c2a4(&DAT_0921b3b0);
    DAT_09517699 = 1;
  }
  local_38 = 0;
  uVar5 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x28) == 0)) goto LAB_043294f0;
  lVar12 = *(long *)(*(long *)(lVar9 + 0x28) + 0x60);
  lVar9 = *(long *)(lVar9 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar9,0,0);
  if ((uVar5 & 1) == 0) {
LAB_04328c68:
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar12 == 0) goto LAB_043294f0;
      iVar3 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(lVar12,0);
      if (0 < iVar3) goto LAB_04328ca8;
    }
LAB_04328d18:
    uVar8 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = CakeOrder_Home_UIHomeTabPageMainNormalMode__TryGetSelectedLevelLockText
                          (param_1,&local_38), (uVar5 & 1) == 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = CakeOrder_Home_UIHomeTabPageMainNormalMode__IsSelectedLevelWaitingExtraUnlock
                            (param_1), (uVar5 & 1) == 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x68);
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0xa8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0xa8);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092185c8,0);
          if (plVar6 == (long *)0x0) goto LAB_043294f0;
          (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
        }
        uVar8 = *(undefined8 *)(param_1 + 0xa0);
      }
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x90);
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921b3b0,0);
        if (plVar6 == (long *)0x0) goto LAB_043294f0;
        (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
      }
      uVar8 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x98);
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921b3b8,0);
        if (plVar6 == (long *)0x0) goto LAB_043294f0;
        (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
      }
      uVar8 = *(undefined8 *)(param_1 + 0x88);
    }
  }
  else {
    if (lVar9 == 0) goto LAB_043294f0;
    iVar3 = *(int *)(lVar9 + 0x4c);
    if (iVar3 < 1) goto LAB_04328c68;
LAB_04328ca8:
    lVar9 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    if (((*(long *)(param_1 + 0x48) == 0) ||
        (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar10 == 0)) ||
       (**(long **)(lVar9 + 0xb8) == 0)) goto LAB_043294f0;
    uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsLevelWin
                      (**(long **)(lVar9 + 0xb8),*(undefined8 *)(lVar10 + 0x20),iVar3 + -1,0);
    if ((uVar5 & 1) == 0) goto LAB_04328d18;
    uVar8 = *(undefined8 *)(param_1 + 0x70);
  }
  CakeOrder_Home_UIHomeTabPageMainNormalMode__ShowOnlyLevelButton(0,param_1,uVar8);
  uVar5 = CakeOrder_Home_UIHomeTabPageMainNormalMode__IsSelectedMapUpgradeOpen(param_1);
  if ((uVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x130);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar5 & 1) == 0) goto LAB_04328f38;
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_043294f0;
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0xe8),0);
    lVar9 = *(long *)(param_1 + 0x130);
joined_r0x04328fe8:
    if (lVar9 == 0) goto LAB_043294f0;
    CakeOrder_BaseUI_UIElementAbstract__Show(0x3d4ccccd,lVar9,0);
  }
  else {
LAB_04328f38:
    uVar8 = *(undefined8 *)(param_1 + 0x130);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x130) == 0) goto LAB_043294f0;
      CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x130),0);
    }
    if ((((*(long *)(param_1 + 0x48) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) goto LAB_043294f0;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar9,0,0);
    if ((uVar5 & 1) == 0) {
LAB_04328fe4:
      lVar9 = *(long *)(param_1 + 0xe8);
      goto joined_r0x04328fe8;
    }
    if (lVar9 == 0) goto LAB_043294f0;
    uVar5 = CakeOrder_DataSO_MapUpgradeConfig__IsAllUpgradeRewardsClaimed(lVar9,0);
    if ((uVar5 & 1) == 0) goto LAB_04328fe4;
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_043294f0;
    CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xe8),0,0);
  }
  plVar13 = *(long **)(param_1 + 0xb8);
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 != 0)) {
    local_64 = *(int *)(lVar9 + 0x2c) + 1;
    lVar9 = FUN_03f5c42c(DAT_09535420,&local_64);
    if (plVar6 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
        uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_043294f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar6[4] = lVar9;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar9);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a2c8,plVar6,0);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x558))(plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x560));
        uVar8 = *(undefined8 *)(param_1 + 0xb0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_05a8eda4(DAT_091b4950);
          if ((uVar5 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            lVar9 = *(long *)(DAT_091b4948 + 0x20);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            if (((*(long *)(param_1 + 0x48) == 0) ||
                (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar10 == 0)) ||
               (**(long **)(lVar9 + 0xb8) == 0)) goto LAB_043294f0;
            uVar4 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsExtraLevel
                              (**(long **)(lVar9 + 0xb8),*(undefined8 *)(lVar10 + 0x20),
                               *(undefined4 *)(lVar10 + 0x2c),0);
          }
          if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043294f0;
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xb0),uVar4 & 1,0);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar12,0);
        lVar9 = 0;
        if ((uVar5 & 1) != 0) {
          if (((*(long *)(param_1 + 0x48) == 0) ||
              (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 == 0)) || (lVar12 == 0))
          goto LAB_043294f0;
          lVar9 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                            (lVar12,*(undefined4 *)(lVar9 + 0x2c),0);
        }
        lVar12 = *(long *)(param_1 + 0x150);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_043294f4;
          if (lVar9 == 0) {
            if (*(long *)(param_1 + 0xd8) == 0) goto LAB_043294f0;
            uVar14 = *(undefined4 *)(lVar12 + 0x20);
            uVar15 = *(undefined4 *)(lVar12 + 0x24);
            uVar16 = *(undefined4 *)(lVar12 + 0x28);
            uVar17 = *(undefined4 *)(lVar12 + 0x2c);
            CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xd8),0,0);
LAB_04329444:
            DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_1 + 0x158),0,0);
            uVar8 = DG_Tweening_DOTweenModuleUI__DOColor
                              (uVar14,uVar15,uVar16,uVar17,0x3e800000,
                               *(undefined8 *)(param_1 + 0x148),0);
            uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar7,param_1,DAT_091dcb58,0);
            uVar8 = FUN_04d956bc(uVar8,uVar7,DAT_091dbce8);
            *(undefined8 *)(param_1 + 0x158) = uVar8;
            thunk_FUN_03f5d7b8(param_1 + 0x158,uVar8);
            return;
          }
          lVar12 = *(long *)(param_1 + 0x80);
          if (lVar12 == 0) goto LAB_043294f0;
          uVar1 = *(uint *)(lVar9 + 0x14);
          uVar2 = *(uint *)(lVar12 + 0x18) - 1;
          uVar4 = uVar1;
          if ((int)uVar2 <= (int)uVar1) {
            uVar4 = uVar2;
          }
          uVar2 = 0;
          if (-1 < (int)uVar1) {
            uVar2 = uVar4;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_043294f4;
          if (*(long *)(param_1 + 0x78) != 0) {
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(param_1 + 0x78),
                       *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20),0);
            if (*(int *)(DAT_0918c400 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar12 = **(long **)(DAT_0918c400 + 0xb8);
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x14);
              uVar2 = *(uint *)(lVar12 + 0x18) - 1;
              uVar4 = uVar1;
              if ((int)uVar2 <= (int)uVar1) {
                uVar4 = uVar2;
              }
              uVar2 = 0;
              if (-1 < (int)uVar1) {
                uVar2 = uVar4;
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_043294f4;
              uVar8 = *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = CakeOrder_Localization_CakeLocalization__Tr(uVar8,0);
              if ((*(long *)(param_1 + 0xb8) == 0) ||
                 (lVar12 = TMPro_TMP_Text__get_rectTransform(*(long *)(param_1 + 0xb8),0),
                 lVar12 == 0)) goto LAB_043294f0;
              uVar14 = UnityEngine_RectTransform__get_anchoredPosition(lVar12,0);
              uVar5 = System_String__IsNullOrEmpty(uVar8,0);
              lVar12 = *(long *)(param_1 + 0xc0);
              if ((uVar5 & 1) == 0) {
                if ((lVar12 == 0) ||
                   (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))
                goto LAB_043294f0;
                UnityEngine_GameObject__SetActive(lVar12,1,0);
                plVar6 = *(long **)(param_1 + 0xc0);
                if (plVar6 == (long *)0x0) goto LAB_043294f0;
                (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
                puVar11 = (undefined4 *)(param_1 + 0xcc);
              }
              else {
                if ((lVar12 == 0) ||
                   (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))
                goto LAB_043294f0;
                UnityEngine_GameObject__SetActive(lVar12,0,0);
                puVar11 = (undefined4 *)(param_1 + 200);
              }
              if (*(long *)(param_1 + 0xb8) != 0) {
                uVar15 = *puVar11;
                lVar12 = TMPro_TMP_Text__get_rectTransform(*(long *)(param_1 + 0xb8),0);
                if (lVar12 != 0) {
                  UnityEngine_RectTransform__set_anchoredPosition(uVar14,uVar15,lVar12,0);
                  lVar12 = *(long *)(DAT_091b4b60 + 0x20);
                  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_03f95a6c();
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
                  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_03f95a6c();
                  }
                  if (((**(long **)(lVar12 + 0xb8) != 0) &&
                      (lVar12 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetWeatherSO
                                          (**(long **)(lVar12 + 0xb8),*(undefined4 *)(lVar9 + 0x10),
                                           0), lVar12 != 0)) && (*(long *)(param_1 + 0xe0) != 0)) {
                    UnityEngine_UI_Image__set_sprite
                              (*(long *)(param_1 + 0xe0),*(undefined8 *)(lVar12 + 0x38),0);
                    if (*(long *)(param_1 + 0xd8) != 0) {
                      CakeOrder_BaseUI_UIElementAbstract__Show
                                (0x3dcccccd,*(long *)(param_1 + 0xd8),0);
                      lVar12 = *(long *)(param_1 + 0x150);
                      if (lVar12 != 0) {
                        uVar1 = *(uint *)(lVar9 + 0x10);
                        uVar2 = *(uint *)(lVar12 + 0x18) - 1;
                        uVar4 = uVar1;
                        if ((int)uVar2 <= (int)uVar1) {
                          uVar4 = uVar2;
                        }
                        uVar2 = 0;
                        if (-1 < (int)uVar1) {
                          uVar2 = uVar4;
                        }
                        if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_043294f4;
                        lVar12 = lVar12 + (long)(int)uVar2 * 0x10;
                        uVar14 = *(undefined4 *)(lVar12 + 0x20);
                        uVar15 = *(undefined4 *)(lVar12 + 0x24);
                        uVar16 = *(undefined4 *)(lVar12 + 0x28);
                        uVar17 = *(undefined4 *)(lVar12 + 0x2c);
                        goto LAB_04329444;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_043294f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

