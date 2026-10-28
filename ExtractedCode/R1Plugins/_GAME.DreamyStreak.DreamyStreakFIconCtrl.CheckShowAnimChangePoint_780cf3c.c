// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakFIconCtrl$$CheckShowAnimChangePoint
// address: 0x780cf3c
// body: available
// range: 0x780cf3c-0x780d0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780d0e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _GAME_DreamyStreak_DreamyStreakFIconCtrl__CheckShowAnimChangePoint(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if ((DAT_0952323a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_091ba2e0);
    DAT_0952323a = 1;
  }
  lVar3 = *(long *)(DAT_091ba2e0 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar4 = _GAME_DreamyStreak_DreamyStreakFIconCtrl__CheckFeatureActive();
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = **(long **)(DAT_09183d70 + 0xb8);
      if (lVar3 == 0) goto LAB_0780d0e4;
      if (*(int *)(lVar3 + 0x24) < *(int *)(lVar3 + 0x20)) {
        if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar3 = **(long **)(DAT_09183d70 + 0xb8);
          if (lVar3 == 0) goto LAB_0780d0e4;
        }
        iVar1 = *(int *)(lVar3 + 0x2c);
        if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = _GAME_DreamyStreak_SODreamyStreakConfig__get_MaxLevelPoint();
        if (iVar1 < iVar2) {
          lVar3 = *(long *)(DAT_091ba2e0 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0780d0e4;
          if (*(char *)(**(long **)(lVar3 + 0xb8) + 0x88) == '\0') {
            lVar3 = *(long *)(DAT_091ba2e0 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0780d0e4;
            _GAME_DreamyStreak_DreamyStreakFIconCtrl__PlayAnimChangePoint();
            uVar5 = 0x3fc00000;
          }
        }
      }
    }
    return uVar5;
  }
LAB_0780d0e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

