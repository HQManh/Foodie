// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$ShiftPeekTo
// address: 0x420c9e8
// body: available
// range: 0x420c9e8-0x420cb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420cb10 to 0x420c7cc AnhPD.FoodOrder.CustomerLineView$$TweenPeekShift (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420cb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__ShiftPeekTo
               (float param_1,float param_2,float param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_5 & 1) != 0) {
    if (*(long *)(param_4 + 0x140) != 0) {
      uVar1 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_4 + 0x140),0);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = DG_Tweening_TweenExtensions__IsPlaying(*(undefined8 *)(param_4 + 0x140),0),
         (uVar1 & 1) != 0)) {
        fVar2 = (float)DG_Tweening_TweenExtensions__Duration(*(undefined8 *)(param_4 + 0x140),0,0);
        fVar3 = (float)DG_Tweening_TweenExtensions__Elapsed(*(undefined8 *)(param_4 + 0x140),0,0);
        fVar2 = fVar2 - fVar3;
        if (0.0 < fVar2) goto LAB_0420caf0;
      }
      if (*(long *)(param_4 + 0x140) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(long *)(param_4 + 0x140),0,0);
      }
    }
    *(undefined8 *)(param_4 + 0x140) = 0;
    thunk_FUN_03f5d7b8(param_4 + 0x140,0);
    if (*(long *)(param_4 + 0xa0) != 0) {
      UnityEngine_Transform__set_localPosition(param_1,param_2,param_3,*(long *)(param_4 + 0xa0),0);
      param_1 = param_1 - *(float *)(param_4 + 0x130);
      param_2 = param_2 - *(float *)(param_4 + 0x134);
      param_3 = param_3 - *(float *)(param_4 + 0x138);
      *(bool *)(param_4 + 0x13c) =
           9.9999994e-11 <= param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar2 = *(float *)(param_4 + 0x60);
LAB_0420caf0:
  AnhPD_FoodOrder_CustomerLineView__TweenPeekShift(param_1,param_2,param_3,fVar2,param_4,9);
  return;
}

