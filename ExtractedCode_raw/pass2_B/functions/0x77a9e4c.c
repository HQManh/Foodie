// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$InitListNameFxItem
// address: 0x77a9e4c
// body: available
// range: 0x77a9e4c-0x77aa1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77aa1cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa1e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__InitListNameFxItem(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_09522e55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091ae938);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ae948);
    FUN_03f5c2a4(&DAT_091ae950);
    FUN_03f5c2a4(&DAT_091d4c18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    DAT_09522e55 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((*(long *)(param_1 + 0x198) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x100), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x178))
              (plVar4,*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x20),
               *(undefined8 *)(*plVar4 + 0x180));
    if ((*(long *)(param_1 + 0x100) != 0) &&
       ((lVar8 = *(long *)(*(long *)(param_1 + 0x100) + 0x48), lVar8 != 0 &&
        (*(long *)(param_1 + 0xe8) != 0)))) {
      TMPro_TMP_InputField__set_textComponent
                (*(long *)(param_1 + 0xe8),*(undefined8 *)(lVar8 + 0x20),0);
      plVar4 = *(long **)(param_1 + 0x100);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x188))
                  (plVar4,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
                   *(undefined8 *)(*plVar4 + 400));
        if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = _GAME_Profile_SOProfileConfig__get_ListNameFxStt();
        if (lVar8 != 0) {
          FUN_05797d74(&local_98,lVar8,DAT_091adcc0);
          iVar11 = 0;
          local_70 = local_88;
          uStack_78 = puStack_90;
          local_80 = local_98;
          local_98 = 0;
          puStack_90 = &local_80;
          while( true ) {
            uVar5 = FUN_071ad7a4(&local_80,DAT_091a34d8);
            uVar3 = local_70;
            if ((uVar5 & 1) == 0) {
              FUN_071ad7a0(&local_80,DAT_091a34d0);
              uVar6 = *(undefined8 *)(param_1 + 0x180);
              if (*(int *)(DAT_09187680 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar6,0);
              return;
            }
            lVar8 = *(long *)(param_1 + 0x178);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar2 = (int)local_70;
            if (iVar11 < *(int *)(lVar8 + 0x18)) {
              plVar4 = (long *)FUN_057e0998(lVar8,iVar11,DAT_091ae950);
            }
            else {
              uVar6 = FUN_057e0998(lVar8,0,DAT_091ae950);
              uVar12 = *(undefined8 *)(param_1 + 0x180);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              plVar4 = (long *)FUN_04c35338(uVar6,uVar12,DAT_091d4c18);
            }
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*plVar4 + 0x178))
                      (plVar4,uVar3 & 0xffffffff,*(undefined8 *)(*plVar4 + 0x180));
            if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (**(long **)(DAT_091896c0 + 0xb8) == 0) break;
            (**(code **)(*plVar4 + 0x188))
                      (plVar4,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
                       *(undefined8 *)(*plVar4 + 400));
            if (*(long *)(param_1 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*plVar4 + 0x198))
                      (plVar4,iVar2 == *(int *)(*(long *)(param_1 + 0x198) + 0x20),
                       *(undefined8 *)(*plVar4 + 0x1a0));
            lVar8 = DAT_091ae938;
            lVar7 = *(long *)(param_1 + 0x178);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            if ((int)uVar1 <= iVar11) {
              lVar10 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = (long)plVar4;
                thunk_FUN_03f5d7b8(plVar9,plVar4);
              }
              else {
                FUN_057e0c68(lVar7,plVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
            iVar11 = iVar11 + 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

