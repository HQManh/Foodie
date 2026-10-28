// rea decompile_all
// name: _GAME.Utils.UIUtils$$GetRandPosSizeRect
// address: 0x77477b0
// body: available
// range: 0x77477b0-0x774788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7747884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7747888 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float _GAME_Utils_UIUtils__GetRandPosSizeRect(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((DAT_09522b31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09522b31 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091807f8,4);
  if ((param_2 != 0) && (UnityEngine_RectTransform__GetWorldCorners(param_2,lVar1,0), lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x18) != 0) && (2 < *(uint *)(lVar1 + 0x18))) {
      uVar3 = *(undefined4 *)(lVar1 + 0x24);
      uVar4 = *(undefined4 *)(lVar1 + 0x3c);
      fVar2 = (float)UnityEngine_Random__Range
                               (*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x38),0);
      UnityEngine_Random__Range(uVar3,uVar4,0);
      return param_1 + fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

