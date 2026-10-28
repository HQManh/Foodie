// rea decompile_all
// name: Utilities.UIFlyExplodeConfig$$Prepare
// address: 0x4528da4
// body: available
// range: 0x4528da4-0x4528e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4528e64 to 0x898b15c UnityEngine.CanvasGroup$$set_alpha (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4528e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIFlyExplodeConfig__Prepare(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
    fVar4 = *(float *)(lVar1 + 0x10);
    fVar3 = *(float *)(lVar1 + 0x14);
    fVar5 = *(float *)(lVar1 + 0xc);
    fVar2 = (float)UnityEngine_AnimationCurve__Evaluate(0,*(long *)(param_1 + 0x28),0);
    if (param_2 != 0) {
      UnityEngine_Transform__set_localScale(fVar5 * fVar2,fVar4 * fVar2,fVar3 * fVar2,param_2,0);
      lVar1 = Utilities_UIFlyExplodeConfig__GetAlphaGroup(param_2);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (UnityEngine_AnimationCurve__Evaluate(0,*(long *)(param_1 + 0x30),0), lVar1 != 0)) {
        UnityEngine_CanvasGroup__set_alpha(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

