// rea decompile_all
// name: System.Collections.ListDictionaryInternal.NodeEnumerator$$MoveNext
// address: 0x75520e8
// body: available
// range: 0x75520e8-0x75521ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7552160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75521a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Collections_ListDictionaryInternal_NodeEnumerator__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_1 + 0x20) == *(int *)(lVar3 + 0x18)) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x18) = *(long *)(lVar3 + 0x20);
        thunk_FUN_03f5d7b8();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar3 + 0x10);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
    return *(long *)(param_1 + 0x18) != 0;
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar1 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_091feb80);
  System_InvalidOperationException___ctor(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091ecba0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

