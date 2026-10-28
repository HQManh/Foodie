// rea decompile_all
// name: _GAME.EventSale.EventSaleManager$$CheckHomeIcon
// address: 0x77fa62c
// body: available
// range: 0x77fa62c-0x77fae9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fa82c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fabf4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fae9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSaleManager__CheckHomeIcon
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  if ((DAT_0952315c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9b88);
    FUN_03f5c2a4(&DAT_091ca140);
    FUN_03f5c2a4(&DAT_091cb4d0);
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_09178aa8);
    FUN_03f5c2a4(&DAT_09178ab0);
    FUN_03f5c2a4(&DAT_091cd9f8);
    FUN_03f5c2a4(&DAT_091cdbc0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091d4ba8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09172998);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9c48);
    FUN_03f5c2a4(&DAT_091e9c50);
    FUN_03f5c2a4(&DAT_09190738);
    FUN_03f5c2a4(&DAT_09190730);
    FUN_03f5c2a4(&DAT_0920b318);
    FUN_03f5c2a4(&DAT_0920c7b0);
    DAT_0952315c = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_94 = 0.0;
  lVar4 = thunk_FUN_03f9944c(DAT_09190738);
  System_Object___ctor(lVar4,0);
  plVar11 = (long *)(param_5 + 0x28);
  lVar12 = *plVar11;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar5 & 1) == 0) {
    if (**(long **)(DAT_09184268 + 0xb8) != 0) {
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_077fae9c;
      uVar13 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((((uVar5 & 1) == 0) &&
          (uVar5 = _GAME_Bridge_CookOrderBridge__get_IsAtHome(0), (uVar5 & 1) != 0)) &&
         (fVar16 = (float)UnityEngine_Time__get_unscaledTime(0),
         *(float *)(param_5 + 0x38) <= fVar16)) {
        fVar16 = (float)UnityEngine_Time__get_unscaledTime(0);
        *(float *)(param_5 + 0x38) = fVar16 + 0.5;
        uVar5 = _GAME_Bridge_CookOrderBridge__TryGetHomeIconSlot
                          (&local_78,&local_88,&local_90,&local_94,0);
        if ((uVar5 & 1) != 0) {
          lVar12 = FUN_03f5c394(DAT_09180748,1);
          uVar13 = DAT_09172998;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar13 = System_Type__GetTypeFromHandle(uVar13,0);
          if (lVar12 != 0) {
            FUN_039b0da0(lVar12,uVar13);
            FUN_039af17c(lVar12,0,uVar13);
            lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
            UnityEngine_GameObject___ctor(lVar6,DAT_0920b318,lVar12,0);
            if ((lVar6 != 0) && (lVar12 = FUN_04b7c324(lVar6,DAT_091cd9f8), lVar12 != 0)) {
              UnityEngine_Transform__SetParent(lVar12,local_78,0,0);
              UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar12,0);
              UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,lVar12,0);
              UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,lVar12,0);
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_RectTransform__set_sizeDelta
                        (local_80 & 0xffffffff,local_80._4_4_,lVar12,0);
              if (local_78 != 0) {
                fVar16 = (float)local_80;
                uVar5 = local_80 >> 0x20;
                fVar18 = (float)local_88;
                uVar1 = (ulong)local_88 >> 0x20;
                uVar13 = local_88;
                fVar17 = (float)UnityEngine_RectTransform__get_rect(local_78,0);
                fVar19 = ((float)uVar1 + (float)uVar5 * 0.5) - ((float)uVar13 + param_4 * 0.5);
                UnityEngine_RectTransform__set_anchoredPosition
                          (CONCAT44(fVar19,(fVar18 + fVar16 * 0.5) - (fVar17 + param_3 * 0.5)),
                           fVar19,lVar12,0);
                lVar6 = UnityEngine_Component__get_gameObject(lVar12,0);
                plVar15 = (long *)(param_5 + 0x30);
                *plVar15 = lVar6;
                thunk_FUN_03f5d7b8(plVar15,lVar6);
                lVar6 = FUN_03f5c394(DAT_09180748,1);
                uVar13 = System_Type__GetTypeFromHandle(DAT_09172998,0);
                if (lVar6 != 0) {
                  FUN_039b0da0(lVar6,uVar13);
                  FUN_039af17c(lVar6,0,uVar13);
                  lVar7 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar7,DAT_0920c7b0,lVar6,0);
                  if ((lVar7 != 0) && (lVar6 = FUN_04b7c324(lVar7,DAT_091cd9f8), lVar6 != 0)) {
                    UnityEngine_Transform__SetParent(lVar6,lVar12,0,0);
                    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar6,0);
                    UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,lVar6,0);
                    UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,lVar6,0);
                    FUN_0436ebfc(0);
                    UnityEngine_RectTransform__set_sizeDelta(lVar6,0);
                    fVar16 = (float)((ulong)local_90 >> 0x20) -
                             ((float)((ulong)local_88 >> 0x20) + (float)(local_80 >> 0x20) * 0.5);
                    uVar5 = local_80;
                    UnityEngine_RectTransform__set_anchoredPosition
                              (CONCAT44(fVar16,(float)local_90 -
                                               ((float)local_88 + (float)local_80 * 0.5)),fVar16,
                               lVar6,0);
                    fVar16 = (float)uVar5;
                    if (*(long *)(param_5 + 0x20) != 0) {
                      uVar13 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar7 = FUN_04c35338(uVar13,lVar6,DAT_091d4ba8);
                      *plVar11 = lVar7;
                      thunk_FUN_03f5d7b8(plVar11,lVar7);
                      if ((*plVar11 != 0) &&
                         (plVar8 = (long *)UnityEngine_Component__get_transform(*plVar11,0),
                         lVar7 = DAT_09189c98, lVar4 != 0)) {
                        if (plVar8 == (long *)0x0) {
                          *(undefined8 *)(lVar4 + 0x10) = 0;
                        }
                        else if ((*plVar8 != DAT_09189c98) ||
                                (*(long **)(lVar4 + 0x10) = plVar8, *plVar8 != lVar7)) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c8d0(plVar8);
                        }
                        plVar14 = (long *)(lVar4 + 0x10);
                        thunk_FUN_03f5d7b8(plVar14,plVar8);
                        lVar7 = *plVar14;
                        if (lVar7 != 0) {
                          UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,lVar7,0);
                          fVar17 = 0.5;
                          UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,lVar7,0);
                          lVar7 = *plVar14;
                          FUN_0436ebfc(0);
                          if (lVar7 != 0) {
                            UnityEngine_RectTransform__set_anchoredPosition(lVar7,0);
                            if ((*plVar11 != 0) && (lVar7 = *(long *)(*plVar11 + 0x28), lVar7 != 0))
                            {
                              uVar13 = FUN_04b7ceb4(lVar7,1,DAT_091cdbc0);
                              uVar9 = thunk_FUN_03f9944c(DAT_09178aa8);
                              FUN_05322d94(uVar9,lVar4,DAT_091e9c50,0);
                              uVar13 = FUN_04b0cafc(uVar13,uVar9,DAT_091cb4d0);
                              if (*(int *)(DAT_09190730 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_09190730);
                              }
                              puVar10 = *(undefined8 **)(DAT_09190730 + 0xb8);
                              lVar4 = puVar10[1];
                              if (lVar4 == 0) {
                                if (*(int *)(DAT_09190730 + 0xe4) == 0) {
                                  FUN_03f5c424(DAT_09190730);
                                  puVar10 = *(undefined8 **)(DAT_09190730 + 0xb8);
                                }
                                uVar9 = *puVar10;
                                lVar4 = thunk_FUN_03f9944c(DAT_09178ab0);
                                FUN_05324834(lVar4,uVar9,DAT_091e9c48,0);
                                plVar8 = (long *)(*(long *)(DAT_09190730 + 0xb8) + 8);
                                *plVar8 = lVar4;
                                thunk_FUN_03f5d7b8(plVar8,lVar4);
                              }
                              uVar13 = FUN_04aeb2a4(uVar13,lVar4,DAT_091ca140);
                              lVar4 = FUN_04ae45c0(uVar13,DAT_091c9b88);
                              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                FUN_03f5c424(DAT_09188ad0);
                              }
                              uVar5 = UnityEngine_Object__op_Inequality(lVar4,0,0);
                              if ((uVar5 & 1) == 0) {
                                lVar4 = *plVar14;
                              }
                              else {
                                if (lVar4 == 0) goto LAB_077fae9c;
                                lVar4 = UnityEngine_UI_Graphic__get_rectTransform(lVar4,0);
                              }
                              if (lVar4 != 0) {
                                UnityEngine_RectTransform__get_rect(lVar4,0);
                                fVar19 = fVar16;
                                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                if (fVar16 <= param_4) {
                                  fVar16 = param_4;
                                }
                                if (0.0 < fVar16) {
                                  fVar18 = (float)FUN_0436ebb8(0);
                                  fVar16 = local_94 / fVar16;
                                  UnityEngine_Transform__set_localScale
                                            (fVar18 * fVar16,fVar17 * fVar16,fVar19 * fVar16,lVar6,0
                                            );
                                }
                                plVar8 = (long *)*plVar11;
                                if (plVar8 != (long *)0x0) {
                                  (**(code **)(*plVar8 + 0x188))
                                            (plVar8,0,*(undefined8 *)(*plVar8 + 400));
                                  if ((*plVar11 != 0) &&
                                     (lVar4 = *(long *)(*plVar11 + 0x28), lVar4 != 0)) {
                                    lVar6 = *plVar15;
                                    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
                                    if (lVar6 != 0) {
                                      UnityEngine_GameObject__SetActive(lVar6,uVar2 & 1,0);
                                      _GAME_Bridge_CookOrderBridge__AddToHomeIconPlate
                                                (local_78,lVar12,0);
                                      return;
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
          }
          goto LAB_077fae9c;
        }
      }
    }
    return;
  }
  if ((*plVar11 != 0) && (lVar4 = *(long *)(*plVar11 + 0x28), lVar4 != 0)) {
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if (*(long *)(param_5 + 0x30) != 0) {
      uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_5 + 0x30),0);
      if ((uVar2 & 1) == (uVar3 & 1)) {
        return;
      }
      if (*(long *)(param_5 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_5 + 0x30),uVar2 & 1,0);
        return;
      }
    }
  }
LAB_077fae9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

