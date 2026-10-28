// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakLevelUICtrl$$UpdateStatus
// address: 0x780d984
// body: available
// range: 0x780d984-0x780dcc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780dcc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_DreamyStreakLevelUICtrl__UpdateStatus(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  int local_34;
  
  if ((DAT_0952323f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ac740);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_0952323f = 1;
  }
  if (-1 < param_2) {
    if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = _GAME_DreamyStreak_SODreamyStreakConfig__get_ListLevel();
    if (lVar4 == 0) goto LAB_0780dcc4;
    lVar4 = FUN_057e0998(lVar4,param_2,DAT_091ac740);
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    thunk_FUN_03f5d7b8(plVar7,lVar4);
    if (*plVar7 == 0) goto LAB_0780dcc4;
    lVar4 = *(long *)(param_1 + 0x20);
    local_34 = *(int *)(*plVar7 + 0x10) + 1;
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar5 = System_String__Format(DAT_09226038,uVar5,0);
    if (lVar4 == 0) goto LAB_0780dcc4;
    TMPro_TMP_Text__SetText(lVar4,uVar5,0);
    if ((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_0780dcc4;
    _GAME_GameUI_RwItemUICtrl__SetData
              (*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18),0);
  }
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel(0);
  if (((lVar4 == 0) || (*(long *)(param_1 + 0x58) == 0)) || (*(long *)(param_1 + 0x30) == 0))
  goto LAB_0780dcc4;
  UnityEngine_GameObject__SetActive
            (*(long *)(param_1 + 0x30),
             *(int *)(lVar4 + 0x10) == *(int *)(*(long *)(param_1 + 0x58) + 0x10),0);
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0780dcc4;
  lVar8 = *(long *)(param_1 + 0x28);
  uVar1 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x30),0);
  if (lVar8 == 0) goto LAB_0780dcc4;
  UnityEngine_GameObject__SetActive(lVar8,(uVar1 ^ 0xffffffff) & 1,0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0780dcc4;
  iVar2 = *(int *)(*(long *)(param_1 + 0x58) + 0x10);
  if (iVar2 == 0) {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x38),0), lVar4 == 0))
    goto LAB_0780dcc4;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
  }
  else {
    if (iVar2 < *(int *)(lVar4 + 0x10)) {
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_0780dcc4;
      lVar4 = *plVar7;
      fVar9 = 1.0;
LAB_0780db94:
      pcVar6 = *(code **)(lVar4 + 0x428);
      uVar5 = *(undefined8 *)(lVar4 + 0x430);
    }
    else {
      if (*(int *)(lVar4 + 0x10) < iVar2) {
        plVar7 = *(long **)(param_1 + 0x38);
        if (plVar7 == (long *)0x0) goto LAB_0780dcc4;
        lVar4 = *plVar7;
        fVar9 = 0.0;
        goto LAB_0780db94;
      }
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = _GAME_DreamyStreak_DreamyStreakManager__GetCurPointProgress(0);
      if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a4c0);
      }
      iVar3 = _GAME_DreamyStreak_SODreamyStreakConfig__get_MaxLevelPoint();
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel(0);
      if ((lVar4 == 0) || (plVar7 = *(long **)(param_1 + 0x38), plVar7 == (long *)0x0))
      goto LAB_0780dcc4;
      pcVar6 = *(code **)(*plVar7 + 0x428);
      uVar5 = *(undefined8 *)(*plVar7 + 0x430);
      fVar9 = (float)iVar2 / (float)*(int *)(lVar4 + 0x14);
    }
    (*pcVar6)(fVar9,plVar7,uVar5);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((((**(long **)(DAT_09183d70 + 0xb8) != 0) && (*(long *)(param_1 + 0x58) != 0)) &&
      (lVar8 = *(long *)(**(long **)(DAT_09183d70 + 0xb8) + 0x30), lVar8 != 0)) &&
     (uVar1 = FUN_0571bde4(lVar8,*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10),DAT_091ab408),
     lVar4 != 0)) {
    UnityEngine_GameObject__SetActive(lVar4,uVar1 & 1,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar4 = *(long *)(param_1 + 0x48);
      uVar1 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x40),0);
      if (lVar4 != 0) {
        UnityEngine_GameObject__SetActive(lVar4,(uVar1 ^ 0xffffffff) & 1,0);
        return;
      }
    }
  }
LAB_0780dcc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

