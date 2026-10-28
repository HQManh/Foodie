// rea decompile_all
// name: Coffee.UIEffects.UIEffectBase$$get_canvas
// address: 0x43ee36c
// body: available
// range: 0x43ee36c-0x43ee443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ee440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Coffee_UIEffects_UIEffectBase__get_canvas(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((DAT_09517dcf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517dcf = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar1 = FUN_04a6a6d8(param_1,DAT_091c5630);
    plVar3 = (long *)(param_1 + 0x90);
    *plVar3 = lVar1;
    thunk_FUN_03f5d7b8(plVar3,lVar1);
    lVar1 = *plVar3;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(*plVar3,0);
      if ((uVar2 & 1) != 0) goto LAB_043ee430;
    }
    *plVar3 = 0;
    thunk_FUN_03f5d7b8(plVar3,0);
  }
LAB_043ee430:
  return *(undefined8 *)(param_1 + 0x90);
}

