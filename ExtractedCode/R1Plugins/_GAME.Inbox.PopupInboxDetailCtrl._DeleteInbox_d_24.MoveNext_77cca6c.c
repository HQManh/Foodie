// rea decompile_all
// name: _GAME.Inbox.PopupInboxDetailCtrl.<DeleteInbox>d__24$$MoveNext
// address: 0x77cca6c
// body: available
// range: 0x77cca6c-0x77ccd7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ccd74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ccd78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ccd7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_PopupInboxDetailCtrl_<DeleteInbox>d__24__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522f95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a28);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091b8610);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522f95 = 1;
  }
  plVar8 = *(long **)(param_1 + 10);
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
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
    if ((uVar3 & 1) != 0) goto LAB_077ccd4c;
    auVar9 = _GAME_Inbox_InboxServer__DeleteInbox(plVar8[0x2c],0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar3 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049b9abc(param_1 + 2,local_50,param_1,DAT_091c2a28);
      return;
    }
  }
  uVar1 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] != '\0') goto LAB_077ccc58;
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
    lVar6 = *(long *)uVar1;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077cccc4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar1,lVar4,0);
LAB_077cccc4:
    uVar3 = (*(code *)*puVar5)(uVar1,uVar2,puVar5[1]);
    if ((uVar3 & 1) != 0) {
LAB_077ccc58:
      lVar4 = *(long *)(DAT_091b8610 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Inbox_PopupInboxCtrl__DeleteInbox(**(long **)(lVar4 + 0xb8),plVar8[0x2c]);
      _GAME_GameUI_PopupBaseCtrl__Close(plVar8,0);
      goto LAB_077ccd4c;
    }
  }
  lVar4 = DAT_091c0310;
  lVar6 = *(long *)(DAT_091c0310 + 0x38);
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092087b8,**(undefined8 **)(lVar4 + 0xb8),0);
LAB_077ccd4c:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

