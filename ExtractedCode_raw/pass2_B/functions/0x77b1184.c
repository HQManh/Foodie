// rea decompile_all
// name: _GAME.Profile.ProfileManager$$UnlockEquipFrame
// address: 0x77b1184
// body: available
// range: 0x77b1184-0x77b1323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b131c to 0x77b01e0 _GAME.Profile.ProfileManager$$SaveRankScore (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b1320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__UnlockEquipFrame(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09522e8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d4d0);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091896c0);
    DAT_09522e8f = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_091896c0 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar5 = FUN_06ed2f2c(lVar4,param_1,1,DAT_0919d4d0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_091adc88;
    lVar4 = DAT_091896c0;
    lVar7 = **(long **)(DAT_091896c0 + 0xb8);
    if ((lVar7 != 0) && (lVar6 = *(long *)(lVar7 + 0x38), lVar6 != 0)) {
      lVar8 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = param_1;
        }
        else {
          FUN_057971a8(lVar6,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          lVar7 = **(long **)(DAT_091896c0 + 0xb8);
          lVar4 = DAT_091896c0;
          if (lVar7 == 0) goto LAB_077b1320;
        }
        uVar1 = *(undefined4 *)(lVar7 + 0x24);
        *(int *)(lVar7 + 0x24) = param_1;
        *(undefined4 *)(lVar7 + 0x2c) = uVar1;
        if (param_1 == 10) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar7 = **(long **)(DAT_091896c0 + 0xb8);
            lVar4 = DAT_091896c0;
          }
          if ((**(long **)(DAT_09183d58 + 0xb8) == 0) || (lVar7 == 0)) goto LAB_077b1320;
          *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x18);
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__SaveRankScore();
        return;
      }
    }
  }
LAB_077b1320:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

