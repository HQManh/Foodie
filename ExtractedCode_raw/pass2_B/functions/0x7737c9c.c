// rea decompile_all
// name: CakeOrder.PopupMinigame.TestCookMinigameControl$$OnStartPlay
// address: 0x7737c9c
// body: available
// range: 0x7737c9c-0x7737d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7737d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7737d80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_TestCookMinigameControl__OnStartPlay(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09522a9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbcb8);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09522a9d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
        if (lVar3 == 0) goto LAB_07737d7c;
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        uVar2 = UnityEngine_GameObject__get_transform(lVar3,0);
        uVar2 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3f000000,uVar2,0);
        uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
        FUN_04d8dd74(uVar2,DAT_091dbcb8);
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    return;
  }
LAB_07737d7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

