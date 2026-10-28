// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$OnLogEntriesRemoved
// address: 0x733c564
// body: available
// range: 0x733c564-0x733c8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733c7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733c8cc to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__OnLogEntriesRemoved
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09520678 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1c00);
    FUN_03f5c2a4(&DAT_091a1c10);
    FUN_03f5c2a4(&DAT_091a1c18);
    FUN_03f5c2a4(&DAT_091a1c20);
    DAT_09520678 = 1;
  }
  lVar5 = *(long *)(param_3 + 0x88);
  if (lVar5 != 0) {
    if (*(char *)(param_3 + 0xa0) == '\0') {
      iVar4 = *(int *)(param_3 + 0x90) - param_4;
      if (*(int *)(param_3 + 0x90) < param_4) goto LAB_0733c5fc;
    }
    else {
      if (*(int *)(lVar5 + 0x30) == 0) {
LAB_0733c5fc:
        *(undefined8 *)(param_3 + 0x88) = 0;
        thunk_FUN_03f5d7b8((long *)(param_3 + 0x88),0);
        *(undefined8 *)(param_3 + 0x90) = 0x7fffffff;
        goto LAB_0733c618;
      }
      iVar4 = IngameDebugConsole_DebugLogRecycledListView__FindIndexOfLogEntryInReverseDirection
                        (param_3,lVar5,*(undefined4 *)(param_3 + 0x90));
    }
    *(int *)(param_3 + 0x90) = iVar4;
  }
LAB_0733c618:
  lVar5 = *(long *)(param_3 + 0x60);
  if (lVar5 == 0) goto LAB_0733c7d8;
  if ((*(char *)(lVar5 + 0x1d0) == '\0') && (*(char *)(lVar5 + 0x209) != '\0')) {
    lVar5 = *(long *)(param_3 + 0x98);
    if (lVar5 == 0) goto LAB_0733c7d8;
    uVar7 = *(undefined8 *)(param_3 + 0xb8);
    iVar3 = *(int *)(lVar5 + 0x1c);
LAB_0733c70c:
    FUN_070dd5f4(lVar5,iVar3,uVar7,DAT_091a1c10);
  }
  else {
    lVar5 = *(long *)(param_3 + 0x98);
    if (*(char *)(param_3 + 0xa0) == '\0') {
      if (lVar5 == 0) goto LAB_0733c7d8;
      uVar7 = *(undefined8 *)(param_3 + 0xb8);
      iVar1 = param_4 - *(int *)(param_3 + 0xa4);
      iVar4 = iVar1;
      if (*(int *)(lVar5 + 0x1c) <= iVar1) {
        iVar4 = *(int *)(lVar5 + 0x1c);
      }
      iVar3 = 0;
      if (-1 < iVar1) {
        iVar3 = iVar4;
      }
      goto LAB_0733c70c;
    }
    if (lVar5 == 0) goto LAB_0733c7d8;
    FUN_070dd5dc(lVar5,*(undefined8 *)(param_3 + 0xb0),DAT_091a1c00);
    lVar5 = *(long *)(param_3 + 0x98);
    if (lVar5 == 0) goto LAB_0733c7d8;
    if (0 < *(int *)(lVar5 + 0x1c)) {
      param_4 = *(int *)(param_3 + 0xa4);
      lVar5 = FUN_070dd0c0(lVar5,0,DAT_091a1c20);
      if ((lVar5 == 0) || (*(long *)(param_3 + 0x98) == 0)) goto LAB_0733c7d8;
      uVar7 = *(undefined8 *)(lVar5 + 0x60);
      lVar5 = FUN_070dd0c0(*(long *)(param_3 + 0x98),0,DAT_091a1c20);
      if (lVar5 == 0) goto LAB_0733c7d8;
      iVar4 = IngameDebugConsole_DebugLogRecycledListView__FindIndexOfLogEntryInReverseDirection
                        (param_3,uVar7,*(undefined4 *)(lVar5 + 0x80));
      param_4 = param_4 - iVar4;
    }
  }
  uVar7 = DAT_091a1c20;
  lVar5 = *(long *)(param_3 + 0x98);
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0x1c);
    if (iVar4 == 0) {
      *(undefined4 *)(param_3 + 0xa4) = 0xffffffff;
      if (*(long *)(param_3 + 0x60) != 0) {
        if (*(char *)(*(long *)(param_3 + 0x60) + 0x209) != '\0') {
          return;
        }
        lVar5 = *(long *)(param_3 + 0x20);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        if (lVar5 != 0) {
          uVar9 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
          fVar11 = (float)(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
LAB_0733c8b8:
          UnityEngine_RectTransform__set_anchoredPosition(uVar9,fVar11,lVar5,0);
          return;
        }
      }
    }
    else {
      uVar2 = *(int *)(param_3 + 0xa4) - param_4;
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_3 + 0xa4) = uVar2;
      *(uint *)(param_3 + 0xa8) = iVar4 + uVar2 + -1;
      lVar5 = FUN_070dd0c0(lVar5,0,uVar7);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar5 + 0x20),0);
        lVar5 = *(long *)(param_3 + 0x98);
        if (lVar5 != 0) {
          fVar11 = (float)param_2;
          iVar4 = 0;
          do {
            fVar8 = (float)param_2;
            if (*(int *)(lVar5 + 0x1c) <= iVar4) {
              if (*(long *)(param_3 + 0x60) != 0) {
                if (*(char *)(*(long *)(param_3 + 0x60) + 0x209) != '\0') {
                  return;
                }
                lVar5 = *(long *)(param_3 + 0x20);
                if (lVar5 != 0) {
                  UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
                  if (((*(long *)(param_3 + 0x98) != 0) &&
                      (fVar10 = fVar8,
                      lVar6 = FUN_070dd0c0(*(long *)(param_3 + 0x98),0,DAT_091a1c20), lVar6 != 0))
                     && (*(long *)(lVar6 + 0x20) != 0)) {
                    UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x20),0);
                    fVar8 = fVar8 - (fVar10 - fVar11);
                    fVar11 = 0.0;
                    if (0.0 <= fVar8) {
                      fVar11 = fVar8;
                    }
                    uVar9 = 0;
                    goto LAB_0733c8b8;
                  }
                }
              }
              break;
            }
            lVar5 = FUN_070dd0c0(lVar5,iVar4,DAT_091a1c20);
            if (lVar5 == 0) break;
            lVar6 = *(long *)(param_3 + 0x60);
            *(int *)(lVar5 + 0x80) = iVar4 + *(int *)(param_3 + 0xa4);
            if (lVar6 == 0) break;
            if (*(char *)(lVar6 + 0x1d0) != '\0') {
              IngameDebugConsole_DebugLogRecycledListView__RepositionLogItem(param_3,lVar5);
              IngameDebugConsole_DebugLogRecycledListView__ColorLogItem(param_3,lVar5);
              if (*(char *)(param_3 + 0xa0) != '\0') {
                IngameDebugConsole_DebugLogItem__ShowCount(lVar5);
              }
            }
            lVar5 = *(long *)(param_3 + 0x98);
            iVar4 = iVar4 + 1;
          } while (lVar5 != 0);
        }
      }
    }
  }
LAB_0733c7d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

