// rea decompile_all
// name: _GAME.Team.PopupTeamEditCtrl.<HandleSaveTeamInfo>d__24$$MoveNext
// address: 0x776da90
// body: available
// range: 0x776da90-0x776de87 inclusive
// range: 0x776df50-0x776e027 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776de78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776de7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776de80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776de84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamEditCtrl_<HandleSaveTeamInfo>d__24__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522c98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a38);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09183010);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b86e8);
    FUN_03f5c2a4(&DAT_091ba6f8);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0921c970);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522c98 = 1;
  }
  lVar9 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = ZEXT816(0);
    if (*(char *)(lVar9 + 0x140) != '\0') goto LAB_0776dffc;
    if (*(int *)(DAT_09183010 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183010 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = _GAME_Currency_CurrencyData__get_gem(**(long **)(DAT_09183010 + 0xb8),0);
    if (lVar4 < 100) {
      _GAME_Bridge_CookOrderBridge__ShowNotEnoughCurrencyToast(DAT_0921c970);
      auVar10._8_8_ = local_50._8_8_;
      auVar10._0_8_ = local_50._0_8_;
      goto LAB_0776dffc;
    }
    lVar4 = thunk_FUN_03f9944c(DAT_0918b958);
    _GAME_Team_TeamInfoModel___ctor(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar9 + 0x100);
    *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar9 + 0x130);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar7 + 0x210);
    thunk_FUN_03f5d7b8();
    *(undefined1 *)(lVar9 + 0x140) = 1;
    *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar9 + 0x134);
    _GAME_Team_PopupTeamEditCtrl__UpdateBtnSaveStatus(lVar9,0);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar10 = _GAME_Team_TeamManager__HandleEditTeam(lVar4,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar10;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar5 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049b9f94(param_1 + 2,local_50,param_1,DAT_091c2a38);
      return;
    }
  }
  uVar1 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    bVar3 = local_50[8] != '\0';
  }
  else {
    uVar2 = local_50._10_2_;
    lVar4 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *(long *)uVar1;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0776dd88;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar1,lVar4,0);
LAB_0776dd88:
    bVar3 = (*(code *)*puVar6)(uVar1,uVar2,puVar6[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar9 + 0x140) = 0;
  lVar4 = DAT_091c0310;
  if ((bVar3 & 1) == 0) {
    lVar7 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar7 = *(long *)(lVar4 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_092087b8,**(undefined8 **)(lVar4 + 0xb8),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar9,0,0);
    auVar10 = local_50;
    if ((uVar5 & 1) != 0) {
      _GAME_Team_PopupTeamEditCtrl__UpdateBtnSaveStatus(lVar9,0);
      auVar10 = local_50;
    }
  }
  else {
    if (*(int *)(DAT_09183010 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Currency_CurrencyManager__ChangeGem(0xffffffffffffff9c,0x26,0,0);
    lVar4 = *(long *)(DAT_091ba6f8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      _GAME_Team_UITabTeamCtrl__UpdateUIActive(**(long **)(lVar4 + 0xb8),0);
    }
    lVar4 = *(long *)(DAT_091b86e8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      _GAME_Team_PopupTeamInfoCtrl__UpdateEditInfo(**(long **)(lVar4 + 0xb8),0);
    }
    _GAME_GameUI_PopupBaseCtrl__Close(lVar9,0);
    auVar10 = local_50;
  }
LAB_0776dffc:
  *param_1 = -2;
  local_50 = auVar10;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

