// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$OnChangeNameInput
// address: 0x77aa630
// body: available
// range: 0x77aa630-0x77aa837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77aa82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77aa834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__OnChangeNameInput(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_09522e50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a39e0);
    FUN_03f5c2a4(&DAT_091a39e8);
    FUN_03f5c2a4(&DAT_091a39f0);
    FUN_03f5c2a4(&DAT_091ae940);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522e50 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x128);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (((*(long *)(param_1 + 0x100) == 0) ||
          (lVar6 = *(long *)(*(long *)(param_1 + 0x100) + 0x48), lVar6 == 0)) ||
         (*(long *)(param_1 + 0xe8) == 0)) goto LAB_077aa834;
      TMPro_TMP_InputField__set_textComponent
                (*(long *)(param_1 + 0xe8),*(undefined8 *)(lVar6 + 0x20),0);
    }
    if ((*(long *)(param_1 + 0xe8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0xe8) + 0x210), lVar6 != 0)) {
      iVar1 = *(int *)(lVar6 + 0x10);
      iVar2 = _GAME_Bridge_CookOrderBridge__get_NameMaxLength(0);
      if (iVar2 < iVar1) {
        lVar6 = *(long *)(param_1 + 0xe8);
        if (lVar6 == 0) goto LAB_077aa834;
        lVar8 = *(long *)(lVar6 + 0x210);
        uVar3 = _GAME_Bridge_CookOrderBridge__get_NameMaxLength(0);
        if (lVar8 == 0) goto LAB_077aa834;
        uVar7 = System_String__Substring(lVar8,0,uVar3,0);
        TMPro_TMP_InputField__set_text(lVar6,uVar7,0);
      }
      if ((*(long *)(param_1 + 0xe8) != 0) && (*(long *)(param_1 + 0x198) != 0)) {
        *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10) =
             *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x210);
        thunk_FUN_03f5d7b8();
        if ((*(long *)(param_1 + 0x198) != 0) &&
           (plVar5 = *(long **)(param_1 + 0x100), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x188))
                    (plVar5,*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10),0,
                     *(undefined8 *)(*plVar5 + 400));
          if (*(long *)(param_1 + 0x178) != 0) {
            FUN_057e185c(&local_48,*(long *)(param_1 + 0x178),DAT_091ae940);
            while( true ) {
              uVar4 = FUN_071bd28c(&local_48,DAT_091a39e8);
              if ((uVar4 & 1) == 0) {
                FUN_071bd288(&local_48,DAT_091a39e0);
                _GAME_Profile_PopupEditProfileCtrl__UpdateBtnSaveStatus(param_1);
                return;
              }
              if (*(long *)(param_1 + 0x198) == 0) break;
              if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              (**(code **)(*local_38 + 0x188))
                        (local_38,*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10),0,
                         *(undefined8 *)(*local_38 + 400));
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
LAB_077aa834:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

