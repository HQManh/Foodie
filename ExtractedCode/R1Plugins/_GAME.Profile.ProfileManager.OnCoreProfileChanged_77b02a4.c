// rea decompile_all
// name: _GAME.Profile.ProfileManager$$OnCoreProfileChanged
// address: 0x77b02a4
// body: available
// range: 0x77b02a4-0x77b0487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b043c to 0x77afcb8 _GAME.Profile.ProfileManager$$CopyCoreProfileOnce (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b0474 to 0x77b01e0 _GAME.Profile.ProfileManager$$SaveRankScore (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b0484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__OnCoreProfileChanged(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09522e7a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    DAT_09522e7a = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = **(long **)(DAT_091896c0 + 0xb8);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar7 == 0) goto LAB_077b0484;
  }
  if (*(char *)(lVar7 + 0xc2) == '\0') {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__CopyCoreProfileOnce();
    return;
  }
  uVar3 = _GAME_Bridge_CookOrderBridge__get_CoreProfileName(0);
  iVar2 = _GAME_Bridge_CookOrderBridge__get_CoreAvatarIndex(0);
  uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar3,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0484;
    uVar4 = System_String__op_Inequality
                      (uVar3,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0);
    if ((uVar4 & 1) == 0) goto LAB_077b03dc;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0484;
    puVar5 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
    *puVar5 = uVar3;
    thunk_FUN_03f5d7b8(puVar5,uVar3);
    uVar4 = _GAME_Bridge_CookOrderBridge__get_IsCoreNameEdited(0);
    if ((uVar4 & 1) == 0) {
      bVar1 = true;
    }
    else {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b0484;
      bVar1 = true;
      *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc0) = 1;
    }
  }
  else {
LAB_077b03dc:
    bVar1 = false;
  }
  if (-1 < iVar2) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar7 == 0) {
LAB_077b0484:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar2 != *(int *)(lVar7 + 0x20)) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar7 = **(long **)(DAT_091896c0 + 0xb8);
        if (lVar7 == 0) goto LAB_077b0484;
      }
      lVar6 = DAT_091896c0;
      *(int *)(lVar7 + 0x20) = iVar2;
      goto LAB_077b0460;
    }
  }
  lVar6 = DAT_091896c0;
  if (!bVar1) {
    return;
  }
LAB_077b0460:
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_Profile_ProfileManager__SaveRankScore();
  return;
}

