// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerManager$$CheckShowPopupClaimReward
// address: 0x780063c
// body: available
// range: 0x780063c-0x78007af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78007ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_DreamyTower_DreamyTowerManager__CheckShowPopupClaimReward(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_095231a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_091ab400);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091d5f60);
    FUN_03f5c2a4(&DAT_09189468);
    DAT_095231a9 = 1;
  }
  if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09183d80 + 0xb8) != 0) {
    iVar1 = _GAME_DreamyTower_SODreamyTowerConfig__GetNextLevelCheckPoint
                      (*(undefined4 *)(**(long **)(DAT_09183d80 + 0xb8) + 0x28));
    lVar4 = **(long **)(DAT_09183d80 + 0xb8);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x20) < iVar1) {
        return 0;
      }
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183d80);
        lVar4 = **(long **)(DAT_09183d80 + 0xb8);
        if (lVar4 == 0) goto LAB_078007ac;
      }
      if (*(long *)(lVar4 + 0x30) != 0) {
        if (*(int *)(*(long *)(lVar4 + 0x30) + 0x18) <= iVar1) {
          return 0;
        }
        if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183d80);
          lVar4 = **(long **)(DAT_09183d80 + 0xb8);
          if (lVar4 == 0) goto LAB_078007ac;
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          uVar2 = FUN_0571bde4(*(long *)(lVar4 + 0x30),iVar1,DAT_091ab408);
          if ((uVar2 & 1) != 0) {
            return 0;
          }
          if (*(int *)(DAT_09189468 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar3 = (long *)FUN_04ca5cb8(DAT_091d5f60);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
            return 1;
          }
        }
      }
    }
  }
LAB_078007ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

