// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$LateUpdate
// address: 0x733a24c
// body: available
// range: 0x733a24c-0x733ab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ab18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733ab20 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0733ab1c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void IngameDebugConsole_DebugLogManager__LateUpdate
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char cVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char local_54 [4];
  
  if ((DAT_09520655 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b140);
    FUN_03f5c2a4(&DAT_0919b148);
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09520655 = 1;
  }
  lVar12 = *(long *)(param_4 + 0x250);
  local_54[0] = '\0';
  if (*(char *)(param_4 + 0x1d0) == '\0') {
    if (lVar12 == 0) goto LAB_0733ab18;
    iVar8 = *(int *)(lVar12 + 0x1c) - *(int *)(param_4 + 0x58);
  }
  else {
    if (lVar12 == 0) goto LAB_0733ab18;
    iVar8 = *(int *)(lVar12 + 0x1c);
  }
  IngameDebugConsole_DebugLogManager__ProcessQueuedLogs(param_4,iVar8);
  if (*(long *)(param_4 + 0x228) == 0) goto LAB_0733ab18;
  iVar8 = *(int *)(*(long *)(param_4 + 0x228) + 0x1c);
  if (*(int *)(param_4 + 0x50) <= iVar8) {
    iVar1 = 0;
    if (*(char *)(param_4 + 0x1d0) != '\0') {
      iVar1 = iVar8 - *(int *)(param_4 + 0x50);
    }
    iVar1 = *(int *)(param_4 + 0x54) + iVar1;
    if (iVar8 <= iVar1) {
      iVar1 = iVar8;
    }
    IngameDebugConsole_DebugLogManager__RemoveOldestLogs(param_4,iVar1);
  }
  if ((*(char *)(param_4 + 0x1d0) == '\0') &&
     (uVar9 = IngameDebugConsole_DebugLogManager__get_PopupEnabled(param_4), (uVar9 & 1) == 0)) {
    return;
  }
  uVar10 = *(undefined8 *)(param_4 + 0x260);
  local_54[0] = '\0';
  System_Threading_Monitor__Enter(uVar10,local_54,0);
  iVar8 = *(int *)(param_4 + 0x1ec);
  iVar1 = *(int *)(param_4 + 0x1e8);
  iVar2 = *(int *)(param_4 + 0x1f0);
  *(undefined8 *)(param_4 + 0x1e8) = 0;
  *(undefined4 *)(param_4 + 0x1f0) = 0;
  if (local_54[0] != '\0') {
    System_Threading_Monitor__Exit(uVar10,0);
  }
  if (iVar1 < 1) {
    if ((0 < iVar8) || (0 < iVar2)) goto LAB_0733a3f4;
LAB_0733a4e0:
    if (*(char *)(param_4 + 0x1d0) != '\0') goto LAB_0733a4e8;
  }
  else {
    *(int *)(param_4 + 0x1d8) = *(int *)(param_4 + 0x1d8) + iVar1;
    if (*(char *)(param_4 + 0x1d0) == '\0') {
      cVar11 = '\0';
    }
    else {
      plVar15 = *(long **)(param_4 + 0x160);
      uVar10 = System_Int32__ToString(param_4 + 0x1d8,0);
      if (plVar15 == (long *)0x0) goto LAB_0733ab18;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
LAB_0733a3f4:
      cVar11 = *(char *)(param_4 + 0x1d0);
    }
    if (0 < iVar8) {
      *(int *)(param_4 + 0x1dc) = *(int *)(param_4 + 0x1dc) + iVar8;
      if (cVar11 != '\0') {
        plVar15 = *(long **)(param_4 + 0x168);
        uVar10 = System_Int32__ToString(param_4 + 0x1dc,0);
        if (plVar15 == (long *)0x0) goto LAB_0733ab18;
        (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
        cVar11 = *(char *)(param_4 + 0x1d0);
        goto LAB_0733a45c;
      }
      if (0 < iVar2) {
        *(int *)(param_4 + 0x1e0) = *(int *)(param_4 + 0x1e0) + iVar2;
      }
LAB_0733a4c0:
      *(undefined1 *)(param_4 + 0x1e4) = 1;
      if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_0733ab18;
      IngameDebugConsole_DebugLogPopup__NewLogsArrived(*(long *)(param_4 + 0x1a8),iVar1,iVar8,iVar2)
      ;
      goto LAB_0733a4e0;
    }
LAB_0733a45c:
    if (0 < iVar2) {
      *(int *)(param_4 + 0x1e0) = *(int *)(param_4 + 0x1e0) + iVar2;
      if (cVar11 == '\0') goto LAB_0733a4c0;
      plVar15 = *(long **)(param_4 + 0x170);
      uVar10 = System_Int32__ToString(param_4 + 0x1e0,0);
      if (plVar15 == (long *)0x0) goto LAB_0733ab18;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
      cVar11 = *(char *)(param_4 + 0x1d0);
    }
    if (cVar11 == '\0') goto LAB_0733a4c0;
LAB_0733a4e8:
    if (*(char *)(param_4 + 0x24c) != '\0') {
      IngameDebugConsole_DebugLogManager__OnLogEntriesUpdated(param_4,0,0);
    }
    if (-1 < *(int *)(param_4 + 0x248)) {
      if (*(long *)(param_4 + 0x238) == 0) goto LAB_0733ab18;
      if (*(int *)(param_4 + 0x248) < *(int *)(*(long *)(param_4 + 0x238) + 0x1c)) {
        if (*(long *)(param_4 + 0x1c8) == 0) goto LAB_0733ab18;
        IngameDebugConsole_DebugLogRecycledListView__SelectAndFocusOnLogItemAtIndex();
      }
      *(undefined4 *)(param_4 + 0x248) = 0xffffffff;
    }
    if (*(char *)(param_4 + 0x1e4) != '\0') {
      plVar15 = *(long **)(param_4 + 0x160);
      uVar10 = System_Int32__ToString(param_4 + 0x1d8,0);
      if (plVar15 == (long *)0x0) goto LAB_0733ab18;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
      plVar15 = *(long **)(param_4 + 0x168);
      uVar10 = System_Int32__ToString(param_4 + 0x1dc,0);
      if (plVar15 == (long *)0x0) goto LAB_0733ab18;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
      plVar15 = *(long **)(param_4 + 0x170);
      uVar10 = System_Int32__ToString(param_4 + 0x1e0,0);
      if (plVar15 == (long *)0x0) goto LAB_0733ab18;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x5f0));
      *(undefined1 *)(param_4 + 0x1e4) = 0;
    }
    if (*(long *)(param_4 + 0x108) == 0) goto LAB_0733ab18;
    UnityEngine_RectTransform__get_rect(*(long *)(param_4 + 0x108),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar19 = *(float *)(param_4 + 0x1d4);
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar17 = ABS(fVar19);
    fVar16 = ABS(param_3);
    if (ABS(param_3) <= fVar17) {
      fVar16 = fVar17;
    }
    fVar18 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar17 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar17 = fVar18;
    }
    fVar19 = ABS(fVar19 - param_3);
    if (fVar17 <= fVar19) {
      uVar10 = *(undefined8 *)(param_4 + 0x178);
      *(float *)(param_4 + 0x1d4) = param_3;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar12 = *(long *)(param_4 + 0x178);
        if (*(float *)(param_4 + 0x44) <= param_3) {
          if (lVar12 == 0) goto LAB_0733ab18;
          uVar10 = UnityEngine_Transform__GetParent(lVar12,0);
          uVar13 = *(undefined8 *)(param_4 + 0x188);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar10,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if ((*(long *)(param_4 + 0x180) == 0) ||
               (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x180),0),
               lVar12 == 0)) goto LAB_0733ab18;
            UnityEngine_GameObject__SetActive(lVar12,1,0);
            if (*(long *)(param_4 + 0x178) == 0) goto LAB_0733ab18;
            UnityEngine_Transform__SetParent
                      (*(long *)(param_4 + 0x178),*(undefined8 *)(param_4 + 0x180),0,0);
            if ((*(long *)(param_4 + 0x188) == 0) ||
               (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x188),0),
               lVar12 == 0)) goto LAB_0733ab18;
            UnityEngine_GameObject__SetActive(lVar12,0,0);
            lVar12 = *(long *)(param_4 + 0x1b8);
            if (DAT_09515ce8 == '\0') {
              FUN_03f5c2a4(&DAT_0918cb68);
              DAT_09515ce8 = '\x01';
            }
            if (lVar12 == 0) goto LAB_0733ab18;
            UnityEngine_RectTransform__set_anchoredPosition
                      (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                       (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],lVar12,0);
            lVar12 = *(long *)(param_4 + 0x1b8);
            if (lVar12 == 0) goto LAB_0733ab18;
            fVar19 = *(float *)(param_4 + 0x1c4);
            goto LAB_0733a85c;
          }
        }
        else {
          if (lVar12 == 0) goto LAB_0733ab18;
          uVar10 = UnityEngine_Transform__GetParent(lVar12,0);
          uVar13 = *(undefined8 *)(param_4 + 0x180);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar10,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if ((*(long *)(param_4 + 0x188) == 0) ||
               (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x188),0),
               lVar12 == 0)) goto LAB_0733ab18;
            UnityEngine_GameObject__SetActive(lVar12,1,0);
            if (*(long *)(param_4 + 0x178) == 0) goto LAB_0733ab18;
            UnityEngine_Transform__SetParent
                      (*(long *)(param_4 + 0x178),*(undefined8 *)(param_4 + 0x188),0,0);
            if ((*(long *)(param_4 + 0x180) == 0) ||
               (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x180),0),
               lVar12 == 0)) goto LAB_0733ab18;
            UnityEngine_GameObject__SetActive(lVar12,0,0);
            if (*(long *)(param_4 + 0x188) == 0) goto LAB_0733ab18;
            UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_4 + 0x188),0);
            if (*(long *)(param_4 + 0x1b8) == 0) goto LAB_0733ab18;
            UnityEngine_RectTransform__set_anchoredPosition
                      (0,fVar19 * -0.5,*(long *)(param_4 + 0x1b8),0);
            lVar12 = *(long *)(param_4 + 0x1b8);
            if (lVar12 == 0) goto LAB_0733ab18;
            fVar19 = *(float *)(param_4 + 0x1c4) - fVar19;
LAB_0733a85c:
            UnityEngine_RectTransform__set_sizeDelta
                      (*(undefined4 *)(param_4 + 0x1c0),fVar19,lVar12,0);
          }
        }
      }
      if (*(long *)(param_4 + 0x1c8) == 0) goto LAB_0733ab18;
      IngameDebugConsole_DebugLogRecycledListView__OnViewportWidthChanged();
    }
    lVar12 = *(long *)(param_4 + 0x1b0);
    if (*(char *)(param_4 + 0x209) == '\0') {
      if (lVar12 == 0) goto LAB_0733ab18;
      fVar19 = (float)UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(lVar12,0);
      if (*(long *)(param_4 + 0x198) == 0) goto LAB_0733ab18;
      bVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_4 + 0x198),0);
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (fVar19 < 0.9999) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar19)) {
          bVar3 = fVar19 < 1e-06;
          bVar4 = fVar19 == 1e-06;
          bVar5 = false;
        }
      }
      if ((!bVar4 && bVar3 == bVar5) != (bool)(bVar6 & 1)) {
        lVar12 = *(long *)(param_4 + 0x198);
        if (lVar12 == 0) goto LAB_0733ab18;
        uVar7 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
        uVar7 = (uVar7 ^ 0xffffffff) & 1;
        goto LAB_0733a914;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_0733ab18;
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(0,lVar12,0);
      if (*(long *)(param_4 + 0x198) == 0) goto LAB_0733ab18;
      uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_4 + 0x198),0);
      if ((uVar9 & 1) != 0) {
        lVar12 = *(long *)(param_4 + 0x198);
        if (lVar12 == 0) goto LAB_0733ab18;
        uVar7 = 0;
LAB_0733a914:
        UnityEngine_GameObject__SetActive(lVar12,uVar7,0);
      }
    }
    if (*(char *)(param_4 + 100) != '\0') {
      lVar12 = *(long *)(param_4 + 0x128);
      if (lVar12 == 0) goto LAB_0733ab18;
      if ((*(char *)(lVar12 + 0x1d0) != '\0') &&
         (iVar8 = UnityEngine_UI_InputField__get_caretPosition(lVar12,0),
         iVar8 != *(int *)(param_4 + 0x2a4))) {
        if (*(long *)(param_4 + 0x128) == 0) goto LAB_0733ab18;
        IngameDebugConsole_DebugLogManager__RefreshCommandSuggestions
                  (param_4,*(undefined8 *)(*(long *)(param_4 + 0x128) + 0x180));
      }
    }
    if (*(long *)(param_4 + 0x128) == 0) goto LAB_0733ab18;
    if (*(char *)(*(long *)(param_4 + 0x128) + 0x1d0) != '\0') {
      if (*(long *)(param_4 + 0x2d8) == 0) goto LAB_0733ab18;
      if (0 < *(int *)(*(long *)(param_4 + 0x2d8) + 0x1c)) {
        uVar9 = UnityEngine_Input__GetKeyDown(0x111,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = UnityEngine_Input__GetKeyDown(0x112,0);
          if (((uVar9 & 1) != 0) && (*(int *)(param_4 + 0x2e0) != -1)) {
            lVar12 = *(long *)(param_4 + 0x2d8);
            iVar8 = *(int *)(param_4 + 0x2e0) + 1;
            *(int *)(param_4 + 0x2e0) = iVar8;
            if (lVar12 == 0) goto LAB_0733ab18;
            if (iVar8 < *(int *)(lVar12 + 0x1c)) {
              lVar14 = *(long *)(param_4 + 0x128);
              lVar12 = FUN_06c66654(lVar12,iVar8,DAT_0919b148);
            }
            else {
              lVar12 = *(long *)(param_4 + 0x2e8);
              lVar14 = *(long *)(param_4 + 0x128);
              *(undefined4 *)(param_4 + 0x2e0) = 0xffffffff;
              if (lVar12 == 0) {
                lVar12 = **(long **)(DAT_09535468 + 0xb8);
              }
            }
            if (lVar14 == 0) goto LAB_0733ab18;
            UnityEngine_UI_InputField__set_text(lVar14,lVar12,0);
          }
        }
        else {
          if (*(int *)(param_4 + 0x2e0) == -1) {
            if (*(long *)(param_4 + 0x2d8) == 0) goto LAB_0733ab18;
            *(int *)(param_4 + 0x2e0) = *(int *)(*(long *)(param_4 + 0x2d8) + 0x1c) + -1;
            if (*(long *)(param_4 + 0x128) == 0) goto LAB_0733ab18;
            *(undefined8 *)(param_4 + 0x2e8) = *(undefined8 *)(*(long *)(param_4 + 0x128) + 0x180);
            thunk_FUN_03f5d7b8(param_4 + 0x2e8);
          }
          else {
            uVar7 = *(int *)(param_4 + 0x2e0) - 1;
            *(uint *)(param_4 + 0x2e0) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          }
          if (*(long *)(param_4 + 0x2d8) == 0) goto LAB_0733ab18;
          lVar12 = *(long *)(param_4 + 0x128);
          uVar10 = FUN_06c66654(*(long *)(param_4 + 0x2d8),*(undefined4 *)(param_4 + 0x2e0),
                                DAT_0919b148);
          if (lVar12 == 0) goto LAB_0733ab18;
          UnityEngine_UI_InputField__set_text(lVar12,uVar10,0);
          lVar12 = *(long *)(param_4 + 0x128);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x180) == 0)) goto LAB_0733ab18;
          UnityEngine_UI_InputField__set_caretPosition
                    (lVar12,*(undefined4 *)(*(long *)(lVar12 + 0x180) + 0x10),0);
        }
      }
    }
  }
  if (*(char *)(param_4 + 0x1d1) != '\0') {
    if (*(char *)(param_4 + 0x1d0) == '\0') {
      if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_0733ab18;
      IngameDebugConsole_DebugLogPopup__UpdatePosition(*(long *)(param_4 + 0x1a8),1);
    }
    else {
      if (*(long *)(param_4 + 0x1c8) == 0) {
LAB_0733ab18:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      IngameDebugConsole_DebugLogRecycledListView__UpdateItemsInTheList
                (*(long *)(param_4 + 0x1c8),0);
    }
    IngameDebugConsole_DebugLogManager__CheckScreenCutout(param_4);
    *(undefined1 *)(param_4 + 0x1d1) = 0;
  }
  return;
}

