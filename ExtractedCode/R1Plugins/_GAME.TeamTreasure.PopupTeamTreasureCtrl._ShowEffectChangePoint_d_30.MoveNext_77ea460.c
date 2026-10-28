// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl.<ShowEffectChangePoint>d__30$$MoveNext
// address: 0x77ea460
// body: available
// range: 0x77ea460-0x77ea64b inclusive
// range: 0x77ea670-0x77ea983 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ea63c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea648 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea980 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077ea97c) */

void _GAME_TeamTreasure_PopupTeamTreasureCtrl_<ShowEffectChangePoint>d__30__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_90;
  int *piStack_88;
  int **local_80;
  int local_74 [3];
  undefined4 local_68;
  undefined1 local_60 [16];
  int local_44;
  int *local_38;
  
  local_38 = param_1;
  if ((DAT_095230a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2100);
    FUN_03f5c2a4(&DAT_091a47c0);
    FUN_03f5c2a4(&DAT_091a47c8);
    FUN_03f5c2a4(&DAT_091a47d0);
    FUN_03f5c2a4(&DAT_091b0d00);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_095230a4 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_44 = *param_1;
  local_68 = 0;
  if (local_44 != 0) {
    lVar5 = **(long **)(DAT_0918b998 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = *(int *)(lVar5 + 0x34);
    auVar11 = ZEXT816(0);
    if (*(int *)(lVar5 + 0x30) == iVar2) goto LAB_077ea864;
    lVar5 = *(long *)(param_1 + 6);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(lVar5 + 0x108);
    local_74[0] = iVar2;
    uVar3 = FUN_03f5c42c(DAT_09535420,local_74);
    uVar3 = System_String__Format(DAT_09226038,uVar3,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar3,uVar3);
    }
    TMPro_TMP_Text__SetText(lVar8,uVar3,0);
    uVar3 = _GAME_TeamTreasure_SOTeamTreasureConfig__GetFillValueRewardStep(iVar2);
    DG_Tweening_DOTweenModuleUI__DOValue(uVar3,0x3e800000,*(undefined8 *)(lVar5 + 0x100),0,0);
    if (*(long *)(lVar5 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(local_b0,*(long *)(lVar5 + 0x110),DAT_091b0d00);
    piStack_88 = (int *)local_b0._8_8_;
    local_90 = local_b0._0_8_;
    local_80 = (int **)local_a0;
    *(undefined8 *)(local_38 + 0xc) = local_b0._8_8_;
    *(undefined8 *)(local_38 + 10) = local_b0._0_8_;
    *(undefined8 *)(local_38 + 0xe) = local_a0;
    thunk_FUN_03f5d7b8(local_38 + 10,0);
    piStack_88 = &local_44;
    local_90 = 0;
    local_80 = &local_38;
    if (local_44 != 0) goto LAB_077ea6fc;
  }
  local_80 = &local_38;
  piStack_88 = &local_44;
  local_90 = 0;
  local_44 = -1;
  local_60 = *(undefined1 (*) [16])(local_38 + 0x10);
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  *local_38 = -1;
  do {
    do {
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_077ea6ec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_077ea6ec:
        (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      }
LAB_077ea6fc:
      do {
        uVar6 = FUN_071bd28c(local_38 + 10,DAT_091a47c8);
        if ((uVar6 & 1) == 0) {
          iVar2 = 10;
          goto LAB_077ea818;
        }
        if (*(long *)(local_38 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = _GAME_TeamTreasure_TeamTreasureRewardStepUICtrl__CheckAutoClaim();
      } while ((uVar6 & 1) == 0);
      uVar3 = *(undefined8 *)(local_38 + 8);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar11 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3dcccccd,0,8,uVar3,0,0);
      local_b0 = auVar11;
      thunk_FUN_03f5d7b8(local_b0,0);
      local_60 = local_b0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar3 = local_60._0_8_;
    } while ((long *)local_60._0_8_ == (long *)0x0);
    lVar5 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077ea91c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_077ea91c:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  } while (iVar2 != 0);
  local_44 = 0;
  *local_38 = 0;
  *(undefined1 (*) [16])(local_38 + 0x10) = local_60;
  thunk_FUN_03f5d7b8(local_38 + 0x10,0);
  FUN_049b2780(local_38 + 2,local_60,local_38,DAT_091c2100);
  iVar2 = 9;
LAB_077ea818:
  if (local_44 < 0) {
    FUN_071bd288(*local_80 + 10,DAT_091a47c0);
  }
  if ((iVar2 != 10) && (iVar2 != 0)) {
    return;
  }
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  _GAME_TeamTreasure_TeamTreasureManager__SaveTotalPointCache();
  param_1 = local_38;
  auVar11 = local_60;
LAB_077ea864:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  local_60 = auVar11;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_077ea8ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077ea8ec:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

