// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent.<SendChatMessage>d__40$$MoveNext
// address: 0x779d1b8
// body: available
// range: 0x779d1b8-0x779d4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779d4c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779d4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779d4d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent_<SendChatMessage>d__40__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522dfc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a68);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09213168);
    DAT_09522dfc = 1;
  }
  lVar9 = *(long *)(param_1 + 0xc);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 10),0);
    auVar1._8_8_ = local_50._8_8_;
    auVar1._0_8_ = local_50._0_8_;
    auVar11._8_8_ = local_40._8_8_;
    auVar11._0_8_ = local_40._0_8_;
    if ((uVar4 & 1) != 0) goto LAB_0779d4a0;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = auVar11;
    local_50 = auVar1;
    if (*(char *)(lVar9 + 0xf2) != '\0') goto LAB_0779d4a0;
    uVar10 = *(undefined8 *)(param_1 + 10);
    *(undefined1 *)(lVar9 + 0xf2) = 1;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = _GAME_Team_TeamManager__SendChatMessage(uVar10,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar4 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bae2c(param_1 + 2,local_50,param_1,DAT_091c2a68);
      return;
    }
  }
  uVar10 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    bVar3 = local_50[8] != '\0';
  }
  else {
    uVar2 = local_50._10_2_;
    lVar5 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *(long *)uVar10;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0779d3e8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar10,lVar5,0);
LAB_0779d3e8:
    bVar3 = (*(code *)*puVar6)(uVar10,uVar2,puVar6[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar9 + 0xf2) = 0;
  lVar5 = DAT_091c0310;
  if ((bVar3 & 1) == 0) {
    lVar9 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar9 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar9 = *(long *)(lVar5 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar9 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_09213168,**(undefined8 **)(lVar9 + 0xb8),0);
  }
  else {
    _GAME_Team_TeamHomeTabMyTeamChatContent__UpdateListChat(lVar9);
    if (*(long *)(lVar9 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    TMPro_TMP_InputField__set_text(*(long *)(lVar9 + 0x68),DAT_091f5700,0);
  }
LAB_0779d4a0:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

