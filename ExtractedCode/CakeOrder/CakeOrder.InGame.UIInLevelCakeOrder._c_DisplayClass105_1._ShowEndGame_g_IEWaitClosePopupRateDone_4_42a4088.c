// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass105_1$$<ShowEndGame>g__IEWaitClosePopupRateDone|4
// address: 0x42a4088
// body: available
// range: 0x42a4088-0x42a40f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass105_1__<ShowEndGame>g__IEWaitClosePopupRateDone_4
               (undefined8 param_1)

{
  long lVar1;
  
  if ((DAT_09517247 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09196cd8);
    DAT_09517247 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09196cd8);
  System_Object___ctor(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_1);
  return lVar1;
}

