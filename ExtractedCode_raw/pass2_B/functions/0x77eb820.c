// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureMemberUICtrl$$SetData
// address: 0x77eb820
// body: available
// range: 0x77eb820-0x77ebb7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ebb7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureMemberUICtrl__SetData
               (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint local_48;
  int local_44;
  
  if ((DAT_095230e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b980);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_095230e8 = 1;
  }
  *(undefined4 *)(param_1 + 0x58) = param_2;
  if (param_3 == 0) {
    param_3 = thunk_FUN_03f9944c(DAT_0918b980);
    _GAME_Team_TeamMemberModel___ctor(param_3,0);
    if (param_3 == 0) goto LAB_077ebb7c;
    *(undefined8 *)(param_3 + 0x10) = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_3 + 0x18) = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03f5d7b8();
  }
  plVar7 = (long *)(param_1 + 0x60);
  *plVar7 = param_3;
  thunk_FUN_03f5d7b8(plVar7,param_3);
  if (*plVar7 == 0) goto LAB_077ebb7c;
  uVar1 = *(uint *)(*plVar7 + 0x50);
  lVar8 = *(long *)(param_1 + 0x28);
  local_44 = *(int *)(param_1 + 0x58) + 1;
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
  uVar3 = System_String__Format(DAT_09226038,uVar3,0);
  if (lVar8 == 0) goto LAB_077ebb7c;
  TMPro_TMP_Text__SetText(lVar8,uVar3,0);
  lVar8 = _GAME_TeamTreasure_SOTeamTreasureConfig__GetTopReward(*(undefined4 *)(param_1 + 0x58));
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x18);
  }
  bVar2 = lVar6 != 0;
  _GAME_Utils_HelperMonoBehaviour__SetActive
            (*(undefined8 *)(param_1 + 0x30),
             (bVar2 && uVar1 != 0) && (lVar6 == 0 || -1 < (int)uVar1),0);
  if (bVar2 && 0 < (int)uVar1) {
    if ((lVar8 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_077ebb7c;
    _GAME_GameUI_RwItemUICtrl__SetData(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar8 + 0x18),0);
  }
  local_48 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
  uVar3 = System_String__Format(DAT_09226038,uVar3,0);
  if (lVar8 == 0) goto LAB_077ebb7c;
  TMPro_TMP_Text__SetText(lVar8,uVar3,0);
  lVar8 = *plVar7;
  if (lVar8 == 0) goto LAB_077ebb7c;
  lVar6 = *(long *)(lVar8 + 0x48);
  if (lVar6 == 0) {
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(lVar8 + 0x10),0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = **(long **)(DAT_091896c0 + 0xb8);
      if (lVar8 == 0) goto LAB_077ebaa0;
      if (*plVar7 == 0) goto LAB_077ebb7c;
      lVar6 = *(long *)(*plVar7 + 0x10);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar8 = **(long **)(DAT_091896c0 + 0xb8);
        if (lVar8 == 0) goto LAB_077ebb7c;
      }
      if (lVar6 == 0) goto LAB_077ebb7c;
      uVar4 = System_String__Equals(lVar6,*(undefined8 *)(lVar8 + 0x10),0);
      if ((uVar4 & 1) == 0) goto LAB_077ebaa0;
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar7 = *(long **)(param_1 + 0x40);
      lVar6 = **(long **)(DAT_091896c0 + 0xb8);
      if (lVar6 != 0) goto LAB_077eb9f0;
    }
    else {
LAB_077ebaa0:
      plVar7 = *(long **)(param_1 + 0x40);
      lVar6 = 0;
    }
    uVar5 = 0;
    bVar2 = true;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x40);
LAB_077eb9f0:
    uVar5 = *(undefined4 *)(lVar6 + 0x20);
    bVar2 = false;
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x178))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x180));
    plVar7 = *(long **)(param_1 + 0x48);
    if (bVar2) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x178))(plVar7,0,*(undefined8 *)(*plVar7 + 0x180));
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x178))(plVar7,0,*(undefined8 *)(*plVar7 + 0x180));
          if ((*(long *)(param_1 + 0x60) != 0) &&
             (plVar7 = *(long **)(param_1 + 0x50), plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x188))
                      (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18),0,
                       *(undefined8 *)(*plVar7 + 400));
            return;
          }
        }
      }
    }
    else if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x178))
                (plVar7,*(undefined4 *)(lVar6 + 0x24),*(undefined8 *)(*plVar7 + 0x180));
      plVar7 = *(long **)(param_1 + 0x50);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x178))
                  (plVar7,*(undefined4 *)(lVar6 + 0x28),*(undefined8 *)(*plVar7 + 0x180));
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x188))
                    (plVar7,*(undefined8 *)(lVar6 + 0x18),0,*(undefined8 *)(*plVar7 + 400));
          return;
        }
      }
    }
  }
LAB_077ebb7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

