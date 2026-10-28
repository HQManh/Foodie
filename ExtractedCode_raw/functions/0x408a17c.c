// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$GetNextLevelNewToolIds
// address: 0x408a17c
// body: available
// range: 0x408a17c-0x408a29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408a270 to 0x4088054 TrungKien.UI.NewFearther.UIPopupNewFeather$$GetNewToolIds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408a298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 TrungKien_UI_NewFearther_UIPopupNewFeather__GetNextLevelNewToolIds(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09515cb6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_091b4c50);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515cb6 = 1;
  }
  uVar2 = FUN_05a8f088(DAT_091b4c50);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b4c48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar3 + 0x48);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x50);
      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = TrungKien_UI_NewFearther_UIPopupNewFeather__GetNewToolIds(lVar5,uVar1);
      return uVar4;
    }
  }
  uVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar4,DAT_091b0558);
  return uVar4;
}

