// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusView$$MaskScaleFor
// address: 0x412426c
// body: available
// range: 0x412426c-0x4124373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4124370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusView__MaskScaleFor(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  if ((DAT_095162b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162b9 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_04124370:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = UnityEngine_SpriteMask__get_sprite(*(long *)(param_1 + 0x28),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
  }
  else {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar3 = UnityEngine_SpriteMask__get_sprite(*(long *)(param_1 + 0x28),0), lVar3 == 0))
    goto LAB_04124370;
    UnityEngine_Sprite__get_bounds(auStack_38,lVar3,0);
  }
  NEON_fmov(0x3f800000,4);
  return;
}

