// rea decompile_all
// name: _GAME.Profile.ProfileManager$$CopyCoreProfileOnce
// address: 0x77afcb8
// body: available
// range: 0x77afcb8-0x77afea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77afea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__CopyCoreProfileOnce(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_14;
  
  if ((DAT_09522e79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_092140e0);
    DAT_09522e79 = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
    if ((*(char *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc2) != '\0') ||
       (uVar2 = _GAME_Bridge_CookOrderBridge__get_IsCoreProfileReady(0), (uVar2 & 1) == 0)) {
      return;
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc2) = 1;
      uVar3 = _GAME_Bridge_CookOrderBridge__get_CoreProfileName(0);
      uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar3,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077afea4;
        puVar4 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
        *puVar4 = uVar3;
        thunk_FUN_03f5d7b8(puVar4,uVar3);
      }
      iVar1 = _GAME_Bridge_CookOrderBridge__get_CoreAvatarIndex(0);
      if (-1 < iVar1) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077afea4;
        *(int *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20) = iVar1;
      }
      uVar2 = _GAME_Bridge_CookOrderBridge__get_IsCoreNameEdited(0);
      lVar5 = DAT_091896c0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = DAT_091896c0;
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077afea4;
        *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc0) = 1;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = DAT_091896c0;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 != 0) {
        local_14 = *(undefined4 *)(lVar5 + 0x20);
        uVar6 = *(undefined8 *)(lVar5 + 0x18);
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_14);
        uVar3 = System_String__Format(DAT_092140e0,uVar6,uVar3,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__Log(uVar3,0);
        _GAME_Profile_ProfileManager__SaveRankScore();
        return;
      }
    }
  }
LAB_077afea4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

