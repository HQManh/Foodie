// rea decompile_all
// name: _GAME.Profile.ProfileManager$$CheckUnlockAvatarFrameByLevel
// address: 0x77affc4
// body: available
// range: 0x77affc4-0x77b015f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b0158 to 0x77b149c _GAME.Profile.ProfileManager$$UnlockEquipNameFx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b015c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__CheckUnlockAvatarFrameByLevel(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  
  if ((DAT_09522e84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d4c0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    DAT_09522e84 = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_Profile_ProfileManager__CheckUnlockAvatarByRestaurant();
  iVar5 = 0;
  do {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b015c;
    iVar1 = *(int *)(**(long **)(DAT_091896c0 + 0xb8) + 0x78);
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (-1 < iVar1) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = *(long **)(DAT_091896c0 + 0xb8);
      if (*(char *)((long)plVar4 + 0x1d) != '\0') {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
          plVar4 = *(long **)(DAT_091896c0 + 0xb8);
        }
        if (*plVar4 == 0) goto LAB_077b015c;
        if (*(int *)(*plVar4 + 0x2c) < iVar5) {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__UnlockEquipFrame(iVar5);
          goto LAB_077b00ec;
        }
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__UnlockFrame(iVar5);
    }
LAB_077b00ec:
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_091896c0 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = FUN_06ed173c(lVar2,0,DAT_0919d4c0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__UnlockEquipNameFx(0);
      return;
    }
    return;
  }
LAB_077b015c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

