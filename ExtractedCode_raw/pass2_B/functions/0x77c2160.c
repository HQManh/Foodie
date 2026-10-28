// rea decompile_all
// name: _GAME.Leaderboard.PlayerRankItemUICtrl$$UpdateUIData
// address: 0x77c2160
// body: available
// range: 0x77c2160-0x77c2507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c2504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_PlayerRankItemUICtrl__UpdateUIData(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_34;
  
  if ((DAT_09522f33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09208d18);
    DAT_09522f33 = 1;
  }
  plVar8 = (long *)(param_1 + 0x80);
  *plVar8 = param_2;
  thunk_FUN_03f5d7b8(plVar8,param_2);
  if (*plVar8 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_077c2504;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    if ((plVar4 == (long *)0x0) || (lVar6 = *plVar8, lVar6 == 0)) goto LAB_077c2504;
    if ((int)plVar4[4] != *(int *)(lVar6 + 0x20)) goto LAB_077c2250;
  }
  else {
    lVar6 = *plVar8;
    if ((lVar6 == 0) || (plVar4 == (long *)0x0)) goto LAB_077c2504;
LAB_077c2250:
    (**(code **)(*plVar4 + 0x178))
              (plVar4,*(undefined4 *)(lVar6 + 0x20),*(undefined8 *)(*plVar4 + 0x180));
    lVar6 = *plVar8;
    if (lVar6 == 0) goto LAB_077c2504;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_077c2504;
  iVar1 = *(int *)(lVar6 + 0x24);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
  plVar4 = *(long **)(param_1 + 0x38);
  if ((uVar3 & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_077c2504;
    if ((int)plVar4[4] != iVar1) goto LAB_077c22bc;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_077c2504;
LAB_077c22bc:
    (**(code **)(*plVar4 + 0x178))(plVar4,iVar1,*(undefined8 *)(*plVar4 + 0x180));
  }
  lVar6 = *plVar8;
  if (lVar6 == 0) goto LAB_077c2504;
  if (*(int *)(lVar6 + 0x28) == 1) {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    lVar6 = *plVar8;
    if (lVar6 == 0) goto LAB_077c2504;
    if (lVar5 <= *(long *)(lVar6 + 0x70)) goto LAB_077c231c;
    piVar7 = (int *)(lVar6 + 0x30);
  }
  else {
LAB_077c231c:
    piVar7 = (int *)(lVar6 + 0x28);
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_077c2504;
  iVar1 = *piVar7;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
  plVar4 = *(long **)(param_1 + 0x40);
  if ((uVar3 & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_077c2504;
    if ((int)plVar4[4] != iVar1) goto LAB_077c2374;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_077c2504;
LAB_077c2374:
    (**(code **)(*plVar4 + 0x178))(plVar4,iVar1,*(undefined8 *)(*plVar4 + 0x180));
    plVar4 = *(long **)(param_1 + 0x40);
  }
  if ((*plVar8 != 0) && (plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x188))
              (plVar4,*(undefined8 *)(*plVar8 + 0x18),0,*(undefined8 *)(*plVar4 + 400));
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0) {
      lVar5 = *(long *)(param_1 + 0x50);
      if (*(long *)(lVar6 + 0x50) < 1) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *(undefined4 *)(lVar6 + 0x58);
      }
      uVar10 = _GAME_Team_SOTeamConfig__GetTeamFlag(uVar2,0);
      if (lVar5 != 0) {
        UnityEngine_UI_Image__set_sprite(lVar5,uVar10,0);
        lVar6 = DAT_091c0310;
        lVar5 = *(long *)(param_1 + 0x80);
        if (lVar5 != 0) {
          lVar9 = *(long *)(param_1 + 0x58);
          if (*(long *)(lVar5 + 0x50) < 1) {
            lVar5 = *(long *)(DAT_091c0310 + 0x38);
            if (lVar5 == 0) {
              FUN_03f95ac8(DAT_091c0310);
              lVar5 = *(long *)(lVar6 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03f95a6c();
            }
            uVar10 = _GAME_Localize_LocalizeManager__GetTextByLanguageByKey
                               (DAT_09208d18,**(undefined8 **)(lVar6 + 0xb8),0);
          }
          else {
            uVar10 = _GAME_Localize_LocalizeHelper__OrNoTeam(*(undefined8 *)(lVar5 + 0x60),0);
          }
          if (lVar9 != 0) {
            TMPro_TMP_Text__SetText(lVar9,uVar10,0);
            if (*(long *)(param_1 + 0x80) != 0) {
              local_34 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x78);
              lVar6 = *(long *)(param_1 + 0x60);
              uVar10 = FUN_03f5c42c(DAT_09535420,&local_34);
              uVar10 = System_String__Format(DAT_09226038,uVar10,0);
              if (lVar6 != 0) {
                TMPro_TMP_Text__SetText(lVar6,uVar10,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_077c2504:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

