// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.AutomataNode.<YieldChildren>d__14$$MoveNext
// address: 0x73b34a8
// body: available
// range: 0x73b34a8-0x73b3587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b356c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3580 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3584 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_AutomataDictionary_AutomataNode_<YieldChildren>d__14__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  if ((DAT_09520bee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f28b0);
    DAT_09520bee = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(param_1 + 0x30) == 0x7fffffff) {
      uVar1 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,DAT_091f28b0);
    }
    uVar3 = *(int *)(param_1 + 0x30) + 1;
    *(uint *)(param_1 + 0x30) = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = 0;
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x38) <= (int)uVar3) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

