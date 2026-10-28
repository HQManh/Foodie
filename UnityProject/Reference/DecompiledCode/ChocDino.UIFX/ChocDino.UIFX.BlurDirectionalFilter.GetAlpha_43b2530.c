// rea decompile_all
// name: ChocDino.UIFX.BlurDirectionalFilter$$GetAlpha
// address: 0x43b2530
// body: available
// range: 0x43b2530-0x43b257f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b256c to 0x85ec8fc UnityEngine.AnimationCurve$$Evaluate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b257c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] ChocDino_UIFX_BlurDirectionalFilter__GetAlpha(long param_1)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (((*(long *)(param_1 + 0x1e0) != 0) && (*(char *)(param_1 + 0x1dc) != '\0')) &&
     (iVar1 = UnityEngine_AnimationCurve__get_length(*(long *)(param_1 + 0x1e0),0), 0 < iVar1)) {
    if (*(long *)(param_1 + 0x1e0) != 0) {
      UnityEngine_AnimationCurve__Evaluate
                (*(undefined4 *)(param_1 + 0x20),*(long *)(param_1 + 0x1e0),0);
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return ZEXT816(0x3f800000);
}

