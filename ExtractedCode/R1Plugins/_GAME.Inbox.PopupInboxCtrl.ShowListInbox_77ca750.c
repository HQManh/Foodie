// rea decompile_all
// name: _GAME.Inbox.PopupInboxCtrl$$ShowListInbox
// address: 0x77ca750
// body: available
// range: 0x77ca750-0x77caa4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ca9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77caa4c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_PopupInboxCtrl__ShowListInbox(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_09522f86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091aadf8);
    FUN_03f5c2a4(&DAT_091ad8b8);
    FUN_03f5c2a4(&DAT_091aadf0);
    FUN_03f5c2a4(&DAT_091aae08);
    FUN_03f5c2a4(&DAT_091ad8c8);
    FUN_03f5c2a4(&DAT_091aae10);
    FUN_03f5c2a4(&DAT_091ad8d0);
    FUN_03f5c2a4(&DAT_0917bbf0);
    FUN_03f5c2a4(&DAT_091d4be0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522f86 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917bbf0);
  FUN_057e0400(lVar2,DAT_091aadf0);
  if (*(long *)(param_1 + 0x108) != 0) {
    if (lVar2 == 0) goto LAB_077ca9f8;
    FUN_057e0e78(lVar2,*(long *)(param_1 + 0x108),DAT_091aadf8);
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    if (lVar2 == 0) goto LAB_077ca9f8;
  }
  else {
    if (lVar2 == 0) goto LAB_077ca9f8;
    FUN_057e0e78(lVar2,*(long *)(param_1 + 0x110),DAT_091aadf8);
  }
  iVar10 = *(int *)(lVar2 + 0x18);
  if (0 < iVar10) {
    iVar9 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xf0);
      if (lVar3 == 0) goto LAB_077ca9f8;
      if (iVar9 < *(int *)(lVar3 + 0x18)) {
        lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091ad8d0);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0xe8);
        uVar11 = *(undefined8 *)(param_1 + 0xf8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = FUN_04c35338(uVar5,uVar11,DAT_091d4be0);
      }
      if ((lVar3 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar3,0), lVar4 == 0))
      goto LAB_077ca9f8;
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      uVar5 = FUN_057e0998(lVar2,iVar9,DAT_091aae10);
      _GAME_Inbox_InboxItemUICtrl__UpdateUIData(lVar3,uVar5);
      lVar4 = DAT_091ad8b8;
      lVar6 = *(long *)(param_1 + 0xf0);
      if (lVar6 == 0) goto LAB_077ca9f8;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar1 <= iVar9) {
        lVar8 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_077ca9f8;
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar3;
          thunk_FUN_03f5d7b8(plVar7,lVar3);
        }
        else {
          FUN_057e0c68(lVar6,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      iVar10 = *(int *)(lVar2 + 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    while (iVar10 < *(int *)(lVar3 + 0x18)) {
      lVar3 = FUN_057e0998(lVar3,iVar10,DAT_091ad8d0);
      if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
      goto LAB_077ca9f8;
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      lVar3 = *(long *)(param_1 + 0xf0);
      iVar10 = iVar10 + 1;
      if (lVar3 == 0) goto LAB_077ca9f8;
    }
    uVar5 = *(undefined8 *)(param_1 + 0xf8);
    if (*(int *)(DAT_09187680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar5,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x100),*(int *)(lVar2 + 0x18) < 1,0);
      return;
    }
  }
LAB_077ca9f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

