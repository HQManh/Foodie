// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$UpdateItemsInTheList
// address: 0x733e760
// body: available
// range: 0x733e760-0x733ebab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ea58 to 0x733edbc IngameDebugConsole.DebugLogRecycledListView$$UpdateLogItemContentsBetweenIndices (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733eba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__UpdateItemsInTheList
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_0952067d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1bf8);
    FUN_03f5c2a4(&DAT_091a1bf0);
    FUN_03f5c2a4(&DAT_091a1c08);
    FUN_03f5c2a4(&DAT_091a1c10);
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1c18);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0952067d = 1;
  }
  if (*(long *)(param_5 + 0x78) == 0) goto LAB_0733eba8;
  if (*(int *)(*(long *)(param_5 + 0x78) + 0x1c) < 1) {
    if (*(int *)(param_5 + 0xa4) == -1) {
      return;
    }
    lVar5 = *(long *)(param_5 + 0x98);
    if (lVar5 != 0) {
      FUN_070dd5f4(lVar5,*(undefined4 *)(lVar5 + 0x1c),*(undefined8 *)(param_5 + 0xb8),DAT_091a1c10)
      ;
      *(undefined4 *)(param_5 + 0xa4) = 0xffffffff;
      return;
    }
    goto LAB_0733eba8;
  }
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_0733eba8;
  UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_5 + 0x20),0);
  if (*(long *)(param_5 + 0x28) == 0) goto LAB_0733eba8;
  param_2 = param_2 + -1.0;
  UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x28),0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar9 = *(float *)(param_5 + 0x70);
  fVar10 = param_2 + param_4 + 2.0;
  fVar11 = fVar9 * (float)*(int *)(param_5 + 0x90);
  if (fVar11 <= fVar10) {
    if (fVar11 <= param_2) {
      fVar12 = *(float *)(param_5 + 0x94) - fVar9;
      param_2 = param_2 - fVar12;
      fVar10 = fVar10 - fVar12;
      if (param_2 <= fVar11 + -1.0) {
        param_2 = fVar11 + -1.0;
      }
      fVar11 = param_2 + 2.0;
    }
    else {
      fVar11 = fVar11 + 1.0;
      fVar10 = fVar10 + (fVar9 - *(float *)(param_5 + 0x94));
    }
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
  }
  if (*(long *)(param_5 + 0x78) == 0) goto LAB_0733eba8;
  iVar7 = *(int *)(*(long *)(param_5 + 0x78) + 0x1c) + -1;
  iVar1 = -0x80000000;
  if (fVar10 / fVar9 != INFINITY) {
    iVar1 = (int)(fVar10 / fVar9);
  }
  if (iVar7 <= iVar1) {
    iVar1 = iVar7;
  }
  iVar4 = *(int *)(param_5 + 0xa4);
  iVar7 = -0x80000000;
  if (param_2 / fVar9 != INFINITY) {
    iVar7 = (int)(param_2 / fVar9);
  }
  iVar2 = iVar7;
  if (iVar1 <= iVar7) {
    iVar2 = iVar1;
  }
  iVar3 = 0;
  if (-1 < iVar7) {
    iVar3 = iVar2;
  }
  if (iVar4 == -1) {
    iVar7 = (iVar1 - iVar3) + 1;
    if (0 < iVar7) {
      do {
        if (*(long *)(param_5 + 0x60) == 0) goto LAB_0733eba8;
        lVar5 = *(long *)(param_5 + 0x98);
        uVar6 = IngameDebugConsole_DebugLogManager__PopLogItem();
        if (lVar5 == 0) goto LAB_0733eba8;
        FUN_070dd31c(lVar5,uVar6,DAT_091a1bf0);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
LAB_0733ea24:
    *(int *)(param_5 + 0xa4) = iVar3;
  }
  else {
    if (iVar1 < iVar4) {
LAB_0733e978:
      lVar5 = *(long *)(param_5 + 0x98);
      if (lVar5 == 0) {
LAB_0733eba8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_070dd5f4(lVar5,*(undefined4 *)(lVar5 + 0x1c),*(undefined8 *)(param_5 + 0xb8),DAT_091a1c10)
      ;
      iVar7 = (iVar1 - iVar3) + 1;
      if (0 < iVar7) {
        do {
          if (*(long *)(param_5 + 0x60) == 0) goto LAB_0733eba8;
          lVar5 = *(long *)(param_5 + 0x98);
          uVar6 = IngameDebugConsole_DebugLogManager__PopLogItem();
          if (lVar5 == 0) goto LAB_0733eba8;
          FUN_070dd31c(lVar5,uVar6,DAT_091a1bf0);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      goto LAB_0733ea24;
    }
    piVar8 = (int *)(param_5 + 0xa8);
    iVar7 = *piVar8;
    if (iVar7 < iVar3) goto LAB_0733e978;
    if (iVar3 - iVar4 != 0 && iVar4 <= iVar3) {
      if (*(long *)(param_5 + 0x98) == 0) goto LAB_0733eba8;
      FUN_070dd5f4(*(long *)(param_5 + 0x98),iVar3 - iVar4,*(undefined8 *)(param_5 + 0xb8),
                   DAT_091a1c10);
      iVar7 = *(int *)(param_5 + 0xa8);
    }
    if (iVar7 - iVar1 != 0 && iVar1 <= iVar7) {
      if (*(long *)(param_5 + 0x98) == 0) goto LAB_0733eba8;
      FUN_070dd640(*(long *)(param_5 + 0x98),iVar7 - iVar1,*(undefined8 *)(param_5 + 0xb8),
                   DAT_091a1c08);
    }
    iVar7 = *(int *)(param_5 + 0xa4) - iVar3;
    if (iVar7 == 0 || *(int *)(param_5 + 0xa4) < iVar3) {
      iVar7 = *piVar8;
      if (iVar1 <= iVar7) {
        *(int *)(param_5 + 0xa4) = iVar3;
        *(int *)(param_5 + 0xa8) = iVar1;
        if ((param_6 & 1) == 0) {
          return;
        }
        goto LAB_0733ea30;
      }
LAB_0733eb44:
      iVar7 = iVar1 - iVar7;
      if (0 < iVar7) {
        do {
          if (*(long *)(param_5 + 0x60) == 0) goto LAB_0733eba8;
          lVar5 = *(long *)(param_5 + 0x98);
          uVar6 = IngameDebugConsole_DebugLogManager__PopLogItem();
          if (lVar5 == 0) goto LAB_0733eba8;
          FUN_070dd31c(lVar5,uVar6,DAT_091a1bf0);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if ((param_6 & 1) == 0) {
        IngameDebugConsole_DebugLogRecycledListView__UpdateLogItemContentsBetweenIndices
                  (param_5,*(int *)(param_5 + 0xa8) + 1,iVar1,iVar3);
LAB_0733eba0:
        *(int *)(param_5 + 0xa4) = iVar3;
        *(int *)(param_5 + 0xa8) = iVar1;
        return;
      }
      goto LAB_0733ea24;
    }
    if (0 < iVar7) {
      do {
        if (*(long *)(param_5 + 0x60) == 0) goto LAB_0733eba8;
        lVar5 = *(long *)(param_5 + 0x98);
        uVar6 = IngameDebugConsole_DebugLogManager__PopLogItem();
        if (lVar5 == 0) goto LAB_0733eba8;
        FUN_070dd264(lVar5,uVar6,DAT_091a1bf8);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((param_6 & 1) == 0) {
      IngameDebugConsole_DebugLogRecycledListView__UpdateLogItemContentsBetweenIndices
                (param_5,iVar3,*(int *)(param_5 + 0xa4) + -1,iVar3);
      iVar7 = *(int *)(param_5 + 0xa8);
      if (iVar1 <= iVar7) goto LAB_0733eba0;
      goto LAB_0733eb44;
    }
    iVar7 = *piVar8;
    if (iVar7 < iVar1) goto LAB_0733eb44;
    *(int *)(param_5 + 0xa4) = iVar3;
  }
  *(int *)(param_5 + 0xa8) = iVar1;
LAB_0733ea30:
  IngameDebugConsole_DebugLogRecycledListView__UpdateLogItemContentsBetweenIndices
            (param_5,iVar3,iVar1,iVar3);
  return;
}

