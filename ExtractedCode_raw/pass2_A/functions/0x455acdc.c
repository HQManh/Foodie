// rea decompile_all
// name: DG.Tweening.DOTweenModuleUtils.Physics$$SetOrientationOnPath
// address: 0x455acdc
// body: available
// range: 0x455acdc-0x455addb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455ad64 to 0x866cdcc UnityEngine.Transform$$set_rotation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455add0 to 0x8714d98 UnityEngine.Rigidbody$$set_rotation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455add4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455add8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenModuleUtils_Physics__SetOrientationOnPath
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,long param_7)

{
  long *plVar1;
  
  if ((DAT_095187f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a2f0);
    DAT_095187f5 = 1;
  }
  if ((*(byte *)(param_5 + 0x50) & 1) == 0) {
    if (param_7 != 0) {
      UnityEngine_Transform__set_rotation(param_1,param_2,param_3,param_4,param_7,0);
      return;
    }
  }
  else if ((param_6 != 0) && (plVar1 = *(long **)(param_6 + 0x48), plVar1 != (long *)0x0)) {
    if ((*(byte *)(DAT_0918a2f0 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a2f0 + 0x130) * 8 + -8) ==
        DAT_0918a2f0)) {
      UnityEngine_Rigidbody__set_rotation(param_1,param_2,param_3,param_4,plVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

