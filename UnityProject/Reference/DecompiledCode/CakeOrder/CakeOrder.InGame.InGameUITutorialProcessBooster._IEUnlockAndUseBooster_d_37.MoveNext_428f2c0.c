// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster.<IEUnlockAndUseBooster>d__37$$MoveNext
// address: 0x428f2c0
// body: available
// range: 0x428f2c0-0x428ff03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428ff00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CakeOrder_InGame_InGameUITutorialProcessBooster_<IEUnlockAndUseBooster>d__37__MoveNext
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((DAT_0951718e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a18);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cfd40);
    FUN_03f5c2a4(&DAT_091cfd28);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918cec0);
    FUN_03f5c2a4(&DAT_092244d0);
    DAT_0951718e = 1;
  }
  iVar1 = *(int *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x20);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if ((((lVar8 != 0) && (*(long *)(lVar8 + 0xd0) != 0)) && (*(long *)(lVar8 + 0xe0) != 0)) &&
         ((lVar2 = *(long *)(*(long *)(lVar8 + 0xd0) + 0x18), lVar2 != 0 &&
          (lVar2 = CakeOrder_InGame_UIInLevelCakeOrder__GetBoosterPlacement
                             (lVar2,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x18),0), lVar2 != 0))
         )) {
        plVar3 = (long *)(param_5 + 0x28);
        *plVar3 = *(long *)(lVar2 + 0x18);
        thunk_FUN_03f5d7b8(plVar3);
        if ((*plVar3 != 0) && (*(long *)(lVar8 + 0x98) != 0)) {
          UnityEngine_Transform__SetParent
                    (*(long *)(lVar8 + 0x98),*(undefined8 *)(*plVar3 + 0xb0),0);
          if (*(long *)(lVar8 + 0x98) != 0) {
            UnityEngine_Transform__SetAsFirstSibling(*(long *)(lVar8 + 0x98),0);
            lVar2 = *(long *)(lVar8 + 0x98);
            if (DAT_09515ce6 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515ce6 = '\x01';
            }
            puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
            uVar10 = *puVar6;
            uVar15 = puVar6[1];
            uVar16 = puVar6[2];
            if (DAT_09515ed5 == '\0') {
              FUN_03f5c2a4(&DAT_091898c0);
              DAT_09515ed5 = '\x01';
            }
            if (lVar2 != 0) {
              puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
              UnityEngine_Transform__SetLocalPositionAndRotation
                        (uVar10,uVar15,uVar16,*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar2,0);
              lVar2 = *(long *)(lVar8 + 0x98);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              if (lVar2 != 0) {
                lVar7 = *(long *)(DAT_0918cbd0 + 0xb8);
                UnityEngine_Transform__set_localScale
                          (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                           *(undefined4 *)(lVar7 + 0x14),lVar2,0);
                Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar8 + 0xa8),0);
                Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar8 + 0xb0),0);
                if ((*(long *)(lVar8 + 0x98) != 0) &&
                   (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x98),0),
                   lVar2 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar2,1,0);
                  if ((*plVar3 != 0) && (*(long *)(lVar8 + 0xa0) != 0)) {
                    UnityEngine_Transform__SetParent
                              (*(long *)(lVar8 + 0xa0),*(undefined8 *)(*plVar3 + 0xc0),0);
                    if (*(long *)(lVar8 + 0xa0) != 0) {
                      UnityEngine_Transform__SetAsLastSibling(*(long *)(lVar8 + 0xa0),0);
                      lVar2 = *(long *)(lVar8 + 0xa0);
                      if (DAT_09515ce6 == '\0') {
                        FUN_03f5c2a4(&DAT_0918cbd0);
                        DAT_09515ce6 = '\x01';
                      }
                      puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
                      uVar10 = *puVar6;
                      uVar15 = puVar6[1];
                      uVar16 = puVar6[2];
                      if (DAT_09515ed5 == '\0') {
                        FUN_03f5c2a4(&DAT_091898c0);
                        DAT_09515ed5 = '\x01';
                      }
                      if (lVar2 != 0) {
                        puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
                        UnityEngine_Transform__SetLocalPositionAndRotation
                                  (uVar10,uVar15,uVar16,*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar2,
                                   0);
                        lVar2 = *(long *)(lVar8 + 0xa0);
                        if (DAT_09515cf3 == '\0') {
                          FUN_03f5c2a4(&DAT_0918cbd0);
                          DAT_09515cf3 = '\x01';
                        }
                        if (lVar2 != 0) {
                          lVar7 = *(long *)(DAT_0918cbd0 + 0xb8);
                          UnityEngine_Transform__set_localScale
                                    (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                                     *(undefined4 *)(lVar7 + 0x14),lVar2,0);
                          if ((*(long *)(lVar8 + 0xb8) != 0) &&
                             (lVar2 = UnityEngine_GameObject__get_gameObject
                                                (*(long *)(lVar8 + 0xb8),0), lVar2 != 0)) {
                            UnityEngine_GameObject__SetActive(lVar2,0,0);
                            if ((*(long *)(lVar8 + 0xa0) != 0) &&
                               (lVar2 = UnityEngine_Component__get_gameObject
                                                  (*(long *)(lVar8 + 0xa0),0), lVar2 != 0)) {
                              UnityEngine_GameObject__SetActive(lVar2,1,0);
                              if (*(long *)(lVar8 + 0xc0) != 0) {
                                uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x10);
                                uVar4 = thunk_FUN_03f9944c(DAT_0918ce98);
                                UnityEngine_WaitForSecondsRealtime___ctor(uVar10,uVar4,0);
                                *(undefined8 *)(param_5 + 0x18) = uVar4;
                                thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),uVar4);
                                *(undefined4 *)(param_5 + 0x10) = 1;
                                return 1;
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
        }
      }
      goto LAB_0428ff00;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x70), lVar2 == 0)) goto LAB_0428ff00;
      Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar2,lVar8,0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_0428ff00;
      uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x28) + 0xb8);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092244d0,0);
      if (lVar8 == 0) goto LAB_0428ff00;
      CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar8,uVar4,uVar5,0);
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((*(long *)(lVar8 + 0xc0) == 0) || (**(long **)(lVar2 + 0xb8) == 0)) goto LAB_0428ff00;
      CakeOrder_AudioManagerCakeOrder__PlaySfx
                (0x3f800000,**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40),3,0);
      MoreMountains_NiceVibrations_MMVibrationManager__Haptic(4,0);
      uVar10 = UnityEngine_Time__get_unscaledTime(0);
      plVar3 = *(long **)(lVar8 + 0xa8);
      *(undefined4 *)(param_5 + 0x30) = uVar10;
      if (plVar3 == (long *)0x0) goto LAB_0428ff00;
      uVar10 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      *(undefined4 *)(param_5 + 0x34) = uVar10;
      *(float *)(param_5 + 0x38) = param_2;
      *(undefined4 *)(param_5 + 0x3c) = param_3;
      *(undefined4 *)(param_5 + 0x40) = param_4;
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0xd8), lVar2 == 0)) goto LAB_0428ff00;
      UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      fVar11 = (float)UnityEngine_Random__get_insideUnitCircle(0);
      if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_0428ff00;
      fVar13 = *(float *)(*(long *)(lVar8 + 0xc0) + 0x24);
      *(float *)(param_5 + 0x44) = fVar11 * fVar13;
      *(float *)(param_5 + 0x48) = param_2 * fVar13;
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (lVar8 == 0) goto LAB_0428ff00;
    }
    lVar2 = *(long *)(lVar8 + 0xc0);
    if (lVar2 == 0) goto LAB_0428ff00;
    if (fVar11 < *(float *)(param_5 + 0x30) + *(float *)(lVar2 + 0x1c)) {
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
      lVar2 = *(long *)(lVar8 + 0xc0);
      if (lVar2 == 0) goto LAB_0428ff00;
      fVar11 = (float)Utilities_MathExtension__EvaluateEase
                                ((fVar11 - *(float *)(param_5 + 0x30)) / *(float *)(lVar2 + 0x1c),
                                 *(undefined4 *)(lVar2 + 0x14),0);
      if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_0428ff00;
      plVar3 = *(long **)(lVar8 + 0xa8);
      *(float *)(param_5 + 0x40) = fVar11 * *(float *)(*(long *)(lVar8 + 0xc0) + 0x18);
      if (plVar3 == (long *)0x0) goto LAB_0428ff00;
      (**(code **)(*plVar3 + 0x2a8))
                (*(undefined4 *)(param_5 + 0x34),*(undefined4 *)(param_5 + 0x38),
                 *(undefined4 *)(param_5 + 0x3c),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      fVar13 = *(float *)(param_5 + 0x44);
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_0428ff00;
      fVar11 = sinf(fVar13 + fVar11 * *(float *)(*(long *)(lVar8 + 0xc0) + 0x24));
      fVar14 = *(float *)(param_5 + 0x48);
      fVar13 = (float)UnityEngine_Time__get_unscaledTime(0);
      lVar8 = *(long *)(lVar8 + 0xc0);
      if (((lVar8 == 0) || (*(long *)(param_5 + 0x28) == 0)) ||
         (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0xd8), lVar2 == 0)) goto LAB_0428ff00;
      fVar13 = sinf(fVar14 + fVar13 * *(float *)(lVar8 + 0x24));
      UnityEngine_RectTransform__set_anchoredPosition
                (fVar11 * *(float *)(lVar8 + 0x20),*(float *)(lVar8 + 0x20) * fVar13,lVar2,0);
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
      uVar10 = 2;
      goto LAB_0428fed4;
    }
    uVar10 = *(undefined4 *)(lVar2 + 0x18);
    plVar3 = *(long **)(lVar8 + 0xa8);
    *(undefined4 *)(param_5 + 0x40) = uVar10;
    if (plVar3 == (long *)0x0) goto LAB_0428ff00;
    fVar11 = *(float *)(param_5 + 0x38);
    uVar16 = *(undefined4 *)(param_5 + 0x3c);
    (**(code **)(*plVar3 + 0x2a8))
              (*(undefined4 *)(param_5 + 0x34),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    uVar15 = UnityEngine_Time__get_unscaledTime(0);
    plVar3 = *(long **)(lVar8 + 0xb0);
    *(undefined4 *)(param_5 + 0x30) = uVar15;
    if (plVar3 == (long *)0x0) goto LAB_0428ff00;
    uVar15 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    *(undefined4 *)(param_5 + 0x34) = uVar15;
    *(float *)(param_5 + 0x38) = fVar11;
    *(undefined4 *)(param_5 + 0x3c) = uVar16;
    *(undefined4 *)(param_5 + 0x40) = uVar10;
    if ((*(long *)(param_5 + 0x28) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0xd8), lVar2 == 0)) goto LAB_0428ff00;
    UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    fVar13 = (float)UnityEngine_Random__get_insideUnitCircle(0);
    if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_0428ff00;
    fVar14 = *(float *)(*(long *)(lVar8 + 0xc0) + 0x30);
    *(float *)(param_5 + 0x44) = fVar13 * fVar14;
    *(float *)(param_5 + 0x48) = fVar11 * fVar14;
    fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
LAB_0428fd64:
    lVar2 = *(long *)(lVar8 + 0xc0);
    if (lVar2 != 0) {
      if (*(float *)(param_5 + 0x30) + *(float *)(lVar2 + 0x28) <= fVar11) {
        plVar3 = *(long **)(lVar8 + 0xb0);
        *(undefined4 *)(param_5 + 0x40) = *(undefined4 *)(lVar2 + 0x18);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x2a8))
                    (*(undefined4 *)(param_5 + 0x34),*(undefined4 *)(param_5 + 0x38),
                     *(undefined4 *)(param_5 + 0x3c),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
          if (*(long *)(lVar8 + 0xc0) != 0) {
            uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0xc0) + 0x34);
            uVar4 = thunk_FUN_03f9944c(DAT_0918ce98);
            UnityEngine_WaitForSecondsRealtime___ctor(uVar10,uVar4,0);
            *(undefined8 *)(param_5 + 0x18) = uVar4;
            thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),uVar4);
            uVar10 = 4;
LAB_0428fed4:
            *(undefined4 *)(param_5 + 0x10) = uVar10;
            return 1;
          }
        }
      }
      else {
        fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
        lVar2 = *(long *)(lVar8 + 0xc0);
        if (lVar2 != 0) {
          fVar11 = (float)Utilities_MathExtension__EvaluateEase
                                    ((fVar11 - *(float *)(param_5 + 0x30)) /
                                     *(float *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x14),0);
          if (*(long *)(lVar8 + 0xc0) != 0) {
            plVar3 = *(long **)(lVar8 + 0xb0);
            *(float *)(param_5 + 0x40) = fVar11 * *(float *)(*(long *)(lVar8 + 0xc0) + 0x18);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x2a8))
                        (*(undefined4 *)(param_5 + 0x34),*(undefined4 *)(param_5 + 0x38),
                         *(undefined4 *)(param_5 + 0x3c),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
              fVar13 = *(float *)(param_5 + 0x44);
              fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
              if (*(long *)(lVar8 + 0xc0) != 0) {
                fVar11 = sinf(fVar13 + fVar11 * *(float *)(*(long *)(lVar8 + 0xc0) + 0x30));
                fVar14 = *(float *)(param_5 + 0x48);
                fVar13 = (float)UnityEngine_Time__get_unscaledTime(0);
                lVar8 = *(long *)(lVar8 + 0xc0);
                if (((lVar8 != 0) && (*(long *)(param_5 + 0x28) != 0)) &&
                   (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0xd8), lVar2 != 0)) {
                  fVar13 = sinf(fVar14 + fVar13 * *(float *)(lVar8 + 0x30));
                  UnityEngine_RectTransform__set_anchoredPosition
                            (fVar11 * *(float *)(lVar8 + 0x2c),*(float *)(lVar8 + 0x2c) * fVar13,
                             lVar2,0);
                  *(undefined8 *)(param_5 + 0x18) = 0;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
                  uVar10 = 3;
                  goto LAB_0428fed4;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
        fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
        if (lVar8 == 0) goto LAB_0428ff00;
        goto LAB_0428fd64;
      }
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if ((((lVar8 == 0) || (*(long *)(lVar8 + 0xb8) == 0)) ||
          (lVar2 = UnityEngine_GameObject__get_gameObject(*(long *)(lVar8 + 0xb8),0), lVar2 == 0))
         || (UnityEngine_GameObject__SetActive(lVar2,1,0), *(long *)(param_5 + 0x28) == 0))
      goto LAB_0428ff00;
      CakeOrder_InGame_UIButtonHUD__Unlock();
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((*(long *)(lVar8 + 0xc0) == 0) || (**(long **)(lVar2 + 0xb8) == 0)) goto LAB_0428ff00;
      CakeOrder_AudioManagerCakeOrder__PlaySfx
                (0x3f800000,**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48),3,0);
      MoreMountains_NiceVibrations_MMVibrationManager__Haptic(4,0);
      uVar10 = UnityEngine_Time__get_unscaledTime(0);
      *(undefined4 *)(param_5 + 0x30) = uVar10;
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      if (iVar1 != 5) {
        if (iVar1 != 6) {
          return 0;
        }
        lVar2 = *(long *)(param_5 + 0x28);
        *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
        uVar4 = thunk_FUN_03f9944c(DAT_09174a18);
        FUN_070a8c30(uVar4,lVar8,DAT_091cfd40,0);
        if (lVar2 != 0) {
          CakeOrder_InGame_UIButtonHUD__remove_onClicked(lVar2,uVar4);
          if ((*(long *)(param_5 + 0x28) != 0) && (lVar8 != 0)) {
            CakeOrder_UI_UITutorialProcessBase__HideTutInstruct
                      (lVar8,*(undefined8 *)(*(long *)(param_5 + 0x28) + 0xb8),0);
            if (*(long *)(lVar8 + 0x20) != 0) {
              uVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                                (0,0x3e4ccccd,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x38),0);
              uVar4 = FUN_04d9656c(uVar4,1,DAT_091dc008);
              FUN_04d8dd74(uVar4,DAT_091dbc98);
              return 0;
            }
          }
        }
        goto LAB_0428ff00;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (lVar8 == 0) goto LAB_0428ff00;
    }
    if (*(long *)(lVar8 + 0xc0) != 0) {
      if (*(float *)(param_5 + 0x30) + *(float *)(*(long *)(lVar8 + 0xc0) + 0x38) <= fVar11) {
        lVar2 = *(long *)(lVar8 + 0x98);
        *(undefined4 *)(param_5 + 0x40) = 0;
        if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 != 0)) {
          UnityEngine_GameObject__SetActive(lVar2,0,0);
          if ((*(long *)(lVar8 + 0xa0) != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0xa0),0), lVar2 != 0))
          {
            UnityEngine_GameObject__SetActive(lVar2,0,0);
            if ((*(long *)(param_5 + 0x28) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x70), lVar2 != 0)) {
              Utilities_BoolModifierWithRegisteredSource__RemoveModifier(lVar2,lVar8,0);
              if ((*(long *)(param_5 + 0x28) != 0) &&
                 (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x70), lVar2 != 0)) {
                Utilities_BoolModifierWithRegisteredSource__ClearAll(lVar2,0);
                lVar2 = *(long *)(param_5 + 0x28);
                *(undefined1 *)(lVar8 + 200) = 0;
                uVar4 = thunk_FUN_03f9944c(DAT_09174a18);
                FUN_070a8c30(uVar4,lVar8,DAT_091cfd40,0);
                if (lVar2 != 0) {
                  CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar2,uVar4);
                  uVar4 = thunk_FUN_03f9944c(DAT_09177ab8);
                  FUN_053007d8(uVar4,lVar8,DAT_091cfd28,0);
                  uVar5 = thunk_FUN_03f9944c(DAT_0918cec0);
                  UnityEngine_WaitUntil___ctor(uVar5,uVar4,0);
                  *(undefined8 *)(param_5 + 0x18) = uVar5;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),uVar5);
                  uVar10 = 6;
                  goto LAB_0428fed4;
                }
              }
            }
          }
        }
      }
      else {
        fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
        lVar2 = *(long *)(lVar8 + 0xc0);
        if (lVar2 != 0) {
          fVar11 = (float)Utilities_MathExtension__EvaluateEase
                                    ((fVar11 - *(float *)(param_5 + 0x30)) /
                                     *(float *)(lVar2 + 0x38),*(undefined4 *)(lVar2 + 0x14),0);
          if (*(long *)(lVar8 + 0xc0) != 0) {
            plVar3 = *(long **)(lVar8 + 0xb0);
            fVar13 = 1.0;
            if (fVar11 <= 1.0) {
              fVar13 = fVar11;
            }
            fVar12 = *(float *)(*(long *)(lVar8 + 0xc0) + 0x18);
            fVar14 = 0.0;
            if (0.0 <= fVar11) {
              fVar14 = fVar13;
            }
            fVar12 = fVar12 + fVar14 * (0.0 - fVar12);
            *(float *)(param_5 + 0x40) = fVar12;
            if (plVar3 != (long *)0x0) {
              uVar15 = *(undefined4 *)(param_5 + 0x38);
              uVar10 = *(undefined4 *)(param_5 + 0x3c);
              uVar16 = *(undefined4 *)(param_5 + 0x34);
              plVar9 = *(long **)(lVar8 + 0xa8);
              (**(code **)(*plVar3 + 0x2a8))
                        (uVar16,uVar15,uVar10,fVar12,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2a8))
                          (uVar16,uVar15,uVar10,fVar12,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
                *(undefined8 *)(param_5 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
                uVar10 = 5;
                goto LAB_0428fed4;
              }
            }
          }
        }
      }
    }
  }
LAB_0428ff00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

