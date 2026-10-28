// rea decompile_all
// name: _GAME.Inbox.InboxItemUICtrl$$UpdateUIData
// address: 0x77ca494
// body: available
// range: 0x77ca494-0x77ca74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ca74c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_InboxItemUICtrl__UpdateUIData(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_09522fa0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_092265d0);
    DAT_09522fa0 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    plVar7 = (long *)(param_1 + 0x60);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    lVar9 = *(long *)(param_1 + 0x20);
    uVar2 = _GAME_Inbox_InboxRewards__HasAny(*plVar7);
    if (lVar9 == 0) goto LAB_077ca74c;
    UnityEngine_GameObject__SetActive(lVar9,uVar2 & 1,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_077ca74c;
    lVar9 = *(long *)(param_1 + 0x28);
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x20),0);
    if (lVar9 == 0) goto LAB_077ca74c;
    UnityEngine_GameObject__SetActive(lVar9,(uVar2 ^ 0xffffffff) & 1,0);
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_077ca74c;
    TMPro_TMP_Text__SetText
              (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),0);
    if (*plVar7 == 0) goto LAB_077ca74c;
    uVar8 = *(undefined8 *)(*plVar7 + 0x68);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_48 = _GAME_Utils_HelperTime__UnixTimeMillisecondsToDateTime(uVar8,0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    local_38 = System_DateTime__ToLocalTime(&local_48,0);
    lVar9 = *(long *)(param_1 + 0x50);
    local_4c = System_DateTime__get_Day(&local_38,0);
    uVar8 = FUN_03f5c42c(DAT_09535420,&local_4c);
    local_50 = System_DateTime__get_Month(&local_38,0);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_50);
    local_54 = System_DateTime__get_Year(&local_38,0);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_54);
    uVar8 = System_String__Format(DAT_092265d0,uVar8,uVar3,uVar4,0);
    if (lVar9 == 0) goto LAB_077ca74c;
    TMPro_TMP_Text__SetText(lVar9,uVar8,0);
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_077ca74c;
    TMPro_TMP_Text__SetText
              (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),0);
  }
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(lVar9 + 0x61) == '\0') {
    uVar6 = _GAME_Inbox_InboxRewards__HasAny(lVar9);
    lVar5 = *(long *)(param_1 + 0x30);
    if ((uVar6 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x60);
      if (lVar9 == 0) goto LAB_077ca74c;
      goto LAB_077ca6d4;
    }
    bVar1 = true;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x30);
LAB_077ca6d4:
    bVar1 = *(char *)(lVar9 + 0x60) == '\0';
  }
  if (lVar5 != 0) {
    UnityEngine_GameObject__SetActive(lVar5,bVar1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar9 = *(long *)(param_1 + 0x38);
      uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x30),0);
      if (lVar9 != 0) {
        UnityEngine_GameObject__SetActive(lVar9,(uVar2 ^ 0xffffffff) & 1,0);
        if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
          UnityEngine_GameObject__SetActive
                    (*(long *)(param_1 + 0x40),*(undefined1 *)(*(long *)(param_1 + 0x60) + 0x60),0);
          return;
        }
      }
    }
  }
LAB_077ca74c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

