// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass93_0$$<ShowTutorial>g__OnDone|8
// address: 0x42a4c00
// body: available
// range: 0x42a4c00-0x42a4c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__OnDone_8
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0951724d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091b8f08);
    FUN_03f5c2a4(&DAT_091b8f18);
    FUN_03f5c2a4(&DAT_091d8598);
    FUN_03f5c2a4(&DAT_091f16f8);
    DAT_0951724d = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x20) < 1) {
      CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__TryShowNextIntroSlotMechanics_1
                (param_1);
      return;
    }
    lVar1 = FUN_05e2d168(lVar1,DAT_091b8f08);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar2,param_1,DAT_091f16f8,0);
      if (lVar3 != 0) {
        uVar2 = FUN_04d447b8(lVar3,uVar4,0,uVar2,0,DAT_091d8598);
        uVar2 = Utilities_AsyncExtension__RunWithLogException(uVar2,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          CakeOrder_InGame_UIInLevelCakeOrder__SetDoneIntroNewGridMechanic
                    (uVar2,*(undefined4 *)(lVar1 + 0x10));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

