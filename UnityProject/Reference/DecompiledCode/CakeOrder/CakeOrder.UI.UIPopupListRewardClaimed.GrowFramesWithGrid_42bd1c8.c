// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$GrowFramesWithGrid
// address: 0x42bd1c8
// body: available
// range: 0x42bd1c8-0x42bd2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bd2a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bd2bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__GrowFramesWithGrid(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  if ((DAT_095172ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095172ff = 1;
  }
  lVar2 = *(long *)(param_2 + 0x108);
  if (lVar2 == 0) {
    return;
  }
  uVar4 = 0;
  param_1 = param_1 - *(float *)(param_2 + 0x110);
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = param_1;
  }
  do {
    if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) {
      return;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_042bd2bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x118);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_042bd2bc;
      if (lVar2 == 0) break;
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                (fVar5 + *(float *)(lVar3 + uVar4 * 4 + 0x20),lVar2,1,0);
    }
    lVar2 = *(long *)(param_2 + 0x108);
    uVar4 = uVar4 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

