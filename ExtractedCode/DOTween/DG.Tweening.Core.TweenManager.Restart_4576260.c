// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$Restart
// address: 0x4576260
// body: available
// range: 0x4576260-0x4576327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4576324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 DG_Tweening_Core_TweenManager__Restart(float param_1,long param_2,uint param_3)

{
  char cVar1;
  
  if ((DAT_095188d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188d1 = 1;
  }
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + 0x110);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if ((0.0 <= param_1) && (*(int *)(param_2 + 0x10) == 0)) {
      *(float *)(param_2 + 0xac) = param_1;
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Rewind(param_2,param_3 & 1);
    *(undefined1 *)(param_2 + 0x110) = 1;
    if ((((cVar1 == '\0') && (*(char *)(param_2 + 0x102) != '\0')) &&
        (*(char *)(param_2 + 0x118) != '\0')) && (*(long *)(param_2 + 0x58) != 0)) {
      DG_Tweening_Tween__OnTweenCallback(*(long *)(param_2 + 0x58),param_2,0);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

