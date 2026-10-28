// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass93_0$$<ShowTutorial>g__TryShowNextIntroSlotMechanics|1
// address: 0x42a4adc
// body: available
// range: 0x42a4adc-0x42a4bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a4be4 to 0x429d6a0 CakeOrder.InGame.UIInLevelCakeOrder$$SetDoneIntroNewSlotMechanics (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42a4bf8 to 0x42a4c04 CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass93_0$$<ShowTutorial>g__TryShowIntroLinkedSlotMechanics|2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42a4bfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__TryShowNextIntroSlotMechanics_1
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0951724e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091b8f28);
    FUN_03f5c2a4(&DAT_091b8f38);
    FUN_03f5c2a4(&DAT_091d8598);
    FUN_03f5c2a4(&DAT_091f1700);
    DAT_0951724e = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x20) < 1) {
      CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__TryShowIntroLinkedSlotMechanics_2
                (param_1);
      return;
    }
    lVar1 = FUN_05e2d168(lVar1,DAT_091b8f28);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar2,param_1,DAT_091f1700,0);
      if (lVar3 != 0) {
        uVar2 = FUN_04d447b8(lVar3,uVar4,0,uVar2,0,DAT_091d8598);
        uVar2 = Utilities_AsyncExtension__RunWithLogException(uVar2,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          CakeOrder_InGame_UIInLevelCakeOrder__SetDoneIntroNewSlotMechanics
                    (uVar2,*(undefined4 *)(lVar1 + 0x10));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

