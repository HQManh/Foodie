// rea decompile_all
// name: _GAME.Team.TeamMemberItemUICtrl$$UpdateUIData
// address: 0x77961d8
// body: available
// range: 0x77961d8-0x7796597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7796594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamMemberItemUICtrl__UpdateUIData(long param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_48;
  undefined4 local_34;
  
  if ((DAT_09522dc6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_091f9f48);
    DAT_09522dc6 = 1;
  }
  plVar8 = (long *)(param_1 + 0x68);
  *plVar8 = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  thunk_FUN_03f5d7b8(plVar8,param_3);
  lVar9 = *(long *)(param_1 + 0x28);
  uVar2 = DAT_091f9f48;
  if (*(uint *)(param_1 + 0x60) >> 4 < 0x271) {
    local_48 = CONCAT44(local_48._4_4_,*(uint *)(param_1 + 0x60) + 1);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
  }
  if (lVar9 == 0) goto LAB_07796594;
  TMPro_TMP_Text__SetText(lVar9,uVar2,0);
  if (*plVar8 == 0) goto LAB_07796594;
  lVar9 = *(long *)(*plVar8 + 0x10);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (lVar9 == 0)) goto LAB_07796594;
  uVar3 = System_String__Equals(lVar9,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10),0);
  if ((uVar3 & 1) == 0) {
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_07796594;
    if (*(long *)(lVar9 + 0x48) != 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      if (plVar4 == (long *)0x0) goto LAB_07796594;
      (**(code **)(*plVar4 + 0x178))
                (plVar4,*(undefined4 *)(*(long *)(lVar9 + 0x48) + 0x20),
                 *(undefined8 *)(*plVar4 + 0x180));
      lVar9 = *plVar8;
      if (lVar9 == 0) goto LAB_07796594;
    }
    if (*(long *)(lVar9 + 0x48) != 0) {
      plVar4 = *(long **)(param_1 + 0x38);
      if (plVar4 == (long *)0x0) goto LAB_07796594;
      (**(code **)(*plVar4 + 0x178))
                (plVar4,*(undefined4 *)(*(long *)(lVar9 + 0x48) + 0x24),
                 *(undefined8 *)(*plVar4 + 0x180));
      lVar9 = *plVar8;
      if (lVar9 == 0) goto LAB_07796594;
    }
    lVar9 = *(long *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x28) == 1) {
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
        if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x48), lVar9 == 0)) goto LAB_07796594;
        if (lVar5 <= *(long *)(lVar9 + 0x70)) goto LAB_07796480;
        plVar8 = *(long **)(param_1 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_07796594;
        lVar5 = *plVar8;
        uVar1 = *(undefined4 *)(lVar9 + 0x30);
      }
      else {
LAB_07796480:
        plVar8 = *(long **)(param_1 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_07796594;
        lVar5 = *plVar8;
        uVar1 = *(undefined4 *)(lVar9 + 0x28);
      }
      (**(code **)(lVar5 + 0x178))(plVar8,uVar1,*(undefined8 *)(lVar5 + 0x180));
    }
    lVar9 = *(long *)(param_1 + 0x68);
    if ((lVar9 == 0) || (plVar8 = *(long **)(param_1 + 0x40), plVar8 == (long *)0x0))
    goto LAB_07796594;
    if (*(long *)(lVar9 + 0x48) != 0) {
      lVar9 = *(long *)(lVar9 + 0x48);
    }
    uVar6 = *(undefined8 *)(lVar9 + 0x18);
    pcVar7 = *(code **)(*plVar8 + 0x188);
    uVar2 = *(undefined8 *)(*plVar8 + 400);
  }
  else {
    plVar8 = *(long **)(param_1 + 0x30);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (plVar8 == (long *)0x0)) goto LAB_07796594;
    (**(code **)(*plVar8 + 0x178))
              (plVar8,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar8 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar8 = *(long **)(param_1 + 0x38), plVar8 == (long *)0x0)) goto LAB_07796594;
    (**(code **)(*plVar8 + 0x178))
              (plVar8,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
               *(undefined8 *)(*plVar8 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar8 = *(long **)(param_1 + 0x40), plVar8 == (long *)0x0)) goto LAB_07796594;
    (**(code **)(*plVar8 + 0x178))
              (plVar8,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x28),
               *(undefined8 *)(*plVar8 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar8 = *(long **)(param_1 + 0x40), plVar8 == (long *)0x0)) goto LAB_07796594;
    uVar6 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
    pcVar7 = *(code **)(*plVar8 + 0x188);
    uVar2 = *(undefined8 *)(*plVar8 + 400);
  }
  (*pcVar7)(plVar8,uVar6,0,uVar2);
  if ((*(long *)(param_1 + 0x68) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    UnityEngine_GameObject__SetActive
              (*(long *)(param_1 + 0x48),*(int *)(*(long *)(param_1 + 0x68) + 0x30) == 1,0);
    if (*(long *)(param_1 + 0x68) != 0) {
      local_34 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x20);
      lVar9 = *(long *)(param_1 + 0x50);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
      uVar2 = System_String__Format(DAT_09226038,uVar2,0);
      if (lVar9 != 0) {
        TMPro_TMP_Text__SetText(lVar9,uVar2,0);
        if (*(long *)(param_1 + 0x68) != 0) {
          local_48 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
          lVar9 = *(long *)(param_1 + 0x58);
          uVar2 = FUN_03f5c42c(DAT_09535440,&local_48);
          uVar2 = System_String__Format(DAT_09226038,uVar2,0);
          if (lVar9 != 0) {
            TMPro_TMP_Text__SetText(lVar9,uVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_07796594:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

