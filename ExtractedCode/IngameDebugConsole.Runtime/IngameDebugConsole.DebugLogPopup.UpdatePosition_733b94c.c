// rea decompile_all
// name: IngameDebugConsole.DebugLogPopup$$UpdatePosition
// address: 0x733b94c
// body: available
// range: 0x733b94c-0x733bbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733bb6c to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733bbac to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733bbb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogPopup__UpdatePosition
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09520671 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09520671 = 1;
  }
  if ((*(long *)(param_5 + 0x40) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_5 + 0x40) + 0x110), lVar3 == 0)) goto LAB_0733bbb0;
  UnityEngine_RectTransform__get_rect(lVar3,0);
  fVar7 = param_3;
  fVar13 = param_4;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(param_5 + 0x40) == 0) goto LAB_0733bbb0;
  if (*(char *)(*(long *)(param_5 + 0x40) + 0x71) == '\0') {
    fVar6 = 0.0;
    fVar12 = 0.0;
    fVar14 = param_3;
    fVar13 = param_4;
    if ((param_6 & 1) == 0) goto LAB_0733ba68;
LAB_0733ba44:
    fVar7 = fVar14 * *(float *)(param_5 + 0xb0);
    param_2 = fVar13 * *(float *)(param_5 + 0xb4);
  }
  else {
    fVar6 = (float)UnityEngine_Screen__get_safeArea(0);
    iVar1 = UnityEngine_Screen__get_width(0);
    iVar2 = UnityEngine_Screen__get_height(0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189c30);
    }
    fVar7 = fVar7 / (float)iVar1;
    fVar14 = param_3 * fVar7;
    fVar13 = param_4 * (fVar13 / (float)iVar2);
    fVar12 = param_3 * (fVar6 / (float)iVar1);
    fVar6 = param_4 * (param_2 / (float)iVar2);
    param_2 = fVar7;
    if ((param_6 & 1) != 0) goto LAB_0733ba44;
LAB_0733ba68:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0733bbb0;
    fVar7 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_5 + 0x20),0);
    fVar7 = fVar7 - fVar12;
    param_2 = param_2 - fVar6;
  }
  fVar7 = param_3 * 0.5 + fVar7;
  param_2 = param_4 * 0.5 + param_2;
  fVar8 = fVar14 - fVar7;
  fVar9 = fVar13 - param_2;
  fVar11 = fVar7;
  if (fVar8 <= fVar7) {
    fVar11 = fVar8;
  }
  fVar10 = param_2;
  if (fVar9 <= param_2) {
    fVar10 = fVar9;
  }
  if (fVar10 <= fVar11) {
    fVar11 = *(float *)(param_5 + 0x28);
    fVar10 = *(float *)(param_5 + 0x2c);
    if (fVar9 <= param_2) {
      fVar10 = fVar13 - *(float *)(param_5 + 0x2c);
    }
    fVar8 = fVar14 - fVar11;
    if (fVar7 <= fVar14 - fVar11) {
      fVar8 = fVar7;
    }
    if (fVar11 <= fVar7) {
      fVar11 = fVar8;
    }
  }
  else {
    fVar10 = *(float *)(param_5 + 0x2c);
    fVar11 = *(float *)(param_5 + 0x28);
    if (fVar8 <= fVar7) {
      fVar11 = fVar14 - *(float *)(param_5 + 0x28);
    }
    fVar7 = fVar13 - fVar10;
    if (param_2 <= fVar13 - fVar10) {
      fVar7 = param_2;
    }
    if (fVar10 <= param_2) {
      fVar10 = fVar7;
    }
  }
  fVar11 = fVar11 - param_3 * 0.5;
  fVar10 = fVar10 - param_4 * 0.5;
  plVar5 = (long *)(param_5 + 0xb8);
  *(float *)(param_5 + 0xb0) = fVar11 / fVar14;
  *(float *)(param_5 + 0xb4) = fVar10 / fVar13;
  if (*plVar5 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_5,*plVar5,0);
    *(undefined8 *)(param_5 + 0xb8) = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
  }
  if ((param_6 & 1) == 0) {
    uVar4 = IngameDebugConsole_DebugLogPopup__MoveToPosAnimation
                      (fVar12 + fVar11,fVar6 + fVar10,param_5);
    *(undefined8 *)(param_5 + 0xb8) = uVar4;
    thunk_FUN_03f5d7b8(plVar5,uVar4);
    UnityEngine_MonoBehaviour__StartCoroutine(param_5,*(undefined8 *)(param_5 + 0xb8),0);
    return;
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    UnityEngine_RectTransform__set_anchoredPosition(*(long *)(param_5 + 0x20),0);
    return;
  }
LAB_0733bbb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

