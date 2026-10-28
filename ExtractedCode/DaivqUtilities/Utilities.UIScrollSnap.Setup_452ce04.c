// rea decompile_all
// name: Utilities.UIScrollSnap$$Setup
// address: 0x452ce04
// body: available
// range: 0x452ce04-0x452d7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452d7a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452d7d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__Setup
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_09518627 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c57f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180408);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091f1888);
    FUN_03f5c2a4(&DAT_09195828);
    FUN_03f5c2a4(&DAT_091dd0c0);
    FUN_03f5c2a4(&DAT_091dd0c8);
    FUN_03f5c2a4(&DAT_0917f698);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091ddc70);
    DAT_09518627 = 1;
  }
  iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
  if (iVar5 == 0) {
    return;
  }
  lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
  bVar4 = true;
  if (*(int *)(param_5 + 0x20) != 1) {
    bVar4 = *(int *)(param_5 + 0x24) == 0;
  }
  if (lVar8 == 0) goto LAB_0452d7a4;
  *(bool *)(lVar8 + 0x28) = bVar4;
  lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
  bVar4 = true;
  if (*(int *)(param_5 + 0x20) != 1) {
    bVar4 = *(int *)(param_5 + 0x24) == 1;
  }
  if (lVar8 == 0) goto LAB_0452d7a4;
  iVar5 = *(int *)(param_5 + 0x30);
  *(bool *)(lVar8 + 0x29) = bVar4;
  if (iVar5 == 1) {
    lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto LAB_0452d7a4;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar8 + 0x40),0);
    uVar6 = (undefined4)param_3;
    uVar18 = (undefined4)param_4;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined4 *)(param_5 + 0x34) = uVar6;
    *(undefined4 *)(param_5 + 0x38) = uVar18;
  }
  uVar6 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
  lVar8 = FUN_03f5c394(DAT_09180408,uVar6);
  plVar11 = (long *)(param_5 + 0xf0);
  *plVar11 = lVar8;
  thunk_FUN_03f5d7b8(plVar11,lVar8);
  iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
  fVar17 = (float)param_4;
  fVar19 = (float)param_3;
  fVar20 = (float)param_2;
  if (0 < iVar5) {
    uVar6 = 0x3f000000;
    uVar14 = 0;
    lVar8 = 0x20;
    do {
      lVar15 = *(long *)(param_5 + 0xf0);
      lVar9 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
         (plVar10 = (long *)UnityEngine_Transform__GetChild
                                      (*(long *)(lVar9 + 0x20),uVar14 & 0xffffffff,0), lVar15 == 0))
      goto LAB_0452d7a4;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else if (*plVar10 != DAT_09189c98) {
        plVar10 = (long *)0x0;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0452d7d0;
      *(long **)(lVar15 + lVar8) = plVar10;
      thunk_FUN_03f5d7b8(lVar15 + lVar8);
      if ((*(int *)(param_5 + 0x20) == 0) && (*(char *)(param_5 + 0x28) != '\0')) {
        lVar9 = *plVar11;
        if (lVar9 == 0) goto LAB_0452d7a4;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0452d7d0;
        if (*(long *)(lVar9 + lVar8) == 0) goto LAB_0452d7a4;
        uVar18 = 0;
        if (*(int *)(param_5 + 0x24) != 0) {
          uVar18 = uVar6;
        }
        uVar1 = 0;
        if (*(int *)(param_5 + 0x24) != 1) {
          uVar1 = uVar6;
        }
        UnityEngine_RectTransform__set_anchorMin(uVar18,uVar1,*(long *)(lVar9 + lVar8),0);
        lVar9 = *(long *)(param_5 + 0xf0);
        if (lVar9 == 0) goto LAB_0452d7a4;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0452d7d0;
        if (*(long *)(lVar9 + lVar8) == 0) goto LAB_0452d7a4;
        uVar18 = 0;
        if (*(int *)(param_5 + 0x24) != 0) {
          uVar18 = uVar6;
        }
        uVar1 = 0;
        if (*(int *)(param_5 + 0x24) != 1) {
          uVar1 = uVar6;
        }
        UnityEngine_RectTransform__set_anchorMax(uVar18,uVar1,*(long *)(lVar9 + lVar8),0);
        lVar9 = *(long *)(param_5 + 0x40);
        if ((lVar9 == 0) || (lVar15 = *(long *)(param_5 + 0xf0), lVar15 == 0)) goto LAB_0452d7a4;
        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0452d7d0;
        if (*(long *)(lVar15 + lVar8) == 0) goto LAB_0452d7a4;
        fVar17 = (((float)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20) + *(float *)(lVar9 + 0x1c))
                  * 0.5 - *(float *)(lVar9 + 0x1c)) /
                 (float)((ulong)*(undefined8 *)(param_5 + 0x34) >> 0x20) + 0.5;
        UnityEngine_RectTransform__set_pivot
                  (CONCAT44(fVar17,(((float)*(undefined8 *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x10)
                                    ) * 0.5 - *(float *)(lVar9 + 0x10)) /
                                   (float)*(undefined8 *)(param_5 + 0x34) + 0.5),fVar17,
                   *(long *)(lVar15 + lVar8),0);
        lVar9 = *plVar11;
        if (lVar9 == 0) goto LAB_0452d7a4;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0452d7d0;
        lVar15 = *(long *)(param_5 + 0x40);
        if ((lVar15 == 0) || (*(long *)(lVar9 + lVar8) == 0)) goto LAB_0452d7a4;
        fVar17 = *(float *)(lVar15 + 0x10) + *(float *)(lVar15 + 0x14);
        param_3 = (ulong)(uint)fVar17;
        param_4 = (ulong)(uint)*(float *)(param_5 + 0x34);
        UnityEngine_RectTransform__set_sizeDelta
                  (*(float *)(param_5 + 0x34) - fVar17,
                   *(float *)(param_5 + 0x38) -
                   (*(float *)(lVar15 + 0x18) + *(float *)(lVar15 + 0x1c)),*(long *)(lVar9 + lVar8),
                   0);
        param_2 = 0;
        if (*(int *)(param_5 + 0x24) == 1) {
          param_2 = (ulong)(uint)(*(float *)(param_5 + 0x38) * 0.5 +
                                 *(float *)(param_5 + 0x38) *
                                 (*(float *)(param_5 + 0x2c) + 1.0) * (float)(int)uVar14);
LAB_0452d1b0:
          fVar17 = 0.0;
        }
        else {
          if (*(int *)(param_5 + 0x24) != 0) goto LAB_0452d1b0;
          fVar17 = *(float *)(param_5 + 0x34) * 0.5;
          param_3 = (ulong)(uint)fVar17;
          fVar17 = fVar17 + *(float *)(param_5 + 0x34) *
                            (*(float *)(param_5 + 0x2c) + 1.0) * (float)(int)uVar14;
        }
        lVar9 = *plVar11;
        if (lVar9 == 0) goto LAB_0452d7a4;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0452d7d0;
        if (*(long *)(lVar9 + lVar8) == 0) goto LAB_0452d7a4;
        UnityEngine_RectTransform__set_anchoredPosition(fVar17,*(long *)(lVar9 + lVar8),0);
      }
      uVar14 = uVar14 + 1;
      iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
      fVar17 = (float)param_4;
      fVar19 = (float)param_3;
      fVar20 = (float)param_2;
      lVar8 = lVar8 + 8;
    } while ((long)uVar14 < (long)iVar5);
  }
  if (*(int *)(param_5 + 0x20) == 0) {
    if (*(char *)(param_5 + 0x28) != '\0') {
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0452d7a4;
      uVar18 = 0x3f000000;
      uVar6 = 0;
      if (1 < *(uint *)(param_5 + 0x24)) {
        uVar6 = uVar18;
      }
      uVar1 = uVar18;
      uVar2 = 0;
      if (*(uint *)(param_5 + 0x24) != 1) {
        uVar1 = uVar6;
        uVar2 = uVar18;
      }
      UnityEngine_RectTransform__set_anchorMin(uVar1,uVar2,*(long *)(lVar8 + 0x20),0);
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0452d7a4;
      uVar18 = 0x3f000000;
      uVar6 = 0;
      if (1 < *(uint *)(param_5 + 0x24)) {
        uVar6 = uVar18;
      }
      uVar1 = uVar18;
      uVar2 = 0;
      if (*(uint *)(param_5 + 0x24) != 1) {
        uVar1 = uVar6;
        uVar2 = uVar18;
      }
      UnityEngine_RectTransform__set_anchorMax(uVar1,uVar2,*(long *)(lVar8 + 0x20),0);
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0452d7a4;
      fVar20 = 0.5;
      fVar19 = 0.5;
      fVar17 = 0.0;
      if (1 < *(uint *)(param_5 + 0x24)) {
        fVar17 = fVar20;
      }
      fVar21 = fVar20;
      fVar3 = 0.0;
      if (*(uint *)(param_5 + 0x24) != 1) {
        fVar21 = fVar17;
        fVar3 = fVar20;
      }
      UnityEngine_RectTransform__set_pivot(fVar21,fVar3,*(long *)(lVar8 + 0x20),0);
      lVar8 = *(long *)(param_5 + 0xf0);
      if (lVar8 == 0) goto LAB_0452d7a4;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0452d7d0;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_0452d7a4;
      UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar8 + 0x20),0);
      lVar8 = *(long *)(param_5 + 0xf0);
      iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
      if (lVar8 == 0) goto LAB_0452d7a4;
      if (*(uint *)(lVar8 + 0x18) <= iVar5 - 1U) goto LAB_0452d7d0;
      lVar8 = *(long *)(lVar8 + (long)(int)(iVar5 - 1U) * 8 + 0x20);
      if (lVar8 == 0) goto LAB_0452d7a4;
      UnityEngine_RectTransform__get_anchoredPosition(lVar8,0);
      iVar5 = *(int *)(param_5 + 0x24);
      if (iVar5 == 0) {
        iVar7 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
        iVar5 = *(int *)(param_5 + 0x24);
        fVar19 = *(float *)(param_5 + 0x34);
        fVar21 = fVar19 * (*(float *)(param_5 + 0x2c) + 1.0) * (float)iVar7 -
                 *(float *)(param_5 + 0x2c) * fVar19;
      }
      else {
        fVar21 = *(float *)(param_5 + 0x34);
      }
      if (iVar5 == 1) {
        iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
        fVar19 = *(float *)(param_5 + 0x38);
        fVar20 = fVar19 * (*(float *)(param_5 + 0x2c) + 1.0) * (float)iVar5 -
                 *(float *)(param_5 + 0x2c) * fVar19;
      }
      else {
        fVar20 = *(float *)(param_5 + 0x38);
      }
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0452d7a4;
      UnityEngine_RectTransform__set_sizeDelta(fVar21,*(long *)(lVar8 + 0x20),0);
    }
    if (*(char *)(param_5 + 0x48) != '\0') {
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if (lVar8 == 0) goto LAB_0452d7a4;
      *(undefined4 *)(lVar8 + 0x2c) = 0;
      lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0452d7a4;
      UnityEngine_RectTransform__get_rect(*(long *)(lVar8 + 0x20),0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = *(undefined8 *)(param_5 + 0x34);
      *(ulong *)(param_5 + 0xa0) =
           CONCAT44(fVar17 + (float)((ulong)uVar12 >> 0x20) * *(float *)(param_5 + 0x4c),
                    fVar19 + (float)uVar12 * *(float *)(param_5 + 0x4c));
      Utilities_UIScrollSnap__HandleInfiniteScrolling(param_5,1);
      fVar20 = (float)uVar12;
    }
    if (*(char *)(param_5 + 0x50) != '\0') {
      Utilities_UIScrollSnap__HandleOcclusionCulling(param_5,1);
    }
  }
  else {
    *(undefined1 *)(param_5 + 0x50) = 0;
    *(undefined1 *)(param_5 + 0x48) = 0;
    *(undefined1 *)(param_5 + 0x28) = 0;
  }
  if ((*(int *)(param_5 + 0x20) == 1) || (fVar21 = 0.0, *(int *)(param_5 + 0x24) == 0)) {
    lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto LAB_0452d7a4;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar8 + 0x40),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar21 = fVar19 * 0.5;
    if (*(int *)(param_5 + 0x20) != 1) goto LAB_0452d4a8;
LAB_0452d4b8:
    lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto LAB_0452d7a4;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar8 + 0x40),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar19 = fVar17 * 0.5;
  }
  else {
LAB_0452d4a8:
    fVar19 = 0.0;
    if (*(int *)(param_5 + 0x24) == 1) goto LAB_0452d4b8;
  }
  lVar8 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
  if ((lVar8 != 0) && (lVar9 = *(long *)(param_5 + 0xf0), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_5 + 0x54)) {
LAB_0452d7d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_5 + 0x54) * 8 + 0x20);
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x20);
      fVar17 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar9,0);
      if (lVar8 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition(fVar21 - fVar17,fVar19 - fVar20,lVar8,0);
        lVar8 = DAT_09188ad0;
        *(float *)(param_5 + 0xa8) = fVar21 - fVar17;
        *(float *)(param_5 + 0xac) = fVar19 - fVar20;
        uVar12 = *(undefined8 *)(param_5 + 0x60);
        iVar5 = *(int *)(lVar8 + 0xe4);
        *(undefined4 *)(param_5 + 0x104) = *(undefined4 *)(param_5 + 0x54);
        *(undefined4 *)(param_5 + 0x100) = *(undefined4 *)(param_5 + 0x54);
        if (iVar5 == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(long *)(param_5 + 0x60) == 0) goto LAB_0452d7a4;
          uVar13 = *(undefined8 *)(*(long *)(param_5 + 0x60) + 0x100);
          uVar12 = thunk_FUN_03f9944c(DAT_0918c678);
          UnityEngine_Events_UnityAction___ctor(uVar12,param_5,DAT_091dd0c8,0);
          Utilities_UnityEventExtension__AddListenerOnce(uVar13,uVar12,0);
        }
        uVar12 = *(undefined8 *)(param_5 + 0x68);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(long *)(param_5 + 0x68) == 0) goto LAB_0452d7a4;
          uVar13 = *(undefined8 *)(*(long *)(param_5 + 0x68) + 0x100);
          uVar12 = thunk_FUN_03f9944c(DAT_0918c678);
          UnityEngine_Events_UnityAction___ctor(uVar12,param_5,DAT_091dd0c0,0);
          Utilities_UnityEventExtension__AddListenerOnce(uVar13,uVar12,0);
        }
        uVar12 = *(undefined8 *)(param_5 + 0x70);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if (((uVar14 & 1) == 0) ||
           (iVar5 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5), iVar5 == 0)) {
          return;
        }
        if (*(long *)(param_5 + 0x70) != 0) {
          lVar8 = FUN_04a6abf4(*(long *)(param_5 + 0x70),DAT_091c57f0);
          plVar11 = (long *)(param_5 + 0xf8);
          *plVar11 = lVar8;
          thunk_FUN_03f5d7b8(plVar11,lVar8);
          lVar8 = *plVar11;
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_5 + 0x54)) goto LAB_0452d7d0;
            lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_5 + 0x54) * 8 + 0x20);
            if (lVar8 != 0) {
              UnityEngine_UI_Toggle__SetIsOnWithoutNotify(lVar8,1,0);
              lVar8 = *plVar11;
              if (lVar8 != 0) {
                lVar9 = 0;
                do {
                  uVar16 = (uint)lVar9;
                  if (*(int *)(lVar8 + 0x18) <= (int)uVar16) {
                    return;
                  }
                  lVar8 = thunk_FUN_03f9944c(DAT_09195828);
                  System_Object___ctor(lVar8,0);
                  if (lVar8 == 0) break;
                  *(long *)(lVar8 + 0x18) = param_5;
                  thunk_FUN_03f5d7b8((long *)(lVar8 + 0x18),param_5);
                  lVar15 = *(long *)(param_5 + 0xf8);
                  *(uint *)(lVar8 + 0x10) = uVar16;
                  if (lVar15 == 0) break;
                  if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_0452d7d0;
                  lVar15 = *(long *)(lVar15 + lVar9 * 8 + 0x20);
                  if (lVar15 == 0) break;
                  uVar13 = *(undefined8 *)(lVar15 + 0x118);
                  uVar12 = thunk_FUN_03f9944c(DAT_0917f698);
                  FUN_06478934(uVar12,lVar8,DAT_091f1888,0);
                  FUN_04e30f60(uVar13,uVar12,DAT_091ddc70);
                  lVar8 = *plVar11;
                  lVar9 = lVar9 + 1;
                } while (lVar8 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_0452d7a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

