// rea decompile_all
// name: _GAME.Inbox.PopupInboxDetailCtrl.<ClaimInbox>d__23$$MoveNext
// address: 0x77cc374
// body: available
// range: 0x77cc374-0x77cc8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77cc8c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8e0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cc8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077cc8dc) */

void _GAME_Inbox_PopupInboxDetailCtrl_<ClaimInbox>d__23__MoveNext(int *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 local_40 [16];
  int local_24;
  
  if ((DAT_09522f94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091a40d0);
    FUN_03f5c2a4(&DAT_091a40d8);
    FUN_03f5c2a4(&DAT_091a40e0);
    FUN_03f5c2a4(&DAT_091afa88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8610);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522f94 = 1;
  }
  local_24 = *param_1;
  plVar17 = *(long **)(param_1 + 10);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_50 = (undefined1 *)0x0;
  local_68 = 0;
  if (local_24 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    local_24 = -1;
    *param_1 = -1;
  }
  else {
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = (**(code **)(*plVar17 + 0x348))(plVar17,*(undefined8 *)(*plVar17 + 0x350));
    auVar9._8_8_ = local_60._8_8_;
    auVar9._0_8_ = local_60._0_8_;
    auVar8._8_8_ = local_60._8_8_;
    auVar8._0_8_ = local_60._0_8_;
    auVar7._8_8_ = local_60._8_8_;
    auVar7._0_8_ = local_60._0_8_;
    auVar6._8_8_ = local_40._8_8_;
    auVar6._0_8_ = local_40._0_8_;
    auVar5._8_8_ = local_40._8_8_;
    auVar5._0_8_ = local_40._0_8_;
    auVar4._8_8_ = local_40._8_8_;
    auVar4._0_8_ = local_40._0_8_;
    auVar3._8_8_ = uStack_88;
    auVar3._0_8_ = local_90;
    auVar2._8_8_ = uStack_88;
    auVar2._0_8_ = local_90;
    auVar20._8_8_ = uStack_88;
    auVar20._0_8_ = local_90;
    if (((((uVar11 & 1) != 0) ||
         (_local_90 = auVar20, local_40 = auVar4, local_60 = auVar7, (char)plVar17[0x2e] != '\0'))
        || (lVar14 = plVar17[0x2c], _local_90 = auVar2, local_40 = auVar5, local_60 = auVar8,
           lVar14 == 0)) ||
       (_local_90 = auVar3, local_40 = auVar6, local_60 = auVar9, *(char *)(lVar14 + 0x61) != '\0'))
    goto LAB_077cc7f0;
    plVar18 = (long *)(param_1 + 0xc);
    *plVar18 = lVar14;
    thunk_FUN_03f5d7b8(plVar18);
    *(long *)(param_1 + 0xe) = plVar17[0x2d];
    thunk_FUN_03f5d7b8();
    *(undefined1 *)(plVar17 + 0x2e) = 1;
    if (plVar17[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Selectable__set_interactable(plVar17[0x2a],0,0);
    auVar20 = _GAME_Inbox_InboxServer__ClaimInbox(*plVar18,0);
    local_90 = (undefined1  [8])0x0;
    uStack_88 = (int *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    _local_90 = auVar20;
    thunk_FUN_03f5d7b8(local_90,0);
    local_40 = _local_90;
    uVar11 = FUN_0430cf0c(local_40,DAT_0919a588);
    if ((uVar11 & 1) == 0) {
      local_24 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_049b984c(param_1 + 2,local_40,param_1,DAT_091c2a20);
      return;
    }
  }
  uVar13 = local_40._0_8_;
  if ((long *)local_40._0_8_ == (long *)0x0) {
    if (local_40[8] != '\0') goto LAB_077cc608;
LAB_077cc650:
    bVar1 = false;
  }
  else {
    uVar10 = local_40._10_2_;
    lVar14 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c(lVar14);
    }
    lVar15 = *(long *)uVar13;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_077cc63c;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03f95da8(uVar13,lVar14,0);
LAB_077cc63c:
    uVar11 = (*(code *)*puVar12)(uVar13,uVar10,puVar12[1]);
    if ((uVar11 & 1) == 0) goto LAB_077cc650;
LAB_077cc608:
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar1 = true;
    *(undefined1 *)(*(long *)(param_1 + 0xc) + 0x61) = 1;
    _GAME_GameItem_GameItemManager__ClaimReward(*(undefined8 *)(param_1 + 0xe),0x24,0xfffffffe,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = UnityEngine_Object__op_Equality(plVar17,0,0);
  if ((uVar11 & 1) == 0) {
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 0xc) != plVar17[0x2c]) goto LAB_077cc694;
    *(undefined1 *)(plVar17 + 0x2e) = 0;
    if (plVar17[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Selectable__set_interactable(plVar17[0x2a],1,0);
    lVar14 = DAT_091c0310;
    if (!bVar1) {
      lVar15 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar15 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar15 = *(long *)(lVar14 + 0x38);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03f95a6c();
      }
      if (*(int *)(lVar15 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_092087b8,**(undefined8 **)(lVar14 + 0xb8),0);
      goto LAB_077cc7f0;
    }
    if (plVar17[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(local_90,plVar17[0x25],DAT_091afa88);
    local_60 = _local_90;
    local_50 = local_80;
    uStack_88 = &local_24;
    local_90 = (undefined1  [8])0x0;
    local_80 = local_60;
    while( true ) {
      uVar11 = FUN_071bd28c(local_60,DAT_091a40d8);
      if ((uVar11 & 1) == 0) break;
      if (local_50 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar19 = *(undefined8 *)(local_50 + 0x38);
      uVar13 = UnityEngine_Component__get_transform(local_50,0);
      _GAME_GameUI_DropItemController__DropRwItemToBag(uVar19,uVar13,0);
    }
    if (local_24 < 0) {
      FUN_071bd288(local_80,DAT_091a40d0);
    }
    _GAME_Inbox_PopupInboxDetailCtrl__UpdateUILayoutClaimed(plVar17);
    _GAME_Utils_HelperButton__SetActive(plVar17[0x2a],0,0);
    _GAME_Utils_HelperButton__SetActive(plVar17[0x2b],1,0);
    lVar14 = *(long *)(DAT_091b8610 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
  }
  else {
LAB_077cc694:
    if (!bVar1) goto LAB_077cc7f0;
    lVar14 = *(long *)(DAT_091b8610 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    _GAME_Inbox_PopupInboxCtrl__UpdateNotify();
  }
LAB_077cc7f0:
  *param_1 = -2;
  piVar16 = param_1 + 0xc;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_03f5d7b8(piVar16,0);
  piVar16 = param_1 + 0xe;
  piVar16[0] = 0;
  piVar16[1] = 0;
  thunk_FUN_03f5d7b8(piVar16,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

