// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass93_0$$<ShowTutorial>g__OnDoneShowPopupInfoNewItem|12
// address: 0x42a5174
// body: available
// range: 0x42a5174-0x42a5177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__OnDoneShowPopupInfoNewItem_12
               (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0xc0) != 0)) &&
      (lVar4 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar4 = *(long *)(param_1 + 0x38);
    if (iVar1 == 2) {
      uVar3 = 1;
    }
    else {
      if (iVar1 != 1) {
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042a5164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        return;
      }
      uVar3 = 0;
    }
    uVar3 = CakeOrder_InGame_UIInLevelCakeOrder__ShowPopupAlert(lVar2,uVar3,1,0);
    Utilities_AsyncExtension__RunWithLogException(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

