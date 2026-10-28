// rea decompile_all
// name: AnhPD.FoodOrder.TutorialStepTap.<Run>d__4$$MoveNext
// address: 0x411a6ac
// body: available
// range: 0x411a6ac-0x411adbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411ad60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411ad8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialStepTap_<Run>d__4__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0951625b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2178);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091b1070);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_0917cea8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09211650);
    DAT_0951625b = 1;
  }
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (*param_3 == 0) {
    local_60 = *(undefined1 (*) [16])(param_3 + 10);
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    *param_3 = -1;
  }
  else {
    lVar15 = *(long *)(param_3 + 8);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *(long *)(param_3 + 6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = AnhPD_FoodOrder_TutorialTargetResolver__Resolve
                      (*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar9 + 0x28),
                       *(undefined8 *)(lVar9 + 0x30));
    if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar12,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = *(undefined8 *)(lVar15 + 0x28);
      uVar1 = *(undefined8 *)(lVar15 + 0x30);
      lVar9 = *(long *)(*(long *)(param_3 + 6) + 0x18);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = CakeOrder_Localization_CakeLocalization__Get(DAT_09211650,uVar1,uVar12,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar12,uVar12);
      }
      AnhPD_FoodOrder_TutorialTalkView__ShowGuide(lVar9,uVar12,*(undefined4 *)(lVar15 + 0x38));
    }
    if (*(char *)(lVar15 + 0x20) != '\0') {
      if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar12,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(*(long *)(param_3 + 6) + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = UnityEngine_Component__get_gameObject(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar9,1,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
        lVar9 = *(long *)(param_3 + 6);
        if ((uVar6 & 1) == 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = *(undefined8 *)(lVar9 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar6 & 1) != 0) {
            lVar9 = *(long *)(param_3 + 6);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(char *)(*(long *)(lVar9 + 0x10) + 0x98) != '\0') {
              plVar13 = *(long **)(lVar9 + 0x20);
              lVar9 = thunk_FUN_03f9944c(DAT_0917d050);
              FUN_058abd7c(lVar9,DAT_091b19a0);
              if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(*(long *)(param_3 + 6) + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar16 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_WorldCenter();
              lVar7 = DAT_091b19b8;
              if (lVar9 == 0) {
LAB_0411adac:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_0411adac;
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar2 * 8;
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar10 + 0x20) = uVar16;
                *(undefined4 *)(lVar10 + 0x24) = param_2;
              }
              else {
                FUN_058ac614(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                            );
              }
              if (plVar13 == (long *)0x0) goto LAB_0411adac;
              (**(code **)(*plVar13 + 0x178))(plVar13,lVar9,*(undefined8 *)(*plVar13 + 0x180));
            }
          }
        }
        else {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar13 = *(long **)(lVar9 + 0x20);
          lVar7 = thunk_FUN_03f9944c(DAT_0917cea8);
          FUN_057e0400(lVar7,DAT_091b1070);
          lVar9 = DAT_091b1080;
          if (lVar7 == 0) {
LAB_0411ad94:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0411ad94;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *puVar8 = uVar5;
            thunk_FUN_03f5d7b8(puVar8,uVar5);
          }
          else {
            FUN_057e0c68(lVar7,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (plVar13 == (long *)0x0) goto LAB_0411ad94;
          (**(code **)(*plVar13 + 0x188))(plVar13,lVar7,*(undefined8 *)(*plVar13 + 400));
        }
      }
    }
    if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = AnhPD_FoodOrder_TutorialContext__WaitForTap
                         (*(long *)(param_3 + 6),*(undefined8 *)(lVar15 + 0x18));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_50,0);
    uVar12 = local_50._8_8_;
    uVar5 = local_50._0_8_;
    local_60 = local_50;
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
    if ((long *)uVar5 != (long *)0x0) {
      lVar15 = *(long *)uVar5;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091868c0) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0411ab4c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(uVar5,DAT_091868c0,0);
LAB_0411ab4c:
      iVar4 = (*(code *)*puVar8)(uVar5,uVar12 & 0xffffffff,puVar8[1]);
      if (iVar4 == 0) {
        *param_3 = 0;
        *(undefined1 (*) [16])(param_3 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_3 + 10,0);
        FUN_041263e0(param_3 + 2,local_60,param_3,DAT_091c2178);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar15 = *(long *)local_60._0_8_;
    uVar14 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091868c0) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0411abe4;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0411abe4:
    (*(code *)*puVar8)(uVar5,uVar14,puVar8[1]);
  }
  if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar13 = *(long **)(*(long *)(param_3 + 6) + 0x20);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0));
  }
  if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*(long *)(param_3 + 6) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    AnhPD_FoodOrder_TutorialTalkView__HideGuide();
  }
  cVar3 = DAT_095162d8;
  *param_3 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar13 = *(long **)(param_3 + 2);
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0411ad04;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_0411ad04:
    (*(code *)*puVar8)(plVar13,puVar8[1]);
  }
  return;
}

