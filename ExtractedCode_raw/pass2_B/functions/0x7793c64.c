// rea decompile_all
// name: _GAME.Team.SelfChatItemUICtrl$$UpdateProfileInfo
// address: 0x7793c64
// body: available
// range: 0x7793c64-0x7793de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7793dd4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7793de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_SelfChatItemUICtrl__UpdateProfileInfo(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09522db5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522db5 = 1;
    param_2 = extraout_x1;
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
    param_2 = extraout_x1_00;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = DAT_091896c0;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = DAT_091896c0;
  if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (auVar11 = auVar1, plVar10 != (long *)0x0)) {
    auVar11 = (**(code **)(*plVar10 + 0x178))
                        (plVar10,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
                         *(undefined8 *)(*plVar10 + 0x180));
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      plVar10 = *(long **)(param_1 + 0x30);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar11._8_8_;
      auVar11 = auVar2 << 0x40;
      if (plVar10 != (long *)0x0) {
        auVar11 = (**(code **)(*plVar10 + 0x178))
                            (plVar10,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
                             *(undefined8 *)(*plVar10 + 0x180));
        if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
          plVar10 = *(long **)(param_1 + 0x38);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar11._8_8_;
          auVar11 = auVar3 << 0x40;
          if (plVar10 != (long *)0x0) {
            auVar11 = (**(code **)(*plVar10 + 0x178))
                                (plVar10,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x28),
                                 *(undefined8 *)(*plVar10 + 0x180));
            if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
              plVar10 = *(long **)(param_1 + 0x38);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = auVar11._8_8_;
              auVar11 = auVar4 << 0x40;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x188))
                          (plVar10,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
                           *(undefined8 *)(*plVar10 + 400));
                lVar9 = *(long *)(param_1 + 0x40);
                uVar6 = extraout_x1_01;
                if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
                  FUN_03f5c424();
                  uVar6 = extraout_x1_02;
                }
                auVar11._8_8_ = uVar6;
                auVar11._0_8_ = DAT_0918b978;
                lVar8 = **(long **)(DAT_0918b978 + 0xb8);
                if (lVar8 != 0) {
                  if (*(long *)(lVar8 + 0x40) == 0) {
                    uVar7 = 0;
                    lVar5 = DAT_0918b978;
                  }
                  else {
                    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
                      auVar11 = FUN_03f5c424();
                      lVar8 = **(long **)(DAT_0918b978 + 0xb8);
                      if (lVar8 == 0) goto LAB_07793de0;
                    }
                    lVar5 = auVar11._0_8_;
                    if (*(long *)(lVar8 + 0x40) == 0) goto LAB_07793de0;
                    uVar7 = (ulong)(*(int *)(*(long *)(lVar8 + 0x40) + 0x30) == 1);
                  }
                  auVar11._8_8_ = uVar7;
                  auVar11._0_8_ = lVar5;
                  if (lVar9 != 0) {
                    UnityEngine_GameObject__SetActive(lVar9,uVar7,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07793de0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar11._0_8_,auVar11._8_8_);
}

