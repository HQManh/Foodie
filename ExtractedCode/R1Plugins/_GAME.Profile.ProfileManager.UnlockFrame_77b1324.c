// rea decompile_all
// name: _GAME.Profile.ProfileManager$$UnlockFrame
// address: 0x77b1324
// body: available
// range: 0x77b1324-0x77b149b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b1494 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b1498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__UnlockFrame(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09522e8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d4d0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba480);
    FUN_03f5c2a4(&DAT_0917e740);
    DAT_09522e8e = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_091896c0 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = FUN_06ed2f2c(lVar2,param_1,1,DAT_0919d4d0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = DAT_091adc88;
    if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x38), lVar4 != 0)) {
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_1;
        }
        else {
          FUN_057971a8(lVar4,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077b1498;
        }
        _GAME_Profile_ProfileDbModel__AddSaveAction();
        if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba480);
        return;
      }
    }
  }
LAB_077b1498:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

