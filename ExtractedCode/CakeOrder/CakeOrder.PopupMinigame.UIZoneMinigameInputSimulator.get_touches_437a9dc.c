// rea decompile_all
// name: CakeOrder.PopupMinigame.UIZoneMinigameInputSimulator$$get_touches
// address: 0x437a9dc
// body: available
// range: 0x437a9dc-0x437aaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437aaa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437aaa8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_PopupMinigame_UIZoneMinigameInputSimulator__get_touches(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  undefined1 auStack_74 [68];
  
  if ((DAT_09517938 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180710);
    DAT_09517938 = 1;
  }
  uVar1 = UnityEngine_Input__get_touchCount(0);
  lVar2 = FUN_03f5c394(DAT_09180710,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    __dest = (void *)(lVar2 + 0x20);
    do {
      CakeOrder_PopupMinigame_UIZoneMinigameInputSimulator__GetTouch
                (auStack_74,param_1,uVar3 & 0xffffffff);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      memcpy(__dest,auStack_74,0x44);
      uVar3 = uVar3 + 1;
      __dest = (void *)((long)__dest + 0x44);
    } while (uVar1 != uVar3);
  }
  return lVar2;
}

