// rea decompile_all
// name: Utilities.UIPlateAroundActiveButtons$$Apply
// address: 0x452c2a0
// body: available
// range: 0x452c2a0-0x452c2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIPlateAroundActiveButtons__Apply(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((DAT_09518622 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5360);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c68);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518622 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(*(long *)(param_1 + 0x20) + 0x18) == 0)) {
    return;
  }
  plVar16 = (long *)(param_1 + 0x38);
  lVar17 = *plVar16;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar17,0,0);
  if ((uVar7 & 1) != 0) {
    plVar8 = (long *)UnityEngine_Component__get_transform(param_1,0);
    lVar17 = DAT_09189c98;
    if (plVar8 == (long *)0x0) {
      *plVar16 = 0;
    }
    else if ((*plVar8 != DAT_09189c98) || (*plVar16 = (long)plVar8, *plVar8 != lVar17)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar8);
    }
    thunk_FUN_03f5d7b8(plVar16,plVar8);
  }
  plVar8 = (long *)(param_1 + 0x40);
  lVar17 = *plVar8;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar17,0,0);
  if ((uVar7 & 1) != 0) {
    uVar9 = FUN_04a6a14c(param_1,DAT_091c5360);
    *(undefined8 *)(param_1 + 0x40) = uVar9;
    thunk_FUN_03f5d7b8(plVar8,uVar9);
  }
  plVar18 = (long *)(param_1 + 0x28);
  if (*plVar18 == 0) {
    lVar17 = thunk_FUN_03f9944c(DAT_09189c68);
    UnityEngine_RectOffset___ctor(lVar17,0x33,0x33,0x30,0x1f,0);
    *plVar18 = lVar17;
    thunk_FUN_03f5d7b8(plVar18,lVar17);
  }
  lVar17 = *(long *)(param_1 + 0x20);
  if (lVar17 != 0) {
    uVar7 = 0;
    uVar19 = 0;
    do {
      if ((0x1e < uVar7) || ((long)*(int *)(lVar17 + 0x18) <= (long)uVar7)) {
        if (uVar19 == *(uint *)(param_1 + 0x48)) {
          return;
        }
        *(uint *)(param_1 + 0x48) = uVar19;
        if (*(long *)(param_1 + 0x38) != 0) {
          plVar11 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_1 + 0x38),0);
          if (plVar11 == (long *)0x0) {
            return;
          }
          if (*plVar11 != DAT_09189c98) {
            return;
          }
          lVar17 = FUN_03f5c394(DAT_091807f8,4);
          lVar13 = *(long *)(param_1 + 0x20);
          if (lVar13 != 0) {
            fVar14 = -3.4028235e+38;
            fVar15 = 3.4028235e+38;
            uVar7 = 0;
            bVar1 = false;
            fVar25 = fVar15;
            fVar26 = fVar14;
            goto LAB_0452c584;
          }
        }
        break;
      }
      uVar9 = *(undefined8 *)(lVar17 + uVar7 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar10 & 1) != 0) {
        lVar17 = *(long *)(param_1 + 0x20);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0452c8d4;
        lVar17 = *(long *)(lVar17 + uVar7 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar17 = UnityEngine_Component__get_gameObject(lVar17,0), lVar17 == 0)
           ) break;
        uVar10 = UnityEngine_GameObject__get_activeInHierarchy(lVar17,0);
        if ((uVar10 & 1) != 0) {
          uVar19 = 1 << (ulong)((uint)uVar7 & 0x1f) | uVar19;
        }
      }
      lVar17 = *(long *)(param_1 + 0x20);
      uVar7 = uVar7 + 1;
    } while (lVar17 != 0);
  }
  goto LAB_0452c4fc;
LAB_0452c584:
  do {
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar7) {
      lVar17 = *plVar8;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Inequality(lVar17,0,0);
      if ((uVar7 & 1) != 0) {
        if (bVar1) {
          bVar2 = true;
        }
        else {
          bVar2 = *(char *)(param_1 + 0x30) == '\0';
        }
        if (*plVar8 == 0) break;
        UnityEngine_Behaviour__set_enabled(*plVar8,bVar2,0);
      }
      if (!bVar1) {
        return;
      }
      lVar17 = *plVar16;
      if (lVar17 != 0) {
        UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,lVar17,0);
        UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,lVar17,0);
        if (*plVar16 != 0) {
          UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,*plVar16,0);
          if (*plVar18 != 0) {
            lVar17 = *plVar16;
            iVar3 = UnityEngine_RectOffset__get_left(*plVar18,0);
            if (*plVar18 != 0) {
              iVar4 = UnityEngine_RectOffset__get_right(*plVar18,0);
              if (*plVar18 != 0) {
                iVar5 = UnityEngine_RectOffset__get_top(*plVar18,0);
                if ((*plVar18 != 0) &&
                   (iVar6 = UnityEngine_RectOffset__get_bottom(*plVar18,0), lVar17 != 0)) {
                  fVar23 = (fVar14 - fVar15) + (float)iVar3;
                  fVar24 = (float)iVar4;
                  fVar21 = (fVar26 - fVar25) + (float)iVar5 + (float)iVar6;
                  UnityEngine_RectTransform__set_sizeDelta(fVar23 + fVar24,fVar21,lVar17,0);
                  if (*plVar18 != 0) {
                    lVar17 = *plVar16;
                    iVar3 = UnityEngine_RectOffset__get_right(*plVar18,0);
                    if (*plVar18 != 0) {
                      iVar4 = UnityEngine_RectOffset__get_left(*plVar18,0);
                      if (*plVar18 != 0) {
                        iVar5 = UnityEngine_RectOffset__get_top(*plVar18,0);
                        if (*plVar18 != 0) {
                          iVar6 = UnityEngine_RectOffset__get_bottom(*plVar18,0);
                          fVar22 = (float)UnityEngine_RectTransform__get_rect(plVar11,0);
                          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          if (lVar17 != 0) {
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (((fVar14 + fVar15) * 0.5 + (float)(iVar3 - iVar4) / 2.0) -
                                       (fVar22 + fVar23 * 0.5),
                                       ((fVar26 + fVar25) * 0.5 + (float)(iVar5 - iVar6) / 2.0) -
                                       (fVar21 + fVar24 * 0.5),lVar17,0);
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
      break;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar7) {
LAB_0452c8d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar13 = *(long *)(lVar13 + uVar7 * 8 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = UnityEngine_Object__op_Equality(lVar13,0,0);
    if ((uVar10 & 1) == 0) {
      if ((lVar13 == 0) || (lVar12 = UnityEngine_Component__get_gameObject(lVar13,0), lVar12 == 0))
      break;
      uVar10 = UnityEngine_GameObject__get_activeInHierarchy(lVar12,0);
      if ((uVar10 & 1) != 0) {
        UnityEngine_RectTransform__GetWorldCorners(lVar13,lVar17,0);
        if (lVar17 == 0) break;
        uVar10 = 0;
        puVar20 = (undefined4 *)(lVar17 + 0x28);
        do {
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0452c8d4;
          fVar23 = (float)puVar20[-1];
          fVar21 = (float)UnityEngine_Transform__InverseTransformPoint
                                    (puVar20[-2],fVar23,*puVar20,plVar11,0);
          uVar10 = uVar10 + 1;
          puVar20 = puVar20 + 3;
          if (fVar21 <= fVar15) {
            fVar15 = fVar21;
          }
          if (fVar14 <= fVar21) {
            fVar14 = fVar21;
          }
          if (fVar23 <= fVar25) {
            fVar25 = fVar23;
          }
          if (fVar26 <= fVar23) {
            fVar26 = fVar23;
          }
        } while (uVar10 != 4);
        bVar1 = true;
      }
    }
    lVar13 = *(long *)(param_1 + 0x20);
    uVar7 = uVar7 + 1;
  } while (lVar13 != 0);
LAB_0452c4fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

