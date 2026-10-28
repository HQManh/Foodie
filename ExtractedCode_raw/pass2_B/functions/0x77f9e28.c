// rea decompile_all
// name: _GAME.StageRace.StageRacePlayerInLevelUICtrl$$UpdatePlayerPoint
// address: 0x77f9e28
// body: available
// range: 0x77f9e28-0x77fa0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fa0ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRacePlayerInLevelUICtrl__UpdatePlayerPoint(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int local_38;
  undefined4 local_34;
  
  if ((DAT_09523156 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b04b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09523156 = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = *(long **)(DAT_0918b158 + 0xb8);
  if (*plVar4 != 0) {
    if (*(int *)(param_1 + 0x20) < 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar4 = *(long **)(DAT_0918b158 + 0xb8);
      }
      if (plVar4[1] != 0) {
        local_34 = *(undefined4 *)(plVar4[1] + 0x34);
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
        uVar3 = System_String__Format(DAT_09226038,uVar3,0);
        if (lVar2 != 0) {
          TMPro_TMP_Text__SetText(lVar2,uVar3,0);
          plVar4 = *(long **)(param_1 + 0x30);
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
                       *(undefined8 *)(*plVar4 + 0x180));
            if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
               (plVar4 = *(long **)(param_1 + 0x38), plVar4 != (long *)0x0)) {
              (**(code **)(*plVar4 + 0x178))
                        (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
                         *(undefined8 *)(*plVar4 + 0x180));
              if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
                 (plVar4 = *(long **)(param_1 + 0x40), plVar4 != (long *)0x0)) {
                (**(code **)(*plVar4 + 0x178))
                          (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x28),
                           *(undefined8 *)(*plVar4 + 0x180));
                if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
                   (plVar4 = *(long **)(param_1 + 0x40), plVar4 != (long *)0x0)) {
                  (**(code **)(*plVar4 + 0x188))
                            (plVar4,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
                             *(undefined8 *)(*plVar4 + 400));
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(*plVar4 + 0x14);
      if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar4 = *(long **)(DAT_0918b158 + 0xb8);
      }
      if (((plVar4[1] != 0) && (lVar2 = *(long *)(plVar4[1] + 0x48), lVar2 != 0)) &&
         (lVar2 = FUN_057e0998(lVar2,*(undefined4 *)(param_1 + 0x20),DAT_091b04b8), lVar2 != 0)) {
        lVar5 = *(long *)(param_1 + 0x28);
        local_38 = *(int *)(lVar2 + 0x2c);
        if (iVar1 <= *(int *)(lVar2 + 0x2c)) {
          local_38 = iVar1;
        }
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_38);
        uVar3 = System_String__Format(DAT_09226038,uVar3,0);
        if (lVar5 != 0) {
          TMPro_TMP_Text__SetText(lVar5,uVar3,0);
          plVar4 = *(long **)(param_1 + 0x30);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined4 *)(lVar2 + 0x14),*(undefined8 *)(*plVar4 + 0x180));
            plVar4 = *(long **)(param_1 + 0x38);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x178))
                        (plVar4,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar4 + 0x180));
              plVar4 = *(long **)(param_1 + 0x40);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x178))
                          (plVar4,*(undefined4 *)(lVar2 + 0x1c),*(undefined8 *)(*plVar4 + 0x180));
                plVar4 = *(long **)(param_1 + 0x40);
                if (plVar4 != (long *)0x0) {
                  (**(code **)(*plVar4 + 0x188))
                            (plVar4,*(undefined8 *)(lVar2 + 0x20),0,*(undefined8 *)(*plVar4 + 400));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

